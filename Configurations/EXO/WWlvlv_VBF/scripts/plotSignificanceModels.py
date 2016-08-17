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


def extract(file,doPValue):
  for line in file:
    if "Significance" in line:
      res = line.split()
      significance = res[1]
    if "p-value" in line:
      res = line.split()
      pvalue = res[2][:-1]

  if doPValue:
    return pvalue 
  else:
    return significance


def plotSignificance(masses,models,cat="all",doUnblind=False,doPValue=True):

        directory = "/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_highmass/CMSSW_8_0_5/src/LatinoAnalysis/ShapeAnalysis/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/2015/combine2015_nocprime/"

        leg1 = TLegend(0.6, 0.65, 0.9, 0.9)
        leg1.SetBorderSize(0)
        leg1.SetFillStyle(0)

	xcentral = array("d") # masses
        ycentral = array("d") # limits
        obseved = array("d")
	xerr = array("d")

        c1 = makeCanvas("c1")
        c1.cd()
        mg = TMultiGraph()

        count = 0
        for model in models:
            count += 1
            xcentral = array("d") # masses
            ycentral = array("d") # limits
            observed = array("d")
            xerr = array("d")

#            modelName = model.replace("c","c'= ").replace("0","0.").replace("brn"," BR_{new} = ").replace("0.0.","0.0").replace("10.","1.0")
#            modelName = model.replace("brn00","").replace("c","c'= ").replace("0","0.").replace("10.","1.0")

            cp2 = float(model[1]+"."+model[2])
            gamma = str(cp2*cp2)

            if gamma == "1.0":
              modelName = "#Gamma = #Gamma_{SM}"
            else:
              modelName = "#Gamma = "+gamma+" * #Gamma_{SM}" 


            if cat=="all":
              CMS_lumi.extraText2 = "0+1+2 jets "
            else:
              CMS_lumi.extraText2 = cat.replace("jet"," jet ")
 
            for m in masses:

		    if cat=="all":
		      fitfile = directory+"Significance.ICHEP2016.mH"+m+"_"+model+".txt"
                      fitfileObs = directory+"Significance.ICHEP2016.unblind.mH"+m+"_"+model+".txt"
		    else:
		      fitfile = directory+"Significance."+cat+".ICHEP2016.mH"+m+"_"+model+".txt"
                      fitfileObs = directory+"Significance."+cat+".ICHEP2016.unblind.mH"+m+"_"+model+".txt"

		    fitFile = open(fitfile)#"/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_clean/CMSSW_7_6_3/src/LatinoAnalysis/ShapeAnalysis/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/combine/Limit.Moriond2016.2jet.mH"+m+".txt")
		    sig = extract(fitFile,doPValue)
                    fitFile.close()

                    fitFileObs = open(fitfileObs)
                    print fitFileObs
                    sigObs = extract(fitFileObs,doPValue)
                    fitFileObs.close()

		    xcentral.append(float(m))
		    xerr.append(0)
		    ycentral.append(float(sig))
                    observed.append(float(sigObs))
                    print m, sigObs


            graph = TGraph(len(xcentral),xcentral,ycentral)
            graphObs = TGraph(len(xcentral),xcentral,observed)
            graph.SetLineStyle(2)
            graphObs.SetLineStyle(1)
            graph.SetLineWidth(2)
            graphObs.SetLineWidth(2)
            graph.SetLineColor(kBlue-2*count)
            graphObs.SetLineColor(kBlue -2*count)

#            leg1.AddEntry(graph,modelName+" Expected","l")
            leg1.AddEntry(graphObs,modelName,"l")
#            mg.Add(graph,"l")
            if doUnblind: mg.Add(graphObs,"l")


        mg.Draw("A")
        mg.GetYaxis().SetTitle("Significance (standard deviations)")
        mg.GetXaxis().SetTitle("M_{X} [GeV]")
        mg.GetXaxis().SetRangeUser(200,1000)
        if doPValue:
          gPad.SetLogy()
          mg.GetYaxis().SetTitle("p-value")
          mg.GetYaxis().SetRangeUser(0.001,2)
        else:
          mg.GetYaxis().SetRangeUser(0,4)
        leg1.Draw()
        CMS_lumi.CMS_lumi(c1, 4, iPos)
        gPad.RedrawAxis()

        a=raw_input()

#models = ["c07brn00"]
models = ["c01brn00","c03brn00","c05brn00","c07brn00","c10brn00"]
masses = ["200","210","230","250","300","350","400","450","500","550","600","650","700","750","800","900","1000"]
#masses = ["200","250","300","450","550","600","650","750","800","1000"]
cat = sys.argv[1]  ## "0j" or "1j" or "2j" or "01j" or "all"
unblind=True
pvalue=True

plotSignificance(masses,models,cat,unblind,pvalue)
