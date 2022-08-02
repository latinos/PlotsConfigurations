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
parser.add_argument("-v","--vars", type=str, nargs="+")
args = parser.parse_args()

import ROOT as R 
# R.gStyle.SetPalette(R.kLightTemperature)
R.gROOT.SetBatch(True)
import LatinoAnalysis.ShapeAnalysis.tdrStyle as tdrStyle
tdrStyle.setTDRStyle()

iF = R.TFile.Open(args.input)


cache = []

for cut in args.cuts:
    for var in args.vars:
        h = iF.Get("{}/ratio_dipolepythia_{}".format(cut, var))
       
        tcanvas = R.TCanvas("c","c", 800,800) 

        tcanvas.cd()
        canvasPad1Name = 'pad1_' + "_" + var
        pad1 = R.TPad(canvasPad1Name,canvasPad1Name, 0, 0., 1, 1)
        pad1.SetTopMargin(0.098)
        pad1.SetBottomMargin(0.13) 
        pad1.SetRightMargin(0.15) 
        pad1.Draw()

        minXused = h.GetXaxis().GetBinLowEdge(1)
        maxXused = h.GetXaxis().GetBinUpEdge(h.GetNbinsX())
        minYused = h.GetYaxis().GetBinLowEdge(1)
        maxYused = h.GetYaxis().GetBinUpEdge(h.GetNbinsX())

        pad1.cd()
        #print " pad1 = ", pad1
        canvasFrameDistroName = 'frame_distro_' + "_" + var
        frameDistro = pad1.DrawFrame(minXused, minYused, maxXused, maxYused, canvasFrameDistroName)
        xAxisDistro = frameDistro.GetXaxis()
        xAxisDistro.SetNdivisions(6,5,0)
        yAxisDistro = frameDistro.GetYaxis()
        yAxisDistro.SetNdivisions(6,5,0)

        splits = h.GetName().split("_")
        xAxisDistro.SetTitle(splits[2])
        yAxisDistro.SetTitle(" ".join(splits[3:]))

        h.Draw("COLZ same")

        CMS_lumi.writeExtraText = 1
        CMS_lumi.extraText = "Preliminary"
        CMS_lumi.lumi_sqrtS = args.label # used with iPeriod = 0, e.g. for simulation-only plots (default is an empty string)

        iPos = 0
        iPeriod = 0
        if( iPos==0 ): CMS_lumi.relPosX = 0.22
        CMS_lumi.CMS_lumi(pad1, iPeriod, iPos)    

        # draw back all the axes            
        #frameDistro.Draw("AXIS")
        pad1.RedrawAxis()


        tcanvas.cd()

        tcanvas.Update()
        tcanvas.Draw()
        tcanvas.SaveAs(args.output + "_{}.png".format(var))
