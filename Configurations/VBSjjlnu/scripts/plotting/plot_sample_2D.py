import ROOT as R
import argparse


parser = argparse.ArgumentParser()
parser.add_argument("--config", help="configuration file", type=str)
parser.add_argument("-i", "--inputfile", help="input file with shapes", type=str)
parser.add_argument("-v", "--var", help="Variable to plot", type=str)
parser.add_argument("-s", "--sample", help="Sample to plot", type=str)
parser.add_argument("-c", "--cuts", help="cuts to use", nargs="+", type=str)
parser.add_argument("-r", "--ranges", help="(xbins,xmin,xmax,ybins,ymin,ymax)", nargs="+", type=float)
parser.add_argument("-t", "--title", help="Plot axes title",  type=str)
args = parser.parse_args()


exec(open(args.config))

samples= {}
cuts= {}
exec(open(samplesFile))

iF = R.TFile(args.inputfile)

for cat in args.cuts:


    hist = iF.Get(cat+ "/"+args.var+"/histo_" + args.sample)
    
    # create new ratio hist
    ratio_hist = hist.Clone("ratio")

    # cdata = R.TCanvas("data")
    # #data_hist.Draw()
    # ratio_hist.Draw()
    # cdata.Draw()


    ratio_hist_2d = R.TH2D("ratio2D", "ratio2D", int(args.ranges[0]), args.ranges[1],args.ranges[2],
                                                int(args.ranges[3]), args.ranges[4], args.ranges[5])
   
    for ib in range(1,ratio_hist.GetNbinsX()+1):
        x =   args.ranges[1] + (ib // args.ranges[3]) * ((args.ranges[2] - args.ranges[1])  / args.ranges[0]) + 0.001
        y =   args.ranges[4] + (ib % args.ranges[3]) * ((args.ranges[5] - args.ranges[4])  / args.ranges[3])  +0.001
        #print(ib, x,y,ratio_hist_2d.FindBin(x,y), ratio_hist.GetBinContent(ib) )
        ratio_hist_2d.SetBinContent(ratio_hist_2d.FindBin(x,y), ratio_hist.GetBinContent(ib))

    #ratio_hist_2d.GetZaxis().SetRangeUser(0.7,1.25)
    ratio_hist_2d.SetTitle(args.title)

    c = R.TCanvas("cratio")
    ratio_hist_2d.Draw("COLZ")
    c.Draw()

    R.gStyle.SetOptStat(0)

    