#supercut = 'Muon_pt[0]>30 && fabs(Muon_eta[0])<2.4 && Muon_tightId[0] > 0.5'
#supercut = 'Muon_pt[0]>30 && fabs(Muon_eta[0])<2.4 && Muon_tightId[0] > 0.5'
#supercut = '1'
supercut = 'nMuon==2 || nElectron==2'
single_electron_trigger='HLT_Ele27_WPTight_Gsf'
single_muon_trigger='HLT_IsoMu27'


cuts['2_same_f_leptons']='1'
cuts[single_electron_trigger]=single_electron_trigger+'&& (nElectron==2) && (Electron_pt[0] > 30 && fabs(Electron_eta[0])<2.5 && fabs(Electron_eta[1])<2.5)'
cuts[single_muon_trigger]=single_muon_trigger+'&& (nMuon==2) && (Muon_pt[0] > 30) && fabs(Muon_eta[0]) < 2.4 && fabs(Muon_eta[1])<2.4'



#cuts['FatJetSB']='nFatJet == 1  && (((FatJet_msoftdrop[0] > 40) && (FatJet_msoftdrop[0] < 65)) || ((FatJet_msoftdrop[0] > 105) && (FatJet_msoftdrop[0] > 250))) && !'+_bjetevent_
#cuts['FatJet']='nFatJet==1'
#cuts['FatJet_bveto']='nFatJet==1 && !'+_bjetevent_
#cuts['nocut']='nMuon>0'
#cut['CR_TOP']='nFatJet == 1  && (FatJet_msoftdrop[0] > 40) && (FatJet_msoftdrop[0] < 65) && (FatJet_msoftdrop[0] > 105) && (FatJet_msoftdrop[0] > 250) &&'+_bjetevent_


#cuts['DY'] = 'nMuon>1 && Muon_pt[1]>10 && abs(Muon_eta[1]) < 2.4'
