import os
import sys
import argparse
import numpy as np 
import itertools
from glob import glob
import stat
import ROOT
from copy import deepcopy
from array import array
import math
from collections import OrderedDict
from operator import itemgetter
import CMS_lumi


def Retrieve2DLikelihoodCombined(file, op, maxNLL, xscale, yscale,name,Npoints=100):

    f = ROOT.TFile(file)
    t = f.Get("limit")

    for i, event in enumerate(t):
        if i == 0:
            x_min = getattr(event, op[0])
            y_min = getattr(event, op[1])
        else: break

    exp = ROOT.TGraph()
    exp.SetName(name)
    exp.SetPoint(0, x_min, y_min)
    exp.SetMarkerSize(3)
    exp.SetMarkerStyle(34)
    exp.SetMarkerColor(ROOT.kGray +2)

    to_draw = ROOT.TString("{}:{}:2*deltaNLL".format(op[0],op[1]))
    n = t.Draw( to_draw.Data() , "deltaNLL<{} && deltaNLL>{}".format(float(maxNLL),-30), "l")

    x = np.ndarray((n), 'd', t.GetV1())
    y = np.ndarray((n), 'd', t.GetV2())
    z_ = np.ndarray((n), 'd', t.GetV3())

    z = np.array([i-min(z_) for i in z_]) #shifting likelihood toward 0
    x = np.array([i*xscale for i in x])
    y = np.array([i*yscale for i in y])

    graphScan = ROOT.TGraph2D(n,x,y,z)

    graphScan.SetNpx(Npoints)
    graphScan.SetNpy(Npoints)

    graphScan.GetZaxis().SetRangeUser(0, float(maxNLL))
    graphScan.GetHistogram().GetZaxis().SetRangeUser(0, float(maxNLL))

    for i in range(graphScan.GetHistogram().GetSize()):
        if (graphScan.GetHistogram().GetBinContent(i+1) == 0):
            graphScan.GetHistogram().SetBinContent(i+1, 100)

    hist = graphScan.GetHistogram().Clone("arb_hist")
    hist.SetContour(2, np.array([2.30, 5.99]))
    hist.Draw("CONT Z LIST")
    ROOT.gPad.Update()

    conts = ROOT.gROOT.GetListOfSpecials().FindObject("contours")
    cont_graphs = [deepcopy(list(conts.At(i))) for i in range(2)]

    gs = deepcopy(graphScan)

    f.Close()

    return gs, cont_graphs, exp

min_x = -0.1
max_x = 3
min_y = 0
max_y = 2.2

ops = ["muQCD_WV","muEW_WV"]

gs, cont_graphs, exp  = Retrieve2DLikelihoodCombined(sys.argv[1], ops,20,1,1, "exp",Npoints=50)

op_x = ops[0]
op_y = ops[1]

color = [ ROOT.kRed, ROOT.kRed]
linestyle = [2,9]

graphs = []

#set style
for j in range(len(cont_graphs)):
    for h in range(len(cont_graphs[j])):
        cont_graphs[j][h].SetLineWidth(3)

for j in range(len(cont_graphs)):
    for h in range(len(cont_graphs[j])):
        cont_graphs[j][h].SetLineColor(int(color[j]))
        cont_graphs[j][h].SetFillStyle(0)
        cont_graphs[j][h].SetFillColor(0)
for j in range(len(cont_graphs)):
        for h in range(len(cont_graphs[j])):
            cont_graphs[j][h].SetLineStyle(int(linestyle[j]))

graphs.append(["ciao", cont_graphs[0], exp, [-0.1 + min_x, max_x+0.2],[min_y, max_y+0.25], cont_graphs[1]])



gs2, cont_graphs2, exp2  = Retrieve2DLikelihoodCombined(sys.argv[2], ops,20,1,1,"measured",Npoints=25)


color = [ ROOT.kBlack, ROOT.kBlack]
linestyle = [2,9]

graphs2 = [ ]
#set style
for j in range(len(cont_graphs2)):
    for h in range(len(cont_graphs2[j])):
        cont_graphs2[j][h].SetLineWidth(4)

for j in range(len(cont_graphs2)):
    for h in range(len(cont_graphs2[j])):
        cont_graphs2[j][h].SetLineColor(int(color[j]))
        cont_graphs2[j][h].SetFillStyle(0)
        cont_graphs2[j][h].SetFillColor(0)
        #cont_graphs[j][h].SetFillColorAlpha(int(operators[op_pair][key]['color']), 0.1)
            #min_x = cont_graphs[j][h].GetXaxis().GetXmin()
            #max_x = cont_graphs[j][h].GetXaxis().GetXmax()
            #min_y = cont_graphs[j][h].GetYaxis().GetXmin()
            #max_y = cont_graphs[j][h].GetYaxis().GetXmax()

for j in range(len(cont_graphs2)):
        for h in range(len(cont_graphs2[j])):
            cont_graphs2[j][h].SetLineStyle(int(linestyle[j]))

#print(cont_graphs2[0])
graphs2.append(["ciao", cont_graphs2[0], exp2, [min_x, max_x],[min_y, max_y], cont_graphs2[1]])




c = ROOT.TCanvas("c2", "c2", 1000, 1000)

margins = 0.13

ROOT.gPad.SetRightMargin(margins)
ROOT.gPad.SetLeftMargin(margins)
ROOT.gPad.SetBottomMargin(margins)
ROOT.gPad.SetTopMargin(margins)
ROOT.gPad.SetFrameLineWidth(3)
ROOT.gPad.SetTicks()

leg = ROOT.TLegend(0.55, 0.6, 0.85, 0.85)
leg.SetBorderSize(0)
# leg.SetNColumns((int(len(graphs) + 1)/2))
leg.SetTextSize(0.03)

#c.SetGrid()

#first graph
for i in range(len(graphs[0][1])):
    graphs[0][1][i].GetYaxis().SetTitleOffset(1.4)
    graphs[0][1][i].GetXaxis().SetTitleOffset(1.1)
    graphs[0][1][i].GetXaxis().SetTitleSize(.04)
    graphs[0][1][i].GetYaxis().SetTitleSize(.04)
    graphs[0][1][i].GetYaxis().SetTitle("#mu_{EW}")
    graphs[0][1][i].GetXaxis().SetTitle("#mu_{QCD}")
    graphs[0][1][i].SetTitle("")
    #graphs[0][1].SetLineStyle(linestyles[0])
    if i == 0:
        #graphs[0][1][i].GetYaxis().SetRangeUser(graphs[0][1][i].GetYaxis().GetXmin(), graphs[0][1][i].GetYaxis().GetXmax() + 0.2*(graphs[0][1][i].GetYaxis().GetXmax()))
        if graphs[0][0]  == "combined": 
            graphs[0][1][i].Draw("ALF")
            #graphs[0][1][i].Draw("A")
            graphs[0][1][i].GetYaxis().SetRangeUser(graphs[0][4][0], graphs[0][4][1])
            graphs[0][1][i].GetXaxis().SetLimits(graphs[0][3][0], graphs[0][3][1])
            graphs[0][1][i].Draw("ALF")
            #graphs[0][1][i].Draw("A")
            c.Update()

        else: 
            graphs[0][1][i].Draw("AL")
            graphs[0][1][i].GetYaxis().SetRangeUser(graphs[0][4][0], graphs[0][4][1])
            graphs[0][1][i].GetXaxis().SetLimits(graphs[0][3][0], graphs[0][3][1])
            graphs[0][1][i].Draw("AL")
            c.Update()
    else:
        if graphs[0][0]  == "combined": graphs[0][1][i].Draw("LF same")
        else: graphs[0][1][i].Draw("L same")

for i in range(len(graphs[0][-1])):
    graphs[0][-1][i].GetYaxis().SetTitleOffset(1.4)
    graphs[0][-1][i].GetXaxis().SetTitleOffset(1.1)
    graphs[0][-1][i].GetXaxis().SetTitleSize(.04)
    graphs[0][-1][i].GetYaxis().SetTitleSize(.04)
    graphs[0][-1][i].GetYaxis().SetTitle("#mu_{EW}")
    graphs[0][-1][i].GetXaxis().SetTitle("#mu_{QCD}")
    graphs[0][-1][i].SetTitle("")
    #graphs[0][-1].SetLineStyle(linestyles[0])
    if i == 0:
        #graphs[0][-1][i].GetYaxis().SetRangeUser(graphs[0][-1][i].GetYaxis().GetXmin(), graphs[0][-1][i].GetYaxis().GetXmax() + 0.2*(graphs[0][-1][i].GetYaxis().GetXmax()))
        if graphs[0][0]  == "combined": 
            graphs[0][-1][i].Draw("L same")
            #graphs[0][-1][i].Draw("A")
            graphs[0][-1][i].GetYaxis().SetRangeUser(graphs[0][4][0], graphs[0][4][1])
            graphs[0][-1][i].GetXaxis().SetLimits(graphs[0][3][0], graphs[0][3][1])
            graphs[0][-1][i].Draw("L same")
            #graphs[0][-1][i].Draw("A")
            c.Update()

        else: 
            graphs[0][-1][i].Draw("L same")
            graphs[0][-1][i].GetYaxis().SetRangeUser(graphs[0][4][0], graphs[0][4][1])
            graphs[0][-1][i].GetXaxis().SetLimits(graphs[0][3][0], graphs[0][3][1])
            graphs[0][-1][i].Draw("L same")
            c.Update()
    else:
        if graphs[0][0]  == "combined": graphs[0][-1][i].Draw("LF same")
        else: graphs[0][-1][i].Draw("L same")

graphs[0][2].SetMarkerSize(3)
graphs[0][2].SetMarkerStyle(28)
graphs[0][2].SetMarkerColor(ROOT.kGray +2)
graphs[0][2].Draw("P same")


leg.AddEntry(graphs[0][1][0], "68% CL expected", "L")
leg.AddEntry(graphs[0][-1][0], "95% CL expected", "L")

#leg.AddEntry(graphs[0][1][0], name, "L")
# leg.AddEntry(graphs[0][1][0], ConvertProc(name), "F")



# Legend
# for i in graphs[1:]:
#     for j in i[1]:
#         if i[0] == "combined": 
#             print("combined")
#             j.Draw("LF same")
#         else: j.Draw("L same")
#     #i[2].Draw("P same")
#     name = i[0]
#     #if name == "combined": name = "Combined"
#     #if scale!=1 : name =  str(scale) + " #times " + n
#     #leg.AddEntry(i[1][0], name, "L")
#     print(i[0], i[1])
#     try:
#         leg.AddEntry(i[1][0], ConvertProc(name), "F")
#     except:
#         pass

#Draw fancy

#first graph
for i in range(len(graphs2[0][1])):
    graphs2[0][1][i].GetYaxis().SetTitleOffset(1.4)
    graphs2[0][1][i].GetXaxis().SetTitleOffset(1.1)
    graphs2[0][1][i].GetXaxis().SetTitleSize(.04)
    graphs2[0][1][i].GetYaxis().SetTitleSize(.04)
    graphs2[0][1][i].GetYaxis().SetTitle("#mu_{EW}")
    graphs2[0][1][i].GetXaxis().SetTitle("#mu_{QCD}")
    graphs2[0][1][i].SetTitle("")
    #graphs2[0][1].SetLineStyle(linestyles[0])
    if i == 0:
        #graphs2[0][1][i].GetYaxis().SetRangeUser(graphs2[0][1][i].GetYaxis().GetXmin(), graphs2[0][1][i].GetYaxis().GetXmax() + 0.2*(graphs2[0][1][i].GetYaxis().GetXmax()))
        if graphs2[0][0]  == "combined": 
            graphs2[0][1][i].Draw("L same")
            #graphs2[0][1][i].Draw("A")
            graphs2[0][1][i].GetYaxis().SetRangeUser(graphs2[0][4][0], graphs2[0][4][1])
            graphs2[0][1][i].GetXaxis().SetLimits(graphs2[0][3][0], graphs2[0][3][1])
            graphs2[0][1][i].Draw("L same")
            #graphs2[0][1][i].Draw("A")
            c.Update()

        else: 
            graphs2[0][1][i].Draw("L same")
            graphs2[0][1][i].GetYaxis().SetRangeUser(graphs2[0][4][0], graphs2[0][4][1])
            graphs2[0][1][i].GetXaxis().SetLimits(graphs2[0][3][0], graphs2[0][3][1])
            graphs2[0][1][i].Draw("L same")
            c.Update()
    else:
        if graphs2[0][0]  == "combined": graphs2[0][1][i].Draw("LF same")
        else: graphs2[0][1][i].Draw("L same")

for i in range(len(graphs2[0][-1])):
    graphs2[0][-1][i].GetYaxis().SetTitleOffset(1.4)
    graphs2[0][-1][i].GetXaxis().SetTitleOffset(1.1)
    graphs2[0][-1][i].GetXaxis().SetTitleSize(.04)
    graphs2[0][-1][i].GetYaxis().SetTitleSize(.04)
    graphs2[0][-1][i].GetYaxis().SetTitle("#mu_{EW}")
    graphs2[0][-1][i].GetXaxis().SetTitle("#mu_{QCD}")
    graphs2[0][-1][i].SetTitle("")
    #graphs2[0][-1].SetLineStyle(linestyles[0])
    if i == 0:
        #graphs2[0][-1][i].GetYaxis().SetRangeUser(graphs2[0][-1][i].GetYaxis().GetXmin(), graphs2[0][-1][i].GetYaxis().GetXmax() + 0.2*(graphs2[0][-1][i].GetYaxis().GetXmax()))
        if graphs2[0][0]  == "combined": 
            graphs2[0][-1][i].Draw("L same")
            #graphs2[0][-1][i].Draw("A")
            graphs2[0][-1][i].GetYaxis().SetRangeUser(graphs2[0][4][0], graphs2[0][4][1])
            graphs2[0][-1][i].GetXaxis().SetLimits(graphs2[0][3][0], graphs2[0][3][1])
            graphs2[0][-1][i].Draw("L same")
            #graphs2[0][-1][i].Draw("A")
            c.Update()

        else: 
            graphs2[0][-1][i].Draw("L same")
            graphs2[0][-1][i].GetYaxis().SetRangeUser(graphs2[0][4][0], graphs2[0][4][1])
            graphs2[0][-1][i].GetXaxis().SetLimits(graphs2[0][3][0], graphs2[0][3][1])
            graphs2[0][-1][i].Draw("L same")
            c.Update()
    else:
        if graphs2[0][0]  == "combined": graphs2[0][-1][i].Draw("LF same")
        else: graphs2[0][-1][i].Draw("L same")

graphs2[0][2].SetMarkerSize(3)
graphs2[0][2].SetMarkerStyle(34)
graphs2[0][2].SetMarkerColor(ROOT.kGray +2)
graphs2[0][2].Draw("P same")

leg.AddEntry(graphs2[0][1][0], "68% CL", "L")
leg.AddEntry(graphs2[0][-1][0], "95% CL", "L")
leg.AddEntry(graphs[0][2], "SM", "P")
leg.AddEntry(graphs2[0][2], "best fit", "P")


# leg.AddEntry(graphs2[0][2], "SM", "P")

# name = graphs2[0][0]
#leg.AddEntry(graphs[0][1][0], name, "L")
# leg.AddEntry(graphs[0][1][0], ConvertProc(name), "F")

# tex3 = ROOT.TLatex(0.86,.89,"137 fb^{-1}   (13 TeV)")
# tex3.SetNDC()
# tex3.SetTextAlign(31)
# tex3.SetTextFont(42)
# tex3.SetTextSize(0.04)
# tex3.SetLineWidth(2)
# tex3.Draw()

leg.Draw("same")

# Legend
# for i in graphs[1:]:
#     for j in i[1]:
#         if i[0] == "combined": 
#             print("combined")
#             j.Draw("LF same")
#         else: j.Draw("L same")
#     #i[2].Draw("P same")
#     name = i[0]
#     #if name == "combined": name = "Combined"
#     #if scale!=1 : name =  str(scale) + " #times " + n
#     #leg.AddEntry(i[1][0], name, "L")
#     print(i[0], i[1])
#     try:
#         leg.AddEntry(i[1][0], ConvertProc(name), "F")
#     except:
#         pass

# #Draw fancy

# tex3 = ROOT.TLatex(0.86,.89,"137 fb^{-1}   (13 TeV)")
# tex3.SetNDC()
# tex3.SetTextAlign(31)
# tex3.SetTextFont(42)
# tex3.SetTextSize(0.04)
# tex3.SetLineWidth(2)
# tex3.Draw()

pad = ROOT.gPad 

import CMS_lumi
CMS_lumi.lumi_13TeV = "137 fb^{-1}"
CMS_lumi.writeExtraText = False
# CMS_lumi.extraText = "Preliminary"
CMS_lumi.relPosX = 0.14
CMS_lumi.lumi_sqrtS = "13 TeV" # used with iPeriod = 0, e.g. for simulation-only plots (default is an empty string)
# CMS_lumi.cmsTextFont = 42
CMS_lumi.cmsTextSize  = 0.45
CMS_lumi.lumiTextSize = 0.3
CMS_lumi.extraTextFont = 40

iPeriod = 4
iPos  = 0
CMS_lumi.CMS_lumi(pad, iPeriod,iPos)

# if not args2.splitLeg: le2g.Dra2w()
c.Draw()
c.SaveAs(sys.argv[3] + ".pdf")
c.SaveAs(sys.argv[3] +".png")

#unzoomed ve
