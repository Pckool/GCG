import sys
import os
import webbrowser
import tweepy


def oauth_req( consumer_api, consumer_secret, http_method="GET"):
    # 1
    print('1: Connecting to Consumer')
    auth = tweepy.OAuthHandler(consumer_api, consumer_secret)

    print('\tAbout to pull data.')
    try:
        redirect_url = auth.get_authorization_url()
        print('\tpulled url.')
    except tweepy.TweepError:
        print('Error! Failed to oauth.')
    # 2
    print('2 Retrieving Client Info')
    webbrowser.open(redirect_url, new=2)

    verifier = input('What is the oauth verification code?')

    # 3
    print('3: Connecting to client\'s account')
    if len(verifier) == 7:
        auth.get_access_token(verifier)
        try:
            api = tweepy.API(auth)
        except tweepy.TweepError:
            print('Error! Failed to get access token.')
    else:
        print('Twitter connection failed.')
    for follower in tweepy.Cursor(api.followers).items():
        print(follower)

def main():
    consumer_api = input('Consumer API key please: ')
    consumer_secret = input('Consumer Secret please: ')
    oauth_req(consumer_api, consumer_secret)


if __name__ == "__main__":
    main()