import sys
from math import sqrt
import pandas as pd 
import canvas_utils
import argparse

''' 
This script plots the closure test prefit factors for W+jets
'''

parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", type=str)
parser.add_argument("-o","--output", type=str)
parser.add_argument("-y","--year", type=str)
parser.add_argument("-c","--cat", help="Wjets Category", type=str)
args = parser.parse_args()

import ROOT as R 
R.gStyle.SetPalette(R.kLightTemperature)
R.gROOT.SetBatch(True)

cat = args.cat
df = pd.read_csv(args.input, sep=";")


Wjets_bins = {"res":[],"boost":[]}
for ir in range(1,22):
    Wjets_bins["res"].append("Wjets_res_"+str(ir))
for ir in range(1,8):
    Wjets_bins["boost"].append("Wjets_boost_"+str(ir))

if cat == "res":    c = canvas_utils.get_canvas(args.year, 700, 1400)
if cat == "boost":  c = canvas_utils.get_canvas(args.year, 700, 1200)

mg = R.TMultiGraph()
mg.SetTitle(";W+jets category;Prefit SF")

leg = R.TLegend(0.83,0.66,0.95,0.9)

Max = 0
Min = 2

offset = 0

for lepfl in ("ele","mu"):
    for iy, zone in enumerate(["mext","mint"]):
        i = 0
        g = R.TGraph()
        gerr = R.TGraphAsymmErrors()
        leg.AddEntry(g, "{} {}".format(lepfl,zone), "p")
        
        channel = "{}_wjetcr_{}_{}".format(cat, lepfl, zone)
        if lepfl=="ele": offset = (iy+1)*0.15 - 0.3
        else: offset = (iy+1)*0.15
        
        for wjetbin in Wjets_bins[cat]:
            # print channel, wjetbin
            data = df[(df.channel==channel) & (df.bin==wjetbin)]
            # print(data)
            y = float(data.weight.values[0])
            
            if y > Max : Max = y
            if y < Min : Min = y
            g.SetPoint(i, i+1+offset, y )
            gerr.SetPoint(i, i+1+offset, y)
            gerr.SetPointError(i, 0.05, 0.05, data.err_tot_do, data.err_tot_up)
            #g.SetPointError(i, 0.,data.error )

            i+=1
        mg.Add(gerr, "2")
        mg.Add(g, "P")
        

        if lepfl =="ele":   g.SetMarkerStyle(21)
        else: g.SetMarkerStyle(22)
        if cat == "boost":   g.SetMarkerSize(3)
        if cat == "res":   g.SetMarkerSize(2)
        g.SetLineWidth(3)

        gerr.SetLineColor(12)
        gerr.SetFillColor(12)
        gerr.SetLineWidth(0)
        gerr.SetFillStyle(3003)
        

mg.Draw("AP PMC PFC PLC")
mg.GetYaxis().SetRangeUser(Min - 0.4,Max + 0.5)
if cat == "res":  mg.GetXaxis().SetRangeUser(0.3 , 21.5)
elif cat == "boost":  mg.GetXaxis().SetRangeUser(0.3 , 12)

mg.Draw("AP PMC PFC PLC")

i = 0
tt = []


# for wjetbin in Wjets_bins[cat]:
#     t = R.TText(i+1-0.38, Min - 0.5, wjetbin)

#     t.SetTextFont(25)
#     t.SetTextSize(20)
#     t.SetTextAngle(0)
#     i+=1
#     t.Draw("same")
#     tt.append(t)


ls = []
if cat == "res": nlines = 21
elif cat == "boost": nlines = 7
for i in range(nlines):
    line = R.TLine(i+1.495, Min - 0.4, i+1.495,Max + 0.5)
    line.SetLineStyle(8)
    line.Draw("same")
    ls.append(line)


leg.Draw("same")

canvas_utils.finalize(c, mg)

# R.gPad.SetRightMargin(0.1)
# R.gPad.SetLeftMargin(R.gPad.GetLeftMargin()*1.2)

# R.gStyle.SetTitleColor(1, "XYZ");
# R.gStyle.SetTitleFont(42, "XYZ");
# R.gStyle.SetTitleSize(0.06, "XYZ");
# R.gStyle.SetTitleXOffset(0.9);
# R.gStyle.SetTitleYOffset(1.25);

c.SaveAs(args.output)
