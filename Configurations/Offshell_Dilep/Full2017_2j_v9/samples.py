import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # aC
configurations = os.path.dirname(configurations) # Full2017_v9
configurations = os.path.dirname(configurations) # FullRunII
configurations = os.path.dirname(configurations) # WW
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseWnAOD, addSampleWeight

def nanoGetSampleFiles(inputDir, sample):
    try:
        if _samples_noload:
            return [sample]
    except NameError:
        pass

    return getSampleFiles(inputDir, sample, True, 'nanoLatino_')

def getBaseWFast(mcDir, mcProd, sampleList):
    try:
        if _samples_noload:
            return 'baseW'
    except NameError:
        pass
    return getBaseWnAOD(mcDir, mcProd, sampleList)

# samples

try:
    len(samples)
except NameError:
    import collections
    samples = collections.OrderedDict()

################################################
################# SKIMS ########################
################################################

dataReco = 'Run2017_UL2017_nAODv9_Full2017v9'

mcProduction = 'Summer20UL17_106x_nAODv9_Full2017v9'

mcSteps = 'MCl1loose2017v9__MCCorr2017v9NoJERInHorn__l2tightOR2017v9{var}'

fakeSteps = 'DATAl1loose2017v9__l2loose__fakeW'

dataSteps = 'DATAl1loose2017v9__l2loose__l2tightOR2017v9'

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if    'iihe' in SITE:
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015'
elif  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'

def makeMCDirectory(var=''):
    if var:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='__' + var))
    else:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var=''))

mcDirectory = makeMCDirectory()
m_mcDirectory = '/eos/user/c/carbour/postProcessing/Summer20UL17_106x_nAODv9_Full2017v9/MCl1loose2017v9__MCCorr2017v9NoJERInHorn__l2tightOR2017v9__MCZlrm2017'
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)

signalDirectory = '/eos/cms/store/group/phys_higgs/cmshww/fernanpe/HWWNano/Summer20UL17_106x_nAODv9_Full2017v9/AddLHE_MEs__AddMC_baseW__AddHWW_Offshell_Wgts__MCl1loose2017v9__MCCorr2017v9NoJERInHorn__l2tightOR2017v9'


################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
    ['B','Run2017B-UL2017-v1'],
    ['C','Run2017C-UL2017-v1'],
    ['D','Run2017D-UL2017-v1'],
    ['E','Run2017E-UL2017-v1'],
    ['F','Run2017F-UL2017-v1']
]

DataSets = ['MuonEG','SingleMuon','SingleElectron','DoubleMuon', 'DoubleEG']

DataTrig = {
    'MuonEG'         : ' Trigger_ElMu' ,
    'SingleMuon'     : '!Trigger_ElMu && Trigger_sngMu' ,
    'SingleElectron' : '!Trigger_ElMu && !Trigger_sngMu && Trigger_sngEl',
    'DoubleMuon'     : '!Trigger_ElMu && !Trigger_sngMu && !Trigger_sngEl && Trigger_dblMu',
    'DoubleEG'       : '!Trigger_ElMu && !Trigger_sngMu && !Trigger_sngEl && !Trigger_dblMu && Trigger_dblEl'
}

#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights
mcCommonWeightNoMatch = 'XSWeight*SFweight*METFilter_MC'
mcCommonWeight = 'XSWeight*SFweight*PromptGenLepMatch2l*METFilter_MC'
mcCommonWeight_custom = 'XSWeight'


###########################################
#############  BACKGROUNDS  ###############
###########################################

####### DY #######

files = nanoGetSampleFiles(mcDirectory, 'DYJetsToTT_MuEle_M-50') + \
   nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO')

samples['DY'] = {
    'name': files,
    'weight': mcCommonWeight + "*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 &&\
                                    Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )",
    'FilesPerJob': 10,
}
addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50', 'DY_NLO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO','DY_LO_pTllrw')

###### Top #######

files = nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu') + \
    nanoGetSampleFiles(mcDirectory, 'ST_s-channel') + \
    nanoGetSampleFiles(mcDirectory, 'ST_t-channel_antitop') + \
    nanoGetSampleFiles(mcDirectory, 'ST_t-channel_top') + \
    nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop') + \
    nanoGetSampleFiles(mcDirectory, 'ST_tW_top')

samples['top'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 1,
}

addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')

######################
samples['WWewk'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WpWmJJ_EWK_noTop'),
    'weight': mcCommonWeight + '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)', #filter tops and Higgs
    'FilesPerJob': 4
}

######## Vg(S) ########

files = nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX_01J_PDF') + \
        nanoGetSampleFiles(mcDirectory, 'ZGToLLG')

samples['Vg'] = {
    'name': files,
    'weight': mcCommonWeightNoMatch+'*((Gen_ZGstar_mass>0)*PromptGenLepMatch2l + Gen_ZGstar_mass<=0)',
    'FilesPerJob': 8
}

addSampleWeight(samples,'Vg','Wg_AMCNLOFXFX_01J_PDF', 'gstarLow*0.94')

######## WZ ########

files = nanoGetSampleFiles(mcDirectory, 'WZTo3LNu') + \
    nanoGetSampleFiles(mcDirectory, 'WZTo2Q2L_mllmin4p0')

samples['WZ'] = {
    'name': files,
    'weight': mcCommonWeight + ' * (gstarHigh)',
    'FilesPerJob': 4,
}

############ ZZ ############

files = nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Nu') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo2Q2L_mllmin4p0') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo4L')

samples['ZZ'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}


########## VVV #########

files = nanoGetSampleFiles(mcDirectory, 'ZZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWZ_ext1') + \
    nanoGetSampleFiles(mcDirectory, 'WWW')# + \
#+ nanoGetSampleFiles(mcDirectory, 'WWG'), #should this be included? or is it already taken into account in the WW sample?

samples['VVV'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 4,
}

#WWZbaseW = getBaseWFast(mcDirectory, mcProduction, ['WWZ', 'WWZ_ext1'])

#addSampleWeight(samples,'VVV','WWZ',     WWZbaseW+'/baseW')
#addSampleWeight(samples,'VVV','WWZ_ext1',WWZbaseW+'/baseW')

########### Higgs ###########

files = nanoGetSampleFiles(mcDirectory, 'GluGluHToWWTo2L2Nu_M125') + \
        nanoGetSampleFiles(mcDirectory, 'VBFHToWWTo2L2Nu_M125') + \
        nanoGetSampleFiles(mcDirectory, 'HZJ_HToWWTo2L2Nu_ZTo2L_M125') + \
        nanoGetSampleFiles(mcDirectory, 'GluGluZH_HToWWTo2L2Nu_M125') + \
        nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125') + \
        nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125') + \
        nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125') + \
        nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125')# + \
        #nanoGetSampleFiles(mcDirectory, 'HZJ_HToTauTau_M125') + \ #Missing in 2017
        #nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125') #Missing in 2017

samples['Higgs'] = {
    'name' : files,
    'weight': mcCommonWeight,
    'FilesPerJob': 8
}

###########################################
#############   SIGNALS  ##################
###########################################

signals = []

###### WW ########
# Putting in XSec_Correction factors for the samples

nGen05 = 995000
nFilt05 = 333926 #v2

nGen57 = 999000
nFilt57 = 33065

nGen71 = 1500000
nFilt71 = 31759

nGen1I = 1500000
nFilt1I = 10415


cor05 = str(nGen05/(nGen05 - nFilt05))
cor57 = str(nGen57/(nGen57 - nFilt57))
cor71 = str(nGen71/(nGen71 - nFilt71))
cor1I = str(nGen1I/(nGen1I - nFilt1I))

ops = ['cW', 'cHbox', 'cHWB', 'cHl1', 'cHl3', 'cHq1', 'cHq3', 'cll1']
#ops = ['cW']
mxd = [17, 24, 30, 35, 39, 42, 44]

x_wts = []

MC_MG_Cor = '*1.2249011'

m_fpj = 20

sm_wt = 'LHEReweightingWeight[0]'

samples['sm'] = {
    'name': nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-1000ToInf') + \
            nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-750To1000') + \
            nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-500To750')  + \
            nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-0To500'),
    'weight': mcCommonWeight+ '*LHEReweightingWeight[0]'+MC_MG_Cor,
    'FilesPerJob': m_fpj
}

addSampleWeight(samples, 'sm', 'WWToLNuLNu_MWW-1000ToInf', cor1I)
addSampleWeight(samples, 'sm', 'WWToLNuLNu_MWW-750To1000', cor71)
addSampleWeight(samples, 'sm', 'WWToLNuLNu_MWW-500To750', cor57)
addSampleWeight(samples, 'sm', 'WWToLNuLNu_MWW-0To500', cor05)

signals.append('sm')


for i in range(len(ops)):
    wt_idx = i+1
    lin_wt = '(LHEReweightingWeight[{}]-LHEReweightingWeight[{}])/2'.format(wt_idx,wt_idx+8)
    quad_wt = '(LHEReweightingWeight[{}]+LHEReweightingWeight[{}]-2*{})/2'.format(wt_idx,wt_idx+8,sm_wt)
    slq_wt = '({}+{}+{})'.format(sm_wt, lin_wt, quad_wt)

    samples['quad_{}'.format(ops[i])] = {
        'name': nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-1000ToInf') + \
                nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-750To1000') + \
                nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-500To750')  + \
                nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-0To500'),
        'weight': mcCommonWeight+'*'+quad_wt+MC_MG_Cor,
        'FilesPerJob': m_fpj
    }

    addSampleWeight(samples, 'quad_{}'.format(ops[i]), 'WWToLNuLNu_MWW-1000ToInf', cor1I)
    addSampleWeight(samples, 'quad_{}'.format(ops[i]), 'WWToLNuLNu_MWW-750To1000', cor71)
    addSampleWeight(samples, 'quad_{}'.format(ops[i]), 'WWToLNuLNu_MWW-500To750', cor57)
    addSampleWeight(samples, 'quad_{}'.format(ops[i]), 'WWToLNuLNu_MWW-0To500', cor05)

    signals.append('quad_{}'.format(ops[i]))

    samples['sm_lin_quad_{}'.format(ops[i])] = {
        'name': nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-1000ToInf') + \
                nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-750To1000') + \
                nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-500To750')  + \
                nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-0To500'),
        'weight': mcCommonWeight+'*'+slq_wt+MC_MG_Cor,
        'FilesPerJob': m_fpj
    }

    addSampleWeight(samples, 'sm_lin_quad_{}'.format(ops[i]), 'WWToLNuLNu_MWW-1000ToInf', cor1I)
    addSampleWeight(samples, 'sm_lin_quad_{}'.format(ops[i]), 'WWToLNuLNu_MWW-750To1000', cor71)
    addSampleWeight(samples, 'sm_lin_quad_{}'.format(ops[i]), 'WWToLNuLNu_MWW-500To750', cor57)
    addSampleWeight(samples, 'sm_lin_quad_{}'.format(ops[i]), 'WWToLNuLNu_MWW-0To500', cor05)

    signals.append('sm_lin_quad_{}'.format(ops[i]))

    
    # For different x weightings
    for ix_wt in range(len(x_wts)):
        lin_wt = '{}*(LHEReweightingWeight[{}]-LHEReweightingWeight[{}])/2'.format(x_wts[ix_wt],i+1,i+8+1)
        quad_wt = '{}*{}*(LHEReweightingWeight[{}]+LHEReweightingWeight[{}]-2*{})/2'.format(x_wts[ix_wt],x_wts[ix_wt],i+1,i+8+1,sm_wt)
        slq_wt = '({}+{}+{})'.format(sm_wt, lin_wt, quad_wt)

        samples['sm_lin_quad_{}_wt_{}'.format(ops[i],x_wts_nms[ix_wt])] = {
            'name': nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-1000ToInf') + \
                    nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-750To1000') + \
                    nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-500To750')  + \
                    nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-0To500'),
            'weight': mcCommonWeight+'*'+slq_wt+MC_MG_Cor,
            'FilesPerJob': m_fpj
        }

        addSampleWeight(samples, 'sm_lin_quad_{}_wt_{}'.format(ops[i],x_wts_nms[ix_wt]), 'WWToLNuLNu_MWW-1000ToInf', cor1I)
        addSampleWeight(samples, 'sm_lin_quad_{}_wt_{}'.format(ops[i],x_wts_nms[ix_wt]), 'WWToLNuLNu_MWW-750To1000', cor71)
        addSampleWeight(samples, 'sm_lin_quad_{}_wt_{}'.format(ops[i],x_wts_nms[ix_wt]), 'WWToLNuLNu_MWW-500To750', cor57)
        addSampleWeight(samples, 'sm_lin_quad_{}_wt_{}'.format(ops[i],x_wts_nms[ix_wt]), 'WWToLNuLNu_MWW-0To500', cor05)

        signals.append('sm_lin_quad_{}_wt_{}'.format(ops[i],x_wts_nms[ix_wt]))


    # Now do find mixed terms for when there are 2 operators
    # Nonsensical to pair last term with last term, so skip if i is last operator in the list
    if i == len(ops)-1:
        continue
    for j in range(i+1,len(ops)):
        jwt_idx = j+1
        idx = mxd[i] + (j-i)
        mxd_wt = 'LHEReweightingWeight[{}]'.format(idx)
        lin_wt_j = '(LHEReweightingWeight[{}]-LHEReweightingWeight[{}])/2'.format(jwt_idx,jwt_idx+8)
        quad_wt_j = '(LHEReweightingWeight[{}]+LHEReweightingWeight[{}]-2*{})/2'.format(jwt_idx,jwt_idx+8,sm_wt)
        lq_wt_j = '({}+{})'.format(lin_wt_j, quad_wt_j)

        mxd_wt_ttl = '('+slq_wt+'+'+lq_wt_j+'+'+'2*'+mxd_wt+')'

        samples['sm_lin_quad_mixed_{}_{}'.format(ops[i],ops[j])] = {
            'name': nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-1000ToInf') + \
                    nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-750To1000') + \
                    nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-500To750')  + \
                    nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-0To500'),
            'weight': mcCommonWeight+'*'+mxd_wt_ttl+MC_MG_Cor,
            'FilesPerJob': 20
        }

        addSampleWeight(samples, 'sm_lin_quad_mixed_{}_{}'.format(ops[i],ops[j]), 'WWToLNuLNu_MWW-1000ToInf', cor1I)
        addSampleWeight(samples, 'sm_lin_quad_mixed_{}_{}'.format(ops[i],ops[j]), 'WWToLNuLNu_MWW-750To1000', cor71)
        addSampleWeight(samples, 'sm_lin_quad_mixed_{}_{}'.format(ops[i],ops[j]), 'WWToLNuLNu_MWW-500To750', cor57)
        addSampleWeight(samples, 'sm_lin_quad_mixed_{}_{}'.format(ops[i],ops[j]), 'WWToLNuLNu_MWW-0To500', cor05)

        signals.append('sm_lin_quad_mixed_{}_{}'.format(ops[i],ops[j]))

##########################################
################# FAKE ###################
##########################################

samples['Fake'] = {
  'name': [],
  'weight': 'METFilter_DATA*fakeW',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 100,
  'suppressNegativeNuisances' : ['all'],
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(fakeDirectory, pd + '_' + sd)
    samples['Fake']['name'].extend(files)
    samples['Fake']['weights'].extend([DataTrig[pd]] * len(files))

samples['Fake']['subsamples'] = {
  'em': 'abs(Lepton_pdgId[0]) == 11',
  'me': 'abs(Lepton_pdgId[0]) == 13'
}

###########################################
################## DATA ###################
###########################################

samples['DATA'] = {
  'name': [],
  'weight': 'METFilter_DATA*LepWPCut',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 100
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(dataDirectory, pd + '_' + sd)
    samples['DATA']['name'].extend(files)
    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))

########### VBF ############

files = nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M125') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M160') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M170') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M180') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M190') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M200') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M210') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M230') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M250') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M270') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M300') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M350') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M400') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M450') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M500') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M550') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M600') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M700') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M800') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M900') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M1000') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M1500') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M2000') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M2500') + \
        nanoGetSampleFiles(signalDirectory, 'VBFHToWWTo2L2Nu_M3000')

print(files)

samples['VBFHToWWOffshell'] = {
    'name': files,
    'weight': mcCommonWeight_custom + ' * p_Gen_JJEW_SIG_ghv1_1_MCFM * p_Gen_CPStoBWPropRewgt * HWWOffshell_combineWgt * (LHECandMass > 160)',
    'FilesPerJob': 10,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

samples['VBFHToWWOnshell'] = {
    'name': files,
    'weight': mcCommonWeight_custom + ' * p_Gen_JJEW_SIG_ghv1_1_MCFM * p_Gen_CPStoBWPropRewgt * HWWOffshell_combineWgt * (LHECandMass <= 160)',
    'FilesPerJob': 10,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}


########### ggH ############
files = nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M125') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M160') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M170') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M180') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M190') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M200') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M210') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M230') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M250') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M270') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M300') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M350') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M400') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M450') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M500') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M550') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M600') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M700') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M800') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M900') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M1000') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M1500') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M2000') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M2500') + \
        nanoGetSampleFiles(signalDirectory, 'GluGluHToWWTo2L2Nu_M3000')

samples['ggHToWWOffshell'] = {
    'name': files,
    'weight': mcCommonWeight_custom + ' * p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM * p_Gen_CPStoBWPropRewgt * HWWOffshell_combineWgt * (LHECandMass > 160)',
    'FilesPerJob': 10,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

samples['ggHToWWOnshell'] = {
    'name': files,
    'weight': mcCommonWeight_custom + ' * p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM * p_Gen_CPStoBWPropRewgt * HWWOffshell_combineWgt * (LHECandMass <= 160)',
    'FilesPerJob': 10,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}




