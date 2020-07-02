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
parser.add_argument("--outputdir", "-o", help="outputdir")
args = parser.parse_args()

# get list of nuisances
print " input: ", args.input
f_input = ROOT.TFile.Open(args.input, "read")
tree = f_input.Get("limit")

list_branches = tree.GetListOfBranches()
print "branches = ", list_branches

for branches in list_branches:
  #print branches.GetName()
   
  if branches.GetName() != "limit"  and branches.GetName() != "mh" \
         and branches.GetName() != "limitErr"   and branches.GetName() != "syst"   and branches.GetName() != "iToy" \
         and branches.GetName() != "iSeed"      and branches.GetName() != "iChannel" \
         and branches.GetName() != "t_cpu" \
         and branches.GetName() != "t_real" \
             :
    toDo = "root -l -q -b " +  args.input + """  'Draw2DLine.cxx("{}","{}", "{}","{}","{}","1","{}")' """.format(
                            args.x_label, branches.GetName(), args.x, branches.GetName(), args.x+"_"+branches.GetName(), args.outputdir)
    #print toDo
    os.system (toDo)
  
  
