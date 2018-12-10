#import os
#
## nuisances
#
##nuisances = {}
#
## name of samples here must match keys in samples.py 
#
## imported from samples.py:
## treeBaseDir, mcProduction, mcSteps
#
mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]
#
################################# EXPERIMENTAL UNCERTAINTIES  #################################

eleUpSteps = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepElepTup__wwSel'
eleDownSteps = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepElepTdo__wwSel'

nuisances['electronpt'] = {
  'name': 'scale_e',
  'kind': 'tree',
  'type': 'shape',
  'samples': dict((skey, ['1', '1']) for skey in mc),
  'folderUp': os.path.join(treeBaseDir, mcProduction, eleUpSteps),
  'folderDown': os.path.join(treeBaseDir, mcProduction, eleDownSteps)
}

muUpSteps = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepMupTup__wwSel'
muDownSteps = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepMupTdo__wwSel'

nuisances['muonpt'] = {
  'name': 'scale_m',
  'kind': 'tree',
  'type': 'shape',
  'samples': dict((skey, ['1', '1']) for skey in mc),
  'folderUp': os.path.join(treeBaseDir, mcProduction, muUpSteps),
  'folderDown': os.path.join(treeBaseDir, mcProduction, muDownSteps)
}

##### PS and UE

psVarSteps = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__PS__wwSel'

# These numbers are used to normalize the PS variation to the same integral as the nominal after the wwSel skim
nuisances['PS'] = {
  'name': 'PS',
  'skipCMS': 1,
  'kind': 'tree',
  'type': 'shape',
  'samples': {
    'WW': ['0.92657', '1.'],
    'ggH_hww': ['0.98554', '1.'],
    'qqH_hww': ['0.92511', '1.']
  },
  'folderUp': os.path.join(treeBaseDir, mcProduction, psVarSteps),
  'folderDown': os.path.join(treeBaseDir, mcProduction, mcSteps),
  'AsLnN': '1'
}

ueUpSteps = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__UEup__wwSel'
ueDownSteps = 'lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__UEdo__wwSel'

# Normalize the UE up/down variations to the same integral as the nominal after the wwSel skim
nuisances['UE'] = {
  'name': 'UE', 
  'skipCMS': 1,
  'kind': 'tree',
  'type': 'shape',
  'samples': {
    'WW': ['1.0226', '0.9897'],
    'ggH_hww': ['1.0739', '1.0211'],
    'qqH_hww': ['1.0560', '0.9992']
   },
  'folderUp': os.path.join(treeBaseDir, mcProduction, ueUpSteps),
  'folderDown': os.path.join(treeBaseDir, mcProduction, ueDownSteps),
  'AsLnN': '1'
}

# ggww and interference

nuisances['QCDscale_ggWW'] = {
  'name': 'QCDscale_ggWW',
  'type': 'lnN',
  'samples': {
    'ggWW': '1.15',
  },
}

#  - WW shaping
nuisances['WWresum0j'] = {
  'name': 'WWresum0j',
  'skipCMS': 1,
  'kind': 'weight',
  'type': 'shape',
  'samples': {
    'WW': ['nllW_Rup/nllW', 'nllW_Rdown/nllW',],
  },
  'cuts': [
    'hww2l2v_13TeV_0j',
    'hww2l2v_13TeV_top_of0j',
    'hww2l2v_13TeV_dytt_of0j',
  ],               
}

nuisances['WWresum1j'] = {
  'name': 'WWresum1j',
  'skipCMS': 1,
  'kind': 'weight',
  'type': 'shape',
  'samples': {
    'WW': ['nllW_Rup/nllW', 'nllW_Rdown/nllW',],
  },
  'cuts': [
    'hww2l2v_13TeV_1j',
    'hww2l2v_13TeV_top_of1j',
    'hww2l2v_13TeV_dytt_of1j',
  ],               
}

nuisances['WWqscale0j'] = {
  'name': 'WWqscale0j',
  'skipCMS': 1,
  'kind': 'weight',
  'type': 'shape',
  'samples': {
    'WW': ['nllW_Qup/nllW', 'nllW_Qdown/nllW',],
  },
  'cuts': [
    'hww2l2v_13TeV_0j',
    'hww2l2v_13TeV_top_of0j',
    'hww2l2v_13TeV_dytt_of0j',
  ], 
}

nuisances['WWqscale1j'] = {
  'name': 'WWqscale1j',
  'skipCMS': 1,
  'kind': 'weight',
  'type': 'shape',
  'samples': {
    'WW': ['nllW_Qup/nllW', 'nllW_Qdown/nllW',],
  },
  'cuts': [
    'hww2l2v_13TeV_1j',
    'hww2l2v_13TeV_top_of1j',
    'hww2l2v_13TeV_dytt_of1j',
  ], 
}
