 # cuts for VH2j analysis - G Camacho


_tmp = [ 
     'mll>12.',
     'Lepton_pt[0]>25.',
     'Lepton_pt[1]>10.',
     '(abs(Lepton_pdgId[1]) == 13 || Lepton_pt[1]>13.)', #if its an electron, pt2>13
     '(nLepton>=2 && Alt$(Lepton_pt[2],0)<10.)', #at least 2 jets
     'ptll>30',
   # 'fabs(Lepton_eta[0])<2.5 && fabs(Lepton_eta[1])<2.5',
     'PuppiMET_pt > 20.', 
   # 'Sum$(abs(CleanJet_eta)>2.5) == 0',
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13', #electron & muon with op. charge
     ]

supercut = ' && '.join(_tmp)

def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)


## SIGNAL REGION


### Jet bins
# using Alt$(CleanJet_pt[n], 0) instead of Sum$(CleanJet_pt >= 30) because jet pt ordering is not strictly followed in JES-varied samples

_tmp = [
     #'Sum$(CleanJet_pt>30.)>=2', #At least 2 jets
     'Alt$(CleanJet_pt[1], 0) > 30.',
     'abs(CleanJet_eta[0])<2.5',
     'abs(CleanJet_eta[1])<2.5',
     'mth>60.',
     'mth<125.',
     'drll<2.',   #DeltaRll<2
     #'(Sum$(CleanJet_pt > 20. && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0)', #no bjets with pt>20
     'mjj>65.',
     'mjj<105.',
     'detajj<3.5',# delta eta entre dos jets 
     #'Jet_qgl[CleanJet_jetIdx[0]]>0.4', #QGL cuts 31/5/19
     #'Jet_qgl[CleanJet_jetIdx[1]]>0.3',
     'bVeto',
     ]

addcut('VH_2j_emu', _tmp)


## CONTROL REGIONS 

_tmp = [
    # 'Sum$(CleanJet_pt>30)>=2', #At least 2 jets
    'Alt$(CleanJet_pt[1], 0) > 30.',   
    'abs(CleanJet_eta[0])<2.5',
    'abs(CleanJet_eta[1])<2.5',
    # 'mth>60',
    # 'mth<125',
    # 'drll<2', #DeltaRll<2, not in the Top CR
    # '(Sum$(CleanJet_pt > 20. && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0)', #no bjets with pt>20
     'mjj>65',
     'mjj<105',
     'detajj<3.5', 
     'mll>50',
     'btag2',
     #'((Jet_btagDeepB[CleanJet_jetIdx[0]] > 0.1522) || (Jet_btagDeepB[CleanJet_jetIdx[1]] > 0.1522))',   # At least one of the 2 lead jets is btagged
       ]

addcut('VH_2j_topemu', _tmp)


_tmp = [
    'Alt$(CleanJet_pt[1], 0) > 30.', 
    #     'Sum$(CleanJet_pt>30)>=2', #At least 2 jets
     'abs(CleanJet_eta[0])<2.5',
     'abs(CleanJet_eta[1])<2.5',
     'mth<60',
     'drll<2', #DeltaRll<2
     #'(Sum$(CleanJet_pt > 30. && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0)', #no bjets with pt>30
     'bVetoDY',
     'mjj>65',
     'mjj<105',
     'detajj<3.5',
     'mll>40', #>40 in the DYTT CR
     'mll<80',
       ]

addcut('VH_2j_DYtautau', _tmp)




#addcut('WW_2j_em', _tmp)






#addcut('SS_2j_em', _tmp)

