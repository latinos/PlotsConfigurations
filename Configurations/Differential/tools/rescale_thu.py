import os
import ROOT

from setupfiducial import setupfiducial

ROOT.gSystem.Load('libLatinoAnalysisMultiDraw.so')

nominalSignal = ROOT.multidraw.MultiDraw('latino')
nominalSignal.setWeightBranch('')
nominalSignal.setFilter('1')
nominalSignal.addInputPath('/eos/cms/store/cmst3/user/yiiyama/hwwpost/Apr2017_summer16_genonly/ggHUnc/latino_GluGluHToWWTo2L2NuPowheg_M125__part2.root')

setupfiducial(nominalSignal, [])

nominalSignal.setFilter('fiducial')

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

out = ROOT.TFile.Open(os.path.dirname(os.path.realpath(__file__)) + '/rescale_thu.root', 'recreate')

htotal = ROOT.TH1D('htotal', '', 1, 0., 1.)
nominalSignal.addPlot(htotal, '0.5')

hup = ROOT.TH1D('hup', '', len(thus), 0., float(len(thus)))
hup.Sumw2()
hdown = ROOT.TH1D('hdown', '', len(thus), 0., float(len(thus)))
hdown.Sumw2()

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

out.cd()
out.Write()
