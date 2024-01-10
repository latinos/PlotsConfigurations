B1;5204;0c
import sys
import time
import ROOT
import numpy as np
import shutil
import math
from os import path
from array import array
from ROOT import *

ROOT.gStyle.SetOptStat(0)
ROOT.gStyle.SetOptTitle(0)

def rebin_2D(H1): #16->14 [0.0,0.6,1],[0,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1]

 H1_rebin = ROOT.TH1D("","",14,0,14)
 H1_rebin.Sumw2();

 Val = H1.GetBinContent(1)+H1.GetBinContent(2)
 Val_err = math.sqrt(pow(H1.GetBinError(1),2)+pow(H1.GetBinError(2),2))

 H1_rebin.SetBinContent(1,Val); H1_rebin.SetBinError(1, Val_err)

 H1_rebin.SetBinContent(2, H1.GetBinContent(3)); H1_rebin.SetBinError(2, H1.GetBinError(3))
 H1_rebin.SetBinContent(3, H1.GetBinContent(4)); H1_rebin.SetBinError(3, H1.GetBinError(4))
 H1_rebin.SetBinContent(4, H1.GetBinContent(5)); H1_rebin.SetBinError(4, H1.GetBinError(5))
 H1_rebin.SetBinContent(5, H1.GetBinContent(6)); H1_rebin.SetBinError(5, H1.GetBinError(6))

 Val = H1.GetBinContent(7)+H1.GetBinContent(8)
 Val_err = math.sqrt(pow(H1.GetBinError(7),2)+pow(H1.GetBinError(8),2))

 H1_rebin.SetBinContent(6,Val); H1_rebin.SetBinError(6, Val_err)

 H1_rebin.SetBinContent(7, H1.GetBinContent(9)); H1_rebin.SetBinError(7, H1.GetBinError(9))
 H1_rebin.SetBinContent(8, H1.GetBinContent(10)); H1_rebin.SetBinError(8, H1.GetBinError(10))
 H1_rebin.SetBinContent(9, H1.GetBinContent(11)); H1_rebin.SetBinError(9, H1.GetBinError(11))
 H1_rebin.SetBinContent(10, H1.GetBinContent(12)); H1_rebin.SetBinError(10, H1.GetBinError(12))
 H1_rebin.SetBinContent(11, H1.GetBinContent(13)); H1_rebin.SetBinError(11, H1.GetBinError(13))
 H1_rebin.SetBinContent(12, H1.GetBinContent(14)); H1_rebin.SetBinError(12, H1.GetBinError(14))
 H1_rebin.SetBinContent(13, H1.GetBinContent(15)); H1_rebin.SetBinError(13, H1.GetBinError(15))
 H1_rebin.SetBinContent(14, H1.GetBinContent(16)); H1_rebin.SetBinError(14, H1.GetBinError(16))

 return H1_rebin

def rebin_2D2(H1): #16->13 [0.0,0.6,1],[0,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1]

 H1_rebin = ROOT.TH1D("","",13,0,13)
 H1_rebin.Sumw2();

 Val = H1.GetBinContent(1)+H1.GetBinContent(2)
 Val_err = math.sqrt(pow(H1.GetBinError(1),2)+pow(H1.GetBinError(2),2))

 H1_rebin.SetBinContent(1, Val);                 H1_rebin.SetBinError(1, Val_err)
 H1_rebin.SetBinContent(2, H1.GetBinContent(3)); H1_rebin.SetBinError(2, H1.GetBinError(3))
 H1_rebin.SetBinContent(3, H1.GetBinContent(4)); H1_rebin.SetBinError(3, H1.GetBinError(4))
 H1_rebin.SetBinContent(4, H1.GetBinContent(5)); H1_rebin.SetBinError(4, H1.GetBinError(5))

 Val =  H1.GetBinContent(6)+H1.GetBinContent(7)+H1.GetBinContent(8)
 Val_err = math.sqrt(pow(H1.GetBinError(6),2)+pow(H1.GetBinError(7),2)+pow(H1.GetBinError(8),2))

 H1_rebin.SetBinContent(5, Val);                 H1_rebin.SetBinError(5, Val_err)
 H1_rebin.SetBinContent(6, H1.GetBinContent(9)); H1_rebin.SetBinError(6, H1.GetBinError(9))
 H1_rebin.SetBinContent(7, H1.GetBinContent(10)); H1_rebin.SetBinError(7, H1.GetBinError(10))
 H1_rebin.SetBinContent(8, H1.GetBinContent(11)); H1_rebin.SetBinError(8, H1.GetBinError(11))
 H1_rebin.SetBinContent(9, H1.GetBinContent(12)); H1_rebin.SetBinError(9, H1.GetBinError(12))
 H1_rebin.SetBinContent(10, H1.GetBinContent(13)); H1_rebin.SetBinError(10, H1.GetBinError(13))
 H1_rebin.SetBinContent(11, H1.GetBinContent(14)); H1_rebin.SetBinError(11, H1.GetBinError(14))
 H1_rebin.SetBinContent(12, H1.GetBinContent(15)); H1_rebin.SetBinError(12, H1.GetBinError(15))
 H1_rebin.SetBinContent(13, H1.GetBinContent(16)); H1_rebin.SetBinError(13, H1.GetBinError(16))
 
 return H1_rebin

def rebin_2D3(H1): #16->12 [0.0,0.6,1],[0,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1]

 H1_rebin = ROOT.TH1D("","",12,0,12)
 H1_rebin.Sumw2();

 Val = H1.GetBinContent(1)+H1.GetBinContent(2)
 Val_err = math.sqrt(pow(H1.GetBinError(1),2)+pow(H1.GetBinError(2),2))

 H1_rebin.SetBinContent(1, Val);                 H1_rebin.SetBinError(1, Val_err)
 H1_rebin.SetBinContent(2, H1.GetBinContent(3)); H1_rebin.SetBinError(2, H1.GetBinError(3))
 H1_rebin.SetBinContent(3, H1.GetBinContent(4)); H1_rebin.SetBinError(3, H1.GetBinError(4))
 H1_rebin.SetBinContent(4, H1.GetBinContent(5)); H1_rebin.SetBinError(4, H1.GetBinError(5))
 # 6,7,8 just bkg
 H1_rebin.SetBinContent(5, H1.GetBinContent(9)); H1_rebin.SetBinError(5, H1.GetBinError(9))
 H1_rebin.SetBinContent(6, H1.GetBinContent(10)); H1_rebin.SetBinError(6, H1.GetBinError(10))
 H1_rebin.SetBinContent(7, H1.GetBinContent(11)); H1_rebin.SetBinError(7, H1.GetBinError(11))
 H1_rebin.SetBinContent(8, H1.GetBinContent(12)); H1_rebin.SetBinError(8, H1.GetBinError(12))
 H1_rebin.SetBinContent(9, H1.GetBinContent(13)); H1_rebin.SetBinError(9, H1.GetBinError(13))
 H1_rebin.SetBinContent(10, H1.GetBinContent(14)); H1_rebin.SetBinError(10, H1.GetBinError(14))
 H1_rebin.SetBinContent(11, H1.GetBinContent(15)); H1_rebin.SetBinError(11, H1.GetBinError(15))
 H1_rebin.SetBinContent(12, H1.GetBinContent(16)); H1_rebin.SetBinError(12, H1.GetBinError(16))
 
 return H1_rebin

def rebin_4D(H1): #20->16 [0,0.4,0.6,0.8,1],[0,0.2,0.4,0.6,0.8,1]

 H1_rebin = ROOT.TH1D("","",16,0,16)
 H1_rebin.Sumw2();

 H1_rebin.SetBinContent(1, H1.GetBinContent(1)); H1_rebin.SetBinError(1, H1.GetBinError(1))
 H1_rebin.SetBinContent(2, H1.GetBinContent(2)); H1_rebin.SetBinError(2, H1.GetBinError(2))
 H1_rebin.SetBinContent(3, H1.GetBinContent(3)); H1_rebin.SetBinError(3, H1.GetBinError(3))

 Val = H1.GetBinContent(4)+H1.GetBinContent(5)
 Val_err = math.sqrt(pow(H1.GetBinError(4),2)+pow(H1.GetBinError(5),2))

 H1_rebin.SetBinContent(4,Val); H1_rebin.SetBinError(4, Val_err)

 H1_rebin.SetBinContent(5, H1.GetBinContent(6)); H1_rebin.SetBinError(5, H1.GetBinError(6))
 H1_rebin.SetBinContent(6, H1.GetBinContent(7)); H1_rebin.SetBinError(6, H1.GetBinError(7))
 H1_rebin.SetBinContent(7, H1.GetBinContent(8)); H1_rebin.SetBinError(7, H1.GetBinError(8))

 Val = H1.GetBinContent(9)+H1.GetBinContent(10)
 Val_err = math.sqrt(pow(H1.GetBinError(9),2)+pow(H1.GetBinError(10),2))

 H1_rebin.SetBinContent(8,Val); H1_rebin.SetBinError(8, Val_err)

 H1_rebin.SetBinContent(9, H1.GetBinContent(11)); H1_rebin.SetBinError(9, H1.GetBinError(11))
 H1_rebin.SetBinContent(10, H1.GetBinContent(12)); H1_rebin.SetBinError(10, H1.GetBinError(12))
 H1_rebin.SetBinContent(11, H1.GetBinContent(13)); H1_rebin.SetBinError(11, H1.GetBinError(13))

 Val = H1.GetBinContent(14)+H1.GetBinContent(15)
 Val_err = math.sqrt(pow(H1.GetBinError(14),2)+pow(H1.GetBinError(15),2))

 H1_rebin.SetBinContent(12,Val); H1_rebin.SetBinError(12, Val_err)

 Val = H1.GetBinContent(16)+H1.GetBinContent(17)
 Val_err = math.sqrt(pow(H1.GetBinError(16),2)+pow(H1.GetBinError(17),2))

 H1_rebin.SetBinContent(13,Val); H1_rebin.SetBinError(13, Val_err)

 H1_rebin.SetBinContent(14, H1.GetBinContent(18)); H1_rebin.SetBinError(14, H1.GetBinError(18))
 H1_rebin.SetBinContent(15, H1.GetBinContent(19)); H1_rebin.SetBinError(15, H1.GetBinError(19))
 H1_rebin.SetBinContent(16, H1.GetBinContent(20)); H1_rebin.SetBinError(16, H1.GetBinError(20))

 return H1_rebin

#THIS IS A FUNCTION THAT CROSSCHECK THE CORRESPONDANCE BETWEEN BINS WITHIN 2 HISTOGRAMS 
def CompareBins(H1, H2):
 
 print("Bins in H1", H1.GetNbinsX())
 print("Bins in H2", H2.GetNbinsX())
 for bin in range(1,H1.GetNbinsX()+1):
  print("H1 BIN", bin, "H1 Content", H1.GetBinContent(bin), H1.GetBinError(bin))
 for bin in range(1,H2.GetNbinsX()+1):
  print("H2 BIN", bin, "H2 Content", H2.GetBinContent(bin), H2.GetBinError(bin))

def rebinning(H1):

 integral = H1.Integral()
 H1_rebin = rebin_2D3(H1)
# H1_rebin = rebin_4D(H1) #DM
 H1_rebin.SetName(H1.GetName())

 if ""+H1.GetName()+"" == "histo_GGHjj_minlo_H0PM" : CompareBins(H1,H1_rebin)
 
 return H1_rebin

def AddVariable(cat,var): 

 print("Adding category and variable directly", cat, var)

 HistList = ROOT.TObjArray()
 HistNameList = []
 
 f = ROOT.TFile.Open(sys.argv[1]+".root", 'read')
 #f.cd(''+cat+'')
 print("INPUT FILE", sys.argv[1]+".root")
 catvar = cat+'/'+var
 print "Adding variable : ", catvar
 f.cd(catvar)
 hist_dir = ROOT.gDirectory
 for hist in hist_dir.GetListOfKeys():
  h = hist.ReadObj()
  h.SetDirectory(0)
  HistList.Add(h)
  HistNameList.append(h.GetName())

 f.Close()

 print "Adding", len(HistNameList), "hists"

 fout = ROOT.TFile.Open(sys.argv[1]+"_REBIN.root", 'update')
 if not fout.GetDirectory(""+catvar+"/") : ROOT.gDirectory.mkdir(""+catvar+"/") 
 fout.cd(""+catvar+"/")

 HistList.Write()
 HistList.Clear()
 print("histlist written")

 fout.Close()

def RebinAndAddVariable(cat, var): 

 print("Rebin and add category ", cat, var)

 HistList = ROOT.TObjArray()
 HistNameList = []
 
 f = ROOT.TFile.Open(sys.argv[1]+".root", 'read')
 #f.cd(''+cat+'')
 catvar = cat+'/'+var
 print "Adding variable : ", catvar
 f.cd(cat+'/'+var)
 hist_dir = ROOT.gDirectory
 for hist in hist_dir.GetListOfKeys():
  h = hist.ReadObj()
  h.SetDirectory(0)

  hnew = rebinning(h) 
  if(hnew.GetNbinsX() != 12): print ("ERROR: The number of bins for this histogram is incorrect", hnew.GetName(), hnew.GetNbinsX()) #DM
  hnew.SetDirectory(0)

  HistList.Add(hnew)
  HistNameList.append(h.GetName())

 f.Close()

 print "Adding", len(HistNameList), "hists"

 fout = ROOT.TFile.Open(sys.argv[1]+"_REBIN.root", 'update')
 if not fout.GetDirectory(""+catvar+"/") : ROOT.gDirectory.mkdir(""+catvar+"/") 
 fout.cd(""+catvar+"/")

 HistList.Write()
 HistList.Clear()
 print("histlist written")

 fout.Close()

##################################

RebinVar_list = ["kd2d_ggh_hm"] #DM

## Get list of categories from input file

Cat_list = []
Var_list = []

src = sys.argv[1]+".root"
f = ROOT.TFile.Open(src, 'read')
f.cd()
print(src)
cat_dir = ROOT.gDirectory
for cat in cat_dir.GetListOfKeys():
 Cat_list.append(cat.GetName())
 f.cd(""+cat.GetName()+"")
 var_dir = ROOT.gDirectory
 for var in var_dir.GetListOfKeys():
  if var.GetName() not in Var_list : Var_list.append(var.GetName())

f.Close()

###

print Cat_list
print Var_list

## Loop over categories and variables

for cat in Cat_list:
 for var in Var_list:
  if var in RebinVar_list:
   RebinAndAddVariable(cat,var)
  else:
   AddVariable(cat,var)
 
print "Done!"

