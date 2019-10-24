# Generate and fit VBF-shifted Asimov models:
# cd combination
# dofit.sh $PWD $obs VBFx AsimovGen
# dofit.sh $PWD $obs postapproval AltUnreg $PWD/${obs}_VBFx/higgsCombineAsimov.GenerateOnly.mH120.root VBFx
# bias_estimate_vbfshift.py $obs VBFx

import os
import sys
import resource
import subprocess
import numpy as np
import root_numpy as rnp
import ROOT

thisdir = os.path.dirname(os.path.realpath(__file__))
toolsdir = os.path.dirname(thisdir)
workdir = os.path.dirname(toolsdir)

import common

observable = sys.argv[1]
shift = sys.argv[2]

nominal_card_tag = 'postapproval'

npoi = len(common.binnames[observable])
mus = ['r_%d' % i for i in range(npoi)]

binning = common.binning[observable]

source = ROOT.TFile.Open('%s/fiducial/rootFile/plots_Fiducial.root' % workdir)

if shift == 'VBF0':
    scaling = {'qqH_hww': 0.}
else:
    scaling = {'qqH_hww': 2.}

_, htotal = common.get_fiducial_histograms(source, observable, ['ggH_hww', 'qqH_hww', 'WH_hww', 'ZH_hww', 'ggZH_hww', 'ttH_hww'])
nominal_yields = rnp.hist2array(htotal)
_, htotal = common.get_fiducial_histograms(source, observable, ['ggH_hww', 'qqH_hww', 'WH_hww', 'ZH_hww', 'ggZH_hww', 'ttH_hww'], scaling=scaling)
shifted_yields = rnp.hist2array(htotal)

expected_mu = shifted_yields / nominal_yields

canvas = ROOT.TCanvas('c1', 'c1', 600, 600)
canvas.SetRightMargin(0.05)
canvas.SetLeftMargin(0.15)
canvas.SetGrid(False, True)

mugraphs = [ROOT.TGraph(npoi), ROOT.TGraph(npoi)]

for ireg, reg in enumerate(['Reg', 'Unreg']):
    mugraph = mugraphs[ireg]

    path = '%s/combination/%s_%s/higgsCombineAlt%s_%s.MultiDimFit.mH120.root' % (workdir, observable, nominal_card_tag, reg, shift)
    observed_mu = np.array(tuple(rnp.root2array(path, 'limit', mus)[0]))
    ratio = observed_mu / expected_mu

    for ip in range(npoi):
        x = sum(binning[ip:ip+2]) * 0.5
        mugraph.SetPoint(ip, x, ratio[ip])

mugraphs[0].SetLineColor(ROOT.kBlack)
mugraphs[0].SetLineWidth(2)
mugraphs[0].SetMarkerColor(ROOT.kBlack)
mugraphs[0].SetMarkerStyle(8)
mugraphs[0].Draw('APL')

mugraphs[0].SetTitle(shift)
mugraphs[0].GetYaxis().SetRangeUser(0.85, 1.15)
mugraphs[0].GetYaxis().SetTitle('#sigma_{extracted} / #sigma_{injected}')
mugraphs[0].GetXaxis().SetTitle(common.xtitles[observable])
mugraphs[0].GetXaxis().SetLimits(binning[0], binning[-1])

mugraphs[1].SetLineColor(ROOT.kBlue)
mugraphs[1].SetLineWidth(2)
mugraphs[1].SetMarkerColor(ROOT.kBlue)
mugraphs[1].SetMarkerStyle(4)
mugraphs[1].SetLineStyle(ROOT.kDashed)
mugraphs[1].Draw('PL')

legend = ROOT.TLegend(0.7, 0.8, 0.9, 0.9)
legend.SetBorderSize(0)
legend.SetFillStyle(0)

legend.AddEntry(mugraphs[0], 'Regularized')
legend.AddEntry(mugraphs[1], 'Unregularized')

legend.Draw()

canvas.Print('bias_estimate_vbfshift_%s_%s.pdf' % (observable, shift))
