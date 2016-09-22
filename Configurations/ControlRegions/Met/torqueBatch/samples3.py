# samples

#samples = {}



#samples['DYLO']  = {    'name': [
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-10to50ext3.root',
                            ##
                            #'latino_DYJetsToLL_M-50-LO__part1.root',
                            #'latino_DYJetsToLL_M-50-LO__part0.root',
                            ##
                            #],    
                      #'weight' : 'baseW*puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',
                  #}
samples['Fake']  = {    'name': [
      '../../../HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_MuonEG.root', 
      '../../../HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_DoubleMuon.root', 
      '../../../HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_SingleMuon.root', 
      '../../../HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_DoubleEG.root', 
      '../../../HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_SingleElectron.root', 
      #../../../../../../../../../../           
      '../../../HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_MuonEG.root', 
      '../../../HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_DoubleMuon.root', 
      '../../../HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_SingleMuon.root', 
      '../../../HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_DoubleEG.root', 
      '../../../HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_SingleElectron.root', 
      #../../../../../../../../../../         
      '../../../HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_MuonEG.root', 
      '../../../HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_DoubleMuon.root', 
      '../../../HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_SingleMuon.root', 
      '../../../HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_DoubleEG.root', 
      '../../../HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_SingleElectron.root', 
      #../../../../../../../../../../         
      '../../../HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016C_PromptReco_MuonEG.root', 
      '../../../HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016C_PromptReco_SingleMuon.root', 
      '../../../HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016C_PromptReco_DoubleMuon.root', 
      '../../../HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016C_PromptReco_DoubleEG.root', 
      '../../../HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016C_PromptReco_SingleElectron.root', 
      #../../../../../../../../../../         
                                 ],     
                      #'weight' : 'trigger*(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
		 'weight' : '(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
                 'weights' : [
                       #
                       'std_vector_trigger[8]  || std_vector_trigger[6]',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
                       #
                       #
                       'std_vector_trigger[8]  || std_vector_trigger[6]',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
                       #
                       #
                       'std_vector_trigger[8]  || std_vector_trigger[6]',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
                       #
                       #
                       'std_vector_trigger[8]  || std_vector_trigger[6]',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
                       #
                       #
		       ],
                 'isData': ['all'],
		 }
