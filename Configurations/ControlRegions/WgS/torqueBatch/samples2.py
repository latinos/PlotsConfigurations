# samples

#samples = {}

# data driven
samples['Fake']  = {    'name': [
                      #
                       '../../../../../../../eos/user/a/amassiro/HWW2015/23JunFake/latino_DD_Run2016B_PromptReco_DoubleEG.root',
                       '../../../../../../../eos/user/a/amassiro/HWW2015/23JunFake/latino_DD_Run2016B_PromptReco_MuonEG.root',
                       '../../../../../../../eos/user/a/amassiro/HWW2015/23JunFake/latino_DD_Run2016B_PromptReco_SingleMuon.root',
                       '../../../../../../../eos/user/a/amassiro/HWW2015/23JunFake/latino_DD_Run2016B_PromptReco_DoubleMuon.root',
                       '../../../../../../../eos/user/a/amassiro/HWW2015/23JunFake/latino_DD_Run2016B_PromptReco_SingleElectron.root',
                      #
                       ],     
                      #'weight' : 'trigger*(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
                      'weight' : 'trigger*(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
                      'isData': ['all'],                             
                  }

