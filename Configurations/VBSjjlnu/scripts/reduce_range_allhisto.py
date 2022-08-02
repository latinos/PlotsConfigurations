import ROOT as R 
import argparse 
import os


parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", help="input file", type=str)
parser.add_argument("-o","--output", help="output file", type=str)
parser.add_argument("-c", "--cuts", help="Cuts", nargs="+", type=str)
parser.add_argument("-v", "--vars", help="Vars", nargs="+", type=str)
parser.add_argument("--xmax", help="New Xmax", type=float)
args = parser.parse_args()

iF = R.TFile.Open(args.input,"READ")
oF = R.TFile.Open(args.output,"RECREATE")

def getNewHisto(h, X_newmax):
    oldmaxbin = h.FindBin(X_newmax)
    # print("Bin max: ", oldmaxbin)
    print("New histo settings: ", oldmaxbin, h.GetBinLowEdge(1), h.GetBinLowEdge(oldmaxbin+1))
    newH = R.TH1F(h.GetName(), h.GetTitle(), oldmaxbin, h.GetBinLowEdge(1), h.GetBinLowEdge(oldmaxbin+1))
    for i in range(0, oldmaxbin):
        newH.SetBinContent(i, h.GetBinContent(i))
    sumbins = 0.
    for i in range(oldmaxbin, h.GetNbinsX()+2):
        sumbins+= h.GetBinContent(i)
    #print(h.Integral(oldmaxbin,  h.GetNbinsX()+2), sumbins)
    newH.SetBinContent(oldmaxbin, oldmaxbin, sumbins)
    #print(h.Integral(),newH.Integral())
    return newH


for cut in args.cuts:
    oF.mkdir(cut)
    for var in args.vars:
        oF.mkdir(cut + "/"+ var)
        oF.cd(cut + "/" + var)
        
        for key in iF.Get(cut+"/"+var).GetListOfKeys():
            print(key.GetName())
            oldH = iF.Get("{}/{}/{}".format(cut, var, key.GetName()))
            newH = getNewHisto(oldH, args.xmax)
            newH.Write()
        
        oF.cd("/")

iF.Close()
oF.Close()