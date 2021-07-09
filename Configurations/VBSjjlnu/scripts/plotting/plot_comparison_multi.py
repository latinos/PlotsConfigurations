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
parser.add_argument("-o","--output", type=str)
parser.add_argument("-l","--label", type=str)
parser.add_argument("-c","--cuts", type=str, nargs="+")
parser.add_argument("--samples", type=str, nargs="+")
parser.add_argument("--samples-labels", type=str, nargs="+")
parser.add_argument("-v","--vars", type=str, nargs="+")
parser.add_argument("--yratio", type=float, nargs="+",default=[0.5,1.5])
parser.add_argument("--ratiolabel", type=str,)
parser.add_argument("--ratiosum", action="store_true")
args = parser.parse_args()

import ROOT as R 
# R.gStyle.SetPalette(R.kLightTemperature)
R.gROOT.SetBatch(True)
import LatinoAnalysis.ShapeAnalysis.tdrStyle as tdrStyle
tdrStyle.setTDRStyle()

iF = R.TFile.Open(args.input)


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

colors = [ R.TColor.GetColor(0, 149, 226),  R.TColor.GetColor(242, 108, 13),
        R.TColor.GetColor(0, 179, 133),R.TColor.GetColor(45, 255, 255),
         R.TColor.GetColor(219, 205, 44) ] # 158, 218, 255

for cut in args.cuts:
    for var in args.vars:
        hs = [] 
        hs_name = []
        errs = []
        maxH = -1
        minH = 10 

        for sample in args.samples:
            print("Reading ", cut, sample, var)
            h = iF.Get("{}/{}/histo_{}".format(cut,var, sample))
            #h.Scale(59.74)
            hs.append(h)

        print(hs)


        for h in hs:
            if h.GetMaximum() > maxH : maxH = h.GetMaximum()
            if h.GetMinimum() < minH : minH = h.GetMinimum()
            
        tcanvasRatio = R.TCanvas("c","c", 800,800) 

        hs[0].SetTitle(";{};Events".format(var))
        hs[0].GetYaxis().SetRangeUser(minH*0.8, maxH*2)

        for i, h in enumerate(hs):
            h.SetLineColor(colors[i])
            h.SetLineWidth(4)

        if args.ratiosum:
            n_ref = sum([ rnp.hist2array( h, copy=False) for h in hs])
            print(n_ref)
        else:
            n_ref = rnp.hist2array( hs[0], copy=False)
        n_others = [] 
        tgrRatios = []
        if args.ratiosum:
            htoratio = hs 
        else:
            htoratio = hs[1:]
        for i, h in enumerate(htoratio):
            n_others.append( rnp.hist2array( h, copy=False))
            gr =R.TGraphErrors()
            if args.ratiosum:
                gr.SetLineColor(colors[i])
                gr.SetMarkerColor(colors[i])
            else:
                gr.SetLineColor(colors[i+1])
                gr.SetMarkerColor(colors[i+1])
            tgrRatios.append(gr)

        mc_stat_err = [ ]
        for i, h in enumerate(hs):
            stat_err_up = np.sqrt(rnp.array(h.GetSumw2())[1:-1])
            mc_stat_err.append(stat_err_up)
            print("MC stat error {0}:  {1} +-{2} ({3}%)".format( args.samples[i], h.Integral(), stat_err_up, 100*stat_err_up/h.Integral()))
        
        
        for i in range(len(n_others)):
            for iBin in range(0, len(n_ref)) :
                tgrRatios[i].SetPoint(iBin, hs[0].GetBinCenter(iBin+1), n_others[i][iBin]/ n_ref[iBin])
                tgrRatios[i].SetPointError(iBin, hs[0].GetBinWidth(iBin+1)/2., 0.)


        tlegend = R.TLegend(0.62, 0.6, 0.88, 0.86)
        tlegend.SetFillColor(0)
        tlegend.SetTextFont(42)
        tlegend.SetTextSize(0.036)
        tlegend.SetLineColor(0)
        tlegend.SetShadowColor(0)
        for i in range(len(hs)):
            tlegend.AddEntry(hs[i], args.samples_labels[i] + " [{:.2f}]".format(hs[i].Integral()))
        
        tcanvasRatio.cd()
        canvasPad1Name = 'pad1_' + "_" + var
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
        canvasFrameDistroName = 'frame_distro_' + "_" +cut + "_"+ var
        frameDistro = pad1.DrawFrame(minXused, 0.0, maxXused, 1.0, canvasFrameDistroName)
        xAxisDistro = frameDistro.GetXaxis()
        xAxisDistro.SetNdivisions(6,5,0)

        xAxisDistro.SetTitle(var)
        frameDistro.GetYaxis().SetTitle("Events")
        frameDistro.GetYaxis().SetRangeUser( 0, maxH*2 )
        
        hs[0].Draw("hist")
        for h in hs[1:]:
            h.Draw("hist same")
        
        tlegend.Draw("same")

        CMS_lumi.writeExtraText = 1
        CMS_lumi.extraText = "Preliminary"
        CMS_lumi.lumi_sqrtS = args.label # used with iPeriod = 0, e.g. for simulation-only plots (default is an empty string)

        iPos = 0
        iPeriod = 0
        if( iPos==0 ): CMS_lumi.relPosX = 0.14
        CMS_lumi.CMS_lumi(pad1, iPeriod, iPos)    

        
        # draw back all the axes            
        #frameDistro.Draw("AXIS")
        pad1.RedrawAxis()

        tcanvasRatio.cd()
        canvasPad2Name = 'pad2_'  + "_" +cut +"_" + var
        pad2 = R.TPad(canvasPad2Name,canvasPad2Name,0,0,1,1-0.72)
        pad2.SetTopMargin(0.000)
        pad2.SetBottomMargin(0.392)
        pad2.Draw()
        #pad2.cd().SetGrid()
        pad2.cd()

        
        #print " pad1 = ", pad1
        #print " pad2 = ", pad2, " minXused = ", minXused, " maxXused = ", maxXused
        canvasFrameRatioName = 'frame_ratio_'  + "_" + var
        #print " canvasFrameRatioName = ", canvasFrameRatioName
        frameRatio = pad2.DrawFrame(minXused, 0.0, maxXused, 2.0, canvasFrameRatioName)
        #print " pad2 = ", pad2
        # style from https://ghm.web.cern.ch/ghm/plots/MacroExample/myMacro.py
        xAxisDistro = frameRatio.GetXaxis()
        xAxisDistro.SetNdivisions(6,5,0)

        frameRatio.GetXaxis().SetTitle(var)
        frameRatio.GetYaxis().SetTitle(args.ratiolabel)
        #frameRatio.GetYaxis().SetRangeUser( 0.0, 2.0 )
        frameRatio.GetYaxis().SetRangeUser(*args.yratio  )

        Pad2TAxis(frameRatio)
        # tgrErrRatio.Draw("2 same")
        for gr in tgrRatios:
            gr.SetLineWidth(2)
            gr.Draw("P same")

        pad2.RedrawAxis()
        pad2.SetGrid()

        
        #frameDistro.GetYaxis().SetRangeUser(  )
        #pad1.SetLogy(True)

        tcanvasRatio.cd()
        tcanvasRatio.Update()
        tcanvasRatio.Draw()
        tcanvasRatio.SaveAs(args.output + "_{}_{}.png".format(cut,var))

        _minLogC =  1e-4
        _maxLogC = 1e2
            
        hs[0].GetYaxis().SetRangeUser( 1e-3, _maxLogC * maxH )

        pad1.SetLogy(True)
        tcanvasRatio.SaveAs(args.output + "_{}_{}_log.png".format(cut, var))
