
#!/usr/bin/env python

#################################################

## production mechanisms

Prod = [ "VBF", "WH", "ZH", "GGH", "GGHjj"  ]

##################################################

## HVV AC MC samples  

HVVSigOrg  = [ "H0PM", "H0M", "H0Mf05", "H0PH", "H0PHf05", "H0L1", "H0L1f05" ] 

## Reweight all 7 original samples to these hypotheses (ME) for GGH (1 vertex - 3 hypotheses)

HVVSigRW1 = [("H0PM"),
          ("H0M"), ("H0Mf05"),
          ("H0PH"),("H0PHf05"),
          ("H0L1"),("H0L1f05")
        ]

## Reweight all 7 original samples to these hypotheses (ME) for VBF, WH, and ZH (2 vertices - 5 hypotheses)

HVVSigRW2 = [("H0PM"),
          ("H0M_M0"), ("H0M_M1"), ("H0M_M2"), ("H0M_M3"),
          ("H0PH_M0"),("H0PH_M1"),("H0PH_M2"),("H0PH_M3"),
          ("H0L1_M0"),("H0L1_M1"),("H0L1_M2"),("H0L1_M3")
        ]

##################################################

## HGG AC MC samples  

HGGSigOrg  = [ "H0PM", "H0M", "H0Mf05" ] 

## Reweight all 3 original samples to these hypotheses (ME) for GGHjj (1 vertex - 3 hypotheses)

HGGSigRW1 = [("H0PM"),
             ("H0M"), ("H0Mf05"),
            ]

##################### make config ##########################

config = " "
basefile = "/afs/cern.ch/work/d/dmoran/private/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/EFT/VBF/Tools/configs/samples_bkg_2016v7.py"
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
 SigOrg = HVVSigOrg
 SigRW  = HVVSigRW2
 
 if pr == "GGH" : 
  p = ""
  SigRW  = HVVSigRW1
 elif pr == "GGHjj" : 
  SigOrg = HGGSigOrg
  SigRW  = HGGSigRW1

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

fout = open ("/afs/cern.ch/work/d/dmoran/private/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/EFT/VBF/Tools/configs/samples.py", "w")
fout.write( config )

