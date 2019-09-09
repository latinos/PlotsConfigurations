"""
Copy histogram normalization variations. Currently used for (WW, UE_CP5), (ggH_hww, PS), and (qqH_hww, PS)
Usage:
  python add_ps_variation.py rootFile_merged/plots_ggHDifferential2017_ALL_WW.root ../ggH2018/rootFile_merged/plots_ggHDifferential2018_ALL_WW.root WW UE_CP5
  python add_ps_variation.py rootFile_merged/plots_ggHDifferential2017_ALL_ggH_hww.root ../ggH2018/rootFile_merged/plots_ggHDifferential2018_ALL_ggH_hww.root ggH_hww PS
  python add_ps_variation.py rootFile_merged/plots_ggHDifferential2017_ALL_qqH_hww.root ../ggH2018/rootFile_merged/plots_ggHDifferential2018_ALL_qqH_hww.root qqH_hww PS
"""

import os
import sys
import shutil
import ROOT

# backup
try:
    os.unlink(sys.argv[1] + '.backup')
except OSError:
    pass
shutil.copyfile(sys.argv[1], sys.argv[1] + '.backup')

target = ROOT.TFile.Open(sys.argv[1], 'update')
source = ROOT.TFile.Open(sys.argv[2])
sample = sys.argv[3]
nuisance = sys.argv[4]

for ckey in source.GetListOfKeys():
    scut = ckey.GetName()
    tcut = scut.replace('2018', '2017')
    cdir = source.GetDirectory(scut)
    
    for vkey in cdir.GetListOfKeys():
        variable = vkey.GetName()

        sdir = cdir.GetDirectory(variable)

        tdir = target.GetDirectory('%s/%s' % (tcut, variable))

        for hkey in sdir.GetListOfKeys():
            hname = hkey.GetName()
            if hname.endswith('Up') or hname.endswith('Down'):
                continue

            if not hname.startswith('histo_' + sample):
                continue

            if hname != 'histo_' + sample and hname.replace('histo_' + sample, '')[0] != '_':
                continue

            sname = hname.replace('histo_', '')

            sdir.cd()
            hnomsource = hkey.ReadObj()

            hnomtarget = tdir.Get('histo_%s' % sname)

            for v in ['Up', 'Down']:
                hvarsource = sdir.Get('histo_%s_%s%s' % (sname, nuisance, v))
                tdir.cd()
                hvartarget = hnomtarget.Clone('histo_%s_%s%s' % (sname, nuisance, v))
                if hnomsource.GetSumOfWeights() > 0.:
                    hvartarget.Scale(hvarsource.GetSumOfWeights() / hnomsource.GetSumOfWeights())
    
                hvartarget.Write()
                hvartarget.Delete()
                hvarsource.Delete()
            
            hnomtarget.Delete()
            hnomsource.Delete()
