# samples

#samples = {}

# only for ee with charge flip
#samples['DY']  = {    'name': [
                            #'latino_DYJetsToLL_M-10to50.root',
                            #'latino_DYJetsToLL_M-50_0000__part0.root',
                            #'latino_DYJetsToLL_M-50_0000__part1.root',
                            #'latino_DYJetsToLL_M-50_0000__part2.root',
                            #'latino_DYJetsToLL_M-50_0000__part3.root',
                            #'latino_DYJetsToLL_M-50_0000__part4.root',
                            #'latino_DYJetsToLL_M-50_0001__part0.root',
                            #'latino_DYJetsToLL_M-50_0001__part1.root',
                            #'latino_DYJetsToLL_M-50_0001__part2.root',
                            #'latino_DYJetsToLL_M-50_0001__part3.root',
                            #'latino_DYJetsToLL_M-50_0001__part4.root',
                            #'latino_DYJetsToLL_M-50_0002__part0.root',
                            #],    
                      #'weight' : 'puW*baseW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*bPogSF_CMVAT*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) == -11*11)*chFlipProba',  
                    #}

#samples['lep_TT']  = {    'name': [
                            #'../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTTo2L2Nu_ext1__part0.root',
                            #'../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTTo2L2Nu_ext1__part1.root',
                            #'../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTTo2L2Nu_ext1__part2.root',
                            #'../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTTo2L2Nu_ext1__part3.root',
                            #'../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTTo2L2Nu_ext1__part4.root',
                            #'../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTTo2L2Nu_ext1__part5.root',
                            #'../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTTo2L2Nu_ext1__part6.root',
                            #'../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTTo2L2Nu_ext1__part7.root',
                            #'../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTTo2L2Nu_ext1__part8.root',
                            #'../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTTo2L2Nu_ext1__part9.root',
                            #],    
                      #'weight' : 'puW*baseW*bPogSF_CMVAT*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) == -11*11)*chFlipProba',  
                    #}

# data driven
#samples['Fake']  = {    'name': [
                      ##
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016B_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_MuonEG_Run2016B-23Sep2016-v3.root', 
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016B_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_DoubleMuon_Run2016B-23Sep2016-v3.root', 
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016B_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_SingleMuon_Run2016B-23Sep2016-v3.root', 
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016B_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_DoubleEG_Run2016B-23Sep2016-v3.root', 
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016B_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_SingleElectron_Run2016B-23Sep2016-v3.root', 
                                ##../../../../../../../../../../           
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016C_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_MuonEG_Run2016C-23Sep2016-v1.root', 
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016C_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_DoubleMuon_Run2016C-23Sep2016-v1.root', 
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016C_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_SingleMuon_Run2016C-23Sep2016-v1.root', 
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016C_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_DoubleEG_Run2016C-23Sep2016-v1.root', 
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016C_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_SingleElectron_Run2016C-23Sep2016-v1.root', 
                                ##../../../../../../../../../../         
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016D_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_MuonEG_Run2016D-23Sep2016-v1.root', 
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016D_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_DoubleMuon_Run2016D-23Sep2016-v1.root', 
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016D_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_SingleMuon_Run2016D-23Sep2016-v1.root', 
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016D_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_DoubleEG_Run2016D-23Sep2016-v1.root', 
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016D_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_SingleElectron_Run2016D-23Sep2016-v1.root', 
                                ##../../../../../../../../../../         
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016E_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_MuonEG_Run2016E-23Sep2016-v1.root', 
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016E_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_DoubleMuon_Run2016E-23Sep2016-v1.root', 
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016E_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_SingleMuon_Run2016E-23Sep2016-v1.root', 
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016E_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_DoubleEG_Run2016E-23Sep2016-v1.root', 
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016E_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_SingleElectron_Run2016E-23Sep2016-v1.root', 
                                ##../../../../../../../../../../
                                ##../../../../../../../../../../            
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016F_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_MuonEG_Run2016F-23Sep2016-v1.root', 
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016F_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_DoubleMuon_Run2016F-23Sep2016-v1.root', 
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016F_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_SingleMuon_Run2016F-23Sep2016-v1.root', 
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016F_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_DoubleEG_Run2016F-23Sep2016-v1.root', 
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016F_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_SingleElectron_Run2016F-23Sep2016-v1.root', 
                                ##../../../../../../../../../../            
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016G_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_MuonEG_Run2016G-23Sep2016-v1.root', 
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016G_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_DoubleMuon_Run2016G-23Sep2016-v1.root', 
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016G_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_SingleMuon_Run2016G-23Sep2016-v1.root', 
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016G_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_DoubleEG_Run2016G-23Sep2016-v1.root', 
                                #'###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016G_ReReco_27p6fbm1/l2vloose__hadd__vbsSel__fakeW12fb//latino_SingleElectron_Run2016G-23Sep2016-v1.root', 
                                ##../../../../../../../../../../            
                                ##
                       ##               
                       #],     
                      ##'weight' : 'trigger*(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
                      ##'weight' : '2.6/0.8*trigger*(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
                      ##'weight' : '4.0/0.8*trigger*(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
                      #'weight' : 'fakeW2l2j*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)',              #   weight/cut 
                      #'isData': ['all'],
                       #'weights' : [
                                   ##
                                   ##
                                   #'std_vector_trigger[8] == 1 || std_vector_trigger[6] == 1|| std_vector_trigger[41] == 1|| std_vector_trigger[57] == 1|| std_vector_trigger[58] == 1',
                                   #'!(std_vector_trigger[8] == 1 || std_vector_trigger[6] == 1|| std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1) &&  (std_vector_trigger[13] == 1 || std_vector_trigger[11] == 1)',
                                   #'!(std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1) && !(std_vector_trigger[13] == 1 || std_vector_trigger[11] == 1) &&  (std_vector_trigger[42] == 1 || std_vector_trigger[43] == 1 || std_vector_trigger[44] == 1 || std_vector_trigger[45] == 1)',
                                   #'!(std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1) && !(std_vector_trigger[13] == 1 || std_vector_trigger[11] == 1) && !(std_vector_trigger[42] == 1 || std_vector_trigger[43] == 1 || std_vector_trigger[44] == 1 || std_vector_trigger[45] == 1) &&  (std_vector_trigger[46] == 1)',
                                   #'!(std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1) && !(std_vector_trigger[13] == 1 || std_vector_trigger[11] == 1) && !(std_vector_trigger[42] == 1 || std_vector_trigger[43] == 1 || std_vector_trigger[44] == 1 || std_vector_trigger[45] == 1) && !(std_vector_trigger[46] == 1)  && (std_vector_trigger[93] == 1)',
                                   ##
                                   #'std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1',
                                   #'!(std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1) &&  (std_vector_trigger[13] == 1 || std_vector_trigger[11] == 1)',
                                   #'!(std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1) && !(std_vector_trigger[13] == 1 || std_vector_trigger[11] == 1) &&  (std_vector_trigger[42] == 1 || std_vector_trigger[43] == 1 || std_vector_trigger[44] == 1 || std_vector_trigger[45] == 1)',
                                   #'!(std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1) && !(std_vector_trigger[13] == 1 || std_vector_trigger[11] == 1) && !(std_vector_trigger[42] == 1 || std_vector_trigger[43] == 1 || std_vector_trigger[44] == 1 || std_vector_trigger[45] == 1) &&  (std_vector_trigger[46] == 1)',
                                   #'!(std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1) && !(std_vector_trigger[13] == 1 || std_vector_trigger[11] == 1) && !(std_vector_trigger[42] == 1 || std_vector_trigger[43] == 1 || std_vector_trigger[44] == 1 || std_vector_trigger[45] == 1) && !(std_vector_trigger[46] == 1)  && (std_vector_trigger[93] == 1)',
                                   ##
                                   #'std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1',
                                   #'!(std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1) &&  (std_vector_trigger[13] == 1 || std_vector_trigger[11] == 1)',
                                   #'!(std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1) && !(std_vector_trigger[13] == 1 || std_vector_trigger[11] == 1) &&  (std_vector_trigger[42] == 1 || std_vector_trigger[43] == 1 || std_vector_trigger[44] == 1 || std_vector_trigger[45] == 1)',
                                   #'!(std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1) && !(std_vector_trigger[13] == 1 || std_vector_trigger[11] == 1) && !(std_vector_trigger[42] == 1 || std_vector_trigger[43] == 1 || std_vector_trigger[44] == 1 || std_vector_trigger[45] == 1) &&  (std_vector_trigger[46] == 1)',
                                   #'!(std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1) && !(std_vector_trigger[13] == 1 || std_vector_trigger[11] == 1) && !(std_vector_trigger[42] == 1 || std_vector_trigger[43] == 1 || std_vector_trigger[44] == 1 || std_vector_trigger[45] == 1) && !(std_vector_trigger[46] == 1)  && (std_vector_trigger[93] == 1)',
                                   ##
                                   #'std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1',
                                   #'!(std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1) &&  (std_vector_trigger[13] == 1 || std_vector_trigger[11] == 1)',
                                   #'!(std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1) && !(std_vector_trigger[13] == 1 || std_vector_trigger[11] == 1) &&  (std_vector_trigger[42] == 1 || std_vector_trigger[43] == 1 || std_vector_trigger[44] == 1 || std_vector_trigger[45] == 1)',
                                   #'!(std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1) && !(std_vector_trigger[13] == 1 || std_vector_trigger[11] == 1) && !(std_vector_trigger[42] == 1 || std_vector_trigger[43] == 1 || std_vector_trigger[44] == 1 || std_vector_trigger[45] == 1) &&  (std_vector_trigger[46] == 1)',
                                   #'!(std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1) && !(std_vector_trigger[13] == 1 || std_vector_trigger[11] == 1) && !(std_vector_trigger[42] == 1 || std_vector_trigger[43] == 1 || std_vector_trigger[44] == 1 || std_vector_trigger[45] == 1) && !(std_vector_trigger[46] == 1)  && (std_vector_trigger[93] == 1)',
                                   ##
                                   #'std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1',
                                   #'!(std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1) &&  (std_vector_trigger[13] == 1 || std_vector_trigger[11] == 1)',
                                   #'!(std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1) && !(std_vector_trigger[13] == 1 || std_vector_trigger[11] == 1) &&  (std_vector_trigger[42] == 1 || std_vector_trigger[43] == 1 || std_vector_trigger[44] == 1 || std_vector_trigger[45] == 1)',
                                   #'!(std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1) && !(std_vector_trigger[13] == 1 || std_vector_trigger[11] == 1) && !(std_vector_trigger[42] == 1 || std_vector_trigger[43] == 1 || std_vector_trigger[44] == 1 || std_vector_trigger[45] == 1) &&  (std_vector_trigger[46] == 1)',
                                   #'!(std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1) && !(std_vector_trigger[13] == 1 || std_vector_trigger[11] == 1) && !(std_vector_trigger[42] == 1 || std_vector_trigger[43] == 1 || std_vector_trigger[44] == 1 || std_vector_trigger[45] == 1) && !(std_vector_trigger[46] == 1)  && (std_vector_trigger[93] == 1)',
                                   ##
                                   #'std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1',
                                   #'!(std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1) &&  (std_vector_trigger[13] == 1 || std_vector_trigger[11] == 1)',
                                   #'!(std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1) && !(std_vector_trigger[13] == 1 || std_vector_trigger[11] == 1) &&  (std_vector_trigger[42] == 1 || std_vector_trigger[43] == 1 || std_vector_trigger[44] == 1 || std_vector_trigger[45] == 1)',
                                   #'!(std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1) && !(std_vector_trigger[13] == 1 || std_vector_trigger[11] == 1) && !(std_vector_trigger[42] == 1 || std_vector_trigger[43] == 1 || std_vector_trigger[44] == 1 || std_vector_trigger[45] == 1) &&  (std_vector_trigger[46] == 1)',
                                   #'!(std_vector_trigger[8] == 1  || std_vector_trigger[6] == 1 || std_vector_trigger[41] == 1 || std_vector_trigger[57] == 1 || std_vector_trigger[58] == 1) && !(std_vector_trigger[13] == 1 || std_vector_trigger[11] == 1) && !(std_vector_trigger[42] == 1 || std_vector_trigger[43] == 1 || std_vector_trigger[44] == 1 || std_vector_trigger[45] == 1) && !(std_vector_trigger[46] == 1)  && (std_vector_trigger[93] == 1)',
                                   ##
                                   #],
                      
                  #}

samples['semilepTT']  = {    'name': ['../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0000__part0.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0000__part1.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0000__part10.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0000__part11.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0000__part12.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0000__part13.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0000__part14.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0000__part15.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0000__part16.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0000__part17.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0000__part18.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0000__part19.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0000__part2.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0000__part3.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0000__part4.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0000__part5.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0000__part6.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0000__part7.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0000__part8.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0000__part9.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0001__part0.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0001__part1.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0001__part10.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0001__part11.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0001__part12.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0001__part13.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0001__part14.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0001__part15.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0001__part16.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0001__part17.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0001__part18.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0001__part19.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0001__part2.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0001__part3.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0001__part4.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0001__part5.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0001__part6.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0001__part7.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0001__part8.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0001__part9.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0002__part0.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0002__part1.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0002__part10.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0002__part11.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0002__part12.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0002__part13.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0002__part14.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0002__part15.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0002__part16.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0002__part17.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0002__part18.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0002__part19.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0002__part2.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0002__part3.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0002__part4.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0002__part5.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0002__part6.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0002__part7.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0002__part8.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0002__part9.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0003__part0.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0003__part1.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0003__part10.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0003__part11.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0003__part12.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0003__part13.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0003__part14.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0003__part15.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0003__part16.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0003__part17.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0003__part18.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0003__part2.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0003__part3.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0003__part4.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0003__part5.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0003__part6.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0003__part7.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0003__part8.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0003__part9.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0004__part0.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0004__part1.root',
                                    '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTToSemiLeptonic_0004__part2.root'
                                    ],      
                      'weight' : 'puW*baseW*bPogSF_CMVAT*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)*fakeW2l2j \
                          *((abs(std_vector_lepton_flavour[0]) ==  13 && abs(std_vector_lepton_flavour[1]) ==  13)*2.709 \
                          +((abs(std_vector_lepton_flavour[0]) ==  13 && abs(std_vector_lepton_flavour[1]) ==  11)||(abs(std_vector_lepton_flavour[1]) ==  13 && abs(std_vector_lepton_flavour[0]) ==  11))*1.73 \
                          +(abs(std_vector_lepton_flavour[0]) ==  11 && abs(std_vector_lepton_flavour[1]) ==  11)*1.155)',                          
                  }


samples['lepTT']  = {    'name': [
                            '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTTo2L2Nu_ext1__part0.root',
                            '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTTo2L2Nu_ext1__part1.root',
                            '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTTo2L2Nu_ext1__part2.root',
                            '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTTo2L2Nu_ext1__part3.root',
                            '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTTo2L2Nu_ext1__part4.root',
                            '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTTo2L2Nu_ext1__part5.root',
                            '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTTo2L2Nu_ext1__part6.root',
                            '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTTo2L2Nu_ext1__part7.root',
                            '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTTo2L2Nu_ext1__part8.root',
                            '../MCl2vloose__hadd__bLepTrigEff__fakeW12fbMC__vbsSel/latino_TTTo2L2Nu_ext1__part9.root'
                         ], 
                      'weight' : 'puW*baseW*bPogSF_CMVAT*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)*fakeW2l2j \
                          *((abs(std_vector_lepton_flavour[0]) ==  13 && abs(std_vector_lepton_flavour[1]) ==  13)*2.709 \
                          +((abs(std_vector_lepton_flavour[0]) ==  13 && abs(std_vector_lepton_flavour[1]) ==  11)||(abs(std_vector_lepton_flavour[1]) ==  13 && abs(std_vector_lepton_flavour[0]) ==  11))*1.73 \
                          +(abs(std_vector_lepton_flavour[0]) ==  11 && abs(std_vector_lepton_flavour[1]) ==  11)*1.155)',                                  
                  }


samples['Wg']  = {    'name': ['latino_WGJJ.root'],      
                      'weight' : 'puW*baseW*bPogSF_CMVAT*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)',                          
                  }


samples['WZ']  = {    'name': [
                          'latino_WLLJJToLNu_M-4to60_EWK_QCD.root', 
                          'latino_WLLJJToLNu_M-60_EWK_QCD.root', 
                         ], 
                      'weight' : 'puW*baseW*bPogSF_CMVAT*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)',                                  
                  }

samples['WpWpJJ']  = {  'name': [
                            'latino_WpWpJJ_EWK.root', 
                            ], 
                        'weight' : 'puW*baseW*bPogSF_CMVAT*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)',                                  
                  }

samples['WpWpJJ_QCD']  = {  'name': [
                            'latino_WpWpJJ_QCD.root', 
                            ], 
                        'weight' : 'puW*baseW*bPogSF_CMVAT*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)',                                  
                  }

#samples['VVV'] = {    'name': [
                          #'latino_WZZ.root', 
                          #'latino_ZZZ.root',
                          #'latino_WWW.root',
                          #'latino_WWZ.root',
                          #],      
                      #'weight' : 'puW*baseW*effTrigW*bPogSF_CMVAT*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      ##'isData': ['0'],                            
                  #}


###########################################
###########################################
###########################################


samples['DATA']  = {   'name': [
                                #
                                ##
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016B_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_MuonEG_Run2016B-23Sep2016-v3.root', 
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016B_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_DoubleMuon_Run2016B-23Sep2016-v3.root', 
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016B_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_SingleMuon_Run2016B-23Sep2016-v3.root', 
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016B_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_DoubleEG_Run2016B-23Sep2016-v3.root', 
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016B_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_SingleElectron_Run2016B-23Sep2016-v3.root', 
                                #../../../../../../../../../../           
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016C_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_MuonEG_Run2016C-23Sep2016-v1.root', 
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016C_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_DoubleMuon_Run2016C-23Sep2016-v1.root', 
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016C_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_SingleMuon_Run2016C-23Sep2016-v1.root', 
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016C_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_DoubleEG_Run2016C-23Sep2016-v1.root', 
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016C_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_SingleElectron_Run2016C-23Sep2016-v1.root', 
                                #../../../../../../../../../../         
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016D_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_MuonEG_Run2016D-23Sep2016-v1.root', 
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016D_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_DoubleMuon_Run2016D-23Sep2016-v1.root', 
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016D_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_SingleMuon_Run2016D-23Sep2016-v1.root', 
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016D_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_DoubleEG_Run2016D-23Sep2016-v1.root', 
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016D_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_SingleElectron_Run2016D-23Sep2016-v1.root', 
                                #../../../../../../../../../../         
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016E_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_MuonEG_Run2016E-23Sep2016-v1.root', 
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016E_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_DoubleMuon_Run2016E-23Sep2016-v1.root', 
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016E_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_SingleMuon_Run2016E-23Sep2016-v1.root', 
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016E_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_DoubleEG_Run2016E-23Sep2016-v1.root', 
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016E_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_SingleElectron_Run2016E-23Sep2016-v1.root', 
                                #../../../../../../../../../../
                                #../../../../../../../../../../            
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016F_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_MuonEG_Run2016F-23Sep2016-v1.root', 
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016F_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_DoubleMuon_Run2016F-23Sep2016-v1.root', 
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016F_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_SingleMuon_Run2016F-23Sep2016-v1.root', 
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016F_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_DoubleEG_Run2016F-23Sep2016-v1.root', 
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016F_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_SingleElectron_Run2016F-23Sep2016-v1.root', 
                                #../../../../../../../../../../            
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016G_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_MuonEG_Run2016G-23Sep2016-v1.root', 
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016G_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_DoubleMuon_Run2016G-23Sep2016-v1.root', 
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016G_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_SingleMuon_Run2016G-23Sep2016-v1.root', 
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016G_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_DoubleEG_Run2016G-23Sep2016-v1.root', 
                                '###/pnfs/iihe/cms/store/user/jlauwers/HWW2015/Dec2016_Run2016G_ReReco_27p6fbm1/l2vloose__hadd__l2tight__vbsSel__tripleCharge//latino_SingleElectron_Run2016G-23Sep2016-v1.root', 
                                #
                                #
                                ] ,     
                       #'weight' : 'trigger',
                       'weight' : '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)',
                       #'weight' : 'std_vector_trigger[1]',
                       'weights' : [
                                   #
                                    'std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43] || std_vector_trigger[44] || std_vector_trigger[45])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43] || std_vector_trigger[44] || std_vector_trigger[45]) &&  (std_vector_trigger[46])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43] || std_vector_trigger[44] || std_vector_trigger[45]) && !(std_vector_trigger[46])  && (std_vector_trigger[93])',
                                   #
                                   'std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43] || std_vector_trigger[44] || std_vector_trigger[45])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43] || std_vector_trigger[44] || std_vector_trigger[45]) &&  (std_vector_trigger[46])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43] || std_vector_trigger[44] || std_vector_trigger[45]) && !(std_vector_trigger[46])  && (std_vector_trigger[93])',
                                   #
                                   'std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43] || std_vector_trigger[44] || std_vector_trigger[45])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43] || std_vector_trigger[44] || std_vector_trigger[45]) &&  (std_vector_trigger[46])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43] || std_vector_trigger[44] || std_vector_trigger[45]) && !(std_vector_trigger[46])  && (std_vector_trigger[93])',
                                   #
                                   'std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43] || std_vector_trigger[44] || std_vector_trigger[45])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43] || std_vector_trigger[44] || std_vector_trigger[45]) &&  (std_vector_trigger[46])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43] || std_vector_trigger[44] || std_vector_trigger[45]) && !(std_vector_trigger[46])  && (std_vector_trigger[93])',
                                   #
                                   'std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43] || std_vector_trigger[44] || std_vector_trigger[45])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43] || std_vector_trigger[44] || std_vector_trigger[45]) &&  (std_vector_trigger[46])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43] || std_vector_trigger[44] || std_vector_trigger[45]) && !(std_vector_trigger[46])  && (std_vector_trigger[93])',
                                   #
                                   'std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43] || std_vector_trigger[44] || std_vector_trigger[45])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43] || std_vector_trigger[44] || std_vector_trigger[45]) &&  (std_vector_trigger[46])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6] || std_vector_trigger[41] || std_vector_trigger[57] || std_vector_trigger[58]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43] || std_vector_trigger[44] || std_vector_trigger[45]) && !(std_vector_trigger[46])  && (std_vector_trigger[93])',
                                   #                         
                         ],

                       'isData': ['all'],                            
                  }






