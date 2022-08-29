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
##### PS
# high mass PS from dileptonic
handle = open("../../../../PlotsConfigurations/Configurations/HighMass/PSunc_Semi.py",'r')
exec(handle)
handle.close()

# WpWmJJ_EWK_noTop, WpWmJJ_QCD_noTop_ext1, Wg_MADGRAPHMLM: PS Weights not properly normalized!
nuisances['PS_ISR']  = {
    'name': 'PS_ISR',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['Alt$(PSWeight[2], 1.0)', 'Alt$(PSWeight[0], 1.0)']) for skey in mc if skey not in ["qqWWqq", "WW2J", "WWewk", "Vg", "VgS"] and "SBI" not in skey), #PSWeights still buggy in v7?
}
nuisances['PS_ISR']['samples'].update({'qqWWqq': ['1.031198192*(nCleanGenJet==0) + 1.029396447*(nCleanGenJet==1) + 1.008244787*(nCleanGenJet==2) + 0.958054424*(nCleanGenJet>=3)', '0.962541517*(nCleanGenJet==0) + 0.964149647*(nCleanGenJet==1) + 0.988864503*(nCleanGenJet==2) + 1.052819668*(nCleanGenJet>=3)']}) # From WpWmJJ_QCD_noTop_ext1
nuisances['PS_ISR']['samples'].update({'WW2J': ['1.031198192*(nCleanGenJet==0) + 1.029396447*(nCleanGenJet==1) + 1.008244787*(nCleanGenJet==2) + 0.958054424*(nCleanGenJet>=3)', '0.962541517*(nCleanGenJet==0) + 0.964149647*(nCleanGenJet==1) + 0.988864503*(nCleanGenJet==2) + 1.052819668*(nCleanGenJet>=3)']}) # From WpWmJJ_QCD_noTop_ext1
nuisances['PS_ISR']['samples'].update({'WWewk': ['1.000046239608802*(nCleanGenJet==0) + 1.0133437345113673*(nCleanGenJet==1) + 1.0144565712441801*(nCleanGenJet==2) + 0.9633224709814209*(nCleanGenJet>=3)', '0.9972924400977996*(nCleanGenJet==0) + 0.9796025428294364*(nCleanGenJet==1) + 0.9785038122896787*(nCleanGenJet==2) + 1.043894692205412*(nCleanGenJet>=3)']}) # From WpWmJJ_EWK_noTop
nuisances['PS_ISR']['samples'].update({'Vg': ['1.0039055667905552*(nCleanGenJet==0) + 1.0059752448648116*(nCleanGenJet==1) + 0.9926179336643974*(nCleanGenJet==2) + 0.9524471129275528*(nCleanGenJet>=3)', '0.9949355050284215*(nCleanGenJet==0) + 0.9926938538727195*(nCleanGenJet==1) + 1.0093671414600691*(nCleanGenJet==2) + 1.060578524662196*(nCleanGenJet>=3)']}) # From Zg
nuisances['PS_ISR']['samples'].update({'VgS': ['1.0000536116408023*(nCleanGenJet==0) + 1.0100100693580492*(nCleanGenJet==1) + 0.959068359375*(nCleanGenJet==2) + 0.9117049260469496*(nCleanGenJet>=3)', '0.9999367833485968*(nCleanGenJet==0) + 0.9873682892005163*(nCleanGenJet==1) + 1.0492717737268518*(nCleanGenJet==2) + 1.1176958835210322*(nCleanGenJet>=3)']}) # From WZTo3LNu_mllmin01

for m in massggh:
  PSup = PSunc['GGF'+m]['ISRup']
  PSdn = PSunc['GGF'+m]['ISRdn']
  PSstring = [str(PSup['0j'])+'*(nCleanGenJet==0) + '+str(PSup['1j'])+'*(nCleanGenJet==1) + '+str(PSup['2j'])+'*(nCleanGenJet==2) + '+str(PSup['3j'])+'*(nCleanGenJet>=3)', str(PSdn['0j'])+'*(nCleanGenJet==0) + '+str(PSdn['1j'])+'*(nCleanGenJet==1) + '+str(PSdn['2j'])+'*(nCleanGenJet==2) + '+str(PSdn['3j'])+'*(nCleanGenJet>=3)']
  nuisances['PS_ISR']['samples'].update({'GGH_'+m+model_name: PSstring})
  nuisances['PS_ISR']['samples'].update({'GGHINT_'+m+model_name: PSstring}) # Here and in the following: Don't put nuisances here for SBI; they're added automatically in a later step!
for m in massvbf:
  PSup = PSunc['VBF'+m]['ISRup']
  PSdn = PSunc['VBF'+m]['ISRdn']
  PSstring = [str(PSup['0j'])+'*(nCleanGenJet==0) + '+str(PSup['1j'])+'*(nCleanGenJet==1) + '+str(PSup['2j'])+'*(nCleanGenJet==2) + '+str(PSup['3j'])+'*(nCleanGenJet>=3)', str(PSdn['0j'])+'*(nCleanGenJet==0) + '+str(PSdn['1j'])+'*(nCleanGenJet==1) + '+str(PSdn['2j'])+'*(nCleanGenJet==2) + '+str(PSdn['3j'])+'*(nCleanGenJet>=3)']
  nuisances['PS_ISR']['samples'].update({'QQH_'+m+model_name: PSstring})
  nuisances['PS_ISR']['samples'].update({'QQHINT_'+m+model_name: PSstring})



nuisances['PS_FSR']  = {
    'name': 'PS_FSR',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['Alt$(PSWeight[3], 1.0)', 'Alt$(PSWeight[1], 1.0)']) for skey in mc if skey not in ["qqWWqq", "WW2J", "WWewk", "Vg", "VgS"] and "SBI" not in skey), #PSWeights still buggy in v7?
}
nuisances['PS_FSR']['samples'].update({'qqWWqq': ['0.976538004*(nCleanGenJet==0) + 0.993524816*(nCleanGenJet==1) + 1.006678783*(nCleanGenJet==2) + 1.009760965*(nCleanGenJet>=3)', '1.035661107*(nCleanGenJet==0) + 1.007585153*(nCleanGenJet==1) + 0.989764669*(nCleanGenJet==2) + 0.98276492*(nCleanGenJet>=3)']})
nuisances['PS_FSR']['samples'].update({'WW2J': ['0.976538004*(nCleanGenJet==0) + 0.993524816*(nCleanGenJet==1) + 1.006678783*(nCleanGenJet==2) + 1.009760965*(nCleanGenJet>=3)', '1.035661107*(nCleanGenJet==0) + 1.007585153*(nCleanGenJet==1) + 0.989764669*(nCleanGenJet==2) + 0.98276492*(nCleanGenJet>=3)']})
nuisances['PS_FSR']['samples'].update({'WWewk': ['0.9919173789731052*(nCleanGenJet==0) + 0.994273375713824*(nCleanGenJet==1) + 1.0009783801226202*(nCleanGenJet==2) + 1.0046943184676753*(nCleanGenJet>=3)', '1.0081780733496333*(nCleanGenJet==0) + 1.0052172826204072*(nCleanGenJet==1) + 0.9984786981975752*(nCleanGenJet==2) + 0.9881601609947174*(nCleanGenJet>=3)']})
nuisances['PS_FSR']['samples'].update({'Vg': ['0.9981385958679493*(nCleanGenJet==0) + 1.000785005516636*(nCleanGenJet==1) + 1.0072453356787239*(nCleanGenJet==2) + 1.016190506425758*(nCleanGenJet>=3)', '1.0032725732400525*(nCleanGenJet==0) + 1.0019489593245505*(nCleanGenJet==1) + 0.986995604774182*(nCleanGenJet==2) + 0.9629840158493718*(nCleanGenJet>=3)']})
nuisances['PS_FSR']['samples'].update({'VgS': ['0.9976593177227735*(nCleanGenJet==0) + 1.0016125187585532*(nCleanGenJet==1) + 1.0049344618055556*(nCleanGenJet==2) + 1.0195631514301164*(nCleanGenJet>=3)', '1.0026951855766457*(nCleanGenJet==0) + 1.0008132148661049*(nCleanGenJet==1) + 1.003949291087963*(nCleanGenJet==2) + 0.9708160910230832*(nCleanGenJet>=3)']})


variations = ['LHEScaleWeight[0]', 'LHEScaleWeight[1]', 'LHEScaleWeight[3]', 'LHEScaleWeight[Length$(LHEScaleWeight)-4]', 'LHEScaleWeight[Length$(LHEScaleWeight)-2]', 'LHEScaleWeight[Length$(LHEScaleWeight)-1]']

nuisances['QCDscale_V'] = {
    'name': 'QCDscale_V',
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': {
        'Wjets': variations
    },
}


