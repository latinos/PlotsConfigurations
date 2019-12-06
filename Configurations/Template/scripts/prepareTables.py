#
# Create a lot of tables
#
import os
import sys
import shlex
import subprocess

pathToDatacards='PATH_TO_DATACARDS'

#FIXME change the string below with the path where you download https://github.com/latinos/PlayWithDatacards
pathToPlayWithDatacards='PATH_TO_PLAYWITHDATACARDS'

output = pathToDatacards+'tables/'

if not os.path.exists(output):
  os.mkdir(output)

list_datacards = {}

#                 name                    datacard                           blind=True/False
list_datacards [ 'XXX'  ]  =       [    pathToDatacards+'DATACARD_XXX'                  ,    'False'    ]  
list_datacards [ 'YYY'  ]  =       [    pathToDatacards+'DATACARD_YYY'                  ,    'False'    ]

for datacardName, datacard in list_datacards.iteritems():
  #print " datacardName = " , datacardName,
  #print " --> datacard = " , datacard[0]
  
  datacardName = datacardName.replace(' ', '')
  
  if datacard[1] == "False" :
    command = 'python      '+pathToPlayWithDatacards+'systematicsAnalyzer.py ' + pathToDatacards + '/' + datacard[0]                  + ' --all  --legend  ' + datacardName + '   -m      125     -f    tex    -o '+output+'miniTable_' +  datacardName +  '.tex     >    ' + output  +   datacardName +  '.tex'
    print command
    args = shlex.split(command)
    subprocess.Popen(args)
  else :
    command = ' python      '+pathToPlayWithDatacards+'systematicsAnalyzer.py ' + pathToDatacards + '/' + datacard[0] +  '   --blind ' + ' --all  --legend  ' + datacardName + '   -m      125     -f    tex    -o '+output+'miniTable_' +  datacardName +  '.tex     >    ' + output +   datacardName +  '.tex'
    print command
    args = shlex.split(command)
    subprocess.Popen(args)
