import ROOT

tags = [
    'GluGluHToWWToLNuQQ_M125',
#   'GluGluHToWWTo2L2Nu_M125',
    'VBFHToWWToLNuQQ_M125',
#   'VBFHToWWTo2L2Nu_M125',
    'HZJ_HToWW_M125',
    'HWplusJ_HToWW_M125',
    'HWminusJ_HToWW_M125',
    'ttHToNonbb_M125',
    'GluGluHToTauTau_M125',
    'VBFHToTauTau_M125',
    'HZJ_HToTauTau_M125',
    'HWplusJ_HToTauTau_M125',
    'HWminusJ_HToTauTau_M125',
]

source_dir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv7_Full2016v7/MCl1loose2016v7__MCCorr2016v7__MCCombJJLNu2016/'
#nanoLatino_GluGluHToWWToLNuQQ_M125__part0.root 

def grab_Xsec(file_name):
    r_file = ROOT.TFile(file_name)
    tree = r_file.Get('Events')
    xsec = None
    for event in tree:
        xsec = event.Xsec
        break
    r_file.Close()
    return xsec


total_xsec = 0
for proc in tags:
    part0_file = 'nanoLatino_'+proc+'__part0.root'
    file_name = source_dir+part0_file
    proc_xsec = grab_Xsec(file_name)
    total_xsec += proc_xsec
    print(proc+'\t:'+str(proc_xsec))
    

print('Total: '+str(total_xsec))
