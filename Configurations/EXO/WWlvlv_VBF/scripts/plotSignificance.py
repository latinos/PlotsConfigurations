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
    if "Significance" in line:
      res = line.split()
      significance = res[1]

  return significance 


def plotSignificance(mass,model,cat="all"):


	xcentral = array("d") # masses
        ycentral = array("d") # limits
	xerr = array("d")

  	for m in masses:

            if cat=="all":
              #fitfile = "/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_clean/CMSSW_7_6_3/src/LatinoAnalysis/ShapeAnalysis/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/combineLSF/Significance.ICHEP2016.mH"+m+"_"+model+".txt"
              fitfile = "/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_clean/CMSSW_7_6_3/src/LatinoAnalysis/ShapeAnalysis/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/combineFrozen_newbins/Significance.ICHEP2016.mH"+m+"_"+model+".txt"
              CMS_lumi.extraText2 = "0+1+2 jets "
            else:
              #fitfile = "/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_clean/CMSSW_7_6_3/src/LatinoAnalysis/ShapeAnalysis/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/combineLSF/Significance."+cat+".ICHEP2016.mH"+m+"_"+model+".txt"
              fitfile = "/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_clean/CMSSW_7_6_3/src/LatinoAnalysis/ShapeAnalysis/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/combineFrozen_newbins/Significance."+cat+".ICHEP2016.mH"+m+"_"+model+".txt"

              CMS_lumi.extraText2 = cat.replace("jet"," jet ")

            fitFile = open(fitfile)#"/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_clean/CMSSW_7_6_3/src/LatinoAnalysis/ShapeAnalysis/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/combine/Limit.Moriond2016.2jet.mH"+m+".txt")
	    sig = extract(fitFile)

            xcentral.append(float(m))
  	    xerr.append(0)
            ycentral.append(float(sig))


        c1 = makeCanvas("c1")
     
        CMS_lumi.extraText2 += model.replace("c","\nc'= ").replace("0","0.").replace("brn"," BR_{new} = ").replace("0.0.","0.0").replace("10.","1.0")

        graphcentral_mu = TGraph(len(xcentral),xcentral,ycentral)
        graphcentral_mu.SetLineStyle(1)
        graphcentral_mu.SetLineColor(kBlue)
        graphcentral_mu.SetMarkerStyle(20)
        graphcentral_mu.SetMarkerColor(kBlue)

        graphcentral_mu.SetTitle("")
        graphcentral_mu.GetYaxis().SetTitle("Significance (standard deviations)")
        graphcentral_mu.GetXaxis().SetTitle("M_{X} [GeV]")
        graphcentral_mu.GetXaxis().SetRangeUser(200,1000)
        graphcentral_mu.GetYaxis().SetRangeUser(0,5)

        graphcentral_mu.Draw("ALP")
        CMS_lumi.CMS_lumi(c1, 4, iPos)
        gPad.RedrawAxis()

        a=raw_input()

masses = ["200","210","230","250","300","350","400","450","500","550","600","650","700","750","800","900","1000"]
#masses = ["200","250","300","450","550","600","650","750","800","1000"]
model = "c10brn00"
cat = sys.argv[1]  ## "0j" or "1j" or "2j" or "01j" or "all"

plotSignificance(masses,model,cat)
