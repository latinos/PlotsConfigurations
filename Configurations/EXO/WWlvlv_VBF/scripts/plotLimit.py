from ROOT import *
from array import *


def extract(file):
  expLimit = {}
  for line in file:
    if "Expected" in line:
      res = line.split()
      expLimit[res[1].replace('%:','')] = res[4]

  return expLimit


def getXsec(mass,process):
  
  if process=="ggH":

    rootFile = TFile("eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_GluGluHToWWTo2L2Nu_M"+mass+".root")
    latino = rootFile.Get("latino")
    htemp = TH1F("htemp","htemp",1,0,1)
    latino.Draw("Xsec>>htemp")

    return htemp.GetMean()

  elif process=="VBF":

    rootFile = TFile("eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_VBFHToWWTo2L2Nu_M"+mass+".root")
    latino = rootFile.Get("latino")
    htemp = TH1F("htemp","htemp",1,0,1)
    latino.Draw("Xsec>>htemp")
    
    return htemp.GetMean()
    

def plotLimit(mass,option="mu"):

	xcentral = array("d") # masses
	ycentral = array("d") # limits
        ycentral_ggH = array("d")
        ycentral_VBF = array("d")
	xerr = array("d")
	up1s = array("d")
        up1s_ggH = array("d")
        up1s_VBF = array("d")
	down1s = array("d")
        down1s_ggH = array("d")
        down1s_VBF = array("d")
	up2s = array("d")
        up2s_ggH = array("d")
        up2s_VBF = array("d")
	down2s = array("d")
        down2s_ggH = array("d")
        down2s_VBF = array("d")


        if option=="mu":

  	  for m in masses:

	    fitFile = open("/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_clean/CMSSW_7_6_3/src/LatinoAnalysis/ShapeAnalysis/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/combine/Limit.Moriond2016.v1.txt.pruned.mH"+m+".txt")
	    expLimit = extract(fitFile)

            xcentral.append(float(m))
  	    xerr.append(0)
	    ycentral.append( float(expLimit['50.0']) )
            down1s.append( float(expLimit['50.0'])-float(expLimit['16.0']) )
	    up1s.append( float(expLimit['84.0'])-float(expLimit['50.0']) )
	    down2s.append( float(expLimit['50.0'])-float(expLimit['2.5']) )
	    up2s.append( float(expLimit['97.5'])-float(expLimit['50.0']) )

  	  c = TCanvas()
	  c.cd()
	  c.SetTicky()
	  c.SetTickx()

	  graphcentral = TGraph(len(xcentral),xcentral,ycentral)
	  graphcentral.SetLineStyle(2)

	  graph2s = TGraphAsymmErrors(len(xcentral),xcentral,ycentral,xerr,xerr,down2s,up2s)
	  graph2s.SetFillColor(kYellow)
	  graph2s.SetTitle("")
	  graph2s.GetYaxis().SetTitle("95% CL limit on #sigma/#sigma_{SM}")
	  graph2s.GetXaxis().SetTitle("M_{X} [GeV]")
	  graph2s.GetXaxis().SetRangeUser(300,1000)

	  graph1s = TGraphAsymmErrors(len(xcentral),xcentral,ycentral,xerr,xerr,down1s,up1s)
	  graph1s.SetFillColor(kGreen)

	  graph2s.Draw("A3")
	  graph1s.Draw("3 same")
	  graphcentral.Draw("L same")

	  gPad.RedrawAxis()


	elif option=="xsec":

          for m in masses:

            fitFile = open("/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_clean/CMSSW_7_6_3/src/LatinoAnalysis/ShapeAnalysis/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/combine/Limit.Moriond2016.v1.txt.pruned.mH"+m+".txt")
            expLimit = extract(fitFile)
       
            xsec_ggH = getXsec(m,"ggH")
            xsec_VBF = getXsec(m,"VBF")
       
            print "Mass: ", m
            print "ggH xsec(pb) = ", xsec_ggH
            print "VBF xsec(pb) = ", xsec_VBF
   
            xcentral.append(float(m))
            xerr.append(0)

            ## draw ggH xsec limits
            ycentral_ggH.append( float(expLimit['50.0'])*xsec_ggH )
            down1s_ggH.append( (float(expLimit['50.0'])-float(expLimit['16.0']))*xsec_ggH )
            up1s_ggH.append( (float(expLimit['84.0'])-float(expLimit['50.0']))*xsec_ggH )
            down2s_ggH.append( (float(expLimit['50.0'])-float(expLimit['2.5']))*xsec_ggH )
            up2s_ggH.append( (float(expLimit['97.5'])-float(expLimit['50.0']))*xsec_ggH )

            ## draw VBF xsec limits
            ycentral_VBF.append( float(expLimit['50.0'])*xsec_VBF )
            down1s_VBF.append( (float(expLimit['50.0'])-float(expLimit['16.0']))*xsec_VBF )
            up1s_VBF.append( (float(expLimit['84.0'])-float(expLimit['50.0']))*xsec_VBF )
            down2s_VBF.append( (float(expLimit['50.0'])-float(expLimit['2.5']))*xsec_VBF )
            up2s_VBF.append( (float(expLimit['97.5'])-float(expLimit['50.0']))*xsec_VBF )

          c1 = TCanvas()
          c1.cd()
          c1.SetTicky()
          c1.SetTickx()

          graphcentral_ggH = TGraph(len(xcentral),xcentral,ycentral_ggH)
          graphcentral_ggH.SetLineStyle(2)

          graph2s_ggH = TGraphAsymmErrors(len(xcentral),xcentral,ycentral_ggH,xerr,xerr,down2s_ggH,up2s_ggH)
          graph2s_ggH.SetFillColor(kYellow)
          graph2s_ggH.SetTitle("")
          graph2s_ggH.GetYaxis().SetTitle("95% CL limit on #sigma(gg #rightarrow X) [pb]")
          graph2s_ggH.GetXaxis().SetTitle("M_{X} [GeV]")
          graph2s_ggH.GetXaxis().SetRangeUser(300,1000)

          graph1s_ggH = TGraphAsymmErrors(len(xcentral),xcentral,ycentral_ggH,xerr,xerr,down1s_ggH,up1s_ggH)
          graph1s_ggH.SetFillColor(kGreen)

          graph2s_ggH.Draw("A3")
          graph1s_ggH.Draw("3 same")
          graphcentral_ggH.Draw("L same")

          gPad.RedrawAxis()

          c2 = TCanvas()
          c2.cd()
          c2.SetTicky()
          c2.SetTickx()

          graphcentral_VBF = TGraph(len(xcentral),xcentral,ycentral_VBF)
          graphcentral_VBF.SetLineStyle(2)

          graph2s_VBF = TGraphAsymmErrors(len(xcentral),xcentral,ycentral_VBF,xerr,xerr,down2s_VBF,up2s_VBF)
          graph2s_VBF.SetFillColor(kYellow)
          graph2s_VBF.SetTitle("")
          graph2s_VBF.GetYaxis().SetTitle("95% CL limit on #sigma(gg #rightarrow X) [pb]")
          graph2s_VBF.GetXaxis().SetTitle("M_{X} [GeV]")
          graph2s_VBF.GetXaxis().SetRangeUser(300,1000)

          graph1s_VBF = TGraphAsymmErrors(len(xcentral),xcentral,ycentral_VBF,xerr,xerr,down1s_VBF,up1s_VBF)
          graph1s_VBF.SetFillColor(kGreen)


          graph2s_VBF.Draw("A3")
          graph1s_VBF.Draw("3 same")
          graphcentral_VBF.Draw("L same")

          gPad.RedrawAxis()


	a=raw_input()



masses = ["300","650","750","800","900","1000"]

plotLimit(masses,"xsec")
