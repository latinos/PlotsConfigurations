#
# Code to remove one sample from the datacard
#

import re
from sys import argv
import os.path
from optparse import OptionParser
from math import sqrt,fabs

parser = OptionParser()
parser.add_option("-i", "--input",  dest="nameFileChange", help="file with samples to remove (e.g. ttH)", default='blabla.py')
parser.add_option("-o", "--output", dest="nameOutFileDC",  help="file where to dump the new DC", default='test.txt')
parser.add_option("-k", "--keep",   dest="SignalToKeep",   help="Signal sample in inputFile you want to keep", default='monoH_600_300')
parser.add_option("-t", "--threshold",   dest="threshold",   help="Remove samples if expected yield < threshold", default='9999999999.')

(options, args) = parser.parse_args()
options.bin = True # fake that is a binary output, so that we parse shape lines
options.noJMax = False
options.nuisancesToExclude = ''
options.stat = False
threshold = float(options.threshold)

nameFactor = {}
if os.path.exists(options.nameFileChange):
    handle = open(options.nameFileChange,'r')
    exec(handle)
    handle.close()
print "nameFactor = ", nameFactor

#import sys
#sys.path.append(os.path.dirname(os.path.realpath(__file__))+'/tools')
#from DatacardParser import *
from HiggsAnalysis.CombinedLimit.DatacardParser import *

DC = parseCard(file(args[0]), options)
nuisToConsider = [ y for y in DC.systs ]

#print " DC.systs = ", DC.systs
#print " DC.rateParamsOrder = ", DC.rateParamsOrder
#print " DC.rateParams      = ", DC.rateParams


# copy header
# everything up to "observation", included

lines = open (args[0], 'r').read().split ('\n')

header = []

foundSecondTimeBin = 0
for line in lines:
  tempLine = line.split (' ')
  tempLine = filter(lambda a: a != '', tempLine)
  if len(tempLine)>0  and   tempLine[0] == 'bin' :    # the second time "bin" is the big list --> not in the header!
      foundSecondTimeBin = foundSecondTimeBin+1      
  if (foundSecondTimeBin <= 1) : header.append (line)


print header

print "#####################################"
#print DC.list_of_bins
listOfBins = DC.list_of_bins()
for binIterator in listOfBins:
    print binIterator
print "#####################################"


# write new datacard
filename = options.nameOutFileDC
signalName = options.SignalToKeep 
f = open(filename, 'w')

# header
for line in header: f.write (line + '\n')
f.write ("---------------------------------------------------------------------------------------------------- \n")

f.write ("bin                                 ")
for channel, samples  in DC.exp.items():
    for process,rate in samples.items():
        if ( ((process not in nameFactor.keys()) or (process in nameFactor.keys() and process == signalName) or (process in nameFactor.keys() and (nameFactor[ process ] != "" and nameFactor[ process ] != channel))) and ( not ('ALL' in nameFactor.keys())) ) :
                print "Keep", channel,"/",process, "(yield =", rate,")"
                f.write ("%13s " % channel)
        elif rate >= threshold:
                print "Keep", channel,"/",process, "(yield =", rate,")"
                f.write ("%13s " % channel)
        else:
                print "Remove", channel,"/",process, "(yield =", rate,") --> Below threshold (",threshold,")"
f.write("\n")

# process names (a.k.a. process)
f.write ("process                            ")
for channel, samples  in DC.exp.items():
    #print samples
    for process,rate in samples.items():
    #for process in DC.exp[channel]:
        if ((process not in nameFactor.keys()) or (process in nameFactor.keys() and process == signalName) or (process in nameFactor.keys() and (nameFactor[ process ] != "" and nameFactor[ process ] != channel))) and ( not ('ALL' in nameFactor.keys())) :
            f.write ("%13s " % process)
        elif rate >= threshold:                f.write ("%13s " % process)

f.write("\n")

# indices numbers: -1  0  1  2  3 ...
f.write ("process                            ")
for channel, samples  in DC.exp.items():
    numSig = 0
    numBkg = 1
    for process,rate in samples.items():
        if ( ((process not in nameFactor.keys()) or (process in nameFactor.keys() and process == signalName) or (process in nameFactor.keys() and (nameFactor[ process ] != "" and nameFactor[ process ] != channel))) and ( not ('ALL' in nameFactor.keys())) ) :
            if DC.isSignal[process] :
                f.write ("%13d " % numSig)
                numSig = numSig - 1
            else :
                f.write ("%13d " % numBkg)
                numBkg = numBkg + 1
        elif rate >= threshold:
            if DC.isSignal[process] :
                f.write ("%13d " % numSig)
                numSig = numSig - 1
            else :
                f.write ("%13d " % numBkg)
                numBkg = numBkg + 1

f.write("\n")

# rate
f.write ("rate ")
for channel, samples  in DC.exp.items():
    for process,rate in samples.items():
        if ( ((process not in nameFactor.keys()) or (process in nameFactor.keys() and process == signalName) or (process in nameFactor.keys() and (nameFactor[ process ] != "" and nameFactor[ process ] != channel))) and ( not ('ALL' in nameFactor.keys())) ) :
            f.write ("%9.4f " % DC.exp[channel][process] )
        elif rate >= threshold:
            f.write ("%9.4f " % DC.exp[channel][process] )

f.write("\n")

f.write ("---------------------------------------------------------------------------------------------------- \n")

# systematics
## list of [(name of uncert, boolean to indicate whether to float this nuisance or not, type, list of what additional arguments (e.g. for gmN), keyline element)]
for nuis in nuisToConsider:
    f.write ("%25s" % nuis[0]) # name
    #print " >>>>>>> nuis ", nuis
    if nuis[2] == 'rateParam'  : 
        # never happening, since this is saved in "DC.rateParams"
        #print " >> nuis =  ", nuis
        f.write ("%s" % nuis) # rateParam
    else:
      if nuis[2] != 'gmN' : 
        f.write ("%10s" % nuis[2]) #lnN
      else:     
        f.write ("%5s" % nuis[2]) # gmN
        f.write ("%5s" % nuis[3][0]) # Ncontrol
      
      f.write (" ")
      
      for channel, samples  in DC.exp.items():
          for process,rate in samples.items(): 
              if ( ((process not in nameFactor.keys()) or (process in nameFactor.keys() and process == signalName) or (process in nameFactor.keys() and (nameFactor[ process ] != "" and nameFactor[ process ] != channel))) and ( not ('ALL' in nameFactor.keys())) ) :
                  if channel in nuis[4]:
                      if process in nuis[4][channel] :
                          if not isinstance ( nuis[4][channel][process], float ) :
                          # [0.95, 1.23]  ---> from 0.95/1.23
                              f.write ("   {0:4.3f}/{1:4.3f}".format(nuis[4][channel][process][0], nuis[4][channel][process][1]))
                          else :
                              if (nuis[4][channel][process] != 0) :
                                  f.write ("%9.4f" % nuis[4][channel][process])
                              else :
                                  f.write ("%13s" % "-")
                      else :
                          f.write ("%13s" % "-")
                  else :
                      f.write ("%13s" % "-")
              elif rate >= threshold :
                  if channel in nuis[4]:
                      if process in nuis[4][channel] :
                          if not isinstance ( nuis[4][channel][process], float ) :
                          # [0.95, 1.23]  ---> from 0.95/1.23
                              f.write ("   {0:4.3f}/{1:4.3f}".format(nuis[4][channel][process][0], nuis[4][channel][process][1]))
                          else :
                              if (nuis[4][channel][process] != 0) :
                                  f.write ("%9.4f" % nuis[4][channel][process])
                              else :
                                  f.write ("%13s" % "-")
                      else :
                          f.write ("%13s" % "-")
                  else :
                      f.write ("%13s" % "-")

    f.write("\n")

#
# DC.rateParamsOrder =  set(['ICHEP_WWnorm2jvbf', 'DYttnorm2jvbf', 'Topnorm2jvbf'])   
# DC.rateParams      =  {'hww2l2v_13TeV_top_of2j_vbfANDWW': [[['ICHEP_WWnorm2jvbf', '1.0000', 0], '']], 'hww2l2v_13TeV_top_of2j_vbfANDDY': [[['DYttnorm2jvbf', '1.0000', 0], '']], 'hww2l2v_13TeV_top_of2j_vbfANDtop': [[['Topnorm2jvbf', '1.0000', 0], '']]}
# and I want it written like:
#       Topnorm2jvbf                                                rateParam           hww2l2v_13TeV_top_of2j_vbf     top                 1.0000                         
#

for rateParNameCutAndSample in DC.rateParams:
   #print "  ---- "
   #print " rateParNameCutAndSample = ", rateParNameCutAndSample
   list_rateParNameCutAndSample = rateParNameCutAndSample.split("AND")
   #print " list_rateParNameCutAndSample = ", list_rateParNameCutAndSample
   rateParNameCut  = list_rateParNameCutAndSample[0]
   sampleRateParam = list_rateParNameCutAndSample[1]
   
   #print " rateParNameCut  = ", rateParNameCut
   #print " sampleRateParam = ", sampleRateParam
   
   f.write ("%s   " % DC.rateParams[rateParNameCutAndSample][0][0][0])
   f.write ("   rateParam   " )
   f.write ("  %s   " % rateParNameCut)
   f.write ("  %s   " % sampleRateParam)
   f.write ("%s   " % DC.rateParams[rateParNameCutAndSample][0][0][1])
   f.write("\n")



#DC.rateParamsOrder
    
# map of which bins should have automated Barlow-Beeston parameters
#
#     statFlags = (statThreshold, statIncludeSig, statHistMode)
#
# * autoMCStats ' + nuisance ['maxPoiss'] + '  ' + nuisance ['includeSignal']
#
#

#
# looping ove rthe bins, but actually we just use "*" 
# to apply this to all channels
#  --> repetitat iuvant
for autoMCbins in DC.binParFlags:

  print " autoMCbins = ", autoMCbins

  f.write ("*   ")
  f.write ("   autoMCStats   " )
  f.write ("  %s   " % DC.binParFlags[autoMCbins][0])
  f.write ("  %s   " % int(DC.binParFlags[autoMCbins][1]))
  f.write("\n")


    
    
    
f.close ()





