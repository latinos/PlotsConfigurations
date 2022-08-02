B1;95;0cimport inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # DYMVA_SYS
configurations = os.path.dirname(configurations) # Full2017_v7
configurations = os.path.dirname(configurations) # ggH_SF 
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

def nanoGetSampleFiles(inputDir, sample):
    try:
        if _samples_noload:
            return [sample]
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

dataReco = 'Run2017_102X_nAODv7_Full2017v7'
fakeReco = dataReco

mcProduction = 'Fall2017_102X_nAODv7_Full2017v7'

mcSteps = 'MCl1loose2017v7__MCCorr2017v7__l2loose__l2tightOR2017v7{var}'


fakeSteps = 'DATAl1loose2017v7__l2loose__fakeW'

dataSteps = 'DATAl1loose2017v7__l2loose__l2tightOR2017v7'

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if    'iihe' in SITE:
  #treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015'
  treeBaseDir = '/pnfs/iihe/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'
elif  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'

def makeMCDirectory(var=''):
    if var:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='__' + var))
    else:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var=''))

mcDirectory = makeMCDirectory()
fakeDirectory = os.path.join(treeBaseDir, fakeReco, fakeSteps)
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)


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

useDYtt = False
useDYHT = True



#DY_corr = '((Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11)*zeroJet*(1.74-0.048*puppimet+0.0015*puppimet*puppimet-0.00002*puppimet*puppimet*puppimet)) + ((Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13)*(0.59 + 0.053* puppimet-0.0011*puppimet*puppimet+0.000002*puppimet*puppimet*puppimet)*zeroJet)'
                         
 
                     
# ptllDYW_NLO = '(((0.623108 + 0.0722934*gen_ptll - 0.00364918*gen_ptll*gen_ptll + 6.97227e-05*gen_ptll*gen_ptll*gen_ptll - 4.52903e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll<45)*(gen_ptll>0) + 1*(gen_ptll>=45))*(abs(gen_mll-90)<3) + (abs(gen_mll-90)>3))'
# ptllDYW_LO = '((0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))'


if useDYtt:
    files = nanoGetSampleFiles(mcDirectory, 'DYJetsToTT_MuEle_M-50') + \
            nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1')

    samples['DY'] = {
        'name': files,
        'weight': mcCommonWeight + "*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 &&\
                                         Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) * shape_corr_DY)",
        'FilesPerJob': 5,
        'suppressNegative' :['all'],
        'suppressNegativeNuisances' :['all'],
    }
    addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50','DY_NLO_pTllrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1','DY_LO_pTllrw')

else:
    files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50') + \
            nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1')

    samples['DY'] = {
        'name': files,
        'weight': mcCommonWeight + "*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 &&\
                                         Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )",
        'FilesPerJob': 8,
        'suppressNegative' :['all'],
        'suppressNegativeNuisances' :['all'],

    }

    # Add DY HT Samples
    if useDYHT :
        samples['DY']['name'] +=     nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-100to200_ext1') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-200to400_newpmx') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-400to600') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-600toInf') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-100to200') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-200to400') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-400to600_ext1') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-600to800') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-800to1200') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-1200to2500') \
                                   + nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-2500toInf')

    addSampleWeight(samples,'DY','DYJetsToLL_M-50','DY_NLO_pTllrw')
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1','DY_LO_pTllrw')

  
    if useDYHT :
        # Remove high HT from inclusive samples
        addSampleWeight(samples,'DY','DYJetsToLL_M-50'            , 'LHE_HT<100.0')
        addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1', 'LHE_HT<100.0')
        # pt_ll weight
        addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-100to200_ext1'   ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-200to400_newpmx' ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-400to600'        ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-600toInf'        ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200'           ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400'           ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600_ext1'      ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800'           ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200'          ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500'         ,'DY_LO_pTllrw')
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toInf'          ,'DY_LO_pTllrw')
        
