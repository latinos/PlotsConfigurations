mcProduction = 'Autumn18_102X_nAODv7_Full2018v7'

dataReco = 'Run2018_102X_nAODv7_Full2018v7'


embedReco = 'Embedding2018_102X_nAODv7_Full2018v7'

mcSteps = 'MCl1loose2018v7__MCCorr2018v7__l2loose__l2tightOR2018v7{var}'

fakeSteps = 'DATAl1loose2018v7__l2loose__fakeW'

dataSteps = 'DATAl1loose2018v7__l2loose__l2tightOR2018v7'

embedSteps = 'DATAl1loose2018v7__l2loose__l2tightOR2018v7__Embedding'


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
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)
embedDirectory = os.path.join(treeBaseDir, embedReco, embedSteps)

useEmbeddedDY = True
runDYveto = False
useWgFXFX = True

###

samples['DATA']  = {}
samples['DY']    = {}
samples['Dyemb'] = {}
samples['top'] = {}
samples['WW']    = {}
samples['WWewk']  = {}
samples['ggWW'] = {}
samples['Vg'] = {}
samples['VgS_L'] = {}
samples['VgS_H'] = {}
#samples['VgS'] = {}
samples['VZ'] = {}
samples['VVV'] = {}
#samples['Fake_em'] = {}
#samples['Fake_me'] = {}
samples['Fake'] = {}

#samples['qqH_htt'] = {}
samples['ZH_htt'] = {}
samples['WH_htt'] = {}
samples['ggH_htt'] = {}

samples['ggH_T1'] = {} 
samples['ggH_T2'] = {} 
samples['ggH_T3'] = {}

samples['VBF_T1'] = {} 
samples['VBF_T2'] = {} 
samples['VBF_T3'] = {} 
samples['VBF_T4'] = {} 
samples['VBF_T5'] = {} 

samples['WH_T1'] = {} 
samples['WH_T2'] = {} 
samples['WH_T3'] = {} 
samples['WH_T4'] = {} 
samples['WH_T5'] = {} 

samples['ZH_T1'] = {} 
samples['ZH_T2'] = {} 
samples['ZH_T3'] = {} 
samples['ZH_T4'] = {} 
samples['ZH_T5'] = {}
