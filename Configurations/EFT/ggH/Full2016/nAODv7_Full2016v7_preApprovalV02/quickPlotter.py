#!/usr/bin/env python

import optparse
import os, sys
import array
import CMS_lumi, tdrstyle
from decimal import Decimal

# ROOT
import ROOT

def isTemplate(tplName, tplList):
    for tpl in tplList:
        if tplName == "histo_"+tpl: return True
    return False        

if __name__ == '__main__':

    usage = 'usage: %prog [options]'
    parser = optparse.OptionParser(usage)
 
    parser.add_option('--type'           , dest='type'           , help='Plot type = sigOnly, sigAndBkg, sigAndInt, all' , default='sigOnly' )
    parser.add_option('--bsm'            , dest='bsm'            , help='BSM signal name = H0L1, H0M, H0PH'              , default='H0PH' )
    parser.add_option('--sm'             , dest='sm'             , help='SM  signal name'                                , default='H0PM' )
    parser.add_option('--var'            , dest='var'            , help='Define plotted var'                             , default='' ) 
    parser.add_option('--nuis'           , dest='nuis'           , help='Plot this nuisance instead nominal'             , default='' )
    parser.add_option('--outputDir'      , dest='outputDir'      , help='output directory'                               , default='./')
    parser.add_option('--inputFile'      , dest='inputFile'      , help='input file with histograms'                     , default='DEFAULT')
    parser.add_option('--onlyCut'        , dest='onlyCut'        , help='plot only this cut'                             , default=None)
    parser.add_option('--plotLog'        , dest='plotLog'        , help='plot logaritmic'     , action='store_true'      , default=False)
    parser.add_option('--doNotStackSignal', dest='doNotStackSignal', help='plot signal unstacked'     , action='store_true', default=False)
    parser.add_option('--showIntegral'   , dest='showIntegral'   , help='show integral yields', action='store_true'      , default=False) 
    parser.add_option('--unblind'        , dest='unblind'        , help='unblind data' ,    action='store_true'          , default=False) 

    (opt, args) = parser.parse_args()

    #-------------------- 
    # SANITY CHECKS
    #--------------------
    if opt.inputFile != "DEFAULT" and opt.type in ['sigOnly','sigAndBkg','all']:
        print " inputFile      =          ", opt.inputFile
    else:
        print "No input found."
        sys.exit(0)

    if opt.outputDir == "" or opt.outputDir == "./":
        opt.outputDir = "./plots_"+opt.bsm+"_"+(opt.inputFile.split("/")[-1]).replace(".root","")
    print "Output will be saved to: "+str(opt.outputDir)

    if opt.bsm == "":
        print "Specify alternative signal."
        sys.exit(0)
    if opt.sm == "":
        print "Specify main SM signal."
        sys.exit(0) 

    if opt.var == "":
        if len(opt.inputFile.split("/")) >= 2:
            opt.var = opt.inputFile.split("/")[-2]
        else:
            print "Define plotted var."
            sys.exit(0)      

    #-------------------
    # CREATE OUTPUT DIR
    #-------------------
    if not os.path.isdir(os.getcwd()+"/"+opt.outputDir):
        os.mkdir(os.getcwd()+"/"+opt.outputDir,0755)
    
    #-------------------
    # LOAD SAMPLE NAMES
    #-------------------
    import samples_ggH_allSignals_preAppV02_ana as samplesCfg
    samples = []
    for isample in samplesCfg.samples.keys():
        if 'subsamples' in samplesCfg.samples[isample].keys():
            for sub in samplesCfg.samples[isample]['subsamples'].keys():
                samples.append(isample+"_"+sub)
        else:
            samples.append(isample)
    bsmLabels = {'H0PH' : "0^{+}_{h}", 'H0M' : "0^{-}", 'H0L1' : "0^{+}_{#Lambda1}" }

    signalSM     = [ sample for sample in samples if "T1" in sample ]
    signalAC     = [ sample for sample in samples if ( ("ggH" in sample and "T3" in sample) or ("T5" in sample) )]
    inter        = {}
    inter['all'] = [ sample for sample in samples if "T2" in sample or ("ggH" not in sample and "T3" in sample) or "T4" in sample]
    inter['T2']  = [ sample for sample in inter['all'] if "T2" in sample ]
    inter['T3']  = [ sample for sample in inter['all'] if "T3" in sample ]
    inter['T4']  = [ sample for sample in inter['all'] if "T4" in sample ]
    background   = [ sample for sample in samples if "Dyveto" not in sample and sample not in signalSM and sample not in signalAC and sample not in inter['all'] and "DATA" not in sample ]
    data = ['DATA']
       
    #-----------------------
    # LOAD PLOTTING STYLE
    #-----------------------
    import plot_ggH_allSignals_forSRs_ana as plotCfg
    groupPlots = plotCfg.groupPlot
    plotInfo = plotCfg.legend
    formatStyle = { '1' : "({:.1f})", '2' : "({:.2f})", '3' : "({:.3f})", 'e' : "({:.1e})"}
    if 'SM' in groupPlots.keys():
        if len(groupPlots['SM']['samples']) != 0:
            _signalSM = [] 
            for sampleToInclude in groupPlots['SM']['samples']:
                if sampleToInclude in signalSM:
                    _signalSM.append(sampleToInclude)
                else:
                    print("Sample "+sampleToInclude+" is not SM!")
            for sample in signalSM:
                if sample not in _signalSM: 
                   print("SM sample "+sample+" ignored for plotting. Adjust plot_ggH_allSignals_forSRs_ana to change this.") 
            signalSM = _signalSM
    if 'BSM' in groupPlots.keys():
        if len(groupPlots['BSM']['samples']) != 0:
            _signalAC = []
            for sampleToInclude in groupPlots['BSM']['samples']:
                if sampleToInclude in signalAC:
                    _signalAC.append(sampleToInclude)
                else:
                    print("Sample "+sampleToInclude+" is not pure BSM!")
            for sample in signalAC:
                if sample not in _signalAC:
                   print("BSM sample "+sample+" ignored for plotting. Adjust plot_ggH_allSignals_forSRs_ana.py to change this.")
            signalAC = _signalAC
    _inter = {}
    for intTplName in ['T2','T3','T4']:
        if intTplName in groupPlots.keys():
            if len(groupPlots[intTplName]['samples']) != 0:
                _inter[intTplName] = []
                for sampleToInclude in groupPlots[intTplName]['samples']:
                    if sampleToInclude in inter[intTplName]:
                        _inter[intTplName].append(sampleToInclude)
                    else:
                        print("Sample "+sampleToInclude+" is not interference template!")
                for sample in inter[intTplName]:
                    if sample not in _inter:
                        print("INT sample "+sample+" ignored for plotting. Adjust plot_ggH_allSignals_forSRs_ana.py to change this.")
    inter = _inter

    print signalSM
    print signalAC
    for intTplName in inter.keys():
        if intTplName != "all":
            print inter[intTplName]
    print background
         
    #-------------------
    # LOAD HISTOGRAMS
    #-------------------
    ROOT.gROOT.SetBatch(True)
    ROOT.TH1.SetDefaultSumw2(True)
    fInput = ROOT.TFile.Open(opt.inputFile,'READ')
    fInput.cd() 
    catList = ROOT.gDirectory.GetListOfKeys()
    histDict = {}
    styleDict = {}
    maxYSignal = {}
    maxYInt = {}
    maxYSigBkg = {}
    maxYAll = {}
    for cat in catList:
        catName = cat.GetName() 
        if opt.onlyCut is not None:
            if catName != opt.onlyCut: continue 
        histDict[catName] = {}
        styleDict[catName] = {}
        catObj = cat.ReadObj()  
        catObj.cd() 
        varList = ROOT.gDirectory.GetListOfKeys()
        for var in varList:
            varName = var.GetName()
            if opt.bsm not in varName: continue
            varObj = var.ReadObj()
            varObj.cd()
            templateList = ROOT.gDirectory.GetListOfKeys()
            for tpl in templateList:
                tplName = tpl.GetName()
                tplObj  = tpl.ReadObj()
                #SM 
                if 'SM' not in histDict[catName] and isTemplate(tplName,signalSM):
                    tplClone = tplObj.Clone(tplObj.GetName())
                    tplClone.SetDirectory(0)
                    tplClone.SetName("SM")
                    tplClone.Scale(float(groupPlots['SM']['scale']))
                    histDict[catName]['SM'] = tplClone 
                    #style
                    for groupPlotKey in groupPlots.keys():
                        if groupPlotKey == "SM":
                            if groupPlots['SM']['scale'] > 1.0:
                              tagScaled = " SCALED"
                            else:
                              tagScaled = ""
                            print(groupPlotKey+" === "+tplObj.GetName().replace("histo_","")+tagScaled) 
                            styleDict[catName]['SM'] = {}
                            styleDict[catName]['SM']['color'] = groupPlots[groupPlotKey]['color']
                            styleDict[catName]['SM']['line'] = 1 
                            styleDict[catName]['SM']['legend'] = groupPlots[groupPlotKey]['nameHR']
                            styleDict[catName]['SM']['yield'] = histDict[catName]['SM'].Integral()
                elif 'SM' in histDict[catName] and isTemplate(tplName,signalSM): 
                    if groupPlots['SM']['scale'] > 1.0:
                      tagScaled = " SCALED"
                    else:
                      tagScaled = "" 
                    print("SM --> "+tplObj.GetName().replace("histo_","")+tagScaled) 
                    tplClone = tplObj.Clone(tplObj.GetName())
                    tplClone.SetDirectory(0)
                    tplClone.Scale(float(groupPlots['SM']['scale'])) 
                    styleDict[catName]['SM']['yield'] += tplClone.Integral()
                    histDict[catName]['SM'].Add(tplClone)

                #AC
                if opt.bsm not in histDict[catName] and isTemplate(tplName,signalAC):  
                    tplClone = tplObj.Clone(tplObj.GetName())
                    tplClone.SetDirectory(0)
                    tplClone.SetName(opt.bsm)
                    tplClone.Scale(float(groupPlots['BSM']['scale']))
                    histDict[catName][opt.bsm] = tplClone
                    #style
                    for groupPlotKey in groupPlots.keys():
                        if groupPlotKey == "BSM":
                            if groupPlots['BSM']['scale'] > 1.0:
                              tagScaled = " SCALED"
                            else:
                              tagScaled = ""
                            print(groupPlotKey+" === "+tplObj.GetName().replace("histo_","")+tagScaled)
                            styleDict[catName][opt.bsm] = {}
                            styleDict[catName][opt.bsm]['color'] = groupPlots[groupPlotKey]['color']
                            styleDict[catName][opt.bsm]['line'] = 7
                            styleDict[catName][opt.bsm]['legend'] = bsmLabels[opt.bsm]+" "+groupPlots[groupPlotKey]['nameHR']
                            styleDict[catName][opt.bsm]['yield'] = histDict[catName][opt.bsm].Integral()
                elif opt.bsm in histDict[catName] and isTemplate(tplName,signalAC):
                    if groupPlots['BSM']['scale'] > 1.0:
                      tagScaled = " SCALED"
                    else:
                      tagScaled = ""  
                    print("BSM --> "+tplObj.GetName().replace("histo_","")+tagScaled)    
                    tplClone = tplObj.Clone(tplObj.GetName())
                    tplClone.SetDirectory(0)
                    tplClone.Scale(float(groupPlots['BSM']['scale']))
                    styleDict[catName][opt.bsm]['yield'] += tplClone.Integral() 
                    histDict[catName][opt.bsm].Add(tplClone)

                #INT T2-T4
                for intTplName in inter.keys():
                    if intTplName not in histDict[catName] and isTemplate(tplName,inter[intTplName]):
                        tplClone = tplObj.Clone(tplObj.GetName())
                        tplClone.SetDirectory(0)
                        tplClone.SetName(intTplName)
                        histDict[catName][intTplName] = tplClone
                        #style
                        for groupPlotKey in groupPlots.keys():
                            if groupPlotKey == intTplName:
                                print(groupPlotKey+" === "+tplObj.GetName().replace("histo_",""))
                                styleDict[catName][intTplName] = {}
                                styleDict[catName][intTplName]['color'] = groupPlots[groupPlotKey]['color']
                                styleDict[catName][intTplName]['line'] = 8
                                styleDict[catName][intTplName]['legend'] = bsmLabels[opt.bsm]+" "+groupPlots[groupPlotKey]['nameHR']
                                styleDict[catName][intTplName]['yield'] = histDict[catName][intTplName].Integral()
                    elif intTplName in histDict[catName] and isTemplate(tplName,inter[intTplName]):
                        print(intTplName+" --> "+tplObj.GetName().replace("histo_",""))
                        tplClone = tplObj.Clone(tplObj.GetName())
                        tplClone.SetDirectory(0)
                        styleDict[catName][intTplName]['yield'] += tplClone.Integral()
                        histDict[catName][intTplName].Add(tplClone)

                #BKG
                if 'BKG' not in histDict[catName] and isTemplate(tplName,background):
                    histDict[catName]['BKG'] = {}
                    styleDict[catName]['BKG'] = {}
                if isTemplate(tplName,background):
                    tplClone = tplObj.Clone(tplObj.GetName())
                    tplClone.SetDirectory(0)
                  
                    #BKG regrouping  
                    for groupPlotKey in groupPlots.keys():
                        if groupPlotKey != "SM" and groupPlotKey != "BSM":
                            if tplObj.GetName().replace("histo_","") not in groupPlots[groupPlotKey]['samples']: continue
                            if groupPlotKey not in histDict[catName]['BKG'].keys():
                                histDict[catName]['BKG'][groupPlotKey] = tplClone
                                print(groupPlotKey+" === "+tplObj.GetName().replace("histo_",""))
                                #style
                                styleDict[catName]['BKG'][groupPlotKey] = { 'color'  : groupPlots[groupPlotKey]['color'],
                                                                            'legend' : groupPlots[groupPlotKey]['nameHR'],
                                                                            'yield'  : histDict[catName]['BKG'][groupPlotKey].Integral()
                                                                          }
                            else:
                                histDict[catName]['BKG'][groupPlotKey].Add(tplClone)
                                print(groupPlotKey+" --> "+tplObj.GetName().replace("histo_",""))
                                #style
                                styleDict[catName]['BKG'][groupPlotKey]['yield'] += tplClone.Integral() 
     
    fInput.Close()
     
    for cat in histDict.keys():
        print cat+" SM  = "+str(histDict[cat]['SM'].GetName())+" ("+str(histDict[cat]['SM'].Integral())+")"
        print cat+" BSM = "+str(histDict[cat][opt.bsm].GetName())+" ("+str(histDict[cat][opt.bsm].Integral())+")"
        maxYInt[cat] = 0.0 
        for intTplName in ['T2','T3','T4']:
             if intTplName not in histDict[cat]: continue
             print cat+" "+intTplName+" = "+str(histDict[cat][intTplName].GetName())+" ("+str(histDict[cat][intTplName].Integral())+")"
             maxYInt[cat] = max(maxYInt[cat], histDict[cat][intTplName].GetBinContent(histDict[cat][intTplName].GetMaximumBin()))    
        maxYSignal[cat] = max(histDict[cat]['SM'].GetBinContent(histDict[cat]['SM'].GetMaximumBin()),histDict[cat][opt.bsm].GetBinContent(histDict[cat][opt.bsm].GetMaximumBin()))
        maxYSigBkg[cat] = maxYSignal[cat]  
        for bkg in histDict[cat]['BKG'].keys():
            print cat+" BKG = "+str(bkg)+" ("+str(histDict[cat]['BKG'][bkg].Integral())+")"
            maxYSigBkg[cat] = max(maxYSigBkg[cat], histDict[cat]['BKG'][bkg].GetBinContent(histDict[cat]['BKG'][bkg].GetMaximumBin()))
        maxYAll[cat] = max(maxYSigBkg[cat],maxYInt[cat])  
                        
    #-----------------------
    # GLOBAL PLOT SETTINGS
    #-----------------------
    
    CMS_lumi.lumi_13TeV = plotInfo['lumi']
    CMS_lumi.writeExtraText = 1
    CMS_lumi.extraText = "Preliminary"
    currentStyle = tdrstyle.setTDRStyle()
    if opt.plotLog:
        currentStyle.SetOptLogy(1)

    #-----------------------
    # FILL CANVAS
    #-----------------------
    if opt.type == "sigOnly":
        canvasTag = "signals_"+opt.bsm
    elif opt.type == "sigAndBkg": 
        canvasTag = "sigbkg_"+opt.bsm
    elif opt.type == "all":
        canvasTag = "sigintbkg_"+opt.bsm
    if opt.plotLog:
        canvasTag = "log_"+canvasTag 
    if "mllvsmth" in opt.var.lower():
        varTag = { '1D' : "m_{ll} vs. m_{T}^{H}", '2D' : "m_{ll}:m_{T}^{H}"}
    elif "mll" in opt.var:
        varTag = { '1D' : "m_{ll}" }
    elif "mth" in opt.var:
        varTag = { '1D' : "m_{T}^{H}" } 

    for catName in histDict.keys(): 
        canvas = ROOT.TCanvas(canvasTag+"_"+catName+"_"+opt.var)
        canvas.cd()
        if opt.var == "mll":
            leg = ROOT.TLegend(0.15,maxYSignal[catName]/(1.60*maxYSignal[catName]),0.9,0.9) #mll
            leg.SetNColumns(3)
        elif opt.var == "mth":
            leg = ROOT.TLegend(0.15,maxYSignal[catName]/(1.60*maxYSignal[catName]),0.9,0.9) #mth        
            leg.SetNColumns(3)
        else:
            leg = ROOT.TLegend(0.15,0.6,0.90,0.9) #mllVSmth
            leg.SetNColumns(3)
            leg.SetTextSize(0.02)
        #leg = ROOT.TLegend(0.15,maxYSignal[catName]/(1.25*maxYSignal[catName]),0.45,0.9) #sig only
        if opt.type == "sigOnly":
            for histType in ['SM',opt.bsm]:
                hist = histDict[catName][histType]
                hist.ResetAttFill()
                hist.SetTitle("")
                hist.GetXaxis().SetTitle(varTag['1D'])
                hist.GetYaxis().SetTitle("Events")
                hist.GetYaxis().SetRangeUser(0,maxYSignal[catName]*1.00) 
                hist.SetLineColor(styleDict[catName][histType]['color'])
                leg.AddEntry(hist,styleDict[catName][histType]['legend'],"l")
                hist.Draw("HIST E1 SAME")
                leg.Draw("SAME")
        elif opt.type == "sigAndBkg":
            thss = []
            thsSM = ROOT.THStack("thsSM","") 
            thsBSM = ROOT.THStack("thsBSM","")
            thsBKG = ROOT.THStack("thsBKG","")
            statErrBKG = ROOT.TH1F()
            statErrBKG.SetFillStyle(3002)
            statErrBKG.SetMarkerStyle(0)
            statErrBKG.SetFillColor(ROOT.kBlack)
            statErrBKG.SetLineColor(ROOT.kBlack)
            #first backgrounds
            for bkgKey in histDict[catName]['BKG'].keys():
                print("Adding BKG: "+bkgKey+" -> "+str(histDict[catName]['BKG'][bkgKey].Integral()))
                histDict[catName]['BKG'][bkgKey].SetLineColor(styleDict[catName]['BKG'][bkgKey]['color'])
                histDict[catName]['BKG'][bkgKey].SetFillColor(styleDict[catName]['BKG'][bkgKey]['color'])
                histDict[catName]['BKG'][bkgKey].SetTitle("")
                integral = ""
                if opt.showIntegral: 
                    integral = formatStyle['1'].format(Decimal(styleDict[catName]['BKG'][bkgKey]['yield']))
                    #print(bkgKey+": Integral to legend = "+integral)
                thsBKG.Add(histDict[catName]['BKG'][bkgKey])
                statErrBKG.Add(histDict[catName]['BKG'][bkgKey])
                leg.AddEntry(histDict[catName]['BKG'][bkgKey],styleDict[catName]['BKG'][bkgKey]['legend']+integral,"f")
            if "mllvsmth" in opt.var.lower():
                if opt.plotLog:
                    thsBKG.SetMaximum(maxYSigBkg[catName]*50)
                    thsBKG.SetMinimum(10.0) 
                else:
                    thsBKG.SetMaximum(maxYSigBkg[catName]*3.20)
            else:
                thsBKG.SetMaximum(maxYSigBkg[catName]*3.00)
            thsBKG.Draw("HIST")
            thsBKG.GetXaxis().SetTitle(varTag['1D'])
            thsBKG.GetYaxis().SetTitle("Events")
            statErrBKG.Draw("E2SAME")
            canvas.Modified()

            #add signals in paralel
            if not opt.doNotStackSignal:
                thsSM = thsBKG.Clone()  
                thsBSM = thsBKG.Clone()
            thss.append(thsSM)
            thss.append(thsBSM)           
            for itype,histType in enumerate(['SM',opt.bsm]):
                hist = histDict[catName][histType]
                hist.ResetAttFill() 
                hist.SetTitle("")
                hist.GetXaxis().SetTitle(varTag['1D'])
                hist.GetYaxis().SetTitle("Events")
                hist.SetLineColor(styleDict[catName][histType]['color'])
                hist.SetLineStyle(styleDict[catName][histType]['line'])
                thss[itype].Add(hist,"HIST")
                integral = ""
                if opt.showIntegral: 
                    if styleDict[catName][histType]['yield'] < 0.1 :    
                        integral = formatStyle['e'].format(Decimal(styleDict[catName][histType]['yield']))
                    else:
                        integral = formatStyle['1'].format(Decimal(styleDict[catName][histType]['yield']))
                #print(histType+": Integral to legend = "+integral)   
                leg.AddEntry(hist,styleDict[catName][histType]['legend']+str(integral),"f")
            leg.AddEntry(statErrBKG,"MC stat.","f")           
 
            for ths in thss:
                ths.Draw("SAME") 
            leg.Draw("SAME")
        elif opt.type == "all":
            thss = []
            thsSM = ROOT.THStack("thsSM","")
            thsBSM = ROOT.THStack("thsBSM","")
            thsINT = {}
            for intTplName in ['T2','T3','T4']:
                if intTplName not in histDict[catName]: continue        
                thsINT[intTplName] = ROOT.THStack("ths"+intTplName,"")
            thsBKG = ROOT.THStack("thsBKG","")

            #first backgrounds
            for bkgKey in histDict[catName]['BKG'].keys():
                print("Adding BKG: "+bkgKey+" -> "+str(histDict[catName]['BKG'][bkgKey].Integral()))
                histDict[catName]['BKG'][bkgKey].SetLineColor(styleDict[catName]['BKG'][bkgKey]['color'])
                histDict[catName]['BKG'][bkgKey].SetFillColor(styleDict[catName]['BKG'][bkgKey]['color'])
                histDict[catName]['BKG'][bkgKey].SetTitle("")
                integral = ""
                if opt.showIntegral:
                    integral = formatStyle['1'].format(Decimal(styleDict[catName]['BKG'][bkgKey]['yield']))
                    #print(bkgKey+": Integral to legend = "+integral)
                thsBKG.Add(histDict[catName]['BKG'][bkgKey])
                leg.AddEntry(histDict[catName]['BKG'][bkgKey],styleDict[catName]['BKG'][bkgKey]['legend']+integral,"f")
            if "mllvsmth" in opt.var.lower():
                thsBKG.SetMaximum(maxYAll[catName]*3.20)
            else:
                thsBKG.SetMaximum(maxYAll[catName]*3.00)
            thsBKG.Draw("HIST")
            thsBKG.GetXaxis().SetTitle(varTag['1D'])
            thsBKG.GetYaxis().SetTitle("Events")
            canvas.Modified()

            #add signals in paralel
            thsSM = thsBKG.Clone()
            thsBSM = thsBKG.Clone()
            thsINT = {}
            for intTplName in ['T2','T3','T4']:
                if intTplName not in histDict[catName]: continue
                thsINT[intTplName] = thsBKG.Clone()
            thss.append(thsSM)
            thss.append(thsBSM)
            for intTplName in thsINT.keys():
                thss.append(thsINT[intTplName]) 

            for itype,histType in enumerate(['SM',opt.bsm]+thsINT.keys()):
                hist = histDict[catName][histType]
                hist.ResetAttFill()
                hist.SetTitle("")
                hist.GetXaxis().SetTitle(varTag['1D'])
                hist.GetYaxis().SetTitle("Events")
                hist.SetLineColor(styleDict[catName][histType]['color'])
                hist.SetLineStyle(styleDict[catName][histType]['line'])
                thss[itype].Add(hist,"HIST")
                integral = ""
                if opt.showIntegral:
                    if styleDict[catName][histType]['yield'] < 0.1 :
                        integral = formatStyle['e'].format(Decimal(styleDict[catName][histType]['yield']))
                    else:
                        integral = formatStyle['1'].format(Decimal(styleDict[catName][histType]['yield']))
                #print(histType+": Integral to legend = "+integral)   
                leg.AddEntry(hist,styleDict[catName][histType]['legend']+str(integral),"f")

            for ths in thss:
                ths.Draw("SAME")
            leg.Draw("SAME") 
        
        #finalize style CMS    
        iPos = 0
        CMS_lumi.CMS_lumi(canvas, 4, iPos)
        canvas.Print(opt.outputDir+"/"+canvasTag+"_"+catName+"_"+opt.var+".png")
        canvas.Print(opt.outputDir+"/"+canvasTag+"_"+catName+"_"+opt.var+".pdf") 
