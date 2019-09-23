import os
import sys
import array
import ROOT

import common

ROOT.gROOT.SetBatch(True)
ROOT.gStyle.SetOptStat(0)
ROOT.gStyle.SetTextFont(42)
ROOT.gStyle.SetLabelSize(0.04, 'X')
ROOT.gStyle.SetLabelSize(0.04, 'Y')
ROOT.gStyle.SetTitleSize(0.035, 'X')
ROOT.gStyle.SetTitleSize(0.035, 'Y')
ROOT.gStyle.SetTitleOffset(1.4, 'X')
ROOT.gStyle.SetTitleOffset(1.8, 'Y')
ROOT.gStyle.SetNdivisions(208, 'X')
ROOT.gStyle.SetFillStyle(0)
ROOT.gStyle.SetNumberContours(128)
ROOT.gStyle.SetPaintTextFormat('.2f')

confdir = os.path.realpath(__file__) # this file
confdir = os.path.dirname(confdir) # plotting
confdir = os.path.dirname(confdir) # tools
confdir = os.path.dirname(confdir) # Differential

REDRAW = True

if REDRAW:
    ROOT.gSystem.Load('libLatinoAnalysisMultiDraw.so')
    ROOT.gROOT.LoadMacro('%s/weight2MINLO.cc+' % confdir)
    ROOT.gROOT.LoadMacro('%s/fiducial/fiducial.cc+' % confdir)
    
    weight2MINLO = ROOT.Weight2MINLO('%s/src/LatinoAnalysis/Gardener/python/data/powheg2minlo/NNLOPS_reweight.root' % os.getenv('CMSSW_BASE'))
    fiducial = ROOT.FiducialRegion()
    
    ### Set up the histograms
    
    output = ROOT.TFile.Open('responsematrix.root', 'recreate')
    
    ptH = ROOT.TH2D('ptH', '', len(common.binnames['ptH']) + 1, 0., float(len(common.binnames['ptH'])) + 1., len(common.binnames['ptH']) + 1, 0., float(len(common.binnames['ptH'])) + 1.)
    
    ptH.GetXaxis().SetTitle('p_{T;gen}^{H} (GeV)')
    ptH.GetYaxis().SetTitle('p_{T;reco}^{H} (GeV)')
    
    for ix, label in enumerate(common.bintitles['ptH']):
        ptH.GetXaxis().SetBinLabel(ix + 1, label)
        ptH.GetYaxis().SetBinLabel(ix + 1, label)
    
    ptH.GetXaxis().SetBinLabel(ptH.GetNbinsX(), 'nonfid.')
    ptH.GetYaxis().SetBinLabel(ptH.GetNbinsX(), 'OOA')

    ptH.SetLineColor(ROOT.kGray)
    
    njet = ROOT.TH2D('njet', '', len(common.binnames['njet']) + 1, 0., float(len(common.binnames['njet'])) + 1., len(common.binnames['njet']) + 1, 0., float(len(common.binnames['njet'])) + 1.)
    
    njet.GetXaxis().SetTitle('N_{jet;gen}')
    njet.GetYaxis().SetTitle('N_{jet;reco}')
        
    for ix, label in enumerate(common.bintitles['njet']):
        njet.GetXaxis().SetBinLabel(ix + 1, label)
        njet.GetYaxis().SetBinLabel(ix + 1, label)
    
    njet.GetXaxis().SetBinLabel(njet.GetNbinsX(), 'nonfid.')
    njet.GetYaxis().SetBinLabel(njet.GetNbinsX(), 'OOA')

    njet.SetLineColor(ROOT.kGray)
    
    ### Fill the in-acceptance part from 2018 wwSel
    
    drawer = ROOT.multidraw.MultiDraw('Events')
    drawer.addInputPath('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv5_Full2018v5/MCl1loose2018v5__MCCorr2018v5__l2loose__l2tightOR2018v5__wwSel/nanoLatino_GluGluHToWWTo2L2NuPowheg_M125__part*.root')
    drawer.setWeightBranch('XSWeight')
    
    drawer.setReweight(ROOT.multidraw.ReweightSource(ROOT.multidraw.CompiledExprSource(weight2MINLO)))
    
    _tmp = [
        'mll>12',
        'Lepton_pt[0]>25 && Sum$(Lepton_pt>10) == 2',
        'abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5',
        'PuppiMET_pt > 20',
        'ptll>30',
        'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
        'Lepton_pt[1] > 13.',
        'mth>60 && mtw2>30',
        'Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1241) == 0',
        'Alt$(Lepton_promptgenmatched[0]*Lepton_promptgenmatched[1], 0)'
    ]
    sr = ' && '.join(_tmp)
    
    drawer.setFilter(sr)
    
    drawer.addAlias('fiducial', fiducial)
    
    xexpr = 'fiducial * ('
    xexpr += ' + '.join('(HTXS_Higgs_pt > %f)' % t for t in common.binning['ptH'][1:-1])
    xexpr += ') + (!fiducial) * %d' % len(common.binnames['ptH'])
    yexpr = ' + '.join('(pTWW > %f)' % t for t in common.binning['ptH'][1:-1])
    
    drawer.addPlot2D(ptH, xexpr, yexpr)
    
    xexpr = 'fiducial * ('
    xexpr += ' + '.join('(HTXS_njets30 > %f)' % t for t in common.binning['njet'][:-1])
    xexpr += ') + (!fiducial) * %d' % len(common.binnames['njet'])
    yexpr = ' + '.join('(Alt$(CleanJet_pt[%d], 0.) > 30.)' % i for i in range(len(common.binnames['njet']) - 1))
    
    drawer.addPlot2D(njet, xexpr, yexpr)
    
    drawer.execute()
    
    ### Fill the out-of-acceptance part from genonly minus in-acceptance
    
    drawer = ROOT.multidraw.MultiDraw('Events')
    drawer.addInputPath('/eos/cms/store/user/yiiyama/HWWNano/Autumn18_102X_nAODv5_Full2018v5/MCGenOnly/nanoLatino_GluGluHToWWTo2L2NuPowheg_M125__part*.root')
    drawer.setWeightBranch('baseW')
    
    weight2MINLOWeight = ROOT.multidraw.ReweightSource(ROOT.multidraw.CompiledExprSource(weight2MINLO))
    genWeight = ROOT.multidraw.ReweightSource('genWeight')
    
    drawer.setReweight(ROOT.multidraw.ReweightSource(weight2MINLOWeight, genWeight))

    drawer.setFilter('Sum$(TMath::Abs(DressedLepton_pdgId) == 11 && LeptonGen_isPrompt) * Sum$(TMath::Abs(DressedLepton_pdgId) == 13 && LeptonGen_isPrompt) == 1')
    
    drawer.addAlias('fiducial', fiducial)
    
    xexpr = 'fiducial * ('
    xexpr += ' + '.join('(HTXS_Higgs_pt > %f)' % t for t in common.binning['ptH'][1:-1])
    xexpr += ') + (!fiducial) * %d' % len(common.binnames['ptH'])
    yexpr = str(len(common.binnames['ptH']))
    
    drawer.addPlot2D(ptH, xexpr, yexpr)
    
    xexpr = 'fiducial * ('
    xexpr += ' + '.join('(HTXS_njets30 > %f)' % t for t in common.binning['njet'][:-1])
    xexpr += ') + (!fiducial) * %d' % len(common.binnames['njet'])
    yexpr = str(len(common.binnames['njet']))
    
    drawer.addPlot2D(njet, xexpr, yexpr)
    
    drawer.execute()

    iy = ptH.GetNbinsY()
    for ix in range(1, ptH.GetNbinsX() + 1):
        inacc = sum(ptH.GetBinContent(ix, k) for k in range(1, iy))
        ptH.SetBinContent(ix, iy, ptH.GetBinContent(ix, iy) - inacc)
    
    iy = njet.GetNbinsY()
    for ix in range(1, njet.GetNbinsX() + 1):
        inacc = sum(njet.GetBinContent(ix, k) for k in range(1, iy))
        njet.SetBinContent(ix, iy, njet.GetBinContent(ix, iy) - inacc)
    
    output.cd()
    output.Write()

else:
    output = ROOT.TFile.Open('responsematrix.root')
    ptH = output.Get('ptH')
    njet = output.Get('njet')

canvas = ROOT.TCanvas('c1', 'c1', 600, 600)
canvas.SetLeftMargin(0.15)
canvas.SetRightMargin(0.05)
canvas.SetBottomMargin(0.15)
canvas.SetTopMargin(0.05)

ptH_colnorm = ptH.Clone('ptH_colnorm')
for ix in range(1, ptH.GetNbinsX() + 1):
    inacc = sum(ptH.GetBinContent(ix, k) for k in range(1, ptH.GetNbinsY()))
    for iy in range(1, ptH.GetNbinsY() + 1):
        ptH_colnorm.SetBinContent(ix, iy, ptH.GetBinContent(ix, iy) / inacc)

ptH_colnorm_box = ptH_colnorm.Clone('ptH_colnorm_box')
ptH_colnorm_box.SetBinContent(ptH.GetNbinsX(), ptH.GetNbinsY(), 0.)

ptH_colnorm_box.Draw('BOX')
ptH_colnorm.Draw('TEXT SAME')

canvas.Print('ptH_colnorm.pdf')

ptH_rownorm = ptH.Clone('ptH_rownorm')
for iy in range(1, ptH.GetNbinsY() + 1):
    infid = sum(ptH.GetBinContent(k, iy) for k in range(1, ptH.GetNbinsX()))
    for ix in range(1, ptH.GetNbinsX() + 1):
        ptH_rownorm.SetBinContent(ix, iy, ptH.GetBinContent(ix, iy) / infid)

ptH_rownorm_box = ptH_rownorm.Clone('ptH_rownorm_box')
ptH_rownorm_box.SetBinContent(ptH.GetNbinsX(), ptH.GetNbinsY(), 0.)

ptH_rownorm_box.Draw('BOX')
ptH_rownorm.Draw('TEXT SAME')
        
canvas.Print('ptH_rownorm.pdf')

njet_colnorm = njet.Clone('njet_colnorm')
for ix in range(1, njet.GetNbinsX() + 1):
    inacc = sum(njet.GetBinContent(ix, k) for k in range(1, njet.GetNbinsY()))
    for iy in range(1, njet.GetNbinsY() + 1):
        njet_colnorm.SetBinContent(ix, iy, njet.GetBinContent(ix, iy) / inacc)

njet_colnorm_box = njet_colnorm.Clone('njet_colnorm_box')
njet_colnorm_box.SetBinContent(njet.GetNbinsX(), njet.GetNbinsY(), 0.)

njet_colnorm_box.Draw('BOX')
njet_colnorm.Draw('TEXT SAME')

canvas.Print('njet_colnorm.pdf')

njet_rownorm = njet.Clone('njet_rownorm')
for iy in range(1, njet.GetNbinsY() + 1):
    infid = sum(njet.GetBinContent(k, iy) for k in range(1, njet.GetNbinsX()))
    for ix in range(1, njet.GetNbinsX() + 1):
        njet_rownorm.SetBinContent(ix, iy, njet.GetBinContent(ix, iy) / infid)

njet_rownorm_box = njet_rownorm.Clone('njet_rownorm_box')
njet_rownorm_box.SetBinContent(njet.GetNbinsX(), njet.GetNbinsY(), 0.)

njet_rownorm_box.Draw('BOX')
njet_rownorm.Draw('TEXT SAME')

canvas.Print('njet_rownorm.pdf')
