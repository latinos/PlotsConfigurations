#!/usr/bin/env python
import ROOT
import math
import json
import argparse
import os


parser = argparse.ArgumentParser()
parser.add_argument('--input', '-i', help='input ROOT file')
parser.add_argument('--name', '-n', help='folder Name')
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
         and "ggH_hww_ibin" not in branches.GetName() \
         and "qqH_hww_ibin" not in branches.GetName() \
             :
    #toDo = "root -l -q -b " +  args.input + "  scripts/Draw2DLine.cxx\(\\\"#mu\\\",\\\""  +   branches.GetName()  + "\\\",\\\"r\\\",\\\"" +  branches.GetName()   + "\\\",\\\"" +   branches.GetName()   + "\\\"\) "
    toDo = "root -l -q -b " +  args.input + "  ../scripts/Draw2DLine.cxx\(\\\"#mu\\\",\\\""  +   branches.GetName()  + "\\\",\\\"r\\\",\\\"" +  branches.GetName()   + "\\\",\\\"" +   branches.GetName()   + "\\\",\\\"1\\\",\\\""  + args.name   + "\\\"\) "
    
    #print toDo
    os.system (toDo)
  
  
