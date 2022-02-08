#!/usr/bin/env python

import sys

Year = str(sys.argv[1])
print 'Samples v7 config for year :', Year

#################################################

## production mechanisms

Prod = [ "VBF", "WH", "ZH", "GGH", "GGHjj"  ]

##################################################

## HVV AC MC samples  

HVV_Org  = [ "H0PM", "H0M", "H0Mf05", "H0PH", "H0PHf05", "H0L1", "H0L1f05" ] 

## Reweight all 7 original samples to these hypotheses (ME) 
## GGH : 1 decay vertex - 3 hypotheses
## VBF, WH, and ZH HVV : 2 vertices - 5 hypotheses
## VBF and ZH have HZg production vertex 

HVV_GGH_RW = [("H0PM"),
          ("H0M"),("H0Mf05"),
          ("H0PH"),("H0PHf05"),
          ("H0L1"),("H0L1f05"),
          ("EFTH0M"),("EFTH0Mf05"),
          ("EFTH0PH"),("EFTH0PHf05"),
          ("EFTH0L1"),("EFTH0L1f05")
        ]

HVV_WH_RW = [("H0PM"),
          ("H0M_M0"), ("H0M_M1"), ("H0M_M2"), ("H0M_M3"),
          ("H0PH_M0"),("H0PH_M1"),("H0PH_M2"),("H0PH_M3"),
          ("H0L1_M0"),("H0L1_M1"),("H0L1_M2"),("H0L1_M3"),
          ("EFTH0M_M0"), ("EFTH0M_M1"), ("EFTH0M_M2"), ("EFTH0M_M3"),
          ("EFTH0PH_M0"),("EFTH0PH_M1"),("EFTH0PH_M2"),("EFTH0PH_M3"),
          ("EFTH0L1_M0"),("EFTH0L1_M1"),("EFTH0L1_M2"),("EFTH0L1_M3")
            ]

HVV_XH_RW = [("H0PM"),
          ("H0M_M0"), ("H0M_M1"), ("H0M_M2"), ("H0M_M3"),
          ("H0PH_M0"),("H0PH_M1"),("H0PH_M2"),("H0PH_M3"),
          ("H0L1_M0"),("H0L1_M1"),("H0L1_M2"),("H0L1_M3"),
          ("H0LZg_M0"),("H0LZg_M1"),("H0LZg_M2"),("H0LZg_M3"), 
          ("EFTH0M_M0"), ("EFTH0M_M1"), ("EFTH0M_M2"), ("EFTH0M_M3"),
          ("EFTH0PH_M0"),("EFTH0PH_M1"),("EFTH0PH_M2"),("EFTH0PH_M3"),
          ("EFTH0L1_M0"),("EFTH0L1_M1"),("EFTH0L1_M2"),("EFTH0L1_M3")
            ]

##################################################

## HGG AC MC samples  

HGG_Org  = [ "H0PM", "H0M", "H0Mf05" ] 

## Reweight all 3 original samples to these hypotheses (ME) for GGHjj (1 vertex - 3 hypotheses)

HGG_RW = [("H0PM"),
          ("H0M"), ("H0Mf05"),
         ]

##################### make config ##########################

config = ""
basefile = "/afs/cern.ch/work/d/dmoran/private/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/EFT/VBF/Tools/configs/samples_bkg_"+Year+"v7.py"
with open(basefile) as fp:
 lines = fp.read().splitlines()
with open(basefile) as fp:
 for line in lines:
  config += line+"\n"

config += "#### AC/EFT Signals \n"
config += " \n"
config += "signals_rw = [] \n"
config += " \n"

for pr in Prod :

 config += "# "+pr+" MC samples \n"
 config += " \n"

 p = ""+pr+"_"
 SigOrg = HVV_Org
 SigRW  = HVV_XH_RW
 
 if pr == "GGH" : 
  p = ""
  SigRW  = HVV_GGH_RW
 elif pr == "WH" : 
  SigRW  = HVV_WH_RW
 elif pr == "GGHjj" : 
  SigOrg = HGG_Org
  SigRW  = HGG_RW

 # First add original samples, no reweighting!
 config += "# Original "+pr+" samples \n"
 config += " \n"

 for so in SigOrg : 

  config += "samples['"+p+so+"'] = { \n"
  config += "   'name':   "   
  config += "nanoGetSampleFiles(mcDirectory, '"+p+so+"_ToWWTo2L2Nu'), \n"
  config += "   'weight': mcCommonWeight+ '*"+p+so+"_W',"
  config += "   'FilesPerJob': 4, "
  config += "} \n"
  config += " \n"

 # Now add reweighted samples 
 config += "# Reweighted "+pr+" samples \n"
 config += " \n"

 for so in SigOrg : 
  for srw in SigRW :

     if so is not srw :
      config += "samples['"+p+so+"_"+srw+"'] = { \n"
      config += "   'name':   "   
      config += "nanoGetSampleFiles(mcDirectory, '"+p+so+"_ToWWTo2L2Nu'), \n"
      config += "   'weight': mcCommonWeight+ '*"+p+so+"_W*(ME_"+srw+"/ME_"+so+")',"
      config += "   'FilesPerJob': 4, "
      config += "} \n"
      config += "signals_rw.append('"+p+so+"_"+srw+"')  \n"
      config += " \n"

#fout = open ("/afs/cern.ch/work/d/dmoran/private/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/EFT/VBF/Tools/configs/samples.py", "w")
fout = open ("/afs/cern.ch/work/l/lurda/CMS/ACHWW/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/EFT/VBF/Tools/configs/samples.py", "w")
fout.write( config )

