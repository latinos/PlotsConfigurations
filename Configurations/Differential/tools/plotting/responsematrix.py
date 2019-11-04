import os
import sys
import array
import glob
import numpy as np
import ROOT
import root_numpy as rnp

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
DATASET = '2016'
STYLE = 'HIG-17-025'
#STYLE = ''

if REDRAW:
    ROOT.gSystem.Load('libLatinoAnalysisMultiDraw.so')
    ROOT.gROOT.LoadMacro('%s/weight2MINLO.cc+' % confdir)
    ROOT.gROOT.LoadMacro('%s/fiducial/fiducial.cc+' % confdir)
    
    weight2MINLO = ROOT.Weight2MINLO('%s/src/LatinoAnalysis/Gardener/python/data/powheg2minlo/NNLOPS_reweight.root' % os.getenv('CMSSW_BASE'))
    weight2MINLOReweight = ROOT.multidraw.ReweightSource(ROOT.multidraw.CompiledExprSource(weight2MINLO))
    fiducial = ROOT.FiducialRegion()

    productions = {
        '2016': 'Summer16_102X_nAODv5_SigOnly_Full2016v5',
        '2017': 'Fall2017_102X_nAODv5_SigOnly_Full2017v5',
        '2018': 'Autumn18_102X_nAODv5_Full2018v5'
    }

    steps = {
        '2016': 'MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5__wwSel',
        '2017': 'MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5__wwSel',
        '2018': 'MCl1loose2018v5__MCCorr2018v5__l2loose__l2tightOR2018v5__wwSel'
    }

    trees = {
        '2016': ['GluGluHToWWTo2L2NuPowheg_M125', 'VBFHToWWTo2L2NuPowheg_M125', 'HWminusJ_HToWW_M125', 'HWplusJ_HToWW_M125', 'HZJ_HToWW_M125', 'ggZH_HToWW_M125', 'ttHToNonbb_M125'],
        '2017': ['GluGluHToWWTo2L2NuPowheg_M125', 'VBFHToWWTo2L2NuPowheg_M125', 'HWminusJ_HToWW_M125', 'HWplusJ_HToWW_M125', 'HZJ_HToWWTo2L2Nu_M125', 'GluGluZH_HToWWTo2L2Nu_M125', 'ttHToNonbb_M125'],
        '2018': ['GluGluHToWWTo2L2NuPowheg_M125', 'VBFHToWWTo2L2NuPowheg_M125', 'HWminusJ_HToWW_M125', 'HWplusJ_HToWW_M125', 'HZJ_HToWW_M125', 'GluGluZH_HToWWTo2L2Nu_M125', 'ttHToNonbb_M125']
    }
  
    ### Set up the histograms
    
    output = ROOT.TFile.Open('responsematrix_%s.root' % DATASET, 'recreate')

    nbins = len(common.binnames['ptH'])
    ptH = ROOT.TH2D('ptH', '', nbins + 1, 0., float(nbins) + 1., nbins + 1, 0., float(nbins) + 1.)
    
    ptH.GetXaxis().SetTitle('p_{T;gen}^{H} (GeV)')
    ptH.GetYaxis().SetTitle('p_{T;reco}^{H} (GeV)')
    
    for ix, label in enumerate(common.bintitles['ptH']):
        ptH.GetXaxis().SetBinLabel(ix + 1, label)
        ptH.GetYaxis().SetBinLabel(ix + 1, label)
    
    ptH.GetXaxis().SetBinLabel(ptH.GetNbinsX(), 'nonfid.')
    ptH.GetYaxis().SetBinLabel(ptH.GetNbinsX(), 'OOA')

    ptH.SetLineColor(ROOT.kGray)

    nbins = len(common.binnames['njet'])
    njet = ROOT.TH2D('njet', '', nbins + 1, 0., float(nbins) + 1., nbins + 1, 0., float(nbins) + 1.)
    
    njet.GetXaxis().SetTitle('N_{jet;gen}')
    njet.GetYaxis().SetTitle('N_{jet;reco}')
        
    for ix, label in enumerate(common.bintitles['njet']):
        njet.GetXaxis().SetBinLabel(ix + 1, label)
        njet.GetYaxis().SetBinLabel(ix + 1, label)
    
    njet.GetXaxis().SetBinLabel(njet.GetNbinsX(), 'nonfid.')
    njet.GetYaxis().SetBinLabel(njet.GetNbinsX(), 'OOA')

    njet.SetLineColor(ROOT.kGray)
    
    ### Fill the in-acceptance part from wwSel
    
    drawer = ROOT.multidraw.MultiDraw('Events')
    drawer.setWeightBranch('XSWeight')

    treedir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/%s/%s' % (productions[DATASET], steps[DATASET])
    ifile = 0
    for sample in trees[DATASET]:
        for fname in glob.glob('%s/nanoLatino_%s__part*.root' % (treedir, sample)):
            drawer.addInputPath(fname)
            if 'GluGluHToWW' in sample:
                drawer.setTreeReweight(ifile, False, weight2MINLOReweight)
            ifile += 1
    
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

    drawer.setAbortOnReadError(True)
    drawer.execute()
    
    ### Fill the out-of-acceptance part from genonly minus in-acceptance
    
    drawer = ROOT.multidraw.MultiDraw('Events')
    drawer.setWeightBranch('baseW')

    genWeight = ROOT.multidraw.ReweightSource('genWeight')
    drawer.setReweight(genWeight)

    treedir = '/eos/cms/store/user/yiiyama/HWWNano/%s/MCGenOnly' % productions[DATASET]
    ifile = 0
    for sample in trees[DATASET]:
        for fname in glob.glob('%s/nanoLatino_%s__part*.root' % (treedir, sample)):
            drawer.addInputPath(fname)
            if 'GluGluHToWW' in sample:
                drawer.setTreeReweight(ifile, False, weight2MINLOReweight)
            ifile += 1

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

    ptH_cont = rnp.hist2array(ptH, copy=False)
    ptH_cont[:,-1] -= np.sum(ptH_cont[:,0:-1], axis=1)

    njet_cont = rnp.hist2array(njet, copy=False)
    njet_cont[:,-1] -= np.sum(njet_cont[:,0:-1], axis=1)
    
    output.cd()
    output.Write()

else:
    output = ROOT.TFile.Open('responsematrix_%s.root' % DATASET)
    ptH = output.Get('ptH')
    njet = output.Get('njet')

if STYLE == 'HIG-17-025':
    red = array.array('d', [1., 0.9, 0.8])
    green = array.array('d', [1., 0.45, 0.])
    blue = array.array('d', [1., 0.45, 0.])
    points = array.array('d', [0., 0.5, 1.])

    ROOT.TColor.CreateGradientColorTable(3, points, red, green, blue, 128)

    cw = 650
    canvas = ROOT.TCanvas('c1', 'c1', cw, 600)
    canvas.SetLeftMargin(90. / cw)
    canvas.SetBottomMargin(0.12)
    canvas.SetTopMargin(0.08)
    canvas.SetRightMargin((cw - 600 * 0.95) / cw)

    cmsLabel = common.makeCMS(prelim=False, out=True)
    cmsLabel.SetX1NDC(0.18 * 600. / cw)
    cmsLabel.SetX2NDC(0.3 * 600. / cw)
    suppl = common.makeText(0.24, common.ymax, 0.6, 0.98, 'simulation supplementary', align=13, font=52)
    com = common.makeText(0.7, common.ymax, 0.9, 1., '(13 TeV)', align=33)

    for obs, source in [('ptH', ptH), ('njet', njet)]:
        source_arr = rnp.hist2array(source, copy=False)

        gen_total = np.sum(source_arr, axis=1)

        colnorm_arr = np.transpose(np.transpose(source_arr, (1, 0)) / gen_total, (1, 0))

        matrix = source.Clone('matrix')
        matrix.SetBins(source.GetNbinsX() - 1, 0., float(source.GetNbinsX()), source.GetNbinsY() - 1, 0., float(source.GetNbinsY()))
        rnp.array2hist(colnorm_arr[:-1, :-1], matrix)

        matrix.Draw('COLZ TEXT')

        cmsLabel.Draw()
        suppl.Draw()
        com.Draw()

        canvas.RedrawAxis()
        
        canvas.Print('response_%s_%s.pdf' % (obs, DATASET))

else:
    canvas = ROOT.TCanvas('c1', 'c1', 600, 600)
    canvas.SetLeftMargin(0.15)
    canvas.SetRightMargin(0.05)
    canvas.SetBottomMargin(0.15)
    canvas.SetTopMargin(0.05)

    for obs, source in [('ptH', ptH), ('njet', njet)]:
        source_arr = rnp.hist2array(source, copy=False)

        in_acceptance = np.sum(source_arr[:, :-1], axis=1)
        in_fiducial = np.sum(source_arr[:-1, :], axis=0)

        colnorm = source.Clone('%s_colnorm' % obs)
        colnorm_arr = np.transpose(np.transpose(source_arr, (1, 0)) / in_acceptance, (1, 0))
        rnp.array2hist(colnorm_arr, colnorm)
        
        colnorm_box = colnorm.Clone('%s_colnorm_box' % obs)
        colnorm_box.SetBinContent(source.GetNbinsX(), source.GetNbinsY(), 0.)
        
        colnorm_box.Draw('BOX')
        colnorm.Draw('TEXT SAME')
        
        canvas.Print('%s_colnorm_%s.pdf' % (obs, DATASET))
        
        rownorm = source.Clone('%s_rownorm' % obs)
        rownorm_arr = source_arr / in_fiducial
        rnp.array2hist(rownorm_arr, rownorm)

        rownorm_box = rownorm.Clone('%s_rownorm_box' % obs)
        rownorm_box.SetBinContent(source.GetNbinsX(), source.GetNbinsY(), 0.)
        
        rownorm_box.Draw('BOX')
        rownorm.Draw('TEXT SAME')
                
        canvas.Print('%s_rownorm_%s.pdf' % (obs, DATASET))
    
