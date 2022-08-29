# nuisances

nuisances = {}

# name of samples here must match keys in samples.py

# imported from samples.py:
# samples, treeBaseDir, mcProduction, mcSteps
# imported from cuts.py
# cuts
import copy

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

def nanoGetSampleFiles(inputDir, Sample):
    return getSampleFiles(inputDir, Sample, False, 'nanoLatino_')

try:
    mc = [skey for skey in samples if skey not in ('FAKE', 'DATA')]
    mc_deep =[skey for skey in samples if skey not in ['DY', 'top', 'Wjets', 'Vg', 'VgS','VZ', 'FAKE', 'DATA', 'VVV', 'ZH_htt', 'WH_htt', 'ggH_htt', 'qqH_htt']]  
    sig_mc = [skey for skey in mc if ("GGH" in skey) or ("QQH" in skey) or (skey in ["ggWW", "ggH_hww", "qqWWqq", "qqH_hww"])] # ggWW is currently reweighted sig sample, while qqWWqq needs to be symlinked to the BWReweight!

except NameError:
    mc = []
    sig_mc = []
    cuts = {}
    nuisances = {}
    def makeMCDirectory(x=''):
        return ''

from LatinoAnalysis.Tools.HiggsXSection import HiggsXSection
HiggsXS = HiggsXSection()


cutdict = {
    'Ele'   : set(x for x in cuts if 'ElCh' in x),
    'Muon'  : set(x for x in cuts if 'MuCh' in x),
    'Wjets' : set(x for x in cuts if 'SB' in x),
    'resTOP'   : 'incl_ResolvedTopCR_', #set(x for x in cuts if 'ResolvedTopCR' in x),
    'booTOP'   : 'incl_BoostedTopCR_',  #set(x for x in cuts if 'BoostedTopCR' in x),
    'resSR'   : 'incl_ResolvedSR_',     #set(x for x in cuts if 'ResolvedSR' in x),
    'resSB'   : 'incl_ResolvedSB_',     #set(x for x in cuts if 'ResolvedSB' in x),
    'booSR'   : 'incl_BoostedSR_',      #set(x for x in cuts if 'BoostedSR' in x),
    'booSB'   : 'incl_BoostedSB_',      #set(x for x in cuts if 'BoostedSB' in x),
    'resTOP_2J'   : 'incl_ResolvedTopCR_2jets', #set(x for x in cuts if 'ResolvedTopCR' in x),
    'booTOP_2J'   : 'incl_BoostedTopCR_2jets',  #set(x for x in cuts if 'BoostedTopCR' in x),
    'resSR_2J'   : 'incl_ResolvedSR_2jets',     #set(x for x in cuts if 'ResolvedSR' in x),
    'resSB_2J'   : 'incl_ResolvedSB_2jets',     #set(x for x in cuts if 'ResolvedSB' in x),
    'booSR_2J'   : 'incl_BoostedSR_2jets',      #set(x for x in cuts if 'BoostedSR' in x),
    'booSB_2J'   : 'incl_BoostedSB_2jets',      #set(x for x in cuts if 'BoostedSB' in x),
    'resTOP_01J'   : 'incl_ResolvedTopCR_0jets', #set(x for x in cuts if 'ResolvedTopCR' in x),
    'booTOP_01J'   : 'incl_BoostedTopCR_0jets',  #set(x for x in cuts if 'BoostedTopCR' in x),
    'resSR_01J'   : 'incl_ResolvedSR_0jets',     #set(x for x in cuts if 'ResolvedSR' in x),
    'resSB_01J'   : 'incl_ResolvedSB_0jets',     #set(x for x in cuts if 'ResolvedSB' in x),
    'booSR_01J'   : 'incl_BoostedSR_0jets',      #set(x for x in cuts if 'BoostedSR' in x),
    'booSB_01J'   : 'incl_BoostedSB_0jets',      #set(x for x in cuts if 'BoostedSB' in x),
    'booSR_up'   : 'incl_BoostedSR_up',      #set(x for x in cuts if 'BoostedSR' in x),
    'booCR'   : 'incl_BoostedCR_',      #set(x for x in cuts if 'BoostedSB' in x),
    'booCR_1'   : 'incl_BoostedCR_notau',      #set(x for x in cuts if 'BoostedSB' in x),
    'booCR_2'   : 'incl_BoostedSB_notau',      #set(x for x in cuts if 'BoostedSB' in x),
    ##'Untag' : set(x for x in cuts if 'Untagged' in x),
    #'Boost' : 'incl_Boosted_SB_' ,#set(x for x in cuts if 'Boosted' in x),
    #'Resolv': 'incl_Resolved_SB_', #set(x for x in cuts if 'Resolved' in x),
    #'HM'    : set(x for x in cuts if 'HM' in x),
}


################################ EXPERIMENTAL UNCERTAINTIES  #################################


nuisances['PS_ISR']  = {
    'name': 'PS_ISR',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Wjets': ['0.997054474752*(nCleanGenJet==0) + 1.01491223907*(nCleanGenJet==1) + 1.00675986689*(nCleanGenJet==2) + 0.973889730523*(nCleanGenJet>=3)', '1.00439657406*(nCleanGenJet==0) + 0.98111895136*(nCleanGenJet==1) + 0.99317366464*(nCleanGenJet==2) + 1.03376665043*(nCleanGenJet>=3)'],
    },
}
nuisances['PS_FSR']  = {
    'name': 'PS_FSR',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Wjets': ['0.951581197919*(nCleanGenJet==0) + 0.997755474747*(nCleanGenJet==1) + 1.02983517401*(nCleanGenJet==2) + 1.01143623738*(nCleanGenJet>=3)', '1.08454892632*(nCleanGenJet==0) + 1.0003688082*(nCleanGenJet==1) + 0.980741215888*(nCleanGenJet==2) + 0.97189538569*(nCleanGenJet>=3)'],
    },
}

###### Renormalization & factorization scales
#
### This should work for samples with either 8 or 9 LHE scale weights (Length$(LHEScaleWeight) == 8 or 9)
variations = ['LHEScaleWeight[0]', 'LHEScaleWeight[1]', 'LHEScaleWeight[3]', 'LHEScaleWeight[Length$(LHEScaleWeight)-4]', 'LHEScaleWeight[Length$(LHEScaleWeight)-2]', 'LHEScaleWeight[Length$(LHEScaleWeight)-1]']

nuisances['QCDscale_V'] = {
    'name': 'QCDscale_V',
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': {
        'Wjets': variations
    },
}
