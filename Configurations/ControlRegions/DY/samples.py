# samples

#samples = {}


samples['DY']  = {    'name': [
                            #'latino_DYJetsToLL_M-10to50.root',
                            #'latino_DYJetsToLL_M-10to50ext3.root',
                            #
                            #'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            'latino_DYJetsToLL_M-10to50.root',
                            'latino_DYJetsToLL_M-50_0000__part0.root',
                            'latino_DYJetsToLL_M-50_0000__part1.root',
                            'latino_DYJetsToLL_M-50_0000__part2.root',
                            'latino_DYJetsToLL_M-50_0000__part3.root',
                            'latino_DYJetsToLL_M-50_0000__part4.root',
                            'latino_DYJetsToLL_M-50_0001__part0.root',
                            'latino_DYJetsToLL_M-50_0001__part1.root',
                            'latino_DYJetsToLL_M-50_0001__part2.root',
                            'latino_DYJetsToLL_M-50_0001__part3.root',
                            'latino_DYJetsToLL_M-50_0001__part4.root',
                            'latino_DYJetsToLL_M-50_0002__part0.root',
                            ],    
                      #'weight' : '(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
                      'weight' : 'puW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',  
                      'weights' :  [
                        '0.829752445221',
                        #
                        '0.318902641535',
                        '0.318902641535',
                        '0.318902641535',
                        '0.318902641535',
                        '0.318902641535',
                        '0.318902641535',
                        '0.318902641535',
                        '0.318902641535',
                        '0.318902641535',
                        '0.318902641535',
                        '0.318902641535',                        
                        ]
                   }


# data driven
samples['Fake']  = {    'name': [
                      #
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/23JunFake/latino_DD_Run2016B_PromptReco_DoubleEG.root',
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/23JunFake/latino_DD_Run2016B_PromptReco_MuonEG.root',
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/23JunFake/latino_DD_Run2016B_PromptReco_SingleMuon.root',
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/23JunFake/latino_DD_Run2016B_PromptReco_DoubleMuon.root',
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/23JunFake/latino_DD_Run2016B_PromptReco_SingleElectron.root',
                       #             
                       #'../../../../../../../../../../eos/user/j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2016B_PromptReco_DoubleEG.root',
                       #'../../../../../../../../../../eos/user/j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2016B_PromptReco_MuonEG.root',
                       #'../../../../../../../../../../eos/user/j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2016B_PromptReco_SingleMuon.root',
                       #'../../../../../../../../../../eos/user/j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2016B_PromptReco_DoubleMuon.root',
                       #'../../../../../../../../../../eos/user/j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2016B_PromptReco_SingleElectron.root',
                       #
                       #
                       #
                       '../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/05Jul2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_DoubleEG.root', 
                       '../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/05Jul2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_MuonEG.root',   
                       '../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/05Jul2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_SingleMuon.root',
                       '../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/05Jul2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_DoubleMuon.root', 
                       '../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/05Jul2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_SingleElectron.root',
                       #                       
                       '../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/21Jun2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_DoubleEG.root',  
                       '../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/21Jun2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_MuonEG.root',    
                       '../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/21Jun2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_SingleMuon.root',
                       '../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/21Jun2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_DoubleMuon.root', 
                       '../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/21Jun2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_SingleElectron.root',
                       #
                      #
                       ],     
                      #'weight' : 'trigger*(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
                      #'weight' : '2.6/0.8*trigger*(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
                      #'weight' : '4.0/0.8*trigger*(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
                      'weight' : 'trigger*(0.8*fakeW2l0j*(njet==0)+0.8*fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
                      'isData': ['all'],                             
                  }

             
samples['top'] = {   'name': [
                           #'latino_TTJets.root',
                           'latino_TTTo2L2Nu_ext1__part0.root',
                           'latino_TTTo2L2Nu_ext1__part1.root',
                           'latino_TTTo2L2Nu_ext1__part2.root',
                           'latino_TTTo2L2Nu_ext1__part3.root',
                           'latino_TTTo2L2Nu_ext1__part4.root',
                           'latino_TTTo2L2Nu_ext1__part5.root',
                           'latino_TTTo2L2Nu_ext1__part6.root',
                           'latino_TTTo2L2Nu_ext1__part7.root',
                           'latino_TTTo2L2Nu_ext1__part8.root',
                           'latino_TTTo2L2Nu_ext1__part9.root',
                           #
                           'latino_ST_tW_antitop.root',
                           'latino_ST_tW_top.root'
                          ],          
                       'weight' : 'puW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',    #   weight/cut 
                       'weights' :  [
                          '0.0043711992912',
                          '0.0043711992912',
                          '0.0043711992912',
                          '0.0043711992912',
                          '0.0043711992912',
                          '0.0043711992912',
                          '0.0043711992912',
                          '0.0043711992912',
                          '0.0043711992912',
                          '0.0043711992912',
#
                          'baseW',
                          'baseW',
#                   
                       ]
                      }





###########################################
###########################################
###########################################


samples['DATA']  = {   'name': [
                                #
                                #'../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose16bis__hadd__l2tight/latino_Run2016B_PromptReco_DoubleEG.root',
                                #'../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose16bis__hadd__l2tight/latino_Run2016B_PromptReco_DoubleMuon.root',
                                #'../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose16bis__hadd__l2tight/latino_Run2016B_PromptReco_MuonEG.root',
                                #'../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose16bis__hadd__l2tight/latino_Run2016B_PromptReco_SingleElectron.root',
                                #'../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose16bis__hadd__l2tight/latino_Run2016B_PromptReco_SingleMuon.root',
                                #     
                                #'../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_DoubleEG.root',
                                #'../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_DoubleMuon.root',
                                #'../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_MuonEG.root',
                                #'../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_SingleElectron.root',
                                #'../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_SingleMuon.root',
                                #
                                '../../../../../../../../../cms/store/group/phys_higgs/cmshww/amassiro/HWWTightMu/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleEG.root',
                                '../../../../../../../../../cms/store/group/phys_higgs/cmshww/amassiro/HWWTightMu/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleMuon.root',
                                '../../../../../../../../../cms/store/group/phys_higgs/cmshww/amassiro/HWWTightMu/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_MuonEG.root',
                                '../../../../../../../../../cms/store/group/phys_higgs/cmshww/amassiro/HWWTightMu/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleElectron.root',
                                '../../../../../../../../../cms/store/group/phys_higgs/cmshww/amassiro/HWWTightMu/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleMuon.root',
                                #
                                '../../../../../../../../../cms/store/group/phys_higgs/cmshww/amassiro/HWWTightMu/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleEG.root',
                                '../../../../../../../../../cms/store/group/phys_higgs/cmshww/amassiro/HWWTightMu/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleMuon.root',
                                '../../../../../../../../../cms/store/group/phys_higgs/cmshww/amassiro/HWWTightMu/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_MuonEG.root',
                                '../../../../../../../../../cms/store/group/phys_higgs/cmshww/amassiro/HWWTightMu/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleElectron.root',
                                '../../../../../../../../../cms/store/group/phys_higgs/cmshww/amassiro/HWWTightMu/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleMuon.root',
                                #
                                ] ,     
                       'weight' : 'trigger',
                       #'weight' : '1',
                       #'weight' : 'std_vector_trigger[1]',
                       'isData': ['all'],                            
                  }






