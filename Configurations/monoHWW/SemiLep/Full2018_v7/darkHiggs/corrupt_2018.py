import os

iihe_base   = '/pnfs/iihe/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/'
lxplus_base = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/'

corrupt = [
    #2018
    '/Autumn18_102X_nAODv7_Full2018v7/MCl1loose2018v7__MCCorr2018v7__MCCombJJLNu2018_ElepTdo/nanoLatino_DYJetsToLL_M-50_ext2__part187.root',
    '/Autumn18_102X_nAODv7_Full2018v7/MCl1loose2018v7__MCCorr2018v7__MCCombJJLNu2018_METup/nanoLatino_VBFHToTauTau_M125__part22.root',
    '/Autumn18_102X_nAODv7_Full2018v7/MCl1loose2018v7__MCCorr2018v7__MCCombJJLNu2018_METup/nanoLatino_WJetsToLNu_Pt100to250__part67.root',
    #2017
    '/Fall2017_102X_nAODv7_Full2017v7/MCl1loose2017v7__MCCorr2017v7__MCCombJJLNu2017_MupTdo/nanoLatino_ZGToLLG__part54.root',
    '/Fall2017_102X_nAODv7_Full2017v7/MCl1loose2017v7__MCCorr2017v7__MCCombJJLNu2017_MupTdo/nanoLatino_ZGToLLG__part54.root',
    '/Fall2017_102X_nAODv7_Full2017v7/MCl1loose2017v7__MCCorr2017v7__MCCombJJLNu2017_METup/nanoLatino_WJetsToLNu-1J_ext1__part51.root',
    #2016
    '/Summer16_102X_nAODv7_Full2016v7/MCl1loose2016v7__MCCorr2016v7__MCCombJJLNu2016_MupTup/nanoLatino_DYJetsToLL_M-10to50_ext1__part22.root',
    '/Summer16_102X_nAODv7_Full2016v7/MCl1loose2016v7__MCCorr2016v7__MCCombJJLNu2016_MupTdo/nanoLatino_darkHiggs_ToWWToLNujj__part0.root',
    '',
    '',
    '',
    '',
    '',
    '',
    '',
    '',
    '',
    '',
    '',
    '',
    '',
    '',
]

for fil in corrupt:
    os.system('ls -lh '+lxplus_base+fil)
    #os.system('scp '+iihe_base+fil+' svanputt@lxplus.cern.ch:'+lxplus_base+fil)
