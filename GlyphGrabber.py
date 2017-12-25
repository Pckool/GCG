from sys import argv, exit
from os import getenv, path
import pyperclip
import pickle


class GlyphGrabber:
    # This class is used to grab one or more line of data from from a txt or csv file.

    def __init__(self, path=None, label=None):
        if path is not None:
            self.filePath = path
        else:
            self.filePath = ""
        if label is not None:
            self.label = label
        else:
            self.label = ""

    def cut_code_single(self):
        try:
            with open(self.filePath, "r") as myCodes:
                data = myCodes.readlines()
                with open("Most Recent Code.txt", "w") as discardCode:
                    code = data[0].rstrip()
                    discardCode.write(data[0].rstrip())
                with open(self.filePath, "w") as theCodes:
                    theCodes.writelines(data[1:])
            print("Code Grabbed")
            self.label = code
            return code
        except FileNotFoundError:
            print('File not Found!')
        except IndexError:
            print('No more Codes!')

    def cut_code_multi(self, amount):
        codes = {}
        try:
            with open(self.filePath, "r") as myCodes:
                data = myCodes.readlines()
                with open("Most Recent Code.txt", "w") as discardCode:
                    for x in range(amount):
                        codes[x] = data[x].rstrip()
                        discardCode.write(data[x].rstrip() + "\n")
                with open(self.filePath, "w") as theCodes:
                    theCodes.writelines(data[amount:])
            print("Codes Grabbed")
            return codes
        except FileNotFoundError:
            print('File not Found!')
        except IndexError:
            print('No more Codes!')

    def copy_to_clipboard(self, copy):
        if copy is not None and len(copy) > 1:
            pyperclip.copy(copy)
            print("code in clipboard")
            if self.label != "":
                self.label = copy
        else:
            if self.label != "":
                self.label.setText('I don\'t think you gave me a file...')

    def get_codes(self, amount=None):
        if amount is 1:
            code = self.cut_code_single()
            if code is not None:
                self.copy_to_clipboard(code)
        else:
            codes = self.cut_code_multi(amount)
            if codes is not None:
                codes_str = ''
                for x in range(amount):
                    codes_str = codes_str + codes[x]
                print('code: ', codes_str)
                # Tries to directly place ^^^ to the copy_to_clipboard fn
                try:
                    self.copy_to_clipboard(codes_str)
                except TypeError:
                    print('Something went wrong.')

    def get_codes2(self, amount=None):
        if amount is 1:
            code = self.cut_code_single()
            # got the code
            if code is not None:
                return code
        elif amount > 1:
            codes = self.cut_code_multi(amount)
            # got the codes
            if codes is not None:
                codes_str = ''
                for x in range(amount):
                    codes_str = codes_str + codes[x]
                    # converted to string
                print(codes_str)
                return codes_str

'''
# CURRENT ISSUES:
'''
