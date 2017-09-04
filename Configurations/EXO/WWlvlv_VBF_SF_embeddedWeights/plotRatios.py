#!/usr/bin/env python

from ROOT import *

import sys


filein=TFile(sys.argv[1])

backgrounds=['WW', 'top', 'Vg', 'VVV', 'VZ', 'VgS']

#cuts=['hww2l2v_13TeV_dy_mu_mu_0j', 'hww2l2v_13TeV_dy_mu_mu_1j', 'hww2l2v_13TeV_dy_mu_mu_2j', 'hww2l2v_13TeV_dy_mu_mu_2j_VBF']
cuts=['hww2l2v_13TeV_dy_mu_mu_2j_VBF']

for cut in cuts:
  data=filein.Get(cut+"/metPfType1/histo_DATA")
  for background in backgrounds:
    hbkg = filein.Get(cut+"/metPfType1/histo_"+background)
    data.Add(hbkg, -1.)

  hdy=filein.Get(cut+"/metPfType1/histo_DY")

  data.Divide(hdy)
  print cut
  data.Fit("pol1")
  
