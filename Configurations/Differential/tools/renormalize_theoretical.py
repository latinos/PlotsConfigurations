## Compute renormalization factors for signal theoretical uncertainties
## Each signal variation must preserve the total signal prediction in the fiducial region
## -> Each renormalization factor is applied to all signals (or rather to the combined signal sample)

import os
import sys
import ROOT

ROOT.gROOT.SetBatch(True)

from setupfiducial import setupfiducial
from LatinoAnalysis.Tools.HiggsXSection import HiggsXSection
HiggsXS = HiggsXSection()

ROOT.gSystem.Load('libLatinoAnalysisMultiDraw.so')

out = ROOT.TFile.Open(os.path.dirname(os.path.realpath(__file__)) + '/renormalize_theoretical_' + year + '.root', 'recreate')

latinoSamples = {
    #'ggH_hww': ([('GluGluHToWWTo2L2NuPowheg_M125', 499473, 0.9913)], 'weight2MINLO'),
    'ggH_hww': ([('GluGluHToWWTo2L2NuPowheg_M125', 499473, 0.9913)], '1'), # weight2MINLO missing in the base tree
    'qqH_hww': ([('VBFHToWWTo2L2Nu_M125', 100000, 0.0846)], '1'),
    'WH_hww': ([('HWminusJ_HToWW_M125', 299799, 0.1160), ('HWplusJ_HToWW_M125', 299997, 0.1810)], '1'),
    'ZH_hww': ([('HZJ_HToWW_M125', 295529, 0.187)], '1'),
    'ggZH_hww': ([('ggZH_HToWW_M125', 148525, 0.1227*0.215)], '1'), # taken from XSWG twiki; may not be consistent with others
    'ttH_hww': ([('ttHToNonbb_M125', 3981250, 0.2120)], '1'),
    #'bbH_hww'
}

thus = [
    ('THU_ggH_Mu', 'ggH_mu'),
    ('THU_ggH_Res', 'ggH_res'),
    ('THU_ggH_Mig01', 'ggH_mig01'),
    ('THU_ggH_Mig12', 'ggH_mig12'),
    ('THU_ggH_VBF2j', 'ggH_VBF2j'),
    ('THU_ggH_VBF3j', 'ggH_VBF3j'),
    ('THU_ggH_PT60', 'ggH_pT60'),
    ('THU_ggH_PT120', 'ggH_pT120'),
    ('THU_ggH_qmtop', 'ggH_qmtop')
]

pdfs = [
    #('pdf_Higgs_gg', [('ggH_hww', 'ggH'), ('ggZH_hww', 'ggZH'), ('bbH_hww', 'bbH')]),
    ('pdf_Higgs_gg', [('ggH_hww', 'ggH'), ('ggZH_hww', 'ggZH')]),
    ('pdf_Higgs_ttH', [('ttH_hww', 'ttH')]),
    ('pdf_Higgs_qqbar', [('qqH_hww', 'vbfH'), ('WH_hww', 'WH'), ('ZH_hww', 'ZH')])
]

qcdscales = [
    ('QCDscale_qqH', [('qqH_hww', 'vbfH')]),
    ('QCDscale_VH', [('WH_hww', 'WH'), ('ZH_hww', 'ZH')]),
    ('QCDscale_ggZH', [('ggZH_hww', 'ggZH')]),
    ('QCDscale_ttH', [('ttH_hww', 'ttH')])
]

nvars = len(thus)
for nuis, compositions in pdfs:
    nvars += len(compositions)
for nuis, compositions in qcdscales:
    nvars += len(compositions)
nvars += 4

hup = ROOT.TH1D('up', '', nvars, 0., float(nvars))
hup.Sumw2()
hdown = ROOT.TH1D('down', '', nvars, 0., float(nvars))
hdown.Sumw2()

## THU uncertainties on ggH (common to 2016 and 2017)

nominalSignal = ROOT.multidraw.MultiDraw('latino')
nominalSignal.setWeightBranch('')
nominalSignal.addInputPath('/eos/cms/store/cmst3/user/yiiyama/hwwpost/Apr2017_summer16_genonly/ggHUnc/latino_GluGluHToWWTo2L2NuPowheg_M125__part2.root')

setupfiducial(nominalSignal, [])

nominalSignal.setFilter('fiducial')
nominalSignal.setReweight('GEN_weight_SM/abs(GEN_weight_SM)*' + latinoSamples['ggH_hww'][1])

htotal = ROOT.TH1D('htotal', '', 1, 0., 1.)
nominalSignal.addPlot(htotal, '0.5')

for ith, (name, vname) in enumerate(thus):
    nominalSignal.addPlot(hup, '%f' % (ith + 0.5), '', vname)
    nominalSignal.addPlot(hdown, '%f' % (ith + 0.5), '', '2.-%s' % vname)

    hup.GetXaxis().SetBinLabel(ith + 1, name)
    hdown.GetXaxis().SetBinLabel(ith + 1, name)

nominalSignal.execute()

total = htotal.GetBinContent(1)

for iX in range(1, len(thus) + 1):
    hup.SetBinContent(iX, hup.GetBinContent(iX) / total)
    hup.SetBinError(iX, hup.GetBinError(iX) / total)
    hdown.SetBinContent(iX, hdown.GetBinContent(iX) / total)
    hdown.SetBinError(iX, hdown.GetBinError(iX) / total)

## PDF and QCDscale uncertainties (common to 2016 and 2017)

counter = ROOT.TH1D('counter', '', 2, 0., 2.)
counter.Sumw2()

nominalCompositions = {}
for sname, (dspecs, wgt) in latinoSamples.iteritems():
    nominalCompositions[sname] = 0.
    for dname, totalevt, xsec in dspecs:
        drawer = ROOT.multidraw.MultiDraw('latino')
        drawer.setWeightBranch('')
        drawer.setFilter('1')
        drawer.addInputPath('/eos/cms/store/cmst3/user/yiiyama/hww/latino_%s.root' % dname)
        drawer.addInputPath('/eos/cms/store/cmst3/user/yiiyama/hww/latino_%s__part*.root' % dname)
        setupfiducial(drawer, [])
        drawer.addCut('fid', 'fiducial')
        drawer.addPlot(counter, '0.5', 'fid', 'GEN_weight_SM*' + wgt)
        drawer.addPlot(counter, '1.5', '', 'abs(GEN_weight_SM)*' + wgt)
        drawer.execute()

        nominalCompositions[sname] += xsec * counter.GetBinContent(1) / counter.GetBinContent(2)

        counter.Reset()

counter.Delete()

denom = sum(nominalCompositions.values())

ix = len(thus) + 1
for nuisance, nspecs in pdfs:
    for sname, key in nspecs:
        swgt = HiggsXS.GetHiggsProdXSNP('YR4prel', '13TeV', key, '125.09', 'pdf', 'sm')
        if '/' in swgt:
            wgtdown = float(swgt[:swgt.find('/')])
            wgtup = float(swgt[swgt.find('/') + 1:])
        else:
            wgtdown = 1. / float(swgt)
            wgtup = float(swgt)

        hup.SetBinContent(ix, (denom + nominalCompositions[sname] * (wgtup - 1.)) / denom)
        hdown.SetBinContent(ix, (denom + nominalCompositions[sname] * (wgtdown - 1.)) / denom)
        hup.GetXaxis().SetBinLabel(ix, '%s/%s' % (sname, nuisance))
        hdown.GetXaxis().SetBinLabel(ix, '%s/%s' % (sname, nuisance))

        ix += 1

for nuisance, nspecs in qcdscales:
    for sname, key in nspecs:
        swgt = HiggsXS.GetHiggsProdXSNP('YR4prel', '13TeV', key, '125.09', 'scale', 'sm')
        if '/' in swgt:
            wgtdown = float(swgt[:swgt.find('/')])
            wgtup = float(swgt[swgt.find('/') + 1:])
        else:
            wgtdown = 1. / float(swgt)
            wgtup = float(swgt)

        hup.SetBinContent(ix, (denom + nominalCompositions[sname] * (wgtup - 1.)) / denom)
        hdown.SetBinContent(ix, (denom + nominalCompositions[sname] * (wgtdown - 1.)) / denom)
        hup.GetXaxis().SetBinLabel(ix, '%s/%s' % (sname, nuisance))
        hdown.GetXaxis().SetBinLabel(ix, '%s/%s' % (sname, nuisance))

        ix += 1

counter = ROOT.TH1D('counter', '', 2, 0., 2.)
counter.Sumw2()

if year == '2016':
    ## UE and PS uncertainties on ggH_hww and qqH_hww (2016)

    snames = ['ggH_hww', 'qqH_hww']

    dirpattern = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC{var}__wwSel'

    for sname in snames:
        dspecs, wgt = latinoSamples[sname]

        nominalChain = ROOT.TChain('latino')
        for dname, _, _ in dspecs:
            nominalChain.Add(dirpattern.format(var = '') + ('/latino_%s.root' % dname))
            nominalChain.Add(dirpattern.format(var = '') + ('/latino_%s__part*.root' % dname))
    
        counter.Reset()
        nominalChain.Draw('0.5>>counter', 'XSWeight*' + wgt)
    
        nominal = counter.GetBinContent(1)
        
        for varup, vardown in [('UEup', 'UEdo'), ('PS', '')]:
            chain = ROOT.TChain('latino')
            for dname, _, _ in dspecs:
                chain.Add(dirpattern.format(var = '__' + varup) + ('/latino_%s.root' % dname))
                chain.Add(dirpattern.format(var = '__' + varup) + ('/latino_%s__part*.root' % dname))
    
            counter.Reset()
            chain.Draw('0.5>>counter', 'XSWeight*' + wgt)

            hup.SetBinContent(ix, counter.GetBinContent(1) / nominal)
            hup.GetXaxis().SetBinLabel(ix, '%s/%s' % (sname, varup.replace('up', '')))

            if vardown == '':
                hdown.SetBinContent(ix, 1.)
            else:
                chain = ROOT.TChain('latino')
                for dname, _, _ in dspecs:
                    chain.Add(dirpattern.format(var = '__' + vardown) + ('/latino_%s.root' % dname))
                    chain.Add(dirpattern.format(var = '__' + vardown) + ('/latino_%s__part*.root' % dname))
        
                counter.Reset()
                chain.Draw('0.5>>counter', 'XSWeight*' + wgt)
    
                hdown.SetBinContent(ix, counter.GetBinContent(1) / nominal)

            hdown.GetXaxis().SetBinLabel(ix, '%s/%s' % (sname, varup.replace('up', '')))
    
            ix += 1

else:
    samples = {
        'ggH_hww': (['GluGluHToWWTo2L2NuPowheg_M125_PrivateNano'], '1'),
        'qqH_hww': (['VBFHToWWTo2L2NuPowheg_M125_PrivateNano'], '1'),
    }

    ## UE and PS uncertainties on ggH_hww and qqH_hww (2016)

    snames = ['ggH_hww', 'qqH_hww']

    mcdir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2'
    dirpattern = mcdir + '/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017{var}__LeptonSF_Fix__hadd__wwSel'

    for sname in snames:
        dnames, wgt = samples[sname]

        nominalChain = ROOT.TChain('Events')
        for dname in dnames:
            nominalChain.Add(dirpattern.format(var = '') + ('/nanoLatino_%s.root' % dname))
            nominalChain.Add(dirpattern.format(var = '') + ('/nanoLatino_%s__part*.root' % dname))
    
        counter.Reset()
        nominalChain.Draw('0.5>>counter', 'XSWeight*' + wgt)
    
        nominal = counter.GetBinContent(1)

        chain = ROOT.TChain('Events')
        for dname in dnames:
            chain.Add(mcdir + '/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__UEup__wwSel__hadd' + ('/nanoLatino_%s.root' % dname))
            chain.Add(mcdir + '/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__UEup__wwSel__hadd' + ('/nanoLatino_%s__part*.root' % dname))

        counter.Reset()
        chain.Draw('0.5>>counter', 'XSWeight*' + wgt)

        hup.SetBinContent(ix, counter.GetBinContent(1) / nominal)
        hup.GetXaxis().SetBinLabel(ix, '%s/UE' % sname)

        chain = ROOT.TChain('Events')
        for dname in dnames:
            chain.Add(mcdir + '/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__UEdo__wwSel__hadd' + ('/nanoLatino_%s.root' % dname))
            chain.Add(mcdir + '/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__UEdo__wwSel__hadd' + ('/nanoLatino_%s__part*.root' % dname))

        counter.Reset()
        chain.Draw('0.5>>counter', 'XSWeight*' + wgt)

        hdown.SetBinContent(ix, counter.GetBinContent(1) / nominal)
        hdown.GetXaxis().SetBinLabel(ix, '%s/UE' % sname)

        ix += 1

        hup.SetBinContent(ix, 1.)
        hdown.SetBinContent(ix, 1.)
        hup.GetXaxis().SetBinLabel(ix, '%s/PS' % sname)
        hdown.GetXaxis().SetBinLabel(ix, '%s/PS' % sname)
        
        ix += 1

out.cd()
hup.Write()
hdown.Write()
out.Close()
