import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # ggH2016
configurations = os.path.dirname(configurations) # Differential
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight, getBaseWnAOD

def nanoGetSampleFiles(inputDir, sample):
    try:
        if _samples_noload:
            return []
    except NameError:
        pass

    return getSampleFiles(inputDir, sample, True, 'nanoLatino_')

# samples

try:
    len(samples)
except NameError:
    import collections
    samples = collections.OrderedDict()

################################################
################# SKIMS ########################
################################################

mcProduction = 'Summer16_102X_nAODv7_Full2016v7'

dataReco = 'Run2016_102X_nAODv7_Full2016v7'

embedReco = 'Embedding2016_102X_nAODv7_Full2016v7'

mcSteps = 'MCl1loose2016v7__MCCorr2016v7__l2loose__l2tightOR2016v7{var}'

fakeSteps = 'DATAl1loose2016v7__l2loose__fakeW'

dataSteps = 'DATAl1loose2016v7__l2loose__l2tightOR2016v7'

embedSteps = 'DATAl1loose2016v7__l2loose__l2tightOR2016v7__Embedding'

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if    'iihe' in SITE:
  treeBaseDir = '/pnfs/iihe/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'
elif  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'

def makeMCDirectory(var=''):
    if var:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='__' + var))
    else:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='__trigFix'))

mcDirectory = makeMCDirectory()
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)
embedDirectory = os.path.join(treeBaseDir, embedReco, embedSteps)

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
    ['B','Run2016B-02Apr2020_ver2-v1'],
    ['C','Run2016C-02Apr2020-v1'],
    ['D','Run2016D-02Apr2020-v1'],
    ['E','Run2016E-02Apr2020-v1'],
    ['F','Run2016F-02Apr2020-v1'],
    ['G','Run2016G-02Apr2020-v1'],
    ['H','Run2016H-02Apr2020-v1']
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

###########################################
#############  BACKGROUNDS  ###############
###########################################

###### DY #######

useEmbeddedDY = True
useDYtt = True

# The Dyveto sample is used to estimate one piece of the Dyemb uncertainty
# To avoid running it all the times, it was run once and the uncertainty was converted into a lnN (see nuisances.py)
runDYveto = False

embed_tautauveto = '' #Setup
if useEmbeddedDY:
  embed_tautauveto = '*embed_tautauveto'

if useEmbeddedDY:

  # Actual embedded data
  samples['Dyemb'] = {
    'name': [],
    'weight': 'METFilter_DATA*LepWPCut*Muon_ttHMVA_SF*embedtotal*genWeight*(genWeight<=1)',
    'weights': [],
    'isData': ['all'],
    'FilesPerJob': 20
  }

  for run_, sd in DataRun:
      files = nanoGetSampleFiles(embedDirectory, 'DYToTT_MuEle_Embedded_Run2016' + run_)
      samples['Dyemb']['name'].extend(files)
      samples['Dyemb']['weights'].extend(['Trigger_ElMu'] * len(files))

  # Vetoed MC: Needed for uncertainty
  files = nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu') + \
      nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop') + \
      nanoGetSampleFiles(mcDirectory, 'ST_tW_top') + \
      nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu') + \
      nanoGetSampleFiles(mcDirectory, 'WpWmJJ_EWK_noTop') + \
      nanoGetSampleFiles(mcDirectory, 'GluGluWWTo2L2Nu_MCFM') + \
      nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Nu') + \
      nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Q') + \
      nanoGetSampleFiles(mcDirectory, 'ZZTo4L') + \
      nanoGetSampleFiles(mcDirectory, 'WZTo2L2Q') + \
      nanoGetSampleFiles(mcDirectory, 'Zg') + \
      nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01')

  if runDYveto:
      samples['Dyveto'] = {
          'name': files,
          'weight': '(1-embed_tautauveto)',
          'FilesPerJob': 1, # There's some error about not finding sample-specific variables like "nllW" when mixing different samples into a single job; so split them all up instead
      }
    
      addSampleWeight(samples, 'Dyveto', 'TTTo2L2Nu', mcCommonWeight + '*((topGenPt * antitopGenPt > 0.) * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPt) - 0.000134*topGenPt + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPt) - 0.000134*antitopGenPt + 0.973))) * (TMath::Sqrt(TMath::Exp(1.61468e-03 + 3.46659e-06*topGenPt - 8.90557e-08*topGenPt*topGenPt) * TMath::Exp(1.61468e-03 + 3.46659e-06*antitopGenPt - 8.90557e-08*antitopGenPt*antitopGenPt))) + (topGenPt * antitopGenPt <= 0.))'), # Same Reweighting as other years, but with additional fix for tune CUET -> CP5)')
      addSampleWeight(samples, 'Dyveto', 'ST_tW_antitop', mcCommonWeight)
      addSampleWeight(samples, 'Dyveto', 'ST_tW_top', mcCommonWeight)
      addSampleWeight(samples, 'Dyveto', 'WWTo2L2Nu', mcCommonWeight + '*nllW')
      addSampleWeight(samples, 'Dyveto', 'WpWmJJ_EWK_noTop', mcCommonWeight + '*((Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)*(lhe_mWm > 60. && lhe_mWm < 100. && lhe_mWp > 60. && lhe_mWp < 100.))')
      addSampleWeight(samples, 'Dyveto', 'GluGluWWTo2L2Nu_MCFM', mcCommonWeight + '*1.53/1.4')
      addSampleWeight(samples, 'Dyveto', 'ZZTo2L2Nu', mcCommonWeight + '*1.11')
      addSampleWeight(samples, 'Dyveto', 'ZZTo2L2Q', mcCommonWeight + '*1.11')
      addSampleWeight(samples, 'Dyveto', 'ZZTo4L', mcCommonWeight + '*1.11')
      addSampleWeight(samples, 'Dyveto', 'WZTo2L2Q', mcCommonWeight + '*1.11')
      addSampleWeight(samples, 'Dyveto', 'Zg', ' ( ' + mcCommonWeightNoMatch + '*(!(Gen_ZGstar_mass > 0))' + ' ) + ( ' + mcCommonWeight + ' * ((Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4) * 0.94 + (Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4) * 1.14) * (Gen_ZGstar_mass > 0)' + ' ) ') # Vg contribution + VgS contribution
      addSampleWeight(samples, 'Dyveto', 'WZTo3LNu_mllmin01', mcCommonWeight + '*((Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4) * 0.94 + (Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4) * 1.14) * (Gen_ZGstar_mass > 0.1)')

###### DY MC ######
## We need to keep DY MC as well, because only embedded events passing the ElMu trigger are considered
## Events failing ElMu but passing one of the other triggers are included in the DY MC
if useDYtt:
    files = nanoGetSampleFiles(mcDirectory, 'DYJetsToTT_MuEle_M-50_ext1') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO')
    
    samples['DY'] = {
        'name': files,
        'weight': mcCommonWeight+embed_tautauveto + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0))',
        'FilesPerJob': 2,
    }
    addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50_ext1','DY_NLO_pTllrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO','DY_LO_pTllrw')
else:
    files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO')

    samples['DY'] = {
        'name': files,
        'weight': mcCommonWeight+embed_tautauveto + "*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 &&\
                                         Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )",
        'FilesPerJob': 8,
    }
    addSampleWeight(samples,'DY','DYJetsToLL_M-50','DY_NLO_pTllrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1','DY_LO_pTllrw')


###### Top #######

files = nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu') + \
    nanoGetSampleFiles(mcDirectory, 'ST_s-channel') + \
    nanoGetSampleFiles(mcDirectory, 'ST_t-channel_antitop') + \
    nanoGetSampleFiles(mcDirectory, 'ST_t-channel_top') + \
    nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop') + \
    nanoGetSampleFiles(mcDirectory, 'ST_tW_top')

samples['top'] = {
    'name': files,
    'weight': mcCommonWeight+embed_tautauveto,
    'FilesPerJob': 2,
}

addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')

###### WW ########

samples['WW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu'),
    'weight': mcCommonWeight+embed_tautauveto + '*nllW*ewknloW', # temporary - nllW module not run on PS and UE variation samples
    'FilesPerJob': 1
}

samples['WWewk'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WpWmJJ_EWK_noTop'),
    'weight': mcCommonWeight+embed_tautauveto + '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)*(lhe_mW1[0] > 60. && lhe_mW1[0] < 100. && lhe_mW2[0] > 60. && lhe_mW2[0] < 100.)', #filter tops and Higgs, limit w mass
    'FilesPerJob': 4
}

samples['ggWW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluWWTo2L2Nu_MCFM'),
    'weight': mcCommonWeight+embed_tautauveto + '*1.53/1.4', # updating k-factor
    'FilesPerJob': 4
}

######## Vg ########

useWgFXFX=True

if useWgFXFX:
  files = nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX_01J') + \
      nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX_01J_ext1') + \
      nanoGetSampleFiles(mcDirectory, 'Zg')
  
  samples['Vg'] = {
      'name': files,
      'weight': mcCommonWeightNoMatch+embed_tautauveto + '*(!(Gen_ZGstar_mass > 0))',
      'FilesPerJob': 4
  }
  wgbasew = getBaseWnAOD(mcDirectory,'Summer16_102X_nAODv7_Full2016v7',['Wg_AMCNLOFXFX_01J','Wg_AMCNLOFXFX_01J_ext1'])
  addSampleWeight(samples,'Vg','Wg_AMCNLOFXFX_01J','191.4/586.*'+wgbasew+'/baseW')
  addSampleWeight(samples,'Vg','Wg_AMCNLOFXFX_01J_ext1','191.4/586.*'+wgbasew+'/baseW')
  
  ######## VgS ########
  
  files = nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX_01J') + \
      nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX_01J_ext1') + \
      nanoGetSampleFiles(mcDirectory, 'Zg') + \
      nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01')
  
  samples['VgS'] = {
      'name': files,
      'weight': mcCommonWeight+embed_tautauveto + ' * (gstarLow * 0.94 + gstarHigh * 1.14)',
      'FilesPerJob': 4,
      'subsamples': {
        'L': 'gstarLow',
        'H': 'gstarHigh'
      }
  }
  addSampleWeight(samples, 'VgS', 'Wg_AMCNLOFXFX_01J', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)*191.4/586.*'+wgbasew+'/baseW')
  addSampleWeight(samples, 'VgS', 'Wg_AMCNLOFXFX_01J_ext1', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)*191.4/586.*'+wgbasew+'/baseW')
  addSampleWeight(samples, 'VgS', 'Zg', '(Gen_ZGstar_mass > 0)')
  addSampleWeight(samples, 'VgS', 'WZTo3LNu_mllmin01', '(Gen_ZGstar_mass > 0.1)')

else:
  files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
      nanoGetSampleFiles(mcDirectory, 'Zg')

  samples['Vg'] = {
      'name': files,
      'weight': mcCommonWeightNoMatch+embed_tautauveto + '*(!(Gen_ZGstar_mass > 0))',
      'FilesPerJob': 5
  }

  ######## VgS ########

  files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
      nanoGetSampleFiles(mcDirectory, 'Zg') + \
      nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01')

  samples['VgS'] = {
      'name': files,
      'weight': mcCommonWeight+embed_tautauveto + ' * (gstarLow * 0.94 + gstarHigh * 1.14)',
      'FilesPerJob': 5,
      'subsamples': {
      'L': 'gstarLow',
      'H': 'gstarHigh'
      }
  }
  addSampleWeight(samples, 'VgS', 'Wg_MADGRAPHMLM', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)')
  addSampleWeight(samples, 'VgS', 'Zg', '(Gen_ZGstar_mass > 0)')
  addSampleWeight(samples, 'VgS', 'WZTo3LNu_mllmin01', '(Gen_ZGstar_mass > 0.1)')

############ VZ ############

files = nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Nu') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Q') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo4L') + \
    nanoGetSampleFiles(mcDirectory, 'WZTo2L2Q')

samples['VZ'] = {
    'name': files,
    'weight': mcCommonWeight+embed_tautauveto + '*1.11',
    'FilesPerJob': 4
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
    'FilesPerJob': 4
}

###########################################
#############   SIGNALS  ##################
###########################################

signals = []
if os.path.exists('HTXS_stage1_categories.py') :
  handle = open('HTXS_stage1_categories.py','r')
  exec(handle)
  handle.close()

## STXS bins                    

for cat,num in HTXSStage1_1Categories.iteritems():
    ## ggH
    if 'GG2H_' in cat:
        if 'PTH_GT200' not in cat:
            samples['ggH_hww_'+cat.replace('GG2H_','')]  = {  'name': nanoGetSampleFiles(mcDirectory,'GluGluHToWWTo2L2Nu_alternative_M125')+nanoGetSampleFiles(mcDirectory, 'GGHjjToWWTo2L2Nu_minloHJJ_M125'),
                                                              'weight': mcCommonWeight+'*(HTXS_stage1_1_cat_pTjet30GeV=='+str(num)+')',
                                                              'FilesPerJob': 1,
                                                              'suppressNegative' :['all'],
                                                              'suppressNegativeNuisances' :['all'],
            }
            addSampleWeight(samples, 'ggH_hww_'+cat.replace('GG2H_',''), 'GluGluHToWWTo2L2Nu_alternative_M125', '(HTXS_stage1_1_cat_pTjet30GeV<107)*Weight2MINLO*1092.0713/1068.1909') 
            addSampleWeight(samples, 'ggH_hww_'+cat.replace('GG2H_',''), 'GGHjjToWWTo2L2Nu_minloHJJ_M125', '(HTXS_stage1_1_cat_pTjet30GeV>106)*1092.0713/1068.1909') 
            signals.append('ggH_hww_'+cat.replace('GG2H_',''))


    ## VBF and VH had.
    elif 'QQ2HQQ_' in cat:
      samples['qqH_hww_'+cat.replace('QQ2HQQ_','')]  = {  'name' : nanoGetSampleFiles(mcDirectory,'VBFHToWWTo2L2Nu_M125'),
                                                            'weight': mcCommonWeight+'*(HTXS_stage1_1_cat_pTjet30GeV=='+str(num)+')' ,
                                                            'suppressNegative' :['all'],
                                                            'suppressNegativeNuisances' :['all'],
                                                         }
      signals.append('qqH_hww_'+cat.replace('QQ2HQQ_',''))

      if 'MJJ_0_60' in cat or 'MJJ_60_120' in cat or 'MJJ_120_350' in cat:
        samples['WH_had_hww_'+cat.replace('QQ2HQQ_','')]   = {  'name' :   nanoGetSampleFiles(mcDirectory,'HWminusJ_HToWW_M125')
                                                                         + nanoGetSampleFiles(mcDirectory,'HWplusJ_HToWW_M125')  ,
                                                                'weight': mcCommonWeight+'*(HTXS_stage1_1_cat_pTjet30GeV=='+str(num)+')' ,
                                                                'suppressNegative' :['all'],
                                                                'suppressNegativeNuisances' :['all'],
                                                             }
        signals.append('WH_had_hww_'+cat.replace('QQ2HQQ_',''))

        samples['ZH_had_hww_'+cat.replace('QQ2HQQ_','')]  = { 'name' :  nanoGetSampleFiles(mcDirectory,'HZJ_HToWW_M125') ,
                                                              'weight': mcCommonWeight+'*(HTXS_stage1_1_cat_pTjet30GeV=='+str(num)+')' ,
                                                              'suppressNegative' :['all'],
                                                              'suppressNegativeNuisances' :['all'],
                                                            }
        signals.append('ZH_had_hww_'+cat.replace('QQ2HQQ_',''))


    ## WH lep.
    elif 'QQ2HLNU_' in cat:
      samples['WH_lep_hww_'+cat.replace('QQ2HLNU_','')] = { 'name' :   nanoGetSampleFiles(mcDirectory,'HWminusJ_HToWW_M125')
                                                                     + nanoGetSampleFiles(mcDirectory,'HWplusJ_HToWW_M125')  ,
                                                            'weight': mcCommonWeight+'*(HTXS_stage1_1_cat_pTjet30GeV=='+str(num)+')' ,
                                                            'suppressNegative' :['all'],
                                                            'suppressNegativeNuisances' :['all'],
                                                          }
      signals.append('WH_lep_hww_'+cat.replace('QQ2HLNU_',''))

    ## qqZH lep.
    elif 'QQ2HLL_' in cat:
      samples['ZH_lep_hww_'+cat.replace('QQ2HLL_','')]  = { 'name' :  nanoGetSampleFiles(mcDirectory,'HZJ_HToWW_M125') ,
                                                            'weight': mcCommonWeight+'*(HTXS_stage1_1_cat_pTjet30GeV=='+str(num)+')' ,
                                                            'suppressNegative' :['all'],
                                                            'suppressNegativeNuisances' :['all'],
                                                          }
      signals.append('ZH_lep_hww_'+cat.replace('QQ2HLL_',''))


    ## ggZH lep
    elif 'GG2HLL_' in cat:
      samples['ggZH_lep_hww_'+cat.replace('GG2HLL_','')]  = {  'name': nanoGetSampleFiles(mcDirectory,'ggZH_HToWWTo2L2Nu_ZTo2L_M125'),
                                                           'weight': mcCommonWeight+'*(HTXS_stage1_1_cat_pTjet30GeV=='+str(num)+')',
                                                           'suppressNegative' :['all'],
                                                           'suppressNegativeNuisances' :['all'],
                                                        }
      signals.append('ggZH_lep_hww_'+cat.replace('GG2HLL_',''))



# Stage 1.2 binning for high pTH bin                                                                                                         
                                                                                                                                              
samples['ggH_hww_PTH_200_300']  = {  'name': nanoGetSampleFiles(mcDirectory,'GluGluHToWWTo2L2Nu_alternative_M125')+nanoGetSampleFiles(mcDirectory, 'GGHjjToWWTo2L2Nu_minloHJJ_M125'),
                                     'weight': mcCommonWeight+'*(HTXS_stage1_1_cat_pTjet30GeV==101)*(HTXS_Higgs_pt>200)*(HTXS_Higgs_pt<=300)*Weight2MINLO',
                                     'FilesPerJob': 1,
                                     'suppressNegative' :['all'],
                                     'suppressNegativeNuisances' :['all'],
                                  }
addSampleWeight(samples, 'ggH_hww_PTH_200_300', 'GluGluHToWWTo2L2Nu_alternative_M125', '(HTXS_stage1_1_cat_pTjet30GeV<107)*Weight2MINLO*1092.0713/1068.1909')
addSampleWeight(samples, 'ggH_hww_PTH_200_300', 'GGHjjToWWTo2L2Nu_minloHJJ_M125', '(HTXS_stage1_1_cat_pTjet30GeV>106)*1092.0713/1068.1909')
signals.append('ggH_hww_PTH_200_300')

samples['ggH_hww_PTH_300_450']  = {  'name': nanoGetSampleFiles(mcDirectory,'GluGluHToWWTo2L2Nu_alternative_M125')+nanoGetSampleFiles(mcDirectory, 'GGHjjToWWTo2L2Nu_minloHJJ_M125'),
                                     'weight': mcCommonWeight+'*(HTXS_stage1_1_cat_pTjet30GeV==101)*(HTXS_Higgs_pt>300)*(HTXS_Higgs_pt<=450)*Weight2MINLO',
                                     'FilesPerJob': 1,
                                     'suppressNegative' :['all'],
                                     'suppressNegativeNuisances' :['all'],
                                  }
addSampleWeight(samples, 'ggH_hww_PTH_300_450', 'GluGluHToWWTo2L2Nu_alternative_M125', '(HTXS_stage1_1_cat_pTjet30GeV<107)*Weight2MINLO*1092.0713/1068.1909')
addSampleWeight(samples, 'ggH_hww_PTH_300_450', 'GGHjjToWWTo2L2Nu_minloHJJ_M125', '(HTXS_stage1_1_cat_pTjet30GeV>106)*1092.0713/1068.1909')
signals.append('ggH_hww_PTH_300_450')

samples['ggH_hww_PTH_450_650']  = {  'name': nanoGetSampleFiles(mcDirectory,'GluGluHToWWTo2L2Nu_alternative_M125')+nanoGetSampleFiles(mcDirectory, 'GGHjjToWWTo2L2Nu_minloHJJ_M125'),
                                     'weight': mcCommonWeight+'*(HTXS_stage1_1_cat_pTjet30GeV==101)*(HTXS_Higgs_pt>450)*(HTXS_Higgs_pt<=650)*Weight2MINLO',
                                     'FilesPerJob': 1,
                                     'suppressNegative' :['all'],
                                     'suppressNegativeNuisances' :['all'],
                                  }
addSampleWeight(samples, 'ggH_hww_PTH_450_650', 'GluGluHToWWTo2L2Nu_alternative_M125', '(HTXS_stage1_1_cat_pTjet30GeV<107)*Weight2MINLO*1092.0713/1068.1909')
addSampleWeight(samples, 'ggH_hww_PTH_450_650', 'GGHjjToWWTo2L2Nu_minloHJJ_M125', '(HTXS_stage1_1_cat_pTjet30GeV>106)*1092.0713/1068.1909')
signals.append('ggH_hww_PTH_450_650')

samples['ggH_hww_PTH_GT650']  = {  'name': nanoGetSampleFiles(mcDirectory,'GluGluHToWWTo2L2Nu_alternative_M125')+nanoGetSampleFiles(mcDirectory, 'GGHjjToWWTo2L2Nu_minloHJJ_M125'),
                                   'weight': mcCommonWeight+'*(HTXS_stage1_1_cat_pTjet30GeV==101)*(HTXS_Higgs_pt>650)*Weight2MINLO',
                                   'FilesPerJob': 1,
                                   'suppressNegative' :['all'],
                                   'suppressNegativeNuisances' :['all'],
                                  }
addSampleWeight(samples, 'ggH_hww_PTH_GT650', 'GluGluHToWWTo2L2Nu_alternative_M125', '(HTXS_stage1_1_cat_pTjet30GeV<107)*Weight2MINLO*1092.0713/1068.1909')
addSampleWeight(samples, 'ggH_hww_PTH_GT650', 'GGHjjToWWTo2L2Nu_minloHJJ_M125', '(HTXS_stage1_1_cat_pTjet30GeV>106)*1092.0713/1068.1909')
signals.append('ggH_hww_PTH_GT650')


############ ttH ############

samples['ttH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 1
}

signals.append('ttH_hww')

############ H->TauTau ############

samples['ggH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 20
}

signals.append('ggH_htt')

samples['qqH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 10
}

signals.append('qqH_htt')

samples['ZH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'HZJ_HToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

signals.append('ZH_htt')

samples['WH_htt'] = {
    'name':  nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

signals.append('WH_htt')



###########################################
################## FAKE ###################
###########################################

samples['Fake'] = {
  'name': [],
  'weight': 'METFilter_DATA*fakeW',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 50
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(fakeDirectory, pd + '_' + sd)

    samples['Fake']['name'].extend(files)
    samples['Fake']['weights'].extend([DataTrig[pd]] * len(files))

# samples['Fake']['subsamples'] = {
#   'em': 'abs(Lepton_pdgId[0]) == 11',
#   'me': 'abs(Lepton_pdgId[0]) == 13'
# }

###########################################
################## DATA ###################
###########################################

samples['DATA'] = {
  'name': [],
  'weight': 'METFilter_DATA*LepWPCut',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 50
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(dataDirectory, pd + '_' + sd)
    
    samples['DATA']['name'].extend(files)
    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))

