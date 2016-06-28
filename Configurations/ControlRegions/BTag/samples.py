# samples

#samples = {}



etaRange = [-5.0, -2.5, -2.0, -1.0, 0, 1.0, 2.0, 2.5, 5.0]
#etaRange = [-5.0, 5.0]
ptRange = [20,30,50,70,100, 10000000]
#ptRange = [20,70,100]


for eta in range(len(etaRange)-1):
  for pt in range(len(ptRange)-1):
    samples['topWeight_left_' + str(eta) + '_' + str(pt)] = {   'name': [
                           'latino_TTJets.root',
                          ##'latino_TTTo2L2Nu.root', 
                           'latino_ST_tW_antitop.root',
                           'latino_ST_tW_top.root'
                          ],          
                           'weight' : '(std_vector_jet_cmvav2[0] <= -0.715)    *   (std_vector_jet_pt[0] > ' + str(ptRange[pt])  + ')*(std_vector_jet_pt[0] < ' + str(ptRange[pt+1])  + ') *   (std_vector_jet_eta[0] > ' + str(etaRange[eta])  + ')*(std_vector_jet_eta[0] < ' + str(etaRange[eta+1])  + ') *       baseW*puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)', 
                       }

    samples['topWeight_right_' + str(eta) + '_' + str(pt)] = {   'name': [
                           'latino_TTJets.root',
                          ##'latino_TTTo2L2Nu.root', 
                           'latino_ST_tW_antitop.root',
                           'latino_ST_tW_top.root'
                          ],          
                           'weight' : '(std_vector_jet_cmvav2[0] > -0.715)    *   (std_vector_jet_pt[0] > ' + str(ptRange[pt])  + ')*(std_vector_jet_pt[0] < ' + str(ptRange[pt+1])  + ') *   (std_vector_jet_eta[0] > ' + str(etaRange[eta])  + ')*(std_vector_jet_eta[0] < ' + str(etaRange[eta+1])  + ') *       baseW*puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)', 
                       }
    


print samples.keys()

#print samples



###########################################
###########################################
###########################################

samples['DATA']  = {   'name': [

                                '../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose16bis__hadd__l2tight/latino_Run2016B_PromptReco_DoubleEG.root',
                                '../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose16bis__hadd__l2tight/latino_Run2016B_PromptReco_DoubleMuon.root',
                                '../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose16bis__hadd__l2tight/latino_Run2016B_PromptReco_MuonEG.root',
                                '../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose16bis__hadd__l2tight/latino_Run2016B_PromptReco_SingleElectron.root',
                                '../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose16bis__hadd__l2tight/latino_Run2016B_PromptReco_SingleMuon.root',

                                #'../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose16__hadd__l2tight/latino_Run2016B_PromptReco_DoubleEG.root',
                                #'../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose16__hadd__l2tight/latino_Run2016B_PromptReco_DoubleMuon.root',
                                #'../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose16__hadd__l2tight/latino_Run2016B_PromptReco_MuonEG.root',
                                #'../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose16__hadd__l2tight/latino_Run2016B_PromptReco_SingleElectron.root',
                                #'../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose16__hadd__l2tight/latino_Run2016B_PromptReco_SingleMuon.root',

     
                                ] ,     
                       'weight' : 'trigger',
                       #'weight' : '1',
                       #'weight' : 'std_vector_trigger[1]',
                       'isData': ['all'],                            
                  }





