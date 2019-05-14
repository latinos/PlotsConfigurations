#!/usr/bin/env python

import os
import ROOT
import sys


###
### Run this after mkShapesMulti Hadd-step, and before mkPlot
###


cwd = os.getcwd()
sys.path.append("..")
from configuration import *

rootfile = cwd + "/" + outputDir + "/" + "plots_" + tag + ".root"
origfile = rootfile.replace(".root", "_orig.root")

print "copying.."
if not os.path.isfile(origfile):
  os.system("cp "+rootfile+" "+origfile)
else:
  os.system("cp "+origfile+" "+rootfile)
print "Copy done"

newfile = ROOT.TFile(rootfile, 'update')

for categories in newfile.GetListOfKeys(): # Cut directory
  category = newfile.GetDirectory(categories.GetName())
  for variables in category.GetListOfKeys(): # Variable directory
    variable = category.GetDirectory(variables.GetName())

    DYvetoUp = variable.Get("histo_DYveto_CMS_embed_vetoUp")
    DYvetoDn = variable.Get("histo_DYveto_CMS_embed_vetoDown")
    DYuncUp = variable.Get("histo_DY_CMS_embed_vetoUp")
    DYuncDn = variable.Get("histo_DY_CMS_embed_vetoDown")

    DYuncUp.Add(DYvetoUp)
    DYuncDn.Add(DYvetoDn)
    newfile.GetDirectory(categories.GetName()).GetDirectory(variables.GetName()).cd()
    DYuncUp.Write()
    DYuncDn.Write()

newfile.Close()
print "Done!"
exit(0)

