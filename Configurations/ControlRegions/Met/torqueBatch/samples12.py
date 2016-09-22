# samples

#samples = {}


###########################################
###########################################
###########################################


samples['DATA']  = {   'name': [
                 ##
                 #'std_vector_trigger[8]  || std_vector_trigger[6]',           MuEG
                 #'std_vector_trigger[13] || std_vector_trigger[11]',          DoubleMu
                 #'std_vector_trigger[42] || std_vector_trigger[43]',          SingleMu
                 #'std_vector_trigger[46]',                                    DoubleEle
                 #'std_vector_trigger[47] || std_vector_trigger[56]',          SingleEle
                 #
                 '../../../HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_MuonEG.root', 
                 '../../../HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleMuon.root', 
                 '../../../HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleMuon.root', 
                 '../../../HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleEG.root', 
                 '../../../HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleElectron.root', 
                 #../../../../../../../../../../           
                 '../../../HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_MuonEG.root', 
                 '../../../HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleMuon.root', 
                 '../../../HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleMuon.root', 
                 '../../../HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleEG.root', 
                 '../../../HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleElectron.root', 
                 #../../../../../../../../../../         
                 '../../../HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_MuonEG.root', 
                 '../../../HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleMuon.root', 
                 '../../../HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleMuon.root', 
                 '../../../HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleEG.root', 
                 '../../../HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleElectron.root', 
                 #../../../../../../../../../../         
                 '../../../HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_MuonEG.root', 
                 '../../../HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleMuon.root', 
                 '../../../HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleMuon.root', 
                 '../../../HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleEG.root', 
                 '../../../HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleElectron.root', 
                 #
                 #
                 ],
                 #'weight' : 'trigger',
                 'weight' : '1',
                 #'weight' : 'std_vector_trigger[1]',
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
                       #
                       #
                       #
                       #
		       ],
                 'isData': ['all'],
		 }

