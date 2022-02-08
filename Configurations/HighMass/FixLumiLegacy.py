import ROOT
import sys
import os
import re


try:
  rootfile = sys.argv[1]
except IndexError:
  rootfile = 'Full2018/rootFile_Full2018_em/plots_Full2018_em.root'

for y in ['2016', '2017', '2018']:
  if y in rootfile: year = y

# Setting for "Legacy"
#if year=="2016":
#  lumifactor = 36.33/35.867
#elif year=="2017":
#  lumifactor = 41.48/41.53
#elif year=="2018":
#  lumifactor = 59.83/59.74
# Total new = 137.64 from adding, but 137.65 without rounding. Should just write 138 in final plots.

# Setting for "PreLegacy"
if year=="2016":
  lumifactor = 36.33/35.867
elif year=="2017":
  lumifactor = 41.53/41.53
elif year=="2018":
  lumifactor = 59.74/59.74
# Total new = 137.60. Should just write 138 in final plots.

if not os.path.exists(rootfile.replace(".root", "_new5.root")): exit()
newfile = ROOT.TFile(rootfile.replace(".root", "_new5.root"), 'read')
newfile2 = ROOT.TFile(rootfile.replace(".root", "_new6.root"), 'recreate')
for categories in newfile.GetListOfKeys(): # Cut directory
  category = newfile.GetDirectory(categories.GetName())
  newfile2.cd()
  newfile2.mkdir(categories.GetName())
  for variables in category.GetListOfKeys(): # Variable directory
    variable = category.GetDirectory(variables.GetName())
    newfile2.GetDirectory(categories.GetName()).cd()
    ROOT.gDirectory.mkdir(variables.GetName())
    newfile2.GetDirectory(categories.GetName()).GetDirectory(variables.GetName()).cd()
    for histo_ in variable.GetListOfKeys(): # Histograms
      histoname = histo_.GetName()
      histo = variable.Get(histoname)
      if not ("DATA" in histoname or "data_obs" in histoname): histo.Scale(lumifactor)
      histo.Write()
newfile2.Close()
#newfile.Close()

print "Done!"
exit(0)
