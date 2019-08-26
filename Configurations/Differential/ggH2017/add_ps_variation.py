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
            if sample not in hname or hname.endswith('Up') or hname.endswith('Down'):
                continue

            sname = hname.replace('histo_', '')

            sdir.cd()
            hnomsource = hkey.ReadObj()

            hnomtarget = tdir.Get('histo_%s' % sname)

            for v in ['Up', 'Down']:
                hvarsource = sdir.Get('histo_%s_PS%s' % (sname, v))
                tdir.cd()
                hvartarget = hnomtarget.Clone('histo_%s_PS%s' % (sname, v))
                if hnomsource.GetSumOfWeights() > 0.:
                    hvartarget.Scale(hvarsource.GetSumOfWeights() / hnomsource.GetSumOfWeights())
    
                hvartarget.Write()
                hvartarget.Delete()
                hvarsource.Delete()
            
            hnomtarget.Delete()
            hnomsource.Delete()
