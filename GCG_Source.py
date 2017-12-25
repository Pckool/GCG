#!python3.5
import sys
from os import getenv, path
from PyQt5 import QtWidgets, QtGui
import webbrowser
import urllib.parse as parseurl
import six.moves
# import httplib2
# import urllib3
import pyperclip
import pickle
#import oauth2
import tweepy
#import twitter

# Custom Packages
import GlyphGrabber

# UI Import
from design import Ui_MainWindow
from dialog import Ui_Dialog
from confirm import Ui_Dialog as Ui_Dialog2

sys.path.insert(0, 'pkgs')


# SCRIPTS
class Window(Ui_MainWindow):
    def __init__(self, dialog):
        Ui_MainWindow.__init__(self)
        self.setupUi(dialog)
        scriptDir = path.dirname(path.realpath('__file__'))
        dialog.setWindowIcon(QtGui.QIcon(scriptDir + path.sep + 'images/gcg.png'))

        self.status.setText('Welcome to your all in one Glyph Manager!')

        self.init_dict = {0: '', 1: '', 2: '', 'oauth_token': '', 'oauth_token_secret': ''}
        # NORMAL FUNCTIONS

        # Twitter blanks
        self.access_token = {'oauth_token': '', 'oauth_token_secret': ''}
        self.twee = tweepy.API()
        self.api = tweepy.api

        try:
            with open('bin/config.init', 'rb') as inConfig:
                self.init_dict = pickle.load(inConfig)
            if self.init_dict is not None:
                try:
                    self.pcPath = self.init_dict[0]
                    self.psPath = self.init_dict[1]
                    self.xbPath = self.init_dict[2]
                    self.access_token['oauth_token'] = self.access_token['oauth_token']
                    self.access_token['oauth_token_secret'] = self.access_token['oauth_token_secret']
                except IndexError:
                    print('A line was not found')
        except FileNotFoundError:
            print('No Config File! Creating one now...')
            self.config()

        self.ggpc = GlyphGrabber.GlyphGrabber(self.pcPath)
        self.ggps4 = GlyphGrabber.GlyphGrabber(self.psPath)
        self.ggxb1 = GlyphGrabber.GlyphGrabber(self.xbPath)

        self.read_config_data()
        # FOR TWITTER
        if self.init_dict['oauth_token'] is '':
            self.actionTwitter.setEnabled(True)
            self.twitter_post.setEnabled(False)
        else:
            self.twitter_connect()

        self.init_ui()

    def init_ui(self):
        self.inputPC.setText(self.pcPath)
        self.inputPS4.setText(self.psPath)
        self.inputXB1.setText(self.xbPath)

        #       Widget Function Linking
        self.buttonPC.clicked.connect(self.pc_bbutton)
        self.buttonPS4.clicked.connect(self.ps4_bbutton)
        self.buttonXB1.clicked.connect(self.xb1_bbutton)

        self.button1.clicked.connect(self.pc_gbutton)
        self.button2.clicked.connect(self.ps4_gbutton)
        self.button3.clicked.connect(self.xb1_gbutton)

        # Other Things
        self.num_codes.valueChanged.connect(self.slider_change)

        # Menu Actions
        self.actionDocumentation.triggered.connect(self.documentation)
        self.actionTwitter.triggered.connect(self.twitter_connect)
        self.actionReset.triggered.connect(self.reconfig)

        # Twitter portion
        self.twitter_post.clicked.connect(self.twitter_giveaway)

    def twitter_giveaway(self):
        tweet = ""
        confirm = self.confirm_send()
        code_length = 19
        num_codes = 0
        labels = 0
        if self.post_pc.isChecked():
            num_codes = num_codes+1
            labels = labels+3
        if self.post_ps4.isChecked():
            num_codes = num_codes + 1
            labels = labels + 4
        if self.post_xb1.isChecked():
            num_codes = num_codes + 1
            labels = labels + 4
        can_you_post = labels + num_codes*(code_length*self.num_codes.value())

        if can_you_post < 280:
            if confirm is True:
                try:
                    if self.post_pc.isChecked():
                        tweet = tweet + '\nPC:' + self.ggpc.get_codes2(self.num_codes.value())
                    if self.post_ps4.isChecked():
                        tweet = tweet + '\nPS4:' + self.ggpc.get_codes2(self.num_codes.value())
                    if self.post_xb1.isChecked():
                        tweet = tweet + '\nXB1:' + self.ggpc.get_codes2(self.num_codes.value())

                    if len(tweet) <= 280:
                        print(tweet)
                        self.api.update_status(status=tweet)
                        self.status.setText('Posted to Twitter!')
                    else:
                        print('Your pending tweet is over 280 characters')
                except tweepy.TweepError:
                    print('You aren\'t posting anything...')
                except TypeError:
                    print('Bad format. Please make sure you have one glyph code per line!')
        else:
            print('Your pending tweet is over 280 characters')

    def twitter_connect(self):
        consumer_api = "0IxvGU3ZW5ui4WOOSns1aBCYf"
        consumer_secret = "T2YUYViTBCUPWkmtVBLSvm15BTF6H4Pd9gvvr4PihSuJKV88Ub"
        if self.init_dict['oauth_token'] is '':
            self.oauth_req(consumer_api, consumer_secret)
        try:
            auth = tweepy.OAuthHandler(consumer_api, consumer_secret)
            auth.set_access_token(self.access_token['oauth_token'],self.access_token['oauth_token_secret'])
            self.api = tweepy.API(auth)
            if self.init_dict['oauth_token'] is not '':
                client_token = self.access_token['oauth_token']
                client_secret = self.access_token['oauth_token_secret']

                auth = tweepy.OAuthHandler(consumer_api, consumer_secret)
                auth.set_access_token(client_token, client_secret)
                self.twee = tweepy.API(auth)
                # Connected to users twitter
                self.init_dict['oauth_token'] = client_token
                self.init_dict['oauth_token_secret'] = client_secret
                self.config()
                print('Connected to ' + self.api.me().name + '\'s Twitter account!')
                self.actionTwitter.setEnabled(False)
                self.twitter_post.setEnabled(True)

            else:
                print('issue retrieving OAuth')
        except (KeyError, tweepy.TweepError):
            print('Twitter Connection Failed.')

    def oauth_req(self, consumer_api, consumer_secret, http_method="GET"):
        # 1
        print('1: Connecting to Consumer')
        auth = tweepy.OAuthHandler(consumer_api, consumer_secret)

        print('\tAbout to pull data.')
        try:
            redirect_url = auth.get_authorization_url()  # ################# ISSUE HERE
            print('\tpulled url.')
        except tweepy.TweepError:
            print('Error! Failed to oauth.')
        # 2
        print('2 Retrieving Client Info')
        webbrowser.open(redirect_url, new=2)  # ################# ISSUE HERE

        verifier = self.doit()

        # 3
        print('3: Connecting to client\'s account')
        if len(verifier) == 7:
            try:
                auth.get_access_token(verifier)
                self.access_token['oauth_token'] = auth.access_token
                self.access_token['oauth_token_secret'] = auth.access_token_secret
                self.init_dict['oauth_token'] = auth.access_token
                self.init_dict['oauth_token_secret'] = auth.access_token_secret
                self.config()
            except tweepy.TweepError:
                print('Error! Failed to get access token.')
        else:
            print('Twitter connection failed.')

    def doit(self):
        print("Opening a new popup window...")
        dialog = QtWidgets.QDialog()
        self.pop = PopUpMessage(dialog, "What is the Confirmation code?")
        self.pop.pushButton.clicked.connect(lambda: self.length_check_7(dialog))

        dialog.exec_()
        dialog.show()
        dialog.close()
        return self.pop.lineEdit.text()

    def confirm_send(self):
        print("Opening a new popup window...")
        dialog = QtWidgets.QDialog()
        self.pop = ConfirmMessage(dialog, "Are you sure you want to give away codes on Twitter?!?")

        yes_button = QtWidgets.QDialogButtonBox.Yes
        cancel_button = QtWidgets.QDialogButtonBox.Cancel
        self.pop.buttonBox.button(yes_button).clicked.connect(lambda: self.conf(True, dialog, self.pop))
        self.pop.buttonBox.button(cancel_button).clicked.connect(lambda: self.conf(False, dialog, self.pop))

        dialog.exec_()
        dialog.show()
        dialog.close()
        print(self.pop.getVALUE())
        return self.pop.getVALUE()

    def length_check_7(self, dialog):
        if len(self.pop.lineEdit.text()) == 7:
            dialog.accept()
            dialog.close()
        else:
            print('Your code was not correct')

    def conf(self, val, dialog, pop):
        if val is True:
            pop.setVALUE(True)
            dialog.accept()
            dialog.close()
        elif val is False:
            pop.setVALUE(False)
            dialog.reject()
            dialog.close()

    def documentation(self):
        webbrowser.open('https://tdefton.stream/gcg/documentation/', new=2)

    def slider_change(self):
        self.num_of_codes.setText(str(self.num_codes.value()))

    def pc_gbutton(self):
        self.ggpc.get_codes(self.num_codes.value())
        self.code.setText(self.ggpc.label)
        self.status.setText('PC code(s) copied to your clipboard.')

    def ps4_gbutton(self):
        self.ggps4.get_codes(self.num_codes.value())
        self.code.setText(self.ggpc.label)
        self.status.setText('PS4 code(s) copied to your clipboard.')

    def xb1_gbutton(self):
        self.ggxb1.get_codes(self.num_codes.value())
        self.code.setText(self.ggpc.label)
        self.status.setText('XB1 code(s) copied to your clipboard.')

    def pc_bbutton(self):
        pathpc = self.browse('PC Codes File...')
        self.inputPC.setText(pathpc)
        self.ggpc.filePath = pathpc
        self.init_dict[0] = pathpc
        self.config()
        self.status.setText('PC code file path added!')

    def ps4_bbutton(self):
        pathps4 = self.browse('PS4 Codes File...')
        self.inputPS4.setText(pathps4)
        self.ggps4.filePath = pathps4
        self.init_dict[1] = pathps4
        self.config()
        self.status.setText('PS4 code file path added!')

    def xb1_bbutton(self):
        pathxb1 = self.browse('XB1 Codes File...')
        self.inputXB1.setText(pathxb1)
        self.ggxb1.filePath = pathxb1
        self.init_dict[2] = pathxb1
        self.config()
        self.status.setText('XB1 code file path added!')

    # LOGIC
    @staticmethod
    def browse(searchFor):
        filepath = QtWidgets.QFileDialog.getOpenFileName(None, searchFor, getenv('HOME'), '*.txt *.csv')
        print(filepath[0])
        return filepath[0]

    def config(self):
        # Init for the Config File
        with open('bin/config.init', 'wb') as outConfig:
            pickle.dump(self.init_dict, outConfig)
        print('Config file updated.')

    def read_config_data(self):
        # Reads the data from the config file and sets it up accordingly
        try:
            self.ggpc.filePath = self.init_dict[0]
            self.ggps4.filePath = self.init_dict[1]
            self.ggxb1.filePath = self.init_dict[2]
            self.access_token['oauth_token'] = self.init_dict['oauth_token']
            self.access_token['oauth_token_secret'] = self.init_dict['oauth_token_secret']
            print('Config data loaded.')
        except KeyError:
            self.config()

    def reconfig(self):
        self.actionTwitter.setEnabled(True)
        self.twitter_post.setEnabled(False)
        self.num_codes.setValue(1)
        self.post_pc.setChecked(False)
        self.post_ps4.setChecked(False)
        self.post_xb1.setChecked(False)
        self.code.setText('-')
        self.init_dict = {0: '', 1: '', 2: '', 'oauth_token': '', 'oauth_token_secret': ''}
        self.ggpc.filePath = ' '
        self.ggps4.filePath = ' '
        self.ggxb1.filePath = ' '

        self.config()

        self.status.setText('GCG wiped clean!')


class PopUpMessage(Ui_Dialog):
    text = "-"

    def __init__(self, dialog, text=None):
        Ui_MainWindow.__init__(self)
        self.setupUi(dialog)
        self.text = text
        self.init_ui()
        dialog.setWindowTitle("GCG")
        scriptDir = path.dirname(path.realpath('__file__'))
        dialog.setWindowIcon(QtGui.QIcon(scriptDir + path.sep + 'images/gcg.png'))

    def init_ui(self):
        if self.text is not None:
            self.label.setText(self.text)


class ConfirmMessage(Ui_Dialog2):
    text = "-"
    __val = None

    def __init__(self, dialog, text=None):
        Ui_MainWindow.__init__(self)
        self.setupUi(dialog)
        self.text = text
        self.init_ui()
        dialog.setWindowTitle("GCG")
        scriptDir = path.dirname(path.realpath('__file__'))
        dialog.setWindowIcon(QtGui.QIcon(scriptDir + path.sep + 'images/gcg.png'))

    def init_ui(self):
        if self.text is not None:
            self.label.setText(self.text)

    def getVALUE(self):
        return self.__val

    def setVALUE(self, value):
        if value is True or value is False:
            self.__val = value


def main():
    app = QtWidgets.QApplication(sys.argv)
    dialog = QtWidgets.QMainWindow()

    prog = Window(dialog)

    dialog.show()
    sys.exit(app.exec_())


__version__ = 1.2


if __name__ == '__main__':
    main()

