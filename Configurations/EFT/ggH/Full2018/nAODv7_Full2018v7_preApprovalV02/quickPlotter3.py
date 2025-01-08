#!/usr/bin/env python

import optparse
import os, sys
import CMS_lumi, tdrstyle
import numpy as np

# ROOT
import ROOT

def dubbed(tag):
    if tag == "ggH":
      return "ggF"
    elif tag == "varH0M":
      return "0-"
    elif tag == "varH0PH":
      return "0+"
    elif tag == "varH0L1":
      return "#Lambda1"     
    elif tag == "JHU":
      return "JHUGen"
    elif tag == "Powheg":
      return "Powheg+MiNLO"  
    else:
      return tag    

def convertTo2D(histo):
    binningY = np.array([12.,25.,40.,55.,70.,85.,100.])
    binningX = np.array([60.,70.,80.,90.,100.,110.,120.])
    histo2D = ROOT.TH2F("histo2D","histo2D",6,binningX,6,binningY)
    for iX in range(1,7):
        for iY in range(1,7):
            print("X"+str(iX)+":Y"+str(iY)+" "+str(histo.GetBinContent((iX-1)*6+iY))) 
            histo2D.SetBinContent(iX,iY,histo.GetBinContent((iX-1)*6+iY))

    return histo2D

if __name__ == '__main__':

    usage = 'usage: %prog [options]'
    parser = optparse.OptionParser(usage)
 
    parser.add_option('--outputDir'      , dest='outputDir'      , help='output directory'                               , default='./')
    parser.add_option('--inputFile'      , dest='inputFile'      , help='input file with histograms'                     , default='DEFAULT')
    parser.add_option('--plotConfig'     , dest='plotConfig'      , help='input file with plot config'                     , default='DEFAULT')
    parser.add_option('--plotLog'        , dest='plotLog'        , help='plot logaritmic'     , action='store_true'      , default=False)
    parser.add_option('--showIntegral'   , dest='showIntegral'   , help='show integral yields', action='store_true'      , default=False) 

    (opt, args) = parser.parse_args()

    #-------------------
    # CREATE OUTPUT DIR
    #-------------------
    if not os.path.isdir(os.getcwd()+"/"+opt.outputDir):
        os.mkdir(os.getcwd()+"/"+opt.outputDir,0755)
    
    #-------------------
    # LOAD SETTINGS
    #-------------------
    groups = { 'JHU' : ["H0PM","VBF_H0PM","ZH_H0PM","WH_H0PM"], 'Powheg' : ["ggH_hww","qqH_hww","WH_hww","ZH_hww","ggZH_hww"] }
    #groups = { 'JHU' : ["H0PM","VBF_H0PM","ZH_H0PM","WH_H0PM"] } 
    colors = { 'JHU' : ROOT.kRed, 'Powheg' : ROOT.kBlack}
    cuts = ["hww2l2v_13TeV_map_0j","hww2l2v_13TeV_map_1j"]
    variables = ['mth_map']
    trueVar = ["mth","m_{T}^{H} [GeV]","1D"]
    #trueVar = ["mll","m_{ll} [GeV]","1D"]
    #trueVar = ["mllVSmth","m_{ll} [GeV]:m_{T}^{H} [GeV]","2D"]
    plotType = "TwoGroupComp"
    norm = 1.

    plots2plot1D = {}
    for cut in cuts:
        plots2plot1D[cut] = {} 
        for var in variables:
            plots2plot1D[cut][var] = {}
            for group, samples in groups.items():
                plots2plot1D[cut][var][group] = {'samples' : samples, 'histos' : [], 'errors': [], 'xaxis' : trueVar[1], 'yaxis' : "a.u.", 'color' : colors[group]}

    #-----------------------
    # LOAD PLOTTING STYLE
    #-----------------------
         
    #-------------------
    # LOAD HISTOGRAMS
    #-------------------
    ROOT.gROOT.SetBatch(True)
    ROOT.TH1.SetDefaultSumw2(True)
    fInput = ROOT.TFile.Open(opt.inputFile,'READ')
    fInput.cd() 
    cutList = ROOT.gDirectory.GetListOfKeys()
    for cut in cutList:
        cutName = cut.GetName()
        if not cutName in cuts: continue
        cutObj = cut.ReadObj()
        cutObj.cd() 
        varList = ROOT.gDirectory.GetListOfKeys()
        for var in varList:
            varName = var.GetName()
            if varName not in variables: continue
            varObj = var.ReadObj()
            varObj.cd()
            templateList = ROOT.gDirectory.GetListOfKeys()
            for group, samples in groups.items():
                for sample in samples:
                    histoName = "histo_"+sample
                    for tpl in templateList:
                        tplName = tpl.GetName()
                        if tplName == histoName:
                            tplObj  = tpl.ReadObj()
                            tplClone = tplObj.Clone(tplObj.GetName())
                            tplCloneErr = tplObj.Clone(tplObj.GetName())
                            tplClone.SetDirectory(0)
                            tplCloneErr.SetDirectory(0)
                            plots2plot1D[cutName][varName][group]['histos'].append(tplClone) 
                            plots2plot1D[cutName][varName][group]['errors'].append(tplCloneErr) 
    fInput.Close()
     
                        
    #-----------------------
    # GLOBAL PLOT SETTINGS
    #-----------------------
    
    CMS_lumi.lumi_13TeV = "59.7 fb^{-1}"
    CMS_lumi.writeExtraText = 1
    CMS_lumi.extraText = "Preliminary"
    currentStyle = tdrstyle.setTDRStyle()
    if opt.plotLog:
        currentStyle.SetOptLogy(1)

    #-----------------------
    # FILL CANVAS
    #-----------------------
    canvasTag = trueVar[2]+plotType
    for cut in plots2plot1D.keys():
        for var in plots2plot1D[cut].keys():
            canvas = ROOT.TCanvas(canvasTag+"_"+cut+"_"+var)
            canvas.cd()
            #leg = ROOT.TLegend(0.45,0.7,0.9,0.9) #mll
            leg = ROOT.TLegend(0.48,0.7,0.93,0.9) #mth
            leg.SetNColumns(1) 
            ymax = 0.
            for group in plots2plot1D[cut][var].keys():
                #sum histos in groups an normalize
                histoSum = plots2plot1D[cut][var][group]['histos'][0]
                histoErr = plots2plot1D[cut][var][group]['errors'][0]  
                print(histoSum.GetName()+" "+str(histoSum.Integral()))
                for ih,histo in enumerate(plots2plot1D[cut][var][group]['histos']):
                    if ih > 0:
                        print(histo.GetName()+" "+str(histo.Integral()))
                        histoSum.Add(histo)
                        histoErr.Add(plots2plot1D[cut][var][group]['errors'][ih])
                histoSum.Scale(norm/histoSum.Integral())
                histoErr.Scale(norm/histoErr.Integral()) 
                histoSum.SetTitle("")
                histoSum.GetXaxis().SetTitle(plots2plot1D[cut][var][group]['xaxis'])
                histoSum.GetXaxis().SetTitleSize(0.050)
                histoSum.GetYaxis().SetTitle(plots2plot1D[cut][var][group]['yaxis'])
                histoSum.GetYaxis().SetTitleSize(0.045) 
                histoSum.SetLineColor(plots2plot1D[cut][var][group]['color']) 
                histoSum.SetLineStyle(1)
                histoSum.SetLineWidth(2)
               
                ymax = max(ymax, histoSum.GetBinContent(histoSum.GetMaximumBin()))
                histoSum.GetYaxis().SetRangeUser(0.,ymax*1.20)
                leg.AddEntry(histoSum, dubbed(group), "f" if group == "JHU" else "l")
                if group == "JHU":
                    histoSum.Draw("SAME HIST")
                    histoErr.SetFillStyle(3004)
                    histoErr.SetFillColor(plots2plot1D[cut][var][group]['color']) 
                    histoErr.Draw("SAME E2")
                else:
                    histoSum.Draw("SAME")

            leg.Draw("SAME")           
            CMS_lumi.CMS_lumi(canvas, 4, 0)
            canvas.Print(opt.outputDir+"/"+canvasTag+"_"+cut+"_"+var+".png")  
            canvas.Print(opt.outputDir+"/"+canvasTag+"_"+cut+"_"+var+".pdf")
    
    
