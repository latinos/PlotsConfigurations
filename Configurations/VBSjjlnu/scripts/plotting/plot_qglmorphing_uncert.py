import ROOT as R 
import sys 
import os
import argparse
R.gROOT.SetBatch(1)
import canvas_utils
import tdrstyle

'''
This script plots the QGL uncertainty bands
'''

parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", type=str)
parser.add_argument("-o","--output", type=str)
parser.add_argument("--jtype", type=str)
parser.add_argument("--pt",  type=str)
parser.add_argument("--legend",  type=str)
parser.add_argument("--year",  type=str)
args = parser.parse_args()


iF = R.TFile.Open(args.input)
jtype = args.jtype 
pt = args.pt


c = canvas_utils.get_canvas(args.year)
mg = R.TMultiGraph()
leg = R.TLegend(0.15, 0.7, 0.5, 0.9)

colors = [ R.kBlue, R.kGreen]


for eta,col in zip(["loweta", "higheta"], colors):
        g_nom = iF.Get("_".join([jtype, eta, pt, "nom"]))
        g_up = iF.Get("_".join([jtype, eta, pt, "up"]))
        g_down = iF.Get("_".join([jtype, eta, pt, "down"]))

        errg = R.TGraphAsymmErrors(g_nom.GetN())
        for i in range(g_nom.GetN()):
            nom = g_nom.GetPointY(i)
            up = g_up.GetPointY(i)
            down = g_down.GetPointY(i)
            errg.SetPoint(i, g_nom.GetPointX(i), nom)
            errd = min( down - nom, up-nom)
            if errd >0 : errd = 0
            erru = max(up-nom, down-nom)
            if erru < 0: erru = 0
            errg.SetPointError(i, 0.005,0.005, abs(errd), erru )
        mg.Add(errg, "2")
        mg.Add(g_nom, "PL")
        g_nom.SetLineColor(col)
        g_nom.SetLineWidth(2)
        errg.SetLineColor(12)
        errg.SetFillColor(12)
        errg.SetLineWidth(0)
        errg.SetFillStyle(3003)
        
        leg.AddEntry(g_nom, " ".join([jtype, eta, args.legend]))
        
mg.SetTitle("QGL morphing function;Original QGL;Morphed QGL")
mg.Draw("A")
leg.Draw("same")

canvas_utils.finalize(c, mg)
c.SaveAs(os.path.join(args.output,"_".join([jtype, pt, args.year])+".png"))