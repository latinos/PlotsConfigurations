# Sanity checks of STXS rootfile
#
# Script can:
# -- Check for negative bins in signal histograms, and save histogram
# -- Compare STXS counts against inclusive (if file provided)
#
# Usage: python check_STXS.py <STXS rootfile> <inclusive rootfile (optional)>
#
# Assumes:
# -- No systematics used in STXS which are not used in inclusive
# -- No variables used in STXS which are not used in inclusive

import os
import sys
from ROOT import *

gROOT.SetBatch(1)
gStyle.SetOptStat(0)

if len(sys.argv) < 2:
  print 'Usage: python check_STXS.py <STXS rootfile> <inclusive rootfile (optional)>'
  exit()

#Samples with suppressNegativeNuisances can have variant histograms with different integral between STXS and inclusive -- indicate these samples here
ignore_SNN = ['Fake_m','Fake_e','DY']

#Note: later on we also hard-code to ignore QCDscale_VV -- envelope uncertainty doesn't seem to close

counts = {}
c = TCanvas("c","c",900,700)
fSTXS = TFile.Open(sys.argv[1])
for cutkey in fSTXS.GetListOfKeys():
  cut = cutkey.GetName()
  cutinc = cut.split('_ptv')[0]
  counts[cut] = {}
  if not cutinc in counts:
    counts[cutinc] = {}
  cutdir = fSTXS.Get(cut)
  for plotkey in cutdir.GetListOfKeys():
    plot = plotkey.GetName()
    counts[cut][plot] = {}
    if not plot in counts[cutinc]:
      counts[cutinc][plot] = {}
    plotdir = cutdir.Get(plot)
    histnames_all = [histkey.GetName() for histkey in plotdir.GetListOfKeys()]
    histnames = list(set(histnames_all))
    for histname in histnames:
      if 'QCDscale_VV' in histname: continue
      hist = plotdir.Get(histname)
      counts[cut][plot][histname] = hist.GetEntries()
      histnameinc = histname
      if 'PTV' in histname or 'FWDH' in histname:
        #Look for negative bins
        negbin = []
        for ibin in xrange(1,hist.GetNbinsX()+1):
          if hist.GetBinContent(ibin) < 0:
            negbin.append("%d"%ibin)
        if len(negbin) > 0:
          hist.Draw("ep1")
          c.SaveAs(cut+"_"+plot+"_"+histname+".png")
          print '%s/%s/%s has negative bins '%(cut,plot,histname)+','.join(negbin)
        #Now get count sums
        histnameinc = histnameinc.replace('_PTV_LT150','')
        histnameinc = histnameinc.replace('_PTV_GT150','')
        histnameinc = histnameinc.replace('_FWDH','')
        if histnameinc in counts[cut][plot]:
          counts[cut][plot][histnameinc] += hist.GetEntries()
        else:
          counts[cut][plot][histnameinc] = hist.GetEntries()
      if cutinc != cut:
        if histnameinc in counts[cutinc][plot]:
          counts[cutinc][plot][histnameinc] += hist.GetEntries()
        else:
          counts[cutinc][plot][histnameinc] = hist.GetEntries()
        
#Have counts, now do check
if len(sys.argv) > 2:
  fInc = TFile.Open(sys.argv[2])
  for cut in counts:
    if 'ptv' in cut: continue
    for plot in counts[cut]:
      if plot == 'ZH4l_pTZ' : continue
      for histname in counts[cut][plot]:
        if 'PTV' in histname or 'FWDH' in histname: continue
        hist = fInc.Get(cut+"/"+plot+"/"+histname)
        try:
          if abs(counts[cut][plot][histname] - hist.GetEntries()) > 0.00001:
            if any ([s in histname for s in ['Up','Down','Var']]) and any([sample in histname for sample in ignore_SNN]):
              continue
            else:
              #Add more detailed error printout with breakdown at some point...
              print 'Error: mismatch for %s/%s/%s, %.1f (STXS) vs %.1f (Inc)'%(cut,plot,histname,counts[cut][plot][histname],hist.GetEntries())
        except:
          print "Error: couldn't get %s/%s/%s"%(cut,plot,histname)


