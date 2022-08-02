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
parser.add_argument("-s","--samples", type=str, nargs=2)
parser.add_argument("--only-cuts", type=str, nargs="+")
parser.add_argument("--only-var", type=str, nargs="+")
parser.add_argument("--yratio", type=float, nargs="+",default=[0.5,1.5])
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

colors = [ R.TColor.GetColor(128, 215, 255),  R.TColor.GetColor(242, 108, 13)] #R.TColor.GetColor(72, 145, 234) 158, 218, 255

for cut in iF.GetListOfKeys():
    if args.only_cuts and cut.GetName() not in args.only_cuts: continue
    R.gDirectory.cd(cut.GetName())
    for var in R.gDirectory.GetListOfKeys():
        if args.only_var and var.GetName() not in args.only_var: continue
        R.gDirectory.cd(var.GetName())
        print "Working on: ", cut.GetName(), "  ", var.GetName()
        hs = [] 
        hs_name = []
        errs = []
        maxH = -1
        minH = 10 
        
        try:
            for sample in args.samples:
                h = iF.Get("/{}/{}/histo_{}".format(cut.GetName(), var.GetName(), sample))
                
                syserr_up = []
                syserr_do = []
                errup, errdo = get_syst_uncertainty(cut.GetName(), sample, var.GetName(), h , iF )
                if len(syserr_up) == 0: syserr_up = errup
                else:syserr_up += errup 
                if len(syserr_do) == 0: syserr_do = errdo
                else:syserr_do += errdo 

                nominal = rnp.hist2array(h, copy=False)
                errs.append((syserr_do / h.Integral(), syserr_up / h.Integral(), 
                                syserr_do / nominal, syserr_up/ nominal))
                hs.append(h)
        except:
            continue
        
        print(hs)

        for h in hs:
            if h.GetMaximum() > maxH : maxH = h.GetMaximum()
            if h.GetMinimum() < minH : minH = h.GetMinimum()
            
        tcanvasRatio = R.TCanvas("c","c", 800,800) 
 
        hs[0].SetTitle(";{};Events".format(var.GetName()))
        hs[0].GetYaxis().SetRangeUser(minH*0.8, maxH*1.3)
        hs[0].SetLineColor(colors[0])
        hs[0].SetLineWidth(4)
        hs[0].SetFillStyle(3001)
        hs[0].SetFillColor(colors[0])
        hs[1].SetLineColor(colors[1])
        hs[1].SetLineWidth(3)

        n_cr = rnp.hist2array( hs[0], copy=False)
        n_sig = rnp.hist2array( hs[1], copy=False)
        tgrRatio = R.TGraphErrors()
        tgrErr = R.TGraphAsymmErrors()
        tgrErrRatio = R.TGraphAsymmErrors()

        for iBin in range(0, len(n_cr)) :
            tgrRatio.SetPoint(iBin, hs[0].GetBinCenter(iBin+1), n_sig[iBin]/ n_cr[iBin])
            tgrRatio.SetPointError(iBin, hs[0].GetBinWidth(iBin+1)/2., 0.)
            tgrErr.SetPoint(iBin, hs[0].GetBinCenter(iBin+1),  hs[0].GetBinContent(iBin+1))
            tgrErrRatio.SetPoint(iBin, hs[0].GetBinCenter(iBin+1),  1.)
            tgrErr.SetPointError(iBin,  hs[0].GetBinWidth(iBin+1)/2, hs[0].GetBinWidth(iBin+1)/2, 
                                errs[0][0][iBin],errs[0][1][iBin] )
            tgrErrRatio.SetPointError(iBin, hs[0].GetBinWidth(iBin+1)/2, hs[0].GetBinWidth(iBin+1)/2, 
                                errs[0][2][iBin],errs[0][3][iBin] )
            
        tgrErr.SetLineColor(12)
        tgrErr.SetFillColor(12)
        tgrErr.SetLineWidth(0)
        tgrErr.SetFillStyle(3004)
        tgrErrRatio.SetLineColor(12)
        tgrErrRatio.SetFillColor(12)
        tgrErrRatio.SetLineWidth(0)
        tgrErrRatio.SetFillStyle(3004)
        
        tlegend = R.TLegend(0.20, 0.65, 0.45, 0.88)
        tlegend.SetFillColor(0)
        tlegend.SetTextFont(42)
        tlegend.SetTextSize(0.036)
        tlegend.SetLineColor(0)
        tlegend.SetShadowColor(0)
        tlegend.AddEntry(hs[0], args.samples[0] + " [{:.2f}]".format(hs[0].Integral()))
        tlegend.AddEntry(hs[1], args.samples[1] + " [{:.2f}]".format(hs[1].Integral()))

        tcanvasRatio.cd()
        canvasPad1Name = 'pad1_' + cut.GetName() + "_" + var.GetName()
        pad1 = R.TPad(canvasPad1Name,canvasPad1Name, 0, 1-0.72, 1, 1)
        pad1.SetTopMargin(0.098)
        pad1.SetBottomMargin(0.000) 
        pad1.Draw()

        minXused = hs[0].GetXaxis().GetBinLowEdge(1)
        maxXused = hs[0].GetXaxis().GetBinUpEdge(hs[1].GetNbinsX())
        minYused = hs[0].GetMinimum()
        maxYused = hs[0].GetMaximum()
            
        pad1.cd()
        #print " pad1 = ", pad1
        canvasFrameDistroName = 'frame_distro_' +cut.GetName() + "_" + var.GetName()
        frameDistro = pad1.DrawFrame(minXused, 0.0, maxXused, 1.0, canvasFrameDistroName)
        xAxisDistro = frameDistro.GetXaxis()
        xAxisDistro.SetNdivisions(6,5,0)

        print(var.GetName())
        xAxisDistro.SetTitle(var.GetName())
        frameDistro.GetYaxis().SetTitle("Events")
        frameDistro.GetYaxis().SetRangeUser( 0, maxH*1.5 )
        
        hs[0].SetFillStyle(1001)
        hs[0].Draw("hist same")
        tgrErr.Draw("2 same")
        hs[1].Draw("hist same")
        
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
        canvasPad2Name = 'pad2_' + cut.GetName() + "_" + var.GetName()
        pad2 = R.TPad(canvasPad2Name,canvasPad2Name,0,0,1,1-0.72)
        pad2.SetTopMargin(0.000)
        pad2.SetBottomMargin(0.392)
        pad2.Draw()
        #pad2.cd().SetGrid()
        pad2.cd()
        
        #print " pad1 = ", pad1
        #print " pad2 = ", pad2, " minXused = ", minXused, " maxXused = ", maxXused
        canvasFrameRatioName = 'frame_ratio_' + cut.GetName() + "_" + var.GetName()
        #print " canvasFrameRatioName = ", canvasFrameRatioName
        frameRatio = pad2.DrawFrame(minXused, 0.0, maxXused, 2.0, canvasFrameRatioName)
        #print " pad2 = ", pad2
        # style from https://ghm.web.cern.ch/ghm/plots/MacroExample/myMacro.py
        xAxisDistro = frameRatio.GetXaxis()
        xAxisDistro.SetNdivisions(6,5,0)

        frameRatio.GetXaxis().SetTitle(var.GetName())
        frameRatio.GetYaxis().SetTitle("ratio")
        #frameRatio.GetYaxis().SetRangeUser( 0.0, 2.0 )
        frameRatio.GetYaxis().SetRangeUser(*args.yratio  )

        Pad2TAxis(frameRatio)
        tgrErrRatio.Draw("2 same")
        tgrRatio.SetLineWidth(2)
        tgrRatio.Draw("P same")
        
        pad2.RedrawAxis()
        pad2.SetGrid()

        #frameDistro.GetYaxis().SetRangeUser(  )
        #pad1.SetLogy(True)

        tcanvasRatio.cd()
        
        tcanvasRatio.Update()
        tcanvasRatio.Draw()
        tcanvasRatio.SaveAs(args.output + "_{}_{}.png".format(cut.GetName(), var.GetName()))
        
        _minLogC =  1
        _maxLogC = 1e2
        frameDistro.GetYaxis().SetRangeUser( min(_minLogC, maxH/1000), _maxLogC * maxH )
        pad1.SetLogy(True)
        tcanvasRatio.SaveAs(args.output + "_{}_{}_log.png".format(cut.GetName(), var.GetName()))

        R.gDirectory.cd("../")
    R.gDirectory.cd("../")