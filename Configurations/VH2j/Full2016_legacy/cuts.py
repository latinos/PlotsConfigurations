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

_tmp = [
     'Sum$(CleanJet_pt>30.)>=2', #At least 2 jets
     'abs(CleanJet_eta[0])<2.5',
     'abs(CleanJet_eta[1])<2.5',
     'mth>60.',
     'mth<125.',
     'drll<2.',   #DeltaRll<2
     #'(Sum$(CleanJet_pt > 20. && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0)', #no bjets with pt>20
     'bVeto',
     'mjj>65.',
     'mjj<105.',
     'detajj<3.5',# delta eta entre dos jets 
     'Jet_qgl[CleanJet_jetIdx[0]]>0.4', #QGL cuts 31/5/19
     'Jet_qgl[CleanJet_jetIdx[1]]>0.3',
     ]

addcut('VH_2j_emu', _tmp)


_tmp = [
     'Sum$(CleanJet_pt>30)>=2', #At least 2 jets
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
     'btag1',
     #'((Jet_btagDeepB[CleanJet_jetIdx[0]] > 0.1522) || (Jet_btagDeepB[CleanJet_jetIdx[1]] > 0.1522))',   # At least one of the 2 lead jets is btagged
       ]

addcut('VH_2j_topemu', _tmp)


_tmp = [
     'Sum$(CleanJet_pt>30)>=2', #At least 2 jets
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


################################
# Jet_btagDeepB

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
     'ptll > 30.',
     'Alt$(CleanJet_pt[0],0)<30',
     'bVeto',
       ]

#addcut('WW_0j_em', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
     'ptll > 30.',
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)<30',
      'bVeto',
       ]

#addcut('WW_1j_em', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13',
     'ptll > 30.',
     'Alt$(CleanJet_pt[0],0)<30',
     'bVeto',
       ]

#addcut('SS_0j_em', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13',
     'ptll > 30.',
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)<30',
     'bVeto',
        ]

#addcut('SS_1j_em', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
     'ptll > 30.',
     'Alt$(CleanJet_pt[0],0)<30',
     '!'+'bVeto',
       ]

#addcut('Top_0j_em', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
     'ptll > 30.',
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)<30',
     '!'+'bVeto',
       ]

#addcut('Top_1j_em', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
     'ptll < 30.',
     'mll<80.',
     'Alt$(CleanJet_pt[0],0)<30',
     'bVeto',
       ]

#addcut('DY_0j_em', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
     'ptll < 30.',
     'mll<80.',
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)<30',
     'bVeto',
        ]

#addcut('DY_1j_em', _tmp)


#_tmp = [
#     'Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13', #Dos muones de carga opuesta
#     'ptll > 30.', #DY>mm
#     'Alt$(CleanJet_pt[0],0)<30', #Condicion de que no haya ningun jet (con pt mayor que 30)
#     bVeto,
#        ]
#
#addcut('DY_0j_mm', _tmp)


###Synchronisation
_tmp = [
    'ptll>30.',
    'Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13',
    'fabs(mll - 91.1876) > 15.',
    'Sum$(abs(CleanJet_eta)>2.5) == 0',
    'bVeto',
    ]

#addcut('Control_Synch_DY_Incl_mm_out', _tmp)
