import ROOT as R
import argparse


parser = argparse.ArgumentParser()
parser.add_argument("--config", help="configuration file", type=str)
parser.add_argument("-i", "--inputfile", help="input file with shapes", type=str)
parser.add_argument("-v", "--var", help="Variable to plot", type=str)
parser.add_argument("-c", "--cuts", help="cuts to use", nargs="+", type=str)
#parser.add_argument("-r", "--ranges", help="(xbins,xmin,xmax,ybins,ymin,ymax)", nargs="+", type=float)
parser.add_argument("-zr", "--z-range", help="zmin zmax", nargs="+", type=float)
parser.add_argument("-t", "--title", help="Plot axes title",  type=str)
parser.add_argument("-xl", "--x-label", help="Plot axes X title",  type=str)
parser.add_argument("-yl", "--y-label", help="Plot axes Y title",  type=str)
args = parser.parse_args()


exec(open(args.config))
variables = {}
exec(open(variablesFile))
ranges = variables[args.var]['range']
title = variables[args.var]['xaxis']

samples= ['Wjets_HT', 'DY', 'top', 'VV', 'VVV','VBF-V','VBS','Fake','Vg','VgS']
#exec(open(samplesFile))

iF = R.TFile(args.inputfile)
print(iF.ls())

for cat in args.cuts:

    hs = {}
    tot_mc = None

    for s in samples:
        if s == "DATA": continue
        h = iF.Get(cat+ "/"+args.var+"/histo_"+s)
        print (cat+ "/"+args.var+"/histo_"+s, h)
        hs[s] = h
        if tot_mc:
            tot_mc.Add(h)
        else:
            tot_mc = h.Clone()
            tot_mc.SetName("totMC")

    data_hist = iF.Get(cat+ "/"+args.var+"/histo_DATA")
    
    # create new ratio hist
    ratio_hist = data_hist.Clone("ratio")
    ratio_hist.Divide(tot_mc)

    # cdata = R.TCanvas("data")
    # #data_hist.Draw()
    # ratio_hist.Draw()
    # cdata.Draw()


    ratio_hist_2d = R.TH2D("ratio2D", "ratio2D", int(ranges[0]), ranges[1],ranges[2],
                                                int(ranges[3]), ranges[4], ranges[5])

    for ib in range(1,ratio_hist.GetNbinsX()+1):
        
        x =   ranges[1] + (ib // ranges[3]) * (float((ranges[2] - ranges[1]))  / float(ranges[0])) + 0.0001
        y =   ranges[4] + (ib % ranges[3]) * (float((ranges[5] - ranges[4]))  / float(ranges[3]))  + 0.0001

        #print(ib, x,y,ratio_hist_2d.FindBin(x,y), ratio_hist.GetBinContent(ib) )
        ratio_hist_2d.SetBinContent(ratio_hist_2d.FindBin(x,y), ratio_hist.GetBinContent(ib))

    ratio_hist_2d.GetZaxis().SetRangeUser(*args.z_range)
    ratio_hist_2d.SetTitle(title)
    ratio_hist_2d.GetXaxis().SetTitle(args.x_label)
    ratio_hist_2d.GetYaxis().SetTitle(args.y_label)

    c = R.TCanvas("cratio")
    ratio_hist_2d.Draw("COLZ")
    c.Draw()

    R.gStyle.SetOptStat(0)

    