#!/usr/bin/env python
import ROOT
import math
import json
import argparse
import os


parser = argparse.ArgumentParser()
parser.add_argument('--input', '-i', help='input ROOT file')
parser.add_argument("-x", help="x var")
parser.add_argument("--x-label", help="x varlabel")
parser.add_argument("-y", help="y var")
parser.add_argument("--y-label", help="y varlabel")
parser.add_argument("--outputdir", "-o", help="outputdir")
args = parser.parse_args()

# get list of nuisances
print " input: ", args.input
f_input = ROOT.TFile.Open(args.input, "read")
tree = f_input.Get("limit")


ROOT.gInterpreter.ProcessLine(".L Draw2DImproved.cxx")

ROOT.Draw2DImproved(tree, args.x_label, args.y_label, args.x, args.y )

  
