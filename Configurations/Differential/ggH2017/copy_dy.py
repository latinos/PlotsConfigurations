import sys
import ROOT

source = ROOT.TFile.Open(sys.argv[1])
target = ROOT.TFile.Open(sys.argv[2], 'recreate')

source_lumi = float(sys.argv[3])
target_lumi = float(sys.argv[4])

for ckey in source.GetListOfKeys():
    cdir = source.GetDirectory(ckey.GetName())
    tcdir = target.mkdir(ckey.GetName().replace('2018', '2017'))
    
    for vkey in cdir.GetListOfKeys():
        vdir = cdir.GetDirectory(vkey.GetName())
        tvdir = tcdir.mkdir(vkey.GetName())
        tvdir.cd()

        nominal = None
        for hkey in vdir.GetListOfKeys():
            hist = hkey.ReadObj()
            hist.Scale(target_lumi / source_lumi)
            hist.SetName(hist.GetName().replace('2018', '2017'))
            hist.SetDirectory(tvdir)
            hist.Write()

            if hkey.GetName() == 'histo_DY':
                nominal = hist
            else:
                hist.Delete()

        up = nominal.Clone('histo_DY_CMS_eff_prefiring_2017Up')
        up.Write()
        up.Delete()
        down = nominal.Clone('histo_DY_CMS_eff_prefiring_2017Down')
        down.Write()
        down.Delete()
        nominal.Delete()
