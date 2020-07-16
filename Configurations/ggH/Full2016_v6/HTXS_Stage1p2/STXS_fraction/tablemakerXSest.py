import os
import subprocess
import string
import ROOT
import sys

rootfile = "rootFile_ggH2016v6_STXS_XSest/plots_ggH2016v6_STXS_XSest.root"
#rootfile = "rootFile_ggH2016v6_STXS_XSest/plots_ggH2016v6_STXS_XSest_ALL_HZJ_HToWW_M125.root"
file = ROOT.TFile.Open(rootfile,"read")


ggHbinnames =['GG2H_FWDH', 'GG2H_PTH_200_300' , 'GG2H_PTH_300_450', 'GG2H_PTH_450_650' , 'GG2H_PTH_GT650', 
              'GG2H_0J_PTH_0_10' ,    'GG2H_0J_PTH_GT10', 
              'GG2H_1J_PTH_0_60',    'GG2H_1J_PTH_60_120',   'GG2H_1J_PTH_120_200', 
              'GG2H_GE2J_MJJ_0_350_PTH_0_60',    'GG2H_GE2J_MJJ_0_350_PTH_60_120',    'GG2H_GE2J_MJJ_0_350_PTH_120_200', 
              'GG2H_GE2J_MJJ_350_700_PTHJJ_0_25', 	   'GG2H_GE2J_MJJ_350_700_PTHJJ_GT25',
              'GG2H_GE2J_MJJ_GT700_PTHJJ_0_25',       'GG2H_GE2J_MJJ_GT700_PTHJJ_GT25']

vbfbinnames =['QQ2HQQ_FWDH',  'QQ2HQQ_0J' ,   'QQ2HQQ_1J' ,
              'QQ2HQQ_MJJ_0_60',     'QQ2HQQ_MJJ_60_120',    'QQ2HQQ_MJJ_120_350',
              'QQ2HQQ_MJJ_GT350_PTH_GT200', 
              'QQ2HQQ_MJJ_350_700_PTHJJ_0_25',    'QQ2HQQ_MJJ_350_700_PTHJJ_GT25',
              'QQ2HQQ_MJJ_GT700_PTHJJ_0_25' ,    'QQ2HQQ_MJJ_GT700_PTHJJ_GT25' ] 

VHhadnames =['QQ2HQQ_FWDH',  'QQ2HQQ_0J' ,   'QQ2HQQ_1J' ,
              'QQ2HQQ_MJJ_0_60',     'QQ2HQQ_MJJ_60_120',    'QQ2HQQ_MJJ_120_350',
              'QQ2HQQ_MJJ_GT350_PTH_GT200', 
              'QQ2HQQ_MJJ_350_700_PTHJJ_0_25',    'QQ2HQQ_MJJ_350_700_PTHJJ_GT25',
              'QQ2HQQ_MJJ_GT700_PTHJJ_0_25' ,    'QQ2HQQ_MJJ_GT700_PTHJJ_GT25' ] 

WHbinnames =['QQ2HLNU_FWDH', 	'QQ2HLNU_PTV_0_75' , 'QQ2HLNU_PTV_75_150',
             'QQ2HLNU_PTV_150_250_0J', 'QQ2HLNU_PTV_150_250_GE1J', 
             'QQ2HLNU_PTV_GT250']

qqZHbinnames =['QQ2HLL_FWDH', 	'QQ2HLL_PTV_0_75' , 'QQ2HLL_PTV_75_150',
               'QQ2HLL_PTV_150_250_0J', 'QQ2HLL_PTV_150_250_GE1J', 
               'QQ2HLL_PTV_GT250'] 

ggZHbinnames =['GG2HLL_FWDH', 	'GG2HLL_PTV_0_75' , 'GG2HLL_PTV_75_150',
               'GG2HLL_PTV_150_250_0J', 'GG2HLL_PTV_150_250_GE1J', 
               'GG2HLL_PTV_GT250'] 


ggHsamples =['GluGluHToWWTo2L2Nu_alternative_M125','ggZH_HToWW_M125']
vbfsamples =['VBFHToWWTo2L2Nu_M125']
WHsamples=['HWminusJ_HToWW_M125','HWplusJ_HToWW_M125'] 
ggZHsamples=['ggZH_HToWW_M125']
qqZHsamples=['HZJ_HToWW_M125'] 
VHhadsamples=['HWminusJ_HToWW_M125','HWplusJ_HToWW_M125','HZJ_HToWW_M125']

hist = ROOT.TH1F("h1","h1",1,0,2)
from collections import defaultdict

entriesggH = defaultdict(dict)
entriesvbf = defaultdict(dict)
entriesWH = defaultdict(dict)
entriesqqZH = defaultdict(dict)
entriesggZH = defaultdict(dict)
entriesVHhad = defaultdict(dict)


for nbin in ggHbinnames :
   print  nbin,
print " "

for nbin in ggHbinnames :
   for sam in ggHsamples :
      hist=file.Get("hww2l2v_13TeV_"+nbin+"/events/histo_"+sam)
      if not hist :
         print " Failed to get data histogram " , "hww2l2v_13TeV_"+nbin+"/events/histo_"+sam
         continue
      entriesggH[sam][nbin]=int(hist.GetBinContent(1)) 

for sam in ggHsamples :
   for nbin in ggHbinnames :
      print entriesggH[sam][nbin],
   print " "


for nbin in vbfbinnames :
   print  nbin,
print " "

for nbin in vbfbinnames :
   for sam in vbfsamples :
      hist=file.Get("hww2l2v_13TeV_"+nbin+"/events/histo_"+sam)
      if not hist :
         print " Failed to get data histogram " , "hww2l2v_13TeV_"+nbin+"/events/histo_"+sam
         continue
      entriesvbf[sam][nbin]=int(hist.GetBinContent(1)) 

for sam in vbfsamples :
   for nbin in vbfbinnames :
      print entriesvbf[sam][nbin],
   print " "


for nbin in WHbinnames :
   print  nbin,
print " "

for nbin in WHbinnames :
   for sam in WHsamples :
      if sam is 'HWminusJ_HToWW_M125' :
         entriesggZH[sam][nbin]=0   
         continue

      hist=file.Get("hww2l2v_13TeV_"+nbin+"/events/histo_"+sam)
      if not hist :
         print " Failed to get data histogram " , "hww2l2v_13TeV_"+nbin+"/events/histo_"+sam
         continue
      entriesWH[sam][nbin]=int(hist.GetBinContent(1)) 

for sam in WHsamples :
   for nbin in WHbinnames :
      print entriesWH[sam][nbin],
   print " "


for nbin in ggZHbinnames :
   print  nbin,
print " "

for nbin in ggZHbinnames :
   for sam in ggZHsamples :
      if sam is 'ggZH_HToWW_M125' :
         entriesggZH[sam][nbin]=0   
         continue

      hist=file.Get("hww2l2v_13TeV_"+nbin+"/events/histo_"+sam)
      if not hist :
         print " Failed to get data histogram " , "hww2l2v_13TeV_"+nbin+"/events/histo_"+sam
         continue
      entriesggZH[sam][nbin]=int(hist.GetBinContent(1)) 

for sam in ggZHsamples :
   for nbin in ggZHbinnames :
      print entriesggZH[sam][nbin],
   print " "


for nbin in qqZHbinnames :
   print  nbin,
print " "

for nbin in qqZHbinnames :
   for sam in qqZHsamples :
      hist=file.Get("hww2l2v_13TeV_"+nbin+"/events/histo_"+sam)
      if not hist :
         print " Failed to get data histogram " , "hww2l2v_13TeV_"+nbin+"/events/histo_"+sam
         continue
      entriesqqZH[sam][nbin]=int(hist.GetBinContent(1)) 

for sam in qqZHsamples :
   for nbin in qqZHbinnames :
      print entriesqqZH[sam][nbin],
   print " "

for nbin in VHhadnames :
   print  nbin,
print " "

for nbin in VHhadnames :
   for sam in VHhadsamples :
      #if sam is 'HWminusJ_HToWW_M125' :
      #   entriesggZH[sam][nbin]=0   
      #   continue

      hist=file.Get("hww2l2v_13TeV_"+nbin+"/events/histo_"+sam)
      if not hist :
         print " Failed to get data histogram " , "hww2l2v_13TeV_"+nbin+"/events/histo_"+sam
         continue
      entriesVHhad[sam][nbin]=int(hist.GetBinContent(1)) 

for sam in VHhadsamples :
   for nbin in VHhadnames :
      print entriesVHhad[sam][nbin],
   print " "


