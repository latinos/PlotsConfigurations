dataReco = 'Run2017_102X_nAODv7_Full2017v7'

mcProduction = 'Fall2017_102X_nAODv7_Full2017v7'

embedReco = 'Embedding2017_102X_nAODv7_Full2017v7'

mcSteps = 'MCl1loose2017v7__MCCorr2017v7__l2loose__l2tightOR2017v7{var}'

fakeSteps = 'DATAl1loose2017v7__l2loose__fakeW'

dataSteps = 'DATAl1loose2017v7__l2loose__l2tightOR2017v7'

embedSteps = 'DATAl1loose2017v7__l2loose__l2tightOR2017v7__Embedding'

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
samples['Vg']={}
#samples['VgS'] = {}
samples['VgS_H'] = {}
samples['VgS_L'] = {}
samples['VZ'] = {}
samples['VVV'] = {}
#samples['Fake_em'] = {}
samples['Fake'] = {}
#samples['ZH_hww'] = {}
samples['qqH_htt'] = {}
samples['ZH_htt'] = {}
samples['WH_htt'] = {}
samples['ggH_htt'] = {}

samples['ggH_T1'] = {} 
samples['ggH_T2'] = {} 
samples['ggH_T3'] = {}
samples['ggH_T4'] = {} 
samples['ggH_T5'] = {} 
samples['ggH_T6'] = {}
samples['ggH_T7'] = {} 
samples['ggH_T8'] = {} 
samples['ggH_T9'] = {}
samples['ggH_T10'] = {}

samples['VBF_T1'] = {} 
samples['VBF_T2'] = {} 
samples['VBF_T3'] = {}
samples['VBF_T4'] = {} 
samples['VBF_T5'] = {} 
samples['VBF_T6'] = {}
samples['VBF_T7'] = {} 
samples['VBF_T8'] = {} 
samples['VBF_T9'] = {}
samples['VBF_T10'] = {}
samples['VBF_T11'] = {} 
samples['VBF_T12'] = {} 
samples['VBF_T13'] = {}
samples['VBF_T14'] = {} 
samples['VBF_T15'] = {} 
samples['VBF_T16'] = {}
samples['VBF_T17'] = {}
samples['VBF_T18'] = {} 
samples['VBF_T19'] = {}
samples['VBF_T20'] = {}
samples['VBF_T21'] = {} 
samples['VBF_T22'] = {} 
samples['VBF_T23'] = {}
samples['VBF_T24'] = {} 
samples['VBF_T25'] = {} 
samples['VBF_T26'] = {}
samples['VBF_T27'] = {} 
samples['VBF_T28'] = {} 
samples['VBF_T29'] = {}
samples['VBF_T30'] = {}
samples['VBF_T31'] = {} 
samples['VBF_T32'] = {} 
samples['VBF_T33'] = {}
samples['VBF_T34'] = {} 
samples['VBF_T35'] = {} 

samples['WH_T1'] = {} 
samples['WH_T2'] = {} 
samples['WH_T3'] = {}
samples['WH_T4'] = {} 
samples['WH_T5'] = {} 
samples['WH_T6'] = {}
samples['WH_T7'] = {} 
samples['WH_T8'] = {} 
samples['WH_T9'] = {}
samples['WH_T10'] = {}
samples['WH_T11'] = {} 
samples['WH_T12'] = {} 
samples['WH_T13'] = {}
samples['WH_T14'] = {} 
samples['WH_T15'] = {} 
samples['WH_T16'] = {}
samples['WH_T17'] = {} 
samples['WH_T18'] = {} 
samples['WH_T19'] = {}
samples['WH_T20'] = {}
samples['WH_T21'] = {} 
samples['WH_T22'] = {} 
samples['WH_T23'] = {}
samples['WH_T24'] = {} 
samples['WH_T25'] = {} 
samples['WH_T26'] = {}
samples['WH_T27'] = {} 
samples['WH_T28'] = {} 
samples['WH_T29'] = {}
samples['WH_T30'] = {}
samples['WH_T31'] = {} 
samples['WH_T32'] = {} 
samples['WH_T33'] = {}
samples['WH_T34'] = {} 
samples['WH_T35'] = {} 

samples['ZH_T1'] = {} 
samples['ZH_T2'] = {} 
samples['ZH_T3'] = {}
samples['ZH_T4'] = {} 
samples['ZH_T5'] = {} 
samples['ZH_T6'] = {}
samples['ZH_T7'] = {} 
samples['ZH_T8'] = {} 
samples['ZH_T9'] = {}
samples['ZH_T10'] = {}
samples['ZH_T11'] = {} 
samples['ZH_T12'] = {} 
samples['ZH_T13'] = {}
samples['ZH_T14'] = {} 
samples['ZH_T15'] = {} 
samples['ZH_T16'] = {}
samples['ZH_T17'] = {} 
samples['ZH_T18'] = {} 
samples['ZH_T19'] = {}
samples['ZH_T20'] = {}
samples['ZH_T21'] = {} 
samples['ZH_T22'] = {} 
samples['ZH_T23'] = {}
samples['ZH_T24'] = {} 
samples['ZH_T25'] = {} 
samples['ZH_T26'] = {}
samples['ZH_T27'] = {} 
samples['ZH_T28'] = {} 
samples['ZH_T29'] = {}
samples['ZH_T30'] = {}
samples['ZH_T31'] = {} 
samples['ZH_T32'] = {} 
samples['ZH_T33'] = {}
samples['ZH_T34'] = {} 
samples['ZH_T35'] = {} 
