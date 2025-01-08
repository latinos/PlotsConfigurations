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
    samples = ['ggH','WH']#['ggH','VBF','WH','ZH']
    colors = [ROOT.kRed, ROOT.kBlack] 
    cuts = ["hww2l2v_13TeV_map_0j","hww2l2v_13TeV_map_1j"]
    variables = ['varH0M','varH0PH','varH0L1']
    trueVar = ["mll","m_{ll} [GeV]","1D"]
    #trueVar = ["mllVSmth","m_{ll} [GeV]:m_{T}^{H} [GeV]","2D"]
    plotType = "all" #SM,BSM,all
    norm = 1.

    plots2plot1D = {}
    plots2plot2D = {}
    for cut in cuts:
        if trueVar[2] == "1D":
            plots2plot1D[cut] = {} 
        elif trueVar[2] == "2D":
            plots2plot2D[cut] = {}
        for var in variables:
            if trueVar[2] == "1D":
                plots2plot1D[cut][var] = {'samples' : samples, 'histosSM' : [], 'histosBSM' : [], 'xaxis' : trueVar[1], 'yaxis' : "a.u.", 'colors' : colors}
            elif trueVar[2] == "2D":
                plots2plot2D[cut][var] = {'samples' : samples, 'histos' : [], 'xaxis' : trueVar[1].split(":")[1], 'yaxis' : trueVar[1].split(":")[0]} 

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
            for sample in samples: 
                histoName = "histo_"+sample
                for tpl in templateList:
                    tplName = tpl.GetName()
                    _sample = tplName.split("_")[1]
                    _tpl    = tplName.split("_")[2]
                    if _sample not in histoName: continue
                    if plotType == "SM" and _tpl != "T1": continue
                    if plotType == "BSM" and ((_tpl != "T3" and _sample == "ggH") or (_tpl != "T5" and _sample != "ggH")) : continue
                    if plotType == "all":
                        if _tpl != "T1" and ((_tpl != "T3" and _sample == "ggH") or (_tpl != "T5" and _sample != "ggH")): continue
                    tplObj  = tpl.ReadObj()
                    tplClone = tplObj.Clone(tplObj.GetName())
                    tplClone.SetDirectory(0)
                    if trueVar[2] == "1D":
                        if plotType == "SM":  
                            plots2plot1D[cutName][varName]['histosSM'].append(tplClone)
                        if plotType == "BSM": 
                            plots2plot1D[cutName][varName]['histosBSM'].append(tplClone)
                        if plotType == "all":
                            if _tpl == "T1": plots2plot1D[cutName][varName]['histosSM'].append(tplClone)
                            else: plots2plot1D[cutName][varName]['histosBSM'].append(tplClone)   
                    elif trueVar[2] == "2D": 
                        plots2plot2D[cutName][varName]['histos'].append(tplClone)

     
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
            leg = ROOT.TLegend(0.45,0.7,0.9,0.9) #mll
            leg.SetNColumns(2) 
            ymax = 0.
            for ihist,histoSM in enumerate(plots2plot1D[cut][var]['histosSM']):
                histoSM.Scale(norm/histoSM.Integral())  
                histoSM.ResetAttFill()
                histoSM.SetTitle("")
                histoSM.GetXaxis().SetTitle(plots2plot1D[cut][var]['xaxis'])
                histoSM.GetXaxis().SetTitleSize(0.050)
                histoSM.GetYaxis().SetTitle(plots2plot1D[cut][var]['yaxis'])
                histoSM.GetYaxis().SetTitleSize(0.045) 
                histoSM.SetLineColor(plots2plot1D[cut][var]['colors'][ihist]) 
                histoSM.SetLineStyle(1)
                histoSM.SetLineWidth(2)
                ymax = max(ymax, histoSM.GetBinContent(histoSM.GetMaximumBin()))
                histoSM.GetYaxis().SetRangeUser(0.,ymax*1.20)
                leg.AddEntry(histoSM,dubbed(plots2plot1D[cut][var]['samples'][ihist])+" (SM)","l")  
                print(histoSM.GetName())
                histoSM.Draw("SAME")
            for ihist,histoBSM in enumerate(plots2plot1D[cut][var]['histosBSM']):
                histoBSM.Scale(norm/histoBSM.Integral()) 
                histoBSM.ResetAttFill()
                histoBSM.SetTitle("")
                histoBSM.GetXaxis().SetTitle(plots2plot1D[cut][var]['xaxis'])
                histoBSM.GetXaxis().SetTitleSize(0.050)
                histoBSM.GetYaxis().SetTitle(plots2plot1D[cut][var]['yaxis'])
                histoBSM.GetYaxis().SetTitleSize(0.045)
                histoBSM.SetLineColor(plots2plot1D[cut][var]['colors'][ihist])
                histoBSM.SetLineStyle(2)
                histoBSM.SetLineWidth(2)   
                ymax = max(ymax, histoBSM.GetBinContent(histoBSM.GetMaximumBin()))     
                histoBSM.GetYaxis().SetRangeUser(0.,ymax*1.20)              
                leg.AddEntry(histoBSM,dubbed(plots2plot1D[cut][var]['samples'][ihist])+" ("+dubbed(var)+")","l")        
                print(histoBSM.GetName())
                histoBSM.Draw("SAME")

            leg.Draw("SAME")           
            CMS_lumi.CMS_lumi(canvas, 4, 0)
            canvas.Print(opt.outputDir+"/"+canvasTag+"_"+cut+"_"+var+".png")  
            canvas.Print(opt.outputDir+"/"+canvasTag+"_"+cut+"_"+var+".pdf")
    
    for cut in plots2plot2D.keys():
        for var in plots2plot2D[cut].keys():
            canvas = ROOT.TCanvas(canvasTag+"_"+cut+"_"+var)
            canvas.cd()
            for ihist,histo in enumerate(plots2plot2D[cut][var]['histos']):
                histo2D = convertTo2D(histo)
                histo2D.GetXaxis().SetTitle(plots2plot2D[cut][var]['xaxis'])
                histo2D.GetXaxis().SetTitleSize(0.050)
                histo2D.GetYaxis().SetTitle(plots2plot2D[cut][var]['yaxis'])
                histo2D.GetYaxis().SetTitleSize(0.045)
                histo2D.GetZaxis().SetTitle("Events")
                histo2D.GetZaxis().SetTitleSize(0.045)
                currentStyle.SetTitleYOffset(1.40)   
                stops = [ 0.00, 0.12, 0.33, 0.44, 0.66, 0.88 ]
                red = [ 0.00, 0.00, 0.00, 1.00, 0.87, 0.88 ]
                green = [ 0.00, 0.81, 1.00, 1.00, 1.00, 0.00 ]
                blue = [ 0.88, 1.00, 0.00, 0.00, 0.00, 0.00 ]
                stops = np.array(stops)
                red = np.array(red)
                green = np.array(green)
                blue = np.array(blue)
                nb= 99
                histo2D.SetContour(nb)
                ROOT.TColor.CreateGradientColorTable(6,stops,red,green,blue,nb)
                histo2D.Draw("COLZ")

            CMS_lumi.CMS_lumi(canvas, 4, 0)
            canvas.Print(opt.outputDir+"/"+canvasTag+"_"+cut+"_"+var+".png")
            canvas.Print(opt.outputDir+"/"+canvasTag+"_"+cut+"_"+var+".pdf")    
    
