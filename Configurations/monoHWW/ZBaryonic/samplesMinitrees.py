# samples

#samples = {}

# Z' mass 500:  chi mass 1,150,500
# Z' mass 1000: chi mass 1,150,1000

# Now XS is taken as 1 pb in baseW -> (baseW*9*0.108*0.108*0.2137)

ZbarMasses={"500","1000"}
ChiMasses={"1","150","500","1000"}

for mZb in ZbarMasses :
    for Chi in ChiMasses :
        if mZb == "500" and Chi == "1000" :
            continue
        if mZb == "1000" and Chi == "500" :
            continue
        if mZb == "1000" and Chi == "150" :
            continue
        samples['Zbar_' + mZb + '_' + Chi] = { 'name': ['monoH_ZpBaryonic_MZp-' + mZb + '_MChi-' + Chi + '.root'],
                                               'weight' :  'puW*(baseW*9*0.108*0.108*0.2137)*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',
                                               }


# If you want to normalize the signal to 1pb*BR:
# 9*0.108*0.108*0.2137*baseW/Xsec

# If you want to use nominal xs:
# 0.2137*baseW

# ZpMasses={"600","800","1000","1200","1400","1700","2000","2500"}
# A0Masses={"300","400","500","600","700","800"}

# for mZp in ZpMasses:
#     for mA0 in A0Masses :
#         if ((mZp == "600" and (mA0 == "300" or mA0 == "400")) or ((mZp == "800" and (mA0 == "300" or mA0 == "400" or mA0 == "500" or mA0 == "600"))) or (mZp != "600" and mZp != "800")) :
#             samples['monoH_' + mZp + '_' + mA0] = { 'name': ['monoH_2HDM_MZp-' + mZp + '_MA0-' + mA0 + '.root'],
#                                         'weight' : 'puW*(0.2137*baseW)*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',
#                                             }


samples['DY']  = {    'name': [
        #
        'DYJetsToLL_M-50_0000__part0.root',
        'DYJetsToLL_M-50_0000__part1.root',
        'DYJetsToLL_M-50_0000__part2.root',
        'DYJetsToLL_M-50_0000__part3.root',
        'DYJetsToLL_M-50_0000__part4.root',
        'DYJetsToLL_M-50_0001__part0.root',
        'DYJetsToLL_M-50_0001__part1.root',
        'DYJetsToLL_M-50_0001__part2.root',
        'DYJetsToLL_M-50_0001__part3.root',
        'DYJetsToLL_M-50_0001__part4.root',
        'DYJetsToLL_M-50_0002__part0.root',
        #
        'DYJetsToLL_M-10to50.root',
        #
        #'DYJetsToTT_MuEle_M-50.root',
        ],    
                      'weight' : 'puW*baseW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',  
                      #                       'weights' :  [
                      # '1', 
                      # '1.26645',
                      #                                     ],
                      }



# data driven
samples['Fake']  = {    'name': [
        #
        'fakeW_Run2016B_PromptReco_DoubleEG_21Jun2016.root', 
        'fakeW_Run2016B_PromptReco_DoubleMuon_21Jun2016.root', 
        'fakeW_Run2016B_PromptReco_SingleMuon_21Jun2016.root',
        'fakeW_Run2016B_PromptReco_SingleElectron_21Jun2016.root',
        'fakeW_Run2016B_PromptReco_MuonEG_21Jun2016.root',
        #../../../../../../../../../../         
        'fakeW_Run2016B_PromptReco_DoubleEG_05Jul2016.root', 
        'fakeW_Run2016B_PromptReco_DoubleMuon_05Jul2016.root', 
        'fakeW_Run2016B_PromptReco_SingleMuon_05Jul2016.root',
        'fakeW_Run2016B_PromptReco_SingleElectron_05Jul2016.root',
        'fakeW_Run2016B_PromptReco_MuonEG_05Jul2016.root',
        #../../../../../../../../../../           
        'fakeW_Run2016B_PromptReco_DoubleEG_08Jul2016.root', 
        'fakeW_Run2016B_PromptReco_DoubleMuon_08Jul2016.root', 
        'fakeW_Run2016B_PromptReco_SingleMuon_08Jul2016.root',
        'fakeW_Run2016B_PromptReco_SingleElectron_08Jul2016.root',
        'fakeW_Run2016B_PromptReco_MuonEG_08Jul2016.root',
        #../../../../../../../../../../         
        'fakeW_Run2016C_PromptReco_DoubleEG_08Jul2016.root', 
        'fakeW_Run2016C_PromptReco_DoubleMuon_08Jul2016.root', 
        'fakeW_Run2016C_PromptReco_SingleMuon_08Jul2016.root',
        'fakeW_Run2016C_PromptReco_SingleElectron_08Jul2016.root',
        'fakeW_Run2016C_PromptReco_MuonEG_08Jul2016.root',
        #../../../../../../../../../../            
        'fakeW_Run2016C_PromptReco_DoubleEG_11Jul2016.root', 
        'fakeW_Run2016C_PromptReco_DoubleMuon_11Jul2016.root', 
        'fakeW_Run2016C_PromptReco_SingleMuon_11Jul2016.root',
        'fakeW_Run2016C_PromptReco_SingleElectron_11Jul2016.root',
        'fakeW_Run2016C_PromptReco_MuonEG_11Jul2016.root',
        #../../../../../../../../../../            
        'fakeW_Run2016C_PromptReco_DoubleEG_15Jul2016.root', 
        'fakeW_Run2016C_PromptReco_DoubleMuon_15Jul2016.root', 
        'fakeW_Run2016C_PromptReco_SingleMuon_15Jul2016.root',
        'fakeW_Run2016C_PromptReco_SingleElectron_15Jul2016.root',
        'fakeW_Run2016C_PromptReco_MuonEG_15Jul2016.root',
        #../../../../../../../../../../            
        'fakeW_Run2016D_PromptReco_DoubleEG_15Jul2016.root', 
        'fakeW_Run2016D_PromptReco_DoubleMuon_15Jul2016.root', 
        'fakeW_Run2016D_PromptReco_SingleMuon_15Jul2016.root',
        'fakeW_Run2016D_PromptReco_SingleElectron_15Jul2016.root',
        'fakeW_Run2016D_PromptReco_MuonEG_15Jul2016.root',
        #../../../../../../../../../../            
        'fakeW_Run2016D_PromptReco_DoubleEG_26Jul2016.root', 
        'fakeW_Run2016D_PromptReco_DoubleMuon_26Jul2016.root', 
        'fakeW_Run2016D_PromptReco_SingleMuon_26Jul2016.root',
        'fakeW_Run2016D_PromptReco_SingleElectron_26Jul2016.root',
        'fakeW_Run2016D_PromptReco_MuonEG_26Jul2016.root',
        #
        #               
        ],     
                        'weight' : '(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2)) / 5',              #   weight/cut ( / 5 -> MET+X blinding policy)
                        'isData': ['all'],
                        'weights' : [
        #
        #
        'std_vector_trigger[8]  || std_vector_trigger[6]',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
        #
        'std_vector_trigger[8]  || std_vector_trigger[6]',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
        #
        'std_vector_trigger[8]  || std_vector_trigger[6]',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
        #
        'std_vector_trigger[8]  || std_vector_trigger[6]',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
        #
        'std_vector_trigger[8]  || std_vector_trigger[6]',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
        #
        'std_vector_trigger[8]  || std_vector_trigger[6]',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
        #
        'std_vector_trigger[8]  || std_vector_trigger[6]',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
        #
        'std_vector_trigger[8]  || std_vector_trigger[6]',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
        #
        #
        ],
                        
                        }

             
samples['top'] = {   'name': [
        'TTTo2L2Nu_ext1__part0.root',
        'TTTo2L2Nu_ext1__part1.root',
        'TTTo2L2Nu_ext1__part2.root',
        'TTTo2L2Nu_ext1__part3.root',
        'TTTo2L2Nu_ext1__part4.root',
        'TTTo2L2Nu_ext1__part5.root',
        'TTTo2L2Nu_ext1__part6.root',
        'TTTo2L2Nu_ext1__part7.root',
        'TTTo2L2Nu_ext1__part8.root',
        'TTTo2L2Nu_ext1__part9.root',
        #
        'ST_tW_antitop.root',
        'ST_tW_top.root'
        ],          
                     'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',    #   weight/cut 
                     }






samples['WW']  = {    'name': [
        'WWTo2L2Nu.root'
        ],      
                      'weight' : 'nllW*puW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                      'weights': ['0.00619058124769'] ,           
                      }


samples['ggWW']  = {    'name': ['GluGluWWTo2L2Nu_MCFM.root'],      
                        'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                        'isData': ['0'],                            
                        }



# during tree production: 1.4 k-factor has been applied to both samples
# ggWW sample: k = 1.4 +/- 15%
# ggWW interference: k = 1.87 +/- 25%



samples['Vg']  = {    'name': ['Wg_MADGRAPHMLM.root'],      
                      'weight' : 'puW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)\
                                  * !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
                      'weights': ['0.0684952181745'] ,           
                  }



samples['VgS']  = {    'name': [
        'WgStarLNuEE.root', 
        'WgStarLNuMuMu.root'
        ],      
                       'weight' : '1.4*puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',
                       'weights': ['1','1'] ,           
                       }

# 
# Wg* scale factor is
#
# X.X  +/- X.X     in mumumu
# 1.4  +/- 0.4     in emumu
#
#





samples['VZ']  = {    'name': [
        'WZTo3LNu.root', 
        #
        #'ZZTo2L2Nu.root',
        # 
        'WZTo2L2Q__part0.root',
        'WZTo2L2Q__part1.root',
        'WZTo2L2Q__part10.root',
        'WZTo2L2Q__part11.root',
        'WZTo2L2Q__part12.root',
        'WZTo2L2Q__part13.root',
        'WZTo2L2Q__part14.root',
        'WZTo2L2Q__part15.root',
        'WZTo2L2Q__part16.root',
        'WZTo2L2Q__part17.root',
        'WZTo2L2Q__part18.root',
        'WZTo2L2Q__part19.root',
        'WZTo2L2Q__part2.root',
        'WZTo2L2Q__part20.root',
        'WZTo2L2Q__part21.root',
        'WZTo2L2Q__part22.root',
        'WZTo2L2Q__part23.root',
        'WZTo2L2Q__part24.root',
        'WZTo2L2Q__part25.root',
        'WZTo2L2Q__part26.root',
        'WZTo2L2Q__part27.root',
        'WZTo2L2Q__part28.root',
        'WZTo2L2Q__part29.root',
        'WZTo2L2Q__part3.root',
        'WZTo2L2Q__part30.root',
        'WZTo2L2Q__part31.root',
        'WZTo2L2Q__part32.root',
        'WZTo2L2Q__part33.root',
        'WZTo2L2Q__part34.root',
        'WZTo2L2Q__part35.root',
        'WZTo2L2Q__part36.root',
        'WZTo2L2Q__part37.root',
        'WZTo2L2Q__part38.root',
        'WZTo2L2Q__part39.root',
        'WZTo2L2Q__part4.root',
        'WZTo2L2Q__part40.root',
        'WZTo2L2Q__part41.root',
        'WZTo2L2Q__part42.root',
        'WZTo2L2Q__part5.root',
        'WZTo2L2Q__part6.root',
        'WZTo2L2Q__part7.root',
        'WZTo2L2Q__part8.root',
        'WZTo2L2Q__part9.root',                          
        #
        'ZZTo2L2Q__part0.root',
        'ZZTo2L2Q__part1.root',
        'ZZTo2L2Q__part2.root',
        'ZZTo2L2Q__part3.root',
        #
        ], 
                      'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      }



samples['VVV'] = {    'name': [
        'WZZ.root', 
        'ZZZ.root',
        'WWW.root',
        'WWZ.root',
        ],      
                      'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      }


# Htautau
samples['H_htt']  = {      'name': [
        'GluGluHToTauTau_M125.root',
        'VBFHToTauTau_M125.root'
        ],      
                           'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',         
                           'weights': ['1', '1']
                           }



# HWW 
samples['ggH_hww']  = {    'name': [
        'GluGluHToWWTo2L2NuPowheg_M125.root'
        ],      
                           'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                           }

samples['qqH_hww']  = {    'name': [
        'VBFHToWWTo2L2Nu_alternative_M125.root'
        ],      
                           'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                           }

samples['ggZH_hww']  = {    'name': [
        'GluGluZH_HToWWTo2L2Nu_M125_noHLT.root',
        ],      
                            'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                            }


samples['WH_hww']  = {    'name': [
        'HWminusJ_HToWW_M125.root',
        'HWplusJ_HToWW_M125.root'
        ],      
                          'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                          }

samples['ZH_hww']  = {    'name': ['HZJ_HToWWTo2L2Nu_M125_noHLT.root'],      
                          'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                          }



###########################################
###########################################
###########################################


samples['DATA']  = {   'name': [
        #
        'Run2016B_PromptReco_DoubleEG_21Jun2016.root',
        'Run2016B_PromptReco_DoubleMuon_21Jun2016.root',
        'Run2016B_PromptReco_SingleElectron_21Jun2016.root',
        'Run2016B_PromptReco_SingleMuon_21Jun2016.root',
        'Run2016B_PromptReco_MuonEG_21Jun2016.root',
        #../../../../../../../../../../           
        'Run2016B_PromptReco_MuonEG_05Jul2016.root', 
        'Run2016B_PromptReco_DoubleMuon_05Jul2016.root', 
        'Run2016B_PromptReco_SingleMuon_05Jul2016.root', 
        'Run2016B_PromptReco_DoubleEG_05Jul2016.root', 
        'Run2016B_PromptReco_SingleElectron_05Jul2016.root', 
        #../../../../../../../../../../         
        'Run2016B_PromptReco_MuonEG_08Jul2016.root', 
        'Run2016B_PromptReco_DoubleMuon_08Jul2016.root', 
        'Run2016B_PromptReco_SingleMuon_08Jul2016.root', 
        'Run2016B_PromptReco_DoubleEG_08Jul2016.root', 
        'Run2016B_PromptReco_SingleElectron_08Jul2016.root', 
        #../../../../../../../../../../         
        'Run2016C_PromptReco_MuonEG_08Jul2016.root', 
        'Run2016C_PromptReco_DoubleMuon_08Jul2016.root', 
        'Run2016C_PromptReco_SingleMuon_08Jul2016.root', 
        'Run2016C_PromptReco_DoubleEG_08Jul2016.root', 
        'Run2016C_PromptReco_SingleElectron_08Jul2016.root', 
        #../../../../../../../../../../            
        'Run2016C_PromptReco_MuonEG_11Jul2016.root', 
        'Run2016C_PromptReco_DoubleMuon_11Jul2016.root', 
        'Run2016C_PromptReco_SingleMuon_11Jul2016.root', 
        'Run2016C_PromptReco_DoubleEG_11Jul2016.root', 
        'Run2016C_PromptReco_SingleElectron_11Jul2016.root', 
        #../../../../../../../../../../            
        'Run2016C_PromptReco_MuonEG_15Jul2016.root', 
        'Run2016C_PromptReco_DoubleMuon_15Jul2016.root', 
        'Run2016C_PromptReco_SingleMuon_15Jul2016.root', 
        'Run2016C_PromptReco_DoubleEG_15Jul2016.root', 
        'Run2016C_PromptReco_SingleElectron_15Jul2016.root', 
        #../../../../../../../../../../            
        'Run2016D_PromptReco_MuonEG_15Jul2016.root', 
        'Run2016D_PromptReco_DoubleMuon_15Jul2016.root', 
        'Run2016D_PromptReco_SingleMuon_15Jul2016.root', 
        'Run2016D_PromptReco_DoubleEG_15Jul2016.root', 
        'Run2016D_PromptReco_SingleElectron_15Jul2016.root', 
        #../../../../../../../../../../            
        'Run2016D_PromptReco_MuonEG_26Jul2016.root', 
        'Run2016D_PromptReco_DoubleMuon_26Jul2016.root', 
        'Run2016D_PromptReco_SingleMuon_26Jul2016.root', 
        'Run2016D_PromptReco_DoubleEG_26Jul2016.root', 
        'Run2016D_PromptReco_SingleElectron_26Jul2016.root', 
        
        ] ,     
                       'weight' : 'event % 5 == 0', # MET+X blind policy
                       'weights' : [
        #
        'std_vector_trigger[8]  || std_vector_trigger[6]',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
        #
        'std_vector_trigger[8]  || std_vector_trigger[6]',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
        #
        'std_vector_trigger[8]  || std_vector_trigger[6]',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
        #
        'std_vector_trigger[8]  || std_vector_trigger[6]',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
        #
        'std_vector_trigger[8]  || std_vector_trigger[6]',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
        #
        'std_vector_trigger[8]  || std_vector_trigger[6]',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
        #
        'std_vector_trigger[8]  || std_vector_trigger[6]',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
        #
        'std_vector_trigger[8]  || std_vector_trigger[6]',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
        '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
        #                         
        ],
                       
                       'isData': ['all'],                            
                       }






