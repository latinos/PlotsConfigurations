import ROOT as R
import argparse
import os
import numpy as np

R.gROOT.SetBatch(True)

parser = argparse.ArgumentParser()
parser.add_argument("--input-nominal", type=str)
parser.add_argument("--input-variation", type=str)
parser.add_argument("--name", help="morphing name", type=str)
parser.add_argument("--nominal", type=str)
parser.add_argument("--up", type=str)
parser.add_argument("--down", type=str)
parser.add_argument("--npoints", type=int, default=200)
parser.add_argument("--outputfile", type=str)
parser.add_argument("--plot",action="store_true")
args = parser.parse_args()

if not os.path.dirname(args.outputfile):
    os.makedirs(os.path.dirname(args.outputfile))

iF_nom = R.TFile.Open(args.input_nominal, "READ")
iF_var = R.TFile.Open(args.input_variation, "READ")

oF = R.TFile.Open(args.outputfile, "UPDATE")

morph = iF_nom.Get(args.nominal)
up = iF_var.Get(args.up)
down = iF_var.Get(args.down)


def combine_morphing(f1, f2, name, npoints):
    t = R.TGraph()
    t.SetName(name)
    for i,x in enumerate(np.linspace(0.,1.,npoints)):
        y1 = f1.Eval(x)
        if y1>1: y1 = 1
        y = f2.Eval(y1)
        if y>1: y=1
        t.SetPoint(i,x,y)
    return t


morph_up = combine_morphing(morph, up, args.name+ "_up", args.npoints)
morph_down = combine_morphing(morph, down, args.name+ "_down", args.npoints)
morph.SetName(args.name + "_nom")

if args.plot:
    c = R.TCanvas()
    mg = R.TMultiGraph()
    mg.Add(morph)
    mg.Add(morph_up)
    mg.Add(morph_down)
    mg.Draw("APL PLC")
    c.Draw()
    input()

oF.cd()
morph_up.Write()
morph_down.Write()
morph.Write() 
oF.Close()


