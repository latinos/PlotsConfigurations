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

###

samples['DATA']  = {}
samples['DY']    = {}
samples['Dyemb'] = {}
samples['top'] = {}
samples['WW']    = {}
samples['WWewk']  = {}
samples['ggWW'] = {}
#samples['Vg'] = {}
samples['VgS_L'] = {}
samples['VgS_H'] = {}
samples['VZ'] = {}
samples['VVV'] = {}
samples['Fake_em'] = {}
samples['Fake_me'] = {}

samples['qqH_htt'] = {}
samples['ZH_htt'] = {}
samples['WH_htt'] = {}
samples['ggH_htt'] = {}

samples['ggH_T1'] = {} 
samples['WH_T1'] = {} 

samples['VBF_T1'] = {} 
samples['VBF_T2'] = {} 
samples['VBF_T3'] = {} 
samples['VBF_T4'] = {} 
samples['VBF_T5'] = {} 

samples['ZH_T1'] = {} 
samples['ZH_T2'] = {} 
samples['ZH_T3'] = {} 
samples['ZH_T4'] = {} 
samples['ZH_T5'] = {}
