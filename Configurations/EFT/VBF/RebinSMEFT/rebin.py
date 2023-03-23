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

rebin_dic = {'hww2l2v_13TeV_of2j_vbf_hinn': [3,4,5,8,13,14,18,19,20],
	      'hww2l2v_13TeV_of2j_vbf_hinp': [3,4,8,9,13,14,15,18,19,20], 
	      'hww2l2v_13TeV_of2j_vbf_hipn': [3,4,5,8,9,10,13,14,15,18,19,20],
	      'hww2l2v_13TeV_of2j_vbf_hipp': [3,4,8,9,14,18,19,20],
	      'hww2l2v_13TeV_of2j_vh_hin': [4,8,9],
	      'hww2l2v_13TeV_of2j_vh_hip': [4,8,9],
              'hww2l2v_13TeV_of2j_Vh_hin': [2,3,6],
              'hww2l2v_13TeV_of2j_Vh_hip': [2,6,7]
}

nbins_dic = {'hww2l2v_13TeV_of2j_vbf_hinn': 12,
              'hww2l2v_13TeV_of2j_vbf_hinp': 11,
              'hww2l2v_13TeV_of2j_vbf_hipn': 9,
              'hww2l2v_13TeV_of2j_vbf_hipp': 13,
              'hww2l2v_13TeV_of2j_vh_hin': 8,
              'hww2l2v_13TeV_of2j_vh_hip': 8,
              'hww2l2v_13TeV_of2j_Vh_hin': 6,
              'hww2l2v_13TeV_of2j_Vh_hip': 6
}
#REBINING FUNCTION BASED ON BCK STATS. THIS FUNCTION JOINS THE BINS DEFINED IN THE LISTS ABOVE INTO A NEW FIRST BIN AND ADD THE REST OF BINS IN THE CONSECUTIVES BINS OF THE NEW HISTGORAM H2
def rebin_stat(H1,cat):

 nbins = len(rebin_dic[cat])
 oldnbins = H1.GetNbinsX()
 newnbins = oldnbins-nbins+1

 #DEFINING NEW HISTOGRAM TO BE FILLED.
 
 H2_rebin = ROOT.TH1D("","", newnbins ,0,newnbins)
 H2_rebin.Sumw2();
 Val = 0.
 Val_err = 0.

 #CALCULATING THE CONTENT AND ERROR OF THE FIRST BIN
 for bin in rebin_dic[cat]:

  Val = Val + H1.GetBinContent(bin)
  Val_err = Val_err + pow(H1.GetBinError(bin),2)

 #FILLING FIRST BIN

 H2_rebin.SetBinContent(1,0); H2_rebin.SetBinError(1, 0)
 H2_rebin.SetBinContent(1,Val); H2_rebin.SetBinError(1, math.sqrt(Val_err))

 #FROM THE SECOND BIN ON WE HADD THE REST OF BINS CONSECUTIVELY
 i = 2
 for bin in range(1, oldnbins+1):

  if bin not in rebin_dic[cat]:

   H2_rebin.SetBinContent(i,0)
   H2_rebin.SetBinContent(i,H1.GetBinContent(bin))
   H2_rebin.SetBinError(i,0)
   H2_rebin.SetBinError(i,H1.GetBinError(bin))

   i = i+1

 return H2_rebin 

#THIS FUNCTION REBINS 3D HISTOGRAMS FROM VH CATEGORIES. THE REBINNING STRATEGY IS BASED ON BSM STATS. 
#FROM A ORIGINAL 2D-KD WITH 9 BINS WE JOIN SM-LIKE BINS WHICH ARE [1,2,3,4,7] AND WE LEFT [5], [6], [8] AND [9] INDEPENDENT. 
def rebin_3D(H1):

 H1_rebin = ROOT.TH1D("","",10,0,10)
 H1_rebin.Sumw2();
 Val = H1.GetBinContent(1)+H1.GetBinContent(2)+H1.GetBinContent(3)+H1.GetBinContent(4)+H1.GetBinContent(7)
 Val_err = math.sqrt(pow(H1.GetBinError(1),2)+pow(H1.GetBinError(2),2)+pow(H1.GetBinError(3),2)+pow(H1.GetBinError(4),2)+pow(H1.GetBinError(7),2))
 H1_rebin.SetBinContent(1,Val); H1_rebin.SetBinError(1, Val_err)
 H1_rebin.SetBinContent(2, H1.GetBinContent(5)); H1_rebin.SetBinError(2, H1.GetBinError(5))
 H1_rebin.SetBinContent(3, H1.GetBinContent(6)); H1_rebin.SetBinError(3, H1.GetBinError(6))
 H1_rebin.SetBinContent(4, H1.GetBinContent(8)); H1_rebin.SetBinError(4, H1.GetBinError(8))
 H1_rebin.SetBinContent(5, H1.GetBinContent(9)); H1_rebin.SetBinError(5, H1.GetBinError(9))

 Val = H1.GetBinContent(10)+H1.GetBinContent(11)+H1.GetBinContent(12)+H1.GetBinContent(13)+H1.GetBinContent(16)
 Val_err = math.sqrt(pow(H1.GetBinError(10),2)+pow(H1.GetBinError(11),2)+pow(H1.GetBinError(12),2)+pow(H1.GetBinError(13),2)+pow(H1.GetBinError(16),2))
 H1_rebin.SetBinContent(6,Val); H1_rebin.SetBinError(1, Val_err)
 H1_rebin.SetBinContent(7, H1.GetBinContent(14)); H1_rebin.SetBinError(7, H1.GetBinError(14))
 H1_rebin.SetBinContent(8, H1.GetBinContent(15)); H1_rebin.SetBinError(8, H1.GetBinError(15))
 H1_rebin.SetBinContent(9, H1.GetBinContent(17)); H1_rebin.SetBinError(9, H1.GetBinError(17))
 H1_rebin.SetBinContent(10, H1.GetBinContent(18)); H1_rebin.SetBinError(10, H1.GetBinError(18))

 return H1_rebin

#SAME FUNCTION AS THE PREVIOUS ONE BUT WITH MORE BINS. WE JOIN BINS 1,2,3,4&7 and we leave the rest independent.
def rebin_4D(H1):

 H1_rebin = ROOT.TH1D("","",20,0,20)
 H1_rebin.Sumw2();

 Val = H1.GetBinContent(1)+H1.GetBinContent(2)+H1.GetBinContent(3)+H1.GetBinContent(4)+H1.GetBinContent(7)
 Val_err = math.sqrt(pow(H1.GetBinError(1),2)+pow(H1.GetBinError(2),2)+pow(H1.GetBinError(3),2)+pow(H1.GetBinError(4),2)+pow(H1.GetBinError(7),2))
 H1_rebin.SetBinContent(1,Val); H1_rebin.SetBinError(1, Val_err)
 H1_rebin.SetBinContent(2, H1.GetBinContent(5)); H1_rebin.SetBinError(2, H1.GetBinError(5))
 H1_rebin.SetBinContent(3, H1.GetBinContent(6)); H1_rebin.SetBinError(3, H1.GetBinError(6))
 H1_rebin.SetBinContent(4, H1.GetBinContent(8)); H1_rebin.SetBinError(4, H1.GetBinError(8))
 H1_rebin.SetBinContent(5, H1.GetBinContent(9)); H1_rebin.SetBinError(5, H1.GetBinError(9))

 Val = H1.GetBinContent(10)+H1.GetBinContent(11)+H1.GetBinContent(12)+H1.GetBinContent(13)+H1.GetBinContent(16)
 Val_err = math.sqrt(pow(H1.GetBinError(10),2)+pow(H1.GetBinError(11),2)+pow(H1.GetBinError(12),2)+pow(H1.GetBinError(13),2)+pow(H1.GetBinError(16),2))
 H1_rebin.SetBinContent(6,Val); H1_rebin.SetBinError(6, Val_err)
 H1_rebin.SetBinContent(7, H1.GetBinContent(14)); H1_rebin.SetBinError(7, H1.GetBinError(14))
 H1_rebin.SetBinContent(8, H1.GetBinContent(15)); H1_rebin.SetBinError(8, H1.GetBinError(15))
 H1_rebin.SetBinContent(9, H1.GetBinContent(17)); H1_rebin.SetBinError(9, H1.GetBinError(17))
 H1_rebin.SetBinContent(10, H1.GetBinContent(18)); H1_rebin.SetBinError(10, H1.GetBinError(18))

 Val = H1.GetBinContent(19)+H1.GetBinContent(20)+H1.GetBinContent(21)+H1.GetBinContent(22)+H1.GetBinContent(25)
 Val_err = math.sqrt(pow(H1.GetBinError(19),2)+pow(H1.GetBinError(20),2)+pow(H1.GetBinError(21),2)+pow(H1.GetBinError(22),2)+pow(H1.GetBinError(25),2))
 H1_rebin.SetBinContent(11,Val); H1_rebin.SetBinError(11, Val_err)
 H1_rebin.SetBinContent(12, H1.GetBinContent(23)); H1_rebin.SetBinError(12, H1.GetBinError(23))
 H1_rebin.SetBinContent(13, H1.GetBinContent(24)); H1_rebin.SetBinError(13, H1.GetBinError(24))
 H1_rebin.SetBinContent(14, H1.GetBinContent(26)); H1_rebin.SetBinError(14, H1.GetBinError(26))
 H1_rebin.SetBinContent(15, H1.GetBinContent(27)); H1_rebin.SetBinError(15, H1.GetBinError(27))

 Val = H1.GetBinContent(28)+H1.GetBinContent(29)+H1.GetBinContent(30)+H1.GetBinContent(31)+H1.GetBinContent(34)
 Val_err = math.sqrt(pow(H1.GetBinError(28),2)+pow(H1.GetBinError(29),2)+pow(H1.GetBinError(30),2)+pow(H1.GetBinError(31),2)+pow(H1.GetBinError(34),2))
 H1_rebin.SetBinContent(16,Val); H1_rebin.SetBinError(16, Val_err)
 H1_rebin.SetBinContent(17, H1.GetBinContent(32)); H1_rebin.SetBinError(17, H1.GetBinError(32))
 H1_rebin.SetBinContent(18, H1.GetBinContent(33)); H1_rebin.SetBinError(18, H1.GetBinError(33))
 H1_rebin.SetBinContent(19, H1.GetBinContent(35)); H1_rebin.SetBinError(19, H1.GetBinError(35))
 H1_rebin.SetBinContent(20, H1.GetBinContent(36)); H1_rebin.SetBinError(20, H1.GetBinError(36))
 return H1_rebin

#THIS IS A FUNCTION THAT CROSSCHECK THE CORRESPONDANCE BETWEEN BINS WITHIN 2 HISTOGRAMS 
def CompareBins(H1, H2):
 
 print("Bins in H1", H1.GetNbinsX())
 print("Bins in H2", H2.GetNbinsX())
 for bin in range(1,H1.GetNbinsX()+1):
  print("H1 BIN", bin, "H1 Content", H1.GetBinContent(bin))
 for bin in range(1,H2.GetNbinsX()+1):
  print("H2 BIN", bin, "H2 Content", H2.GetBinContent(bin))

def rebinning(H1, Cat):

 integral = H1.Integral()
 if 'vh' in Cat: 
  H1_rebin = rebin_3D(H1)
 if 'vbf' in Cat: 
  H1_rebin = rebin_4D(H1)
 if 'Vh' in Cat:
  H1_rebin = H1

 H1_final = rebin_stat(H1_rebin,Cat)
 H1_final.SetName(H1.GetName())

 return H1_final

def AddCategory(cat): # Assuming one variable in category

 print("Adding category directly", cat)

 HistList = ROOT.TObjArray()
 HistNameList = []
 
 f = ROOT.TFile.Open(sys.argv[1]+".root", 'read')
 f.cd(''+cat+'')
 print("INPUT FILE", sys.argv[1]+".root")
 var_dir = ROOT.gDirectory
 for var in var_dir.GetListOfKeys():
  catvar = cat+'/'+var.GetName()
  print "Adding variable : ", catvar
  f.cd(cat+'/'+var.GetName())
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

def RebinAndAddCategory(cat): # Assuming one variable in category

 print("Rebin and add category ", cat)

 HistList = ROOT.TObjArray()
 HistNameList = []
 
 f = ROOT.TFile.Open(sys.argv[1]+".root", 'read')
 f.cd(''+cat+'')

 var_dir = ROOT.gDirectory
 for var in var_dir.GetListOfKeys():
  catvar = cat+'/'+var.GetName()
  print "Adding variable : ", catvar
  f.cd(cat+'/'+var.GetName())
  hist_dir = ROOT.gDirectory
  for hist in hist_dir.GetListOfKeys():
    h = hist.ReadObj()
    h.SetDirectory(0)

    hnew = rebinning(h, cat)
    if(hnew.GetNbinsX() != nbins_dic[cat]): print ("ERROR: The number of bins for this histogram is incorrect", hnew.GetName(), hnew.GetNbinsX())
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

RebinCat_list = ['hww2l2v_13TeV_of2j_vbf_hinn','hww2l2v_13TeV_of2j_vbf_hipp','hww2l2v_13TeV_of2j_vbf_hipn','hww2l2v_13TeV_of2j_vbf_hinp',
'hww2l2v_13TeV_of2j_vh_hin','hww2l2v_13TeV_of2j_vh_hip','hww2l2v_13TeV_of2j_Vh_hin','hww2l2v_13TeV_of2j_Vh_hip']

## Get list of categories from input file

Cat_list = []

src = sys.argv[1]+".root"
f = ROOT.TFile.Open(src, 'read')
f.cd()
print(src)
cat_dir = ROOT.gDirectory
for cat in cat_dir.GetListOfKeys():
 Cat_list.append(cat.GetName())
f.Close()

## Loop over categories
for cat in Cat_list:

 if cat in RebinCat_list:
  RebinAndAddCategory(cat)
 else:
  AddCategory(cat)
 
print "Done!"

