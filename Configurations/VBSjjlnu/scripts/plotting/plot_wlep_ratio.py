import sys
from math import sqrt
import pandas as pd 
import canvas_utils
import argparse
import CMS_lumi
import numpy as np
import root_numpy as rnp

''' 
This script plots the closure test prefit factors for W+jets
'''

parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", type=str)
parser.add_argument("-c","--conf", type=str)
parser.add_argument("-o","--output", type=str)
parser.add_argument("-y","--year", type=str)
args = parser.parse_args()

import ROOT as R 
# R.gStyle.SetPalette(R.kLightTemperature)
R.gROOT.SetBatch(True)
import LatinoAnalysis.ShapeAnalysis.tdrStyle as tdrStyle
tdrStyle.setTDRStyle()

nuisances = {}
samples = {}
exec(open(args.conf))
exec(open(samplesFile))
exec(open(nuisancesFile))

import LatinoAnalysis.ShapeAnalysis.utils as utils

subsamplesmap = utils.flatten_samples(samples)
utils.update_nuisances_with_subsamples(nuisances, subsamplesmap)

Wjets_bins = {"res":[],"boost":[]}
for ir in range(1,7):
    Wjets_bins["res"].append("Wjets_HT_res_"+str(ir))
for ir in range(1,6):
    Wjets_bins["boost"].append("Wjets_HT_boost_"+str(ir))


iF = R.TFile.Open(args.input)


def get_syst_uncertainty(cutName,sampleName,variableName, histo, fileIn):
    mynuisances = {}
    nuisances_vy_up     = {}
    nuisances_vy_do     = {}
    # handle 'stat' nuisance to create the bin-by-bin list of nuisances
    # "massage" the list of nuisances accordingly
    for nuisanceName, nuisance in nuisances.iteritems():         
        if 'cuts' in nuisance and cutName not in nuisance['cuts']:
            continue
        # run only if this nuisance will affect the phase space defined in "cut"
        if nuisanceName not in mynuisances.keys() :
            if 'type' in nuisance.keys() and (nuisance['type'] == 'rateParam' or nuisance['type'] == 'lnU') :
                pass
            #print "skip this nuisance since 100 percent uncertainty :: ", nuisanceName
            else :
                mynuisances[nuisanceName] = nuisances[nuisanceName]
        
    nuisanceHistos = ({}, {})
    for nuisanceName, nuisance in mynuisances.iteritems():
        #print ("Nuisance: ", nuisanceName)
        # is this nuisance to be considered for this background?
        if 'samples' in nuisance:
            if sampleName not in nuisance['samples']:
                continue
        elif 'all' not in nuisance or nuisance['all'] != 1:
            continue
        
        if 'cuts' in nuisance and cutName not in nuisance['cuts']:
            continue

        if 'name' in nuisance:
            shapeNameVars = tuple(cutName+"/"+variableName+'/histo_' + sampleName+"_"+nuisance['name']+var for var in ['Up', 'Down'])
        else:
            shapeNameVars = tuple(cutName+"/"+variableName+'/histo_' + sampleName+"_"+nuisanceName+var for var in ['Up', 'Down'])
        
        if 'type' in nuisance and nuisance['type'] == 'lnN':
            if 'samples' in nuisance:
                values = nuisance['samples'][sampleName]                        
            else: # 'all'
                values = nuisance['value']

            if '/' in values:
                variations = map(float, values.split('/'))
            else:
                variations = (float(values), 2. - float(values))
                
            # don't use  histos[sampleName], or the second "scale" will fail!!!
            for ivar, shapeNameVar in enumerate(shapeNameVars):
                histoVar = histo.Clone(shapeNameVar.replace('/', '__'))
                histoVar.Scale(variations[ivar])
                nuisanceHistos[ivar][nuisanceName] = histoVar
        else:
            for ivar, shapeNameVar in enumerate(shapeNameVars):
                histoVar = fileIn.Get(shapeNameVar)
                nuisanceHistos[ivar][nuisanceName] = histoVar
    #print (nuisanceHistos)

    for ivar, nuisances_vy in enumerate([nuisances_vy_up, nuisances_vy_do]):
        for nuisanceName, nuisance in mynuisances.iteritems():
            #print('CCCC', nuisanceName)
            try:
                histoVar = nuisanceHistos[ivar][nuisanceName]
            except KeyError:
                # put nominal
                histoVar = histo
                #print("not found: ", nuisanceName )            
            try:
                vy = nuisances_vy[nuisanceName]
            except KeyError:
                vy = nuisances_vy[nuisanceName] = np.zeros_like(rnp.hist2array(histo, copy=False))
            #Get value of up/down
            vy += rnp.hist2array(histoVar, copy=False)
        
    #print(nuisances_vy_up)
    # Get stat err
    tgrMC_vy = rnp.hist2array(histo, copy=True)
    nuisances_err2_up = rnp.array(histo.GetSumw2())[1:-1]
    nuisances_err2_do = rnp.array(histo.GetSumw2())[1:-1]
    for nuisanceName in mynuisances.keys():
        # now we need to tell wthether the variation is actually up or down ans sum in quadrature those with the same sign 
        up = nuisances_vy_up[nuisanceName]
        do = nuisances_vy_do[nuisanceName]
        up_is_up = (up > tgrMC_vy)
        dup2 = np.square(up - tgrMC_vy)
        ddo2 = np.square(do - tgrMC_vy)
        nuisances_err2_up += np.where(up_is_up, dup2, ddo2)
        nuisances_err2_do += np.where(up_is_up, ddo2, dup2)

    # Final 
    nuisances_err_up = np.sqrt(nuisances_err2_up)
    nuisances_err_do = np.sqrt(nuisances_err2_do)
    return nuisances_err_up, nuisances_err_do

def Pad2TAxis(hist):
    xaxis = hist.GetXaxis()
    xaxis.SetLabelFont ( 42)
    xaxis.SetLabelOffset( 0.025)
    xaxis.SetLabelSize ( 0.1)
    xaxis.SetNdivisions ( 505)
    xaxis.SetTitleFont ( 42)
    xaxis.SetTitleOffset( 1.35)   
    xaxis.SetTitleSize ( 0.11)

    yaxis = hist.GetYaxis()
    yaxis.CenterTitle ( )
    yaxis.SetLabelFont ( 42)
    yaxis.SetLabelOffset( 0.02)
    yaxis.SetLabelSize ( 0.1)
    yaxis.SetNdivisions ( 505)
    yaxis.SetTitleFont ( 42)
    yaxis.SetTitleOffset( .6)
    yaxis.SetTitleSize ( 0.11)

cache = []

wjet_color = R.TColor.GetColor(72, 145, 234) #153, 204, 255
sig_color = R.TColor.GetColor(242, 108, 13)

for fl in ['ele', 'mu']:
    for cat in ['res', 'boost']:
        hs = {}
        errs = {}
        maxH = -1
        minH = 10 
        for cut in ['sig', 'wjetcr']:
            htot = None
            syserr_up = []
            syserr_do = []
            for wjbin in Wjets_bins[cat]:
                h = iF.Get("{}_{}_{}/w_lep_pt/histo_{}".format(cat, cut, fl, wjbin))
                if htot == None: htot = h 
                else:  htot.Add(h)
                errup, errdo = get_syst_uncertainty("{}_{}_{}".format(cat, cut, fl),wjbin, "w_lep_pt", h , iF )
                if len(syserr_up) == 0: syserr_up = errup
                else:syserr_up += errup 
                if len(syserr_do) == 0: syserr_do = errdo
                else:syserr_do += errdo 
            nominal = rnp.hist2array(htot, copy=False)
            errs[cut] = (syserr_do / htot.Integral(), syserr_up / htot.Integral(), 
                         syserr_do / nominal, syserr_up/ nominal)

            htot.Scale(1/htot.Integral())
        
            hs[cut] = htot 
            
            if htot.GetMaximum() > maxH : maxH = htot.GetMaximum()
            if htot.GetMinimum() < minH : minH = htot.GetMinimum()
            
        print(errs['wjetcr'])
        # Now we have the wleppt total distribution in the two categories
        tcanvasRatio = R.TCanvas("c","c", 800,800) 

        hs['wjetcr'].SetTitle(";W lep pT;A.U.")
        hs['wjetcr'].GetYaxis().SetRangeUser(minH*0.8, maxH*1.3)
        hs['wjetcr'].SetLineColor(wjet_color)
        hs['wjetcr'].SetLineWidth(3)
        hs['wjetcr'].SetFillStyle(3001)
        hs['wjetcr'].SetFillColor(wjet_color)
        hs['sig'].SetLineColor(sig_color)
        hs['sig'].SetLineWidth(3)

        n_cr = rnp.hist2array( hs['wjetcr'], copy=False)
        n_sig = rnp.hist2array( hs['sig'], copy=False)
        tgrRatio = R.TGraph()
        tgrErr = R.TGraphAsymmErrors()
        tgrErrRatio = R.TGraphAsymmErrors()

        for iBin in range(0, len(n_cr)) :
            tgrRatio.SetPoint(iBin, hs['wjetcr'].GetBinCenter(iBin+1), n_sig[iBin]/ n_cr[iBin])
            tgrErr.SetPoint(iBin, hs['wjetcr'].GetBinCenter(iBin+1),  hs['wjetcr'].GetBinContent(iBin+1))
            tgrErrRatio.SetPoint(iBin, hs['wjetcr'].GetBinCenter(iBin+1),  1.)
            tgrErr.SetPointError(iBin,  hs['wjetcr'].GetBinWidth(iBin+1)/2, hs['wjetcr'].GetBinWidth(iBin+1)/2, 
                                errs['wjetcr'][0][iBin],errs['wjetcr'][1][iBin] )
            tgrErrRatio.SetPointError(iBin, hs['wjetcr'].GetBinWidth(iBin+1)/2, hs['wjetcr'].GetBinWidth(iBin+1)/2, 
                                errs['wjetcr'][2][iBin],errs['wjetcr'][3][iBin] )
            

        tgrErr.SetLineColor(12)
        tgrErr.SetFillColor(12)
        tgrErr.SetLineWidth(0)
        tgrErr.SetFillStyle(3004)
        tgrErrRatio.SetLineColor(12)
        tgrErrRatio.SetFillColor(12)
        tgrErrRatio.SetLineWidth(0)
        tgrErrRatio.SetFillStyle(3004)
        
        tlegend = R.TLegend(0.60, 0.65, 0.80, 0.88)
        tlegend.SetFillColor(0)
        tlegend.SetTextFont(42)
        tlegend.SetTextSize(0.036)
        tlegend.SetLineColor(0)
        tlegend.SetShadowColor(0)
        tlegend.AddEntry(hs['sig'], 'Signal region')
        tlegend.AddEntry(hs['wjetcr'], 'W+jets control region')

        tcanvasRatio.cd()
        canvasPad1Name = 'pad1_' + cat + "_" + fl
        pad1 = R.TPad(canvasPad1Name,canvasPad1Name, 0, 1-0.72, 1, 1)
        pad1.SetTopMargin(0.098)
        pad1.SetBottomMargin(0.000) 
        pad1.Draw()

        minXused = hs['sig'].GetXaxis().GetBinLowEdge(1)
        maxXused = hs['sig'].GetXaxis().GetBinUpEdge(hs['sig'].GetNbinsX())
            
        pad1.cd()
        #print " pad1 = ", pad1
        canvasFrameDistroName = 'frame_distro_' + cut + "_" + fl
        frameDistro = pad1.DrawFrame(minXused, 0.0, maxXused, 1.0, canvasFrameDistroName)
        xAxisDistro = frameDistro.GetXaxis()
        xAxisDistro.SetNdivisions(6,5,0)

        #frameDistro.GetYaxis().SetRangeUser( 0, maxYused )
        xAxisDistro.SetTitle("W lep Pt")
        frameDistro.GetYaxis().SetTitle("A.U.")
        frameDistro.GetYaxis().SetRangeUser( minH*0.8, maxH*1.3 )
        
        
        hs['wjetcr'].Draw("hist same")
        tgrErr.Draw("2 same")
        hs['sig'].Draw("hist same")
        
        tlegend.Draw("same")

        CMS_lumi.writeExtraText = 1
        CMS_lumi.extraText = "Preliminary"
        CMS_lumi.lumi_sqrtS = args.year # used with iPeriod = 0, e.g. for simulation-only plots (default is an empty string)

        iPos = 0
        iPeriod = 0
        if( iPos==0 ): CMS_lumi.relPosX = 0.14
        CMS_lumi.CMS_lumi(pad1, iPeriod, iPos)    
        
        # draw back all the axes            
        #frameDistro.Draw("AXIS")
        pad1.RedrawAxis()

        tcanvasRatio.cd()
        canvasPad2Name = 'pad2_' + cut + "_" + fl
        pad2 = R.TPad(canvasPad2Name,canvasPad2Name,0,0,1,1-0.72)
        pad2.SetTopMargin(0.000)
        pad2.SetBottomMargin(0.392)
        pad2.Draw()
        #pad2.cd().SetGrid()
        pad2.cd()
        
        #print " pad1 = ", pad1
        #print " pad2 = ", pad2, " minXused = ", minXused, " maxXused = ", maxXused
        canvasFrameRatioName = 'frame_ratio_' + cut + "_" + fl
        #print " canvasFrameRatioName = ", canvasFrameRatioName
        frameRatio = pad2.DrawFrame(minXused, 0.0, maxXused, 2.0, canvasFrameRatioName)
        #print " pad2 = ", pad2
        # style from https://ghm.web.cern.ch/ghm/plots/MacroExample/myMacro.py
        xAxisDistro = frameRatio.GetXaxis()
        xAxisDistro.SetNdivisions(6,5,0)

        frameRatio.GetXaxis().SetTitle('W lep Pt')
        frameRatio.GetYaxis().SetTitle("SR/CR")
        #frameRatio.GetYaxis().SetTitle("Data/MC")
        #frameRatio.GetYaxis().SetRangeUser( 0.0, 2.0 )
        frameRatio.GetYaxis().SetRangeUser( 0.5, 1.5 )

        Pad2TAxis(frameRatio)
        tgrErrRatio.Draw("2 same")
        tgrRatio.SetLineWidth(2)
        tgrRatio.Draw("L same")
        

        pad2.RedrawAxis()
        pad2.SetGrid()

        #frameDistro.GetYaxis().SetRangeUser(  )
        #pad1.SetLogy(True)

        tcanvasRatio.cd()
        
        tcanvasRatio.Update()
        tcanvasRatio.Draw()
        tcanvasRatio.SaveAs(args.output + "_{}_{}.png".format(cat,fl ))
        

        #frameDistro.GetYaxis().SetRangeUser( min(self._minLogCdifference, maxYused/1000), self._maxLogCdifference * maxYused )
        pad1.SetLogy(True)
        tcanvasRatio.SaveAs(args.output + "_{}_{}_log.png".format(cat,fl ))