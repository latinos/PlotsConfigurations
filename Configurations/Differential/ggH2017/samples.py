import os
import copy
from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

def nanoGetSampleFiles(inputDir, Sample):
    return getSampleFiles(inputDir, Sample, False, 'nanoLatino_')

# samples

try:
    len(samples)
except NameError:
    samples = {}

################################################
################# SKIMS ########################
################################################

mcProduction = 'Fall2017_nAOD_v1_Full2017v2'

dataReco = 'Run2017_nAOD_v1_Full2017v2'

mcSteps = 'MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017'

fakeSteps = 'DATAl1loose2017v2__DATACorr2017__l2loose__fakeW'

dataSteps = 'DATAl1loose2017v2__DATACorr2017__l2loose'

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if    'iihe' in SITE:
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015'
elif  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'

mcDirectory = os.path.join(treeBaseDir, mcProduction, mcSteps)
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
    ['B','Run2017B-31Mar2018-v1'],
    ['C','Run2017C-31Mar2018-v1'],
    ['D','Run2017D-31Mar2018-v1'],
    ['E','Run2017E-31Mar2018-v1'],
    ['F','Run2017F-31Mar2018-v1']
]

DataSets = ['MuonEG','DoubleMuon','SingleMuon','DoubleEG','SingleElectron']

DataTrig = {
    'MuonEG': 'Trigger_ElMu',
    'DoubleMuon': '!Trigger_ElMu && Trigger_dblMu',
    'SingleMuon': '!Trigger_ElMu && !Trigger_dblMu && Trigger_sngMu',
    'DoubleEG': '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && Trigger_dblEl',
    'SingleElectron': '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && !Trigger_dblEl && Trigger_sngEl',
}

#########################################
############ MC COMMON ##################
#########################################

mcCommonWeight = 'XSWeight*SFweight*GenLepMatch2l*METFilter_MC'

###########################################
#############  BACKGROUNDS  ###############
###########################################

###### DY #######

useDYtt = False

if useDYtt:
    files = nanoGetSampleFiles(mcDirectory, 'DYJetsToTT_MuEle_M-50') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO')

    samples['DY'] = {
        'name': files,
        'weight': mcCommonWeight,
        'FilesPerJob': 3,
    }
    addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50','ptllDYW_NLO')
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO','ptllDYW_LO')

    ## Remove OF from inclusive sample (is it needed?)
    #cutSF = '(abs(Lepton_pdgId[0]*Lepton_pdgId[1]) == 11*11)||(Lepton_pdgId[0]*Lepton_pdgId[1]) == 13*13)'
    #addSampleWeight(samples,'DY','DYJetsToLL_M-50',cutSF)

else:
    files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO')

    samples['DY'] = {
        'name': files,
        'weight': mcCommonWeight,
        'FilesPerJob': 3,
    }
    addSampleWeight(samples,'DY','DYJetsToLL_M-50','ptllDYW_NLO')
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO','ptllDYW_LO')

samples['DY_0j'] = copy.deepcopy(samples['DY'])
samples['DY_0j']['weight'] += '*(zeroJet)'

samples['DY_1j'] = copy.deepcopy(samples['DY'])
samples['DY_1j']['weight'] += '*(oneJet)'

samples['DY_ge2j'] = copy.deepcopy(samples['DY'])
samples['DY_ge2j']['weight'] += '*(manyJet)'

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
    'FilesPerJob': 2
}

addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')

samples['top_0j'] = copy.deepcopy(samples['top'])
samples['top_0j']['weight'] += '*(zeroJet)'

samples['top_1j'] = copy.deepcopy(samples['top'])
samples['top_1j']['weight'] += '*(oneJet)'

samples['top_ge2j'] = copy.deepcopy(samples['top'])
samples['top_ge2j']['weight'] += '*(manyJet)'

###### WW ########

#FIXME Add nllW weight to WW
samples['WW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu'),
    'weight': mcCommonWeight
}

#FIXME Check if k-factor is already taken into account in XSWeight
files = nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENEN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENMN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENTN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNEN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNMN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNTN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNEN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNMN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNTN')

samples['ggWW'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

######## Vg ########

#FIXME Add Zg when available
samples['Vg'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM'),
    #+ nanoGetSampleFiles(mcDirectory, 'Zg'),
    #'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC + '* !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
    'weight': 'XSWeight*SFweight*METFilter_MC*(Gen_ZGstar_mass<4)',
    'FilesPerJob': 5
}

######## VgS ########

#FIXME Use WZTo3LNu_mllmin01 sample (gstar mass > 100 MeV) when available. This one has gstar mass > 4 GeV
#FIXME Add normalization k-factor
samples['WZgS'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WZTo3LNu'),
    'weight': mcCommonWeight+'*(Gen_ZGstar_mass>4)',
}

############ VZ ############

files = nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Nu') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Q') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo4L') + \
    nanoGetSampleFiles(mcDirectory, 'WZTo2L2Q')

#FIXME Add normalization k-factor
samples['VZ'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 5
}

########## VVV #########

files = nanoGetSampleFiles(mcDirectory, 'ZZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWW')
#+ nanoGetSampleFiles(mcDirectory, 'WWG'), #should this be included? or is it already taken into account in the WW sample?

samples['VVV'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 2
}

###########################################
#############   SIGNALS  ##################
###########################################

#### Cuts for signal splitting
# ==2 OSOF leptons
# pt1 > 25
# pt2 > 10(13) el(mu)
# mll = sqrt(2*pt1*pt2*(cosh(eta1-eta2)-cos(phi1-phi2))) > 12
# MET > 20
# ptll = sqrt(pt1^2+pt2^2+2*pt1*pt2*cos(phi1-phi2)) > 30
# mth = sqrt(2*met*(sqrt(pt1^2+pt2^2+2*pt1*pt2*cos(phi1-phi2))-cos(metphi)*(pt1*cos(phi1)+pt2*cos(phi2))-sin(metphi)*(pt1*sin(phi1)+pt2*sin(phi2)))) >= 60
# mtw2 = sqrt(2*pt2*met*(1-cos(phi2-metphi))) > 30

pthBinning1 = [0., 20., 45., 80., 120., 200., 6500.]
pthBinning2 = [0., 30., 60., 100., 200., 350., 6500.]
yhBinning = [0., 0.15, 0.3, 0.6, 0.9, 1.2, 2.5, 10.]
njetBinning = [0, 1, 2, 3, 4]

signals = []

#### ggH -> WW

samples['ggH_hww'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToWWTo2L2NuPowheg_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

signals.append('ggH_hww')

############# VBF H->WW ############
#samples['qqH_hww'] = {
#    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToWWTo2L2NuPowheg_M125'),
#    'weight': mcCommonWeight
#}
#
#signals.append('qqH_hww')
#
############# ZH H->WW ############
#
#samples['ZH_hww'] = {
#    'name':   nanoGetSampleFiles(mcDirectory, 'HZJ_HToWW_M120'), #FIXME replace with 125 GeV sample when available
#    'weight': mcCommonWeight
#}
#
#signals.append('ZH_hww')
#
#samples['ggZH_hww'] = {
#    'name':   nanoGetSampleFiles(mcDirectory, 'GluGluZH_HToWW_M125'),
#    'weight': mcCommonWeight
#}
#
#signals.append('ggZH_hww')
#
############# WH H->WW ############
#
#samples['WH_hww'] = {
#    'name':   nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125')
#    + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125'),
#    'weight': mcCommonWeight
#}
#
#signals.append('WH_hww')
#
############# ttH ############
#
#samples['ttH_hww'] = {
#    'name':   nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125'),
#    'weight': mcCommonWeight
#}
#
#signals.append('ttH_hww')

############ bbH ############
#FIXME Missing samples

############ XH ############

files = nanoGetSampleFiles(mcDirectory, 'HZJ_HToWW_M120') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluZH_HToWW_M125') + \
    nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') + \
    nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125') + \
    nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125')

samples['XH_hww'] = {
  'name': files,
  'weight': mcCommonWeight,
  'FilesPerJob': 5
}

signals.append('XH_hww')

for signal in signals:
    for ipt in range(len(pthBinning1) - 1):
      low, high = pthBinning1[ipt:ipt+2]

      samples[signal + '_pth_%.0f_%.0f_incl' % (low, high)] = copy.deepcopy(samples[signal])
      samples[signal + '_pth_%.0f_%.0f_incl' % (low, high)]['weight'] += '*(genPth > %f && genPth < %f)' % (low, high)

      samples[signal + '_pth_%.0f_%.0f_fid' % (low, high)] = copy.deepcopy(samples[signal])
      samples[signal + '_pth_%.0f_%.0f_fid' % (low, high)]['weight'] += '*(fiducial && genPth > %f && genPth < %f)' % (low, high)

      samples[signal + '_pth_%.0f_%.0f_nonfid' % (low, high)] = copy.deepcopy(samples[signal])
      samples[signal + '_pth_%.0f_%.0f_nonfid' % (low, high)]['weight'] += '*(!fiducial && genPth > %f && genPth < %f)' % (low, high)

    for ipt in range(len(pthBinning2) - 1):
      low, high = pthBinning2[ipt:ipt+2]

      samples[signal + '_pth_%.0f_%.0f_incl' % (low, high)] = copy.deepcopy(samples[signal])
      samples[signal + '_pth_%.0f_%.0f_incl' % (low, high)]['weight'] += '*(genPth > %f && genPth < %f)' % (low, high)

      samples[signal + '_pth_%.0f_%.0f_fid' % (low, high)] = copy.deepcopy(samples[signal])
      samples[signal + '_pth_%.0f_%.0f_fid' % (low, high)]['weight'] += '*(fiducial && genPth > %f && genPth < %f)' % (low, high)

      samples[signal + '_pth_%.0f_%.0f_nonfid' % (low, high)] = copy.deepcopy(samples[signal])
      samples[signal + '_pth_%.0f_%.0f_nonfid' % (low, high)]['weight'] += '*(!fiducial && genPth > %f && genPth < %f)' % (low, high)

    #samples[signal + '_yhbins'] = copy.deepcopy(samples[signal])
    #samples[signal + '_yhbins']['bins'] = {}
    #
    #for iy in range(len(yhBinning) - 1):
    #  low, high = yhBinning[iy:iy+2]
    #  samples[signal + '_yhbins']['bins'][('fid_yh_%.2f_%.2f' % (low, high)).replace('.', 'p')] = 'fiducial && absGenYH > %f && absGenYH < %f' % (low, high)
    #  samples[signal + '_yhbins']['bins'][('nonfid_yh_%.2f_%.2f' % (low, high)).replace('.', 'p')] = '!fiducial && absGenYH > %f && absGenYH < %f' % (low, high)

    #for n in njetBinning:
    #  samples[signal + '_nj_%d_fid' % n] = copy.deepcopy(samples[signal])
    #  if n == njetBinning[-1]:
    #    samples[signal + '_nj_%d_fid' % n]['weight'] += '*(fiducial && nGenJet >= %d)' % n
    #  else:
    #    samples[signal + '_nj_%d_fid' % n]['weight'] += '*(fiducial && nGenJet == %d)' % n
    #
    #  samples[signal + '_nj_%d_nonfid' % n] = copy.deepcopy(samples[signal])
    #  if n == njetBinning[-1]:
    #    samples[signal + '_nj_%d_nonfid' % n]['weight'] += '*(!fiducial && nGenJet >= %d)' % n
    #  else:
    #    samples[signal + '_nj_%d_nonfid' % n]['weight'] += '*(!fiducial && nGenJet == %d)' % n

############ H->TauTau ############

splitHtt=False
if splitHtt:
    samples['ggH_htt'] = {
        'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125'),
        'weight': mcCommonWeight
    }

    samples['qqH_htt'] = {
        'name': nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125'),
        'weight': mcCommonWeight
    }

    samples['ZH_htt'] = {
        'name': nanoGetSampleFiles(mcDirectory, 'HZJ_HToTauTau_M125'),
        'weight': mcCommonWeight
    }

    samples['WH_htt'] = {
        'name':  nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125')
        + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125'),
        'weight': mcCommonWeight
    }

else:
    files = nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125') + \
        nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125') + \
        nanoGetSampleFiles(mcDirectory, 'HZJ_HToTauTau_M125') + \
        nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125') + \
        nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125')

    samples['H_htt'] = {
        'name': files,
        'weight': mcCommonWeight,
        'FilesPerJob': 2
    }

###########################################
################## FAKE ###################
###########################################

samples['Fake'] = {
    'name': [],
    'weight': 'METFilter_DATA*fakeW',
    'weights': [],
    'isData': ['all'],
    'FilesPerJob': 15,
}

for _, sd in DataRun:
    for pd in DataSets:
        files = nanoGetSampleFiles(fakeDirectory, pd + '_' + sd)
        samples['Fake']['name'].extend(files)
        samples['Fake']['weights'].extend([DataTrig[pd]] * len(files))

###########################################
################## DATA ###################
###########################################

samples['DATA'] = {
    'name': [],
    'weight': 'METFilter_DATA*LepWPCut',
    'weights': [],
    'isData': ['all'],
    'FilesPerJob': 20,
}

for _, sd in DataRun:
    for pd in DataSets:
        files = nanoGetSampleFiles(dataDirectory, pd + '_' + sd)
        samples['DATA']['name'].extend(files)
        samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))

#for sname in sorted(samples.keys()):
#    if 'pth_' in sname:
#        continue
#
#    print sname, len(samples[sname]['name'])
#    if sname == 'DATA':
#        print samples[sname]['name'][0]
