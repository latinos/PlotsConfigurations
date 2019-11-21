#
# Create a lot of tables
#
import os
import sys
import shlex
import subprocess

pathToDatacards = 'datacards/'

#FIXME Change the string below with the path where you download https://github.com/latinos/PlayWithDatacards
pathToPlayWithDatacards = 'PlayWithDatacards/'

output = 'tables/'

if not os.path.exists(output) :
  os.mkdir(output)

list_datacards = {}

#                 name                               datacard                           blind
list_datacards [ 'mll_2016' ] = [ pathToDatacards + '2016/VH_2j_emu/mll/datacard.txt', 'True' ]  
list_datacards [ 'mll_2017' ] = [ pathToDatacards + '2017/VH_2j_emu/mll/datacard.txt', 'True' ]
list_datacards [ 'mll_2018' ] = [ pathToDatacards + '2018/VH_2j_emu/mll/datacard.txt', 'True' ]

for datacardName, datacard in list_datacards.iteritems() :
  print ""
  print " datacardName =", datacardName
  print "     datacard =" , datacard[0]
  print ""

  datacardName = datacardName.replace(' ', '')
  
  if datacard[1] == "False" :
    command = 'python ' + pathToPlayWithDatacards + 'systematicsAnalyzer.py ' + datacard[0] + ' --all --legend ' + datacardName + ' -m 125 -f tex -o ' + output + 'miniTable_' + datacardName + '.tex > ' + output + datacardName + '.tex'
    print command
    args = shlex.split(command)
    subprocess.Popen(args)
  else :
    command = 'python ' + pathToPlayWithDatacards + 'systematicsAnalyzer.py ' + datacard[0] + ' --blind --all --legend ' + datacardName + ' -m 125 -f tex -o ' + output + 'miniTable_' + datacardName + '.tex > ' + output + datacardName + '.tex'
    print command
    args = shlex.split(command)
    subprocess.Popen(args)
