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

rootfile = cwd + "/" + outputDir + "/" + "plots_" + tag + ".root" #"PlotsConfigurations/Configurations/ggH/EmbedFull2017/rootFileggH_emb/plots_ggH_emb.root"
origfile = rootfile.replace(".root", "_orig.root")

print "copying.."
if not os.path.isfile(origfile):
  os.system("cp "+rootfile+" "+origfile)
else:
  os.system("cp "+origfile+" "+rootfile)
print "Copy done"

newfile = ROOT.TFile(rootfile, 'update')
#oldfile = ROOT.TFile(origfile, 'read')

for categories in newfile.GetListOfKeys(): # Category directory
  category = newfile.GetDirectory(categories.GetName())
  print "-----Category", categories.GetName()
  for variables in category.GetListOfKeys(): # Plottype directory
    variable = category.GetDirectory(variables.GetName())
    print "---Cut", variables.GetName()

    #for histos in variable.GetListOfKeys(): # Shape directory
    #  print "-Histo", histos.GetName()

    DYvetoUp = variable.Get("histo_DYveto_CMS_embed_vetoUp")
    #DYvetoUp = oldfile.GetDirectory(categories.GetName()).GetDirectory(variables.GetName()).Get("histo_DYveto_CMS_embed_vetoUp")
    DYvetoDn = variable.Get("histo_DYveto_CMS_embed_vetoDown")
    DYuncUp = variable.Get("histo_DY_CMS_embed_vetoUp")
    DYuncDn = variable.Get("histo_DY_CMS_embed_vetoDown")
    #TODO: Sumw2 ?
    #print type(DYvetoUp)
    #print isinstance(DYvetoUp, ROOT.TH1)
    #print type(DYuncUp)
    #print isinstance(DYuncUp, ROOT.TH1)
    DYuncUp.Add(DYvetoUp)
    DYuncDn.Add(DYvetoDn)
    newfile.GetDirectory(categories.GetName()).GetDirectory(variables.GetName()).cd()
    DYuncUp.Write()
    DYuncDn.Write()
newfile.Close()
#oldfile.Close()
print "Done!"
exit(0)

