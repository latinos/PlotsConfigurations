from ROOT import *
from array import *
import CMS_lumi, tdrstyle
import sys

tdrstyle.setTDRStyle()
CMS_lumi.lumi_13TeV = "2.3 fb^{-1}"
CMS_lumi.writeExtraText = 1
CMS_lumi.writeExtraText2 = 1
CMS_lumi.extraText = "Preliminary"

iPos=11

def makeCanvas(name="c"):

  H_ref = 700
  W_ref = 800
  W = W_ref
  H  = H_ref

  canvas = TCanvas(name,name)

  # references for T, B, L, R
  T = 0.08*H_ref
  B = 0.12*H_ref
  L = 0.18*W_ref
  R = 0.05*W_ref

  canvas.SetFillColor(0)
  canvas.SetBorderMode(0)
  canvas.SetFrameFillStyle(0)
  canvas.SetFrameBorderMode(0)
  canvas.SetLeftMargin( L/W)
  canvas.SetRightMargin( R/W)
  canvas.SetTopMargin( T/H )
  canvas.SetBottomMargin( B/H )
  canvas.SetTickx(1)
  canvas.SetTicky(1)
 
  return canvas


def extract(file):
  expLimit = {}
  for line in file:
    if "Expected" in line:
      res = line.split()
      expLimit[res[1].replace('%:','')] = res[4]

  return expLimit

def getXsec(mass,process,model):

  kp = float(model[1]+"."+model[2])*float(model[1]+"."+model[2])
  brn = float((model[6]+"."+model[7]))

  sf = kp*(1-brn)
  print "ewk singlet SF = ",sf

  if process=="ggH":

    rootFile = TFile("eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_GluGluHToWWTo2L2Nu_M"+mass+".root")
    latino = rootFile.Get("latino")
    htemp = TH1F("htemp","htemp",1,0,1)
    latino.Draw("Xsec>>htemp")

    return htemp.GetMean()*sf

  elif process=="VBF":

    rootFile = TFile("eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_VBFHToWWTo2L2Nu_M"+mass+".root")
    latino = rootFile.Get("latino")
    htemp = TH1F("htemp","htemp",1,0,1)
    latino.Draw("Xsec>>htemp")

    return htemp.GetMean()*sf


def plotLimitModels(mass,models,cats):


        directory = "/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_clean/CMSSW_7_6_3/src/LatinoAnalysis/ShapeAnalysis/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/combineFrozen_INT/"

        for cat in cats:

          leg1 = TLegend(0.2, 0.45, 0.6, 0.7)
          leg1.SetBorderSize(0)
          leg1.SetFillStyle(0)
 
          c1 = makeCanvas(cat)
          c1.cd()
          mg = TMultiGraph()
          
#          c2 = makeCanvas(cat,cat)
          count=0        
 
          for model in models:
            xcentral = array("d") # masses
            ycentral_mu = array("d") # limits
            ycentral_xs = array("d") # limits
            xerr = array("d")

            count+=1
#            modelName = model.replace("c","c'= ").replace("0","0.").replace("brn"," BR_{new} = ").replace("0.0.","0.0").replace("10.","1.0")
            modelName = model.replace("brn00","").replace("c","c'= ").replace("0","0.").replace("10.","1.0")


	    for m in masses:

	          xsec_ggH = getXsec(m,"ggH",model)
	          xsec_VBF = getXsec(m,"VBF",model)

	          if cat=="all":
	            fitfile = directory+"Limit.ICHEP2016.mH"+m+"_"+model+".txt"
	            CMS_lumi.extraText2 = "0+1+2 jets"
	          else:
	            fitfile = directory+"Limit."+cat+".ICHEP2016.mH"+m+"_"+model+".txt"
	            CMS_lumi.extraText2 = cat.replace("jet"," jets ")

	          fitFile = open(fitfile)
	          expLimit = extract(fitFile)
	          xcentral.append(float(m))
	          xerr.append(0)
	          ycentral_mu.append( float(expLimit['50.0']) )
	          ycentral_xs.append( float(expLimit['50.0'])*(xsec_ggH+xsec_VBF) )

	    graphcentral_mu = TGraph(len(xcentral),xcentral,ycentral_mu)
            graphcentral_mu.SetLineWidth(2)
            graphcentral_mu.SetLineColor(kGreen+count)
	    leg1.AddEntry(graphcentral_mu,"Expected "+modelName,"l")
            mg.Add(graphcentral_mu,"l")
 
          mg.Draw("A") 
          mg.GetYaxis().SetTitle("95% CL limit on #sigma/#sigma_{SM}")
          mg.GetXaxis().SetTitle("M_{X} [GeV]")
          mg.GetYaxis().SetRangeUser(0,120)
          leg1.Draw()
   	  CMS_lumi.CMS_lumi(c1, 4, iPos)
	  gPad.RedrawAxis()

        a=raw_input()

masses = ["200","210","230","250","300","350","400","450","500","550","600","650","700","750","800","900","1000"]
models = ["c03brn00","c05brn00","c07brn00","c10brn00"]
#cats = ["2jet"]
#cats= ["0jet","1jet","2jet","01jet","all"]  ## "0j" or "1j" or "2j" or "01j" or "all"
cats = [sys.argv[1]]

plotLimitModels(masses,models,cats)
