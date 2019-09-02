#!/usr/bin/env python

from ROOT import*

import tdrstyle
tdrstyle.setTDRStyle()

import CMS_lumi
#change the CMS_lumi variables (see CMS_lumi.py)
CMS_lumi.lumi_13TeV = "41.5 fb^{-1}"
CMS_lumi.writeExtraText = 1
CMS_lumi.extraText = "Preliminary"
#CMS_lumi.extraText = ""

#iPos = 33
iPos = 0

H_ref = 1000
W_ref = 1000
W = W_ref
H  = H_ref

# references for T, B, L, R
T = 0.08*H_ref
B = 0.12*H_ref
L = 0.30*W_ref
R = 0.05*W_ref

canvas = TCanvas("c2","c2",50,50,W,H)
canvas.SetFillColor(0)
canvas.SetBorderMode(0)
canvas.SetFrameFillStyle(0)
canvas.SetFrameBorderMode(0)
canvas.SetLeftMargin( L/W )
canvas.SetRightMargin( R/W )
canvas.SetTopMargin( T/H )
canvas.SetBottomMargin( B/H )
canvas.SetTickx(0)
canvas.SetTicky(0)

graph = TGraphAsymmErrors()

file = open("ggH_HTXS_mu.txt","r")


categories = []

for line in file:
  if line[0] == "#": continue
  lline = line.split()
  category = {}
  category["value"] = float(lline[1])
  category["err_do"] = float(lline[2])
  category["err_up"] = float(lline[3])
  nameHR=""
  for i in range(4,len( lline )):
    nameHR+=lline[i]+" "
  category["name"]=nameHR[:-1]
  print category["name"]
  categories.append(category)

nChan = len(categories)
graph_comb = TGraphAsymmErrors()
comb_text=""

for i,cat in enumerate(categories):
  if cat["name"] == "combination":
    comb_text = "#mu_{comb} = "+"{0:.2f}".format(cat["value"])+" ^{+"+"{0:.2f}".format(cat["err_up"])+"}_{-"+"{0:.2f}".format(cat["err_do"])+"}"
    comb_value = cat["value"]
    graph_comb.SetPoint(0,comb_value,nChan/2.)
    graph_comb.SetPointError(0,cat["err_do"],cat["err_up"],nChan,nChan)
    continue
  graph.SetPoint(i-1,cat["value"],nChan-i)
  graph.SetPointError(i-1,cat["err_do"],cat["err_up"],0,0)


graph.GetXaxis().SetLimits(-1,6)
graph.GetYaxis().SetRangeUser(0,nChan)
graph.GetXaxis().SetTitle("#sigma/#sigma_{SM}")
graph.GetXaxis().SetLabelSize(0.05)
graph.GetYaxis().SetLabelSize(0)
graph.GetXaxis().SetTitleSize(0.05)
graph.GetXaxis().SetTitleOffset(1.1)
graph.GetYaxis().SetLabelOffset(999)
graph.SetTitle("")
graph.SetLineColor(kRed+1)
graph.SetLineWidth(2)
graph.SetMarkerColor(kBlack)
graph.SetMarkerSize (1.2)
graph.SetMarkerStyle(kFullCircle)
graph.GetYaxis().SetNdivisions(nChan)
graph.GetYaxis().SetTickLength(0.0)

graph_comb.SetFillColor(kBlue-10)
graph_comb.SetLineColor(kBlue+2) 
graph_comb.SetLineWidth(2)
graph_comb.SetMarkerSize(0)

graph.Draw("AP")

canvas.Update()

labels = TLatex()
labels.SetTextSize(0.033)
labels.SetTextAngle(0)
labels.SetTextAlign(32)
labels.SetTextFont(22)

values = TLatex()
values.SetTextSize(0.028)#0.22
values.SetTextAngle(0)
values.SetTextAlign(32)
values.SetTextFont(22)

comb = TLatex()
comb.SetTextSize(0.03)
comb.SetTextAngle(0)
comb.SetTextAlign(32)
comb.SetTextFont(22)

for i,cat in enumerate(categories):
  if cat["name"] == "combination": continue
  x = gPad.GetUxmin()
  y = nChan-i
  label = cat["name"]
  #value = "#mu = "+"{0:.1f}".format(cat["value"])+" #pm {0:.1f}".format(max(cat["err_up"],cat["err_do"]))
  value = "#mu = "+"{0:.2f}".format(cat["value"])+" ^{+"+"{0:.2f}".format(cat["err_up"])+"}_{-"+"{0:.2f}".format(cat["err_do"])+"}"
  #labels.DrawLatex(x-0.1,y+0.25,label)
  #values.DrawLatex(x-0.1,y-0.25,value)
  labels.DrawLatex(x-0.1,y+0.22,label)
  values.DrawLatex(x-0.1,y-0.22,value)


sm = TLine(1.,gPad.GetUymin(),1.,gPad.GetUymax())
sm.SetLineColor(kRed)
sm.SetLineWidth(2)
sm.SetLineStyle(2)

if not comb_text=="": 
  comb_line = TLine(comb_value,gPad.GetUymin(),comb_value,gPad.GetUymax())
  comb_line.SetLineColor(kBlue+2)
  comb_line.SetLineWidth(2)

legend = TLegend(0.638778,0.640577,1.0005,0.879506,"","brNDC")
#legend = TLegend(gPad.GetUxmax()-3.5, gPad.GetUymax()-3.5,gPad.GetUxmax()+0.1,gPad.GetUymax()-0.3,"","br")
legend.AddEntry(graph_comb,"Combination","lf")
legend.AddEntry(sm,"SM","l")
legend.SetFillStyle(0)
legend.SetBorderSize(0)

extraLabel = TLatex()
extraLabel.SetTextSize(0.03)
extraLabel.SetTextAngle(0)
extraLabel.SetTextAlign(32)
extraLabel.SetTextFont(22)

graph_comb.Draw("E2same")
sm.Draw()
if not comb_text=="": comb_line.Draw()
graph.Draw("P")
comb.DrawLatex(4.88747,6.10814,comb_text)
#comb.DrawLatex(gPad.GetUxmax()-0.5,gPad.GetUymax()*2/3.,comb_text)
extraLabel.DrawLatex(gPad.GetUxmax()-0.1,gPad.GetUymax()-0.2,"H#rightarrowWW")
legend.Draw()

CMS_lumi.CMS_lumi(canvas, 4, iPos)

gPad.RedrawAxis()
canvas.Update()

a = raw_input()

