import ROOT as R 
import argparse 
import os


parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", help="input file", type=str)
parser.add_argument("-o","--output", help="output file", type=str)
parser.add_argument("-c", "--cuts", help="Cuts", nargs="+", type=str)
parser.add_argument("-v", "--vars", help="Vars", nargs="+", type=str)
parser.add_argument("-s", "--samples", help="Samples", nargs="+", type=str)
parser.add_argument("--xmax", help="New Xmax", type=float)
args = parser.parse_args()

iF = R.TFile.Open(args.input,"READ")
oF = R.TFile.Open(args.output,"RECREATE")

def getNewHisto(h, X_newmax):
    oldmaxbin = h.FindBin(X_newmax)

    print("Bin max: ", oldmaxbin)
    print("New histo settings: ", oldmaxbin, h.GetBinLowEdge(1), h.GetBinLowEdge(oldmaxbin+1))
    newH = R.TH1F(h.GetName(), h.GetTitle(), oldmaxbin, h.GetBinLowEdge(1), h.GetBinLowEdge(oldmaxbin+1))

    for i in range(0, oldmaxbin):
        newH.SetBinContent(i, h.GetBinContent(i))

    sumbins = 0.
    for i in range(oldmaxbin, h.GetNbinsX()+2):
        sumbins+= h.GetBinContent(i)

    print(h.Integral(oldmaxbin,  h.GetNbinsX()+2), sumbins)
    newH.SetBinContent(oldmaxbin, oldmaxbin, sumbins)

    print(h.Integral(),newH.Integral())
    return newH

def getNewGraph(gr, histo, X_newmax):
    nmax = histo.FindBin(X_newmax)
    ntotal = gr.GetN()
    newGr = R.TGraphAsymmErrors(nmax)

    for i in range(nmax):
        newGr.SetPoint(i, gr.GetPointX(i), gr.GetPointY(i))
        newGr.SetPointError(i, 0., 0., gr.GetErrorYlow(i), gr.GetErrorYhigh(i))

    sumbins = 0.
    sumbins_high, sumbins_low = 0.,0.
    for i in range(nmax, ntotal+1):
        sumbins += gr.GetPointY(i)
        sumbins_low += gr.GetErrorYlow(i)
        sumbins_high += gr.GetErrorYhigh(i)

    newGr.SetPoint(nmax, gr.GetPointX(nmax), sumbins)
    newGr.SetPointError(nmax, 0., 0., sumbins+sumbins_low, sumbins+sumbins_high)
    print(sumbins, sumbins_low, sumbins_high)
    return newGr


for cut in args.cuts:
    oF.mkdir(cut)
    for var in args.vars:
        oF.mkdir(cut + "/"+ var)
        oF.cd(cut + "/" + var)
        for sample in args.samples:
            oldH = iF.Get("{}/{}/histo_{}".format(cut, var, sample))
            newH = getNewHisto(oldH, args.xmax)
            newH.Write()
        
        oldH = iF.Get("{}/{}/histo_total".format(cut, var))
        newH = getNewHisto(oldH, args.xmax)
        newH.Write()

        oldGr =  iF.Get("{}/{}/gr_total".format(cut, var))
        newGr = getNewGraph(oldGr, oldH, args.xmax)
        newGr.Write()
        oF.cd("/")

iF.Close()
oF.Close()