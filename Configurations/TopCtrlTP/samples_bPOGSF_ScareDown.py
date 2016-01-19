# samples

#samples = {}
    
samples['DY'] =  { 'name': [
	'eos/cms/store/caf/user/lenzip/ww2016/21Oct_25ns_MC/mcwghtcount__MC__l2sel__bPogSF__hadd/latino_DYJetsToLL_M-10to50.root',
	'eos/cms/store/caf/user/lenzip/ww2016/21Oct_25ns_MC/mcwghtcount__MC__l2sel__bPogSF__hadd/latino_DYJetsToLL_M-50.root',

         ], 
        'weight' : 'GEN_weight_SM/abs(GEN_weight_SM)*bPogSFDown*bTPSFDown*baseW*puW',
        'isData' : ['0']
        }

samples['Wjets'] = {  'name':[
	'eos/cms/store/caf/user/lenzip/ww2016/21Oct_25ns_MC/mcwghtcount__MC__l2sel__bPogSF__hadd/latino_WJetsToLNu.root',
	],
        'weight' : 'GEN_weight_SM/abs(GEN_weight_SM)*bPogSFDown*bTPSFDown*baseW*puW',
        'isData' : ['0']
        }


samples['VVV'] = { 'name': [
	'eos/cms/store/caf/user/lenzip/ww2016/21Oct_25ns_MC/mcwghtcount__MC__l2sel__bPogSF__hadd/latino_WWZ.root', 
	'eos/cms/store/caf/user/lenzip/ww2016/21Oct_25ns_MC/mcwghtcount__MC__l2sel__bPogSF__hadd/latino_WZZ.root',
	'eos/cms/store/caf/user/lenzip/ww2016/21Oct_25ns_MC/mcwghtcount__MC__l2sel__bPogSF__hadd/latino_ZZZ.root'],
        'weight' : 'GEN_weight_SM/abs(GEN_weight_SM)*bPogSFDown*bTPSFDown*baseW*puW',                
        'isData' : ['0']
        }


samples['VV']  = {    'name': [
	'eos/cms/store/caf/user/lenzip/ww2016/21Oct_25ns_MC/mcwghtcount__MC__l2sel__bPogSF__hadd/latino_ZZTo2L2Nu.root',
	'eos/cms/store/caf/user/lenzip/ww2016/21Oct_25ns_MC/mcwghtcount__MC__l2sel__bPogSF__hadd/latino_ZZTo4L.root',
	'eos/cms/store/caf/user/lenzip/ww2016/21Oct_25ns_MC/mcwghtcount__MC__l2sel__bPogSF__hadd/latino_WZTo3LNu.root',
	'eos/cms/store/caf/user/lenzip/ww2016/21Oct_25ns_MC/mcwghtcount__MC__l2sel__bPogSF__hadd/latino_Wg.root'
         ],
         'weight' : 'GEN_weight_SM/abs(GEN_weight_SM)*bPogSFDown*bTPSFDown*baseW*puW',
         'isData' : ['0']
         }

samples['FakeQCD'] = {   'name': [
	'eos/cms/store/caf/user/lenzip/ww2016/21Oct_25ns_MC/mcwghtcount__MC__l2sel__bPogSF__hadd/latino_QCD_Pt-15to20_EMEnriched.root',
	'eos/cms/store/caf/user/lenzip/ww2016/21Oct_25ns_MC/mcwghtcount__MC__l2sel__bPogSF__hadd/latino_QCD_Pt-15to20_MuEnrichedPt5.root',
	'eos/cms/store/caf/user/lenzip/ww2016/21Oct_25ns_MC/mcwghtcount__MC__l2sel__bPogSF__hadd/latino_QCD_Pt-20to30_EMEnriched.root',
	'eos/cms/store/caf/user/lenzip/ww2016/21Oct_25ns_MC/mcwghtcount__MC__l2sel__bPogSF__hadd/latino_QCD_Pt-30to50_EMEnriched.root',
	'eos/cms/store/caf/user/lenzip/ww2016/21Oct_25ns_MC/mcwghtcount__MC__l2sel__bPogSF__hadd/latino_QCD_Pt-30toInf_DoubleEMEnriched.root',
	'eos/cms/store/caf/user/lenzip/ww2016/21Oct_25ns_MC/mcwghtcount__MC__l2sel__bPogSF__hadd/latino_QCD_Pt-50to80_EMEnriched.root',
                        ],
                       'weight' : 'bPogSFDown*bTPSFDown*baseW*puW',
                   }


#samples['Wg']  = {    'name': ['eos/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2sel/eos/cms/store/caf/user/lenzip/ww2016/21Oct_25ns_MC/mcwghtcount__MC__l2sel__bPogSF__hadd/latino_Wg.root'],
#                      'weight' : 'GEN_weight_SM/abs(GEN_weight_SM)*bPogSFDown*bTPSFDown*baseW*puW',
#                  }


samples['WW']  = {    'name': ['eos/cms/store/caf/user/lenzip/ww2016/21Oct_25ns_MC/mcwghtcount__MC__l2sel__bPogSF__hadd/latino_WWTo2L2Nu.root'],      
                      'weight' : 'bPogSFDown*bTPSFDown*baseW*puW',
                   'isData' : ['0']

                  }

samples['ST'] = {   'name': [
	'eos/cms/store/caf/user/lenzip/ww2016/21Oct_25ns_MC/mcwghtcount__MC__l2sel__bPogSF__hadd/latino_ST_s-channel.root',
	'eos/cms/store/caf/user/lenzip/ww2016/21Oct_25ns_MC/mcwghtcount__MC__l2sel__bPogSF__hadd/latino_ST_t-channel_top.root',
	'eos/cms/store/caf/user/lenzip/ww2016/21Oct_25ns_MC/mcwghtcount__MC__l2sel__bPogSF__hadd/latino_ST_t-channel_antitop.root',
	'eos/cms/store/caf/user/lenzip/ww2016/21Oct_25ns_MC/mcwghtcount__MC__l2sel__bPogSF__hadd/latino_ST_tW_antitop.root',
	'eos/cms/store/caf/user/lenzip/ww2016/21Oct_25ns_MC/mcwghtcount__MC__l2sel__bPogSF__hadd/latino_ST_tW_top.root',
	], 
       'weight' : 'GEN_weight_SM/abs(GEN_weight_SM)*bPogSFDown*bTPSFDown*baseW*puW',                
       'isData' : ['0']
        }

samples['ttbar'] = {   'name': [
	'eos/cms/store/caf/user/lenzip/ww2016/21Oct_25ns_MC/mcwghtcount__MC__l2sel__bPogSF__hadd/latino_TTTo2L2Nu.root',
                      ],          
                       'weight' : 'bPogSFDown*bTPSFDown*baseW*puW',                
                   'isData' : ['0']

                   }


samples['ggH']  = {    'name': ['eos/cms/store/caf/user/lenzip/ww2016/21Oct_25ns_MC/mcwghtcount__MC__l2sel__bPogSF__hadd/latino_GluGluHToWWTo2L2Nu_M125.root'],      
                     'weight' : 'bPogSFDown*bTPSFDown*baseW*puW',          
                   'isData' : ['0']

                  }




###########################################
###########################################
###########################################

samples['DATA']  = {   'name': [
	'eosuser/user/x/xjanssen/HWW2015/21Oct_Run2015D_05Oct2015/l2sel__hadd/latino_Run2015D_05Oct2015_DoubleEG.root',
	'eosuser/user/x/xjanssen/HWW2015/21Oct_Run2015D_05Oct2015/l2sel__hadd/latino_Run2015D_05Oct2015_DoubleMuon.root',
	'eosuser/user/x/xjanssen/HWW2015/21Oct_Run2015D_05Oct2015/l2sel__hadd/latino_Run2015D_05Oct2015_MuonEG.root',
	'eosuser/user/x/xjanssen/HWW2015/21Oct_Run2015D_05Oct2015/l2sel__hadd/latino_Run2015D_05Oct2015_SingleElectron.root',
	'eosuser/user/x/xjanssen/HWW2015/21Oct_Run2015D_05Oct2015/l2sel__hadd/latino_Run2015D_05Oct2015_SingleMuon.root',

	'eosuser/user/x/xjanssen/HWW2015/21Oct_Run2015D_PromptReco/l2sel__hadd/latino_Run2015D_PromptReco_25ns_DoubleEG.root',
	'eosuser/user/x/xjanssen/HWW2015/21Oct_Run2015D_PromptReco/l2sel__hadd/latino_Run2015D_PromptReco_25ns_DoubleMuon.root',
	'eosuser/user/x/xjanssen/HWW2015/21Oct_Run2015D_PromptReco/l2sel__hadd/latino_Run2015D_PromptReco_25ns_MuonEG.root',
	'eosuser/user/x/xjanssen/HWW2015/21Oct_Run2015D_PromptReco/l2sel__hadd/latino_Run2015D_PromptReco_25ns_SingleElectron.root',
	'eosuser/user/x/xjanssen/HWW2015/21Oct_Run2015D_PromptReco/l2sel__hadd/latino_Run2015D_PromptReco_25ns_SingleMuon.root',
			],
                       'weight' : 'trigger',
                       'isData' : ['1']

                       }

