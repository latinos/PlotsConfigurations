# samples

#samples = {}
    
samples['DY'] =  { 'name': [
	'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_DYJetsToLL_M-10to50.root',
	'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_DYJetsToLL_M-50.root',

         ], 
        'weight' : 'GEN_weight_SM/abs(GEN_weight_SM)*bPogSFUp*bTPSFUp*baseW*puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]',
        }

samples['Wjets'] = {  'name':[
	'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_WJetsToLNu.root',
	],
        'weight' : 'GEN_weight_SM/abs(GEN_weight_SM)*bPogSFUp*bTPSFUp*baseW*puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]',
        }


samples['VVV'] = { 'name': [
#	'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_WWZ.root', 
	'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_WZZ.root',
	'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_ZZZ.root'],
        'weight' : 'GEN_weight_SM/abs(GEN_weight_SM)*bPogSFUp*bTPSFUp*baseW*puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]',                
        }


samples['VV']  = {    'name': [
#	'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_ZZTo2L2Nu.root',
#	'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_ZZTo4L.root',
	'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_WZTo3LNu.root',
	'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_Wg.root'
         ],
         'weight' : 'GEN_weight_SM/abs(GEN_weight_SM)*bPogSFUp*bTPSFUp*baseW*puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]',
         }

samples['FakeQCD'] = {   'name': [
#	'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_QCD_Pt-15to20_EMEnriched.root',
#	'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_QCD_Pt-15to20_MuEnrichedPt5.root',
#	'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_QCD_Pt-20to30_EMEnriched.root',
#	'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_QCD_Pt-30to50_EMEnriched.root',
#	'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_QCD_Pt-30toInf_DoubleEMEnriched.root',
#	'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_QCD_Pt-50to80_EMEnriched.root',
                        ],
                       'weight' : 'bPogSFUp*bTPSFUp*baseW*puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]',
                   }


#samples['Wg']  = {    'name': ['eos/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2sel/eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_Wg.root'],
#                      'weight' : 'GEN_weight_SM/abs(GEN_weight_SM)*bPogSFUp*bTPSFUp*baseW*puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]',
#                  }


samples['WW']  = {    'name': ['eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_WWTo2L2Nu.root'],      
                      'weight' : 'bPogSFUp*bTPSFUp*baseW*puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]',

                  }

samples['ST'] = {   'name': [
#	'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_ST_s-channel.root',
#	'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_ST_t-channel_top.root',
#	'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_ST_t-channel_antitop.root',
        'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_ST_t-channel.root',
	'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_ST_tW_antitop.root',
	'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_ST_tW_top.root',
	], 
       'weight' : 'GEN_weight_SM/abs(GEN_weight_SM)*bPogSFUp*bTPSFUp*baseW*puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]',                
        }

samples['ttbar'] = {   'name': [
	'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_TTTo2L2Nu.root',
                      ],          
                       'weight' : 'bPogSFUp*bTPSFUp*baseW*puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]',                

                   }


samples['ggH']  = {    'name': ['eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_GluGluHToWWTo2L2Nu_M125.root'],      
                     'weight' : 'bPogSFUp*bTPSFUp*baseW*puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]',          

                  }




###########################################
###########################################
###########################################
samples['DATA']  = {   'name': [
"eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_05Oct2015/l2sel__hadd/latino_Run2015D_05Oct2015_DoubleEG.root",
"eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_05Oct2015/l2sel__hadd/latino_Run2015D_05Oct2015_DoubleMuon.root",
"eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_05Oct2015/l2sel__hadd/latino_Run2015D_05Oct2015_MuonEG.root",
"eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_05Oct2015/l2sel__hadd/latino_Run2015D_05Oct2015_SingleElectron.root",
"eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_05Oct2015/l2sel__hadd/latino_Run2015D_05Oct2015_SingleMuon.root",
"eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0716pb/l2sel__hadd/latino_Run2915D_PromptReco_DoubleEG_0716pb.root",
"eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0716pb/l2sel__hadd/latino_Run2915D_PromptReco_DoubleMuon_0716pb.root",
"eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0716pb/l2sel__hadd/latino_Run2915D_PromptReco_MuonEG_0716pb.root",
"eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0716pb/l2sel__hadd/latino_Run2915D_PromptReco_SingleElectron_0716pb.root",
"eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0716pb/l2sel__hadd/latino_Run2915D_PromptReco_SingleMuon_0716pb.root",
"eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0851pb/l2sel__hadd/latino_Run2915D_PromptReco_DoubleEG_0851pb.root",
"eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0851pb/l2sel__hadd/latino_Run2915D_PromptReco_DoubleMuon_0851pb.root",
"eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0851pb/l2sel__hadd/latino_Run2915D_PromptReco_MuonEG_0851pb.root",
"eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0851pb/l2sel__hadd/latino_Run2915D_PromptReco_SingleElectron_0851pb.root",
"eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0851pb/l2sel__hadd/latino_Run2915D_PromptReco_SingleMuon_0851pb.root",
                        ],
                       'weight' : 'trigger',
                       'isData' : ['all']

                       }

