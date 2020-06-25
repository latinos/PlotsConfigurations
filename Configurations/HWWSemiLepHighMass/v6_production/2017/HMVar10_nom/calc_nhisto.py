#cuts.py
#variables.py
class dummy:
    def __init__(self):
        self.cutsFile=''



opt=dummy()

cuts={}
variables={}

import os

os.system('cp cuts.py _cuts_temp.py')
os.system('cp variables.py _variables_temp.py')

#from _cuts_temp import *
#from _variables_temp import *
execfile('_cuts_temp.py')
execfile('_variables_temp.py')


N=len(cuts)*len(variables)

print N


os.system('rm _cuts_temp.py')
os.system('rm _variables_temp.py')


import sys

haddlog=sys.argv[1]

f=open(haddlog)
lines=f.readlines()
#hadd Target path
nfinish=0
for line in lines:
    if 'hadd Target path' in line: nfinish+=1

nfinish=nfinish-len(cuts)-1

print nfinish,'/',N
