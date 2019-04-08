 # cuts

_tmp = [ 
    'Lepton_pt[0]>20. && Lepton_pt[1]>13.' ,
    '(abs(Lepton_pdgId[0])==13 || Lepton_pt[0]>25)',
    '(abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13)', 
    '(nLepton>=2 && Alt$(Lepton_pt[2],0)<10.)',
    'fabs(Lepton_eta[0])<2.5 && fabs(Lepton_eta[1])<2.5',
    'mll>12.',
    'PuppiMET_pt > 20.',
    'ptll > 30.',
    'mth > 60.',
    'Lepton_pdgId[0]*Lepton_pdgId[1] >0',
    ]

supercut = ' && '.join(_tmp)

def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)

# Jet_btagDeepB

#pt2 > 20

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13',
     'Lepton_pt[1]>20', 
     'Alt$(CleanJet_pt[0],0)<30',
       ]
addcut('SS_0j_df', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13',
     'Lepton_pt[1]>20', 
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)<30',
       ]
addcut('SS_1j_df', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13',
     'Lepton_pt[1]>20', 
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)>30',
     'Alt$(CleanJet_pt[2],0)<30',
       ]
addcut('SS_2j_df', _tmp)

_tmp = [
     'fabs(Lepton_pdgId[0])== 11',
     'fabs(Lepton_pdgId[1])== 13',
     'Lepton_pt[1]>20', 
     'Lepton_pdgId[0]*Lepton_pdgId[1] >0',
     'Alt$(CleanJet_pt[0],0)<30',
       ]
addcut('SS_0j_em', _tmp)

_tmp = [
     'fabs(Lepton_pdgId[0])== 11',
     'fabs(Lepton_pdgId[1])== 13',
     'Lepton_pt[1]>20', 
     'Lepton_pdgId[0]*Lepton_pdgId[1] >0',
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)<30',
       ]
addcut('SS_1j_em', _tmp)

_tmp = [
     'fabs(Lepton_pdgId[0])== 11',
     'fabs(Lepton_pdgId[1])== 13',
     'Lepton_pt[1]>20', 
     'Lepton_pdgId[0]*Lepton_pdgId[1] >0',
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)>30',
     'Alt$(CleanJet_pt[2],0)<30',
       ]
addcut('SS_2j_em', _tmp)

_tmp = [
     'fabs(Lepton_pdgId[0])== 13',
     'fabs(Lepton_pdgId[1])== 11',
     'Lepton_pt[1]>20', 
     'Lepton_pdgId[0]*Lepton_pdgId[1] >0',
     'Alt$(CleanJet_pt[0],0)<30',
       ]
addcut('SS_0j_me', _tmp)

_tmp = [
     'fabs(Lepton_pdgId[0])== 13',
     'fabs(Lepton_pdgId[1])== 11',
     'Lepton_pt[1]>20', 
     'Lepton_pdgId[0]*Lepton_pdgId[1] >0',
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)<30',
       ]
addcut('SS_1j_me', _tmp)

_tmp = [
     'fabs(Lepton_pdgId[0])== 13',
     'fabs(Lepton_pdgId[1])== 11',
     'Lepton_pt[1]>20', 
     'Lepton_pdgId[0]*Lepton_pdgId[1] >0',
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)>30',
     'Alt$(CleanJet_pt[2],0)<30',
       ]
addcut('SS_2j_me', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] ==11*11',
     'Lepton_pt[1]>20', 
     'Alt$(CleanJet_pt[0],0)<30',
     'fabs(mll-91.2) > 20.',
       ]
addcut('SS_0j_ee', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] ==11*11',
     'Lepton_pt[1]>20', 
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)<30',
     'fabs(mll-91.2) > 20.',
       ]
addcut('SS_1j_ee', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] ==11*11',
     'Lepton_pt[1]>20', 
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)>30',
     'Alt$(CleanJet_pt[2],0)<30',
     'fabs(mll-91.2) > 20.',
       ]
addcut('SS_2j_ee', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] ==13*13',
     'Lepton_pt[1]>20',      
     'Alt$(CleanJet_pt[0],0)<30',
     'fabs(mll-91.2) > 20.',
      ]
addcut('SS_0j_mm', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] ==13*13',
     'Lepton_pt[1]>20', 
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)<30',
     'fabs(mll-91.2) > 20.',
     ]
addcut('SS_1j_mm', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] ==13*13',
     'Lepton_pt[1]>20', 
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)>30',
     'Alt$(CleanJet_pt[2],0)<30',
     'fabs(mll-91.2) > 20.',
     ]
addcut('SS_2j_mm', _tmp)

_tmp = [
     'Lepton_pdgId[0]==Lepton_pdgId[1]',
     'Lepton_pt[1]>20', 
     'Alt$(CleanJet_pt[0],0)<30',
     'fabs(mll-91.2) > 20.',
     ]
addcut('SS_0j_sf', _tmp)

_tmp = [
     'Lepton_pdgId[0]==Lepton_pdgId[1]',
     'Lepton_pt[1]>20', 
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)<30',
     'fabs(mll-91.2) > 20.',
     ]
addcut('SS_1j_sf', _tmp)

_tmp = [
     'Lepton_pdgId[0]==Lepton_pdgId[1]',
     'Lepton_pt[1]>20', 
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)>30',
     'Alt$(CleanJet_pt[2],0)<30',
     'fabs(mll-91.2) > 20.',
     ]
addcut('SS_2j_sf', _tmp)


#pt2 < 20

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13',
     'Lepton_pt[1]<20', 
     'Alt$(CleanJet_pt[0],0)<30',
       ]
addcut('SS_pt2lt20_0j_df', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13',
     'Lepton_pt[1]<20', 
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)<30',
       ]
addcut('SS_pt2lt20_1j_df', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13',
     'Lepton_pt[1]<20', 
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)>30',
     'Alt$(CleanJet_pt[2],0)<30',
       ]
addcut('SS_pt2lt20_2j_df', _tmp)

_tmp = [
     'fabs(Lepton_pdgId[0])== 11',
     'fabs(Lepton_pdgId[1])== 13',
     'Lepton_pt[1]<20', 
     'Lepton_pdgId[0]*Lepton_pdgId[1] >0',
     'Alt$(CleanJet_pt[0],0)<30',
       ]
addcut('SS_pt2lt20_0j_em', _tmp)

_tmp = [
     'fabs(Lepton_pdgId[0])== 11',
     'fabs(Lepton_pdgId[1])== 13',
     'Lepton_pt[1]<20', 
     'Lepton_pdgId[0]*Lepton_pdgId[1] >0',
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)<30',
       ]
addcut('SS_pt2lt20_1j_em', _tmp)

_tmp = [
     'fabs(Lepton_pdgId[0])== 11',
     'fabs(Lepton_pdgId[1])== 13',
     'Lepton_pt[1]<20', 
     'Lepton_pdgId[0]*Lepton_pdgId[1] >0',
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)>30',
     'Alt$(CleanJet_pt[2],0)<30',
       ]
addcut('SS_pt2lt20_2j_em', _tmp)

_tmp = [
     'fabs(Lepton_pdgId[0])== 13',
     'fabs(Lepton_pdgId[1])== 11',
     'Lepton_pt[1]<20', 
     'Lepton_pdgId[0]*Lepton_pdgId[1] >0',
     'Alt$(CleanJet_pt[0],0)<30',
       ]
addcut('SS_pt2lt20_0j_me', _tmp)

_tmp = [
     'fabs(Lepton_pdgId[0])== 13',
     'fabs(Lepton_pdgId[1])== 11',
     'Lepton_pt[1]<20', 
     'Lepton_pdgId[0]*Lepton_pdgId[1] >0',
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)<30',
       ]
addcut('SS_pt2lt20_1j_me', _tmp)

_tmp = [
     'fabs(Lepton_pdgId[0])== 13',
     'fabs(Lepton_pdgId[1])== 11',
     'Lepton_pt[1]<20', 
     'Lepton_pdgId[0]*Lepton_pdgId[1] >0',
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)>30',
     'Alt$(CleanJet_pt[2],0)<30',
       ]
addcut('SS_pt2lt20_2j_me', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] ==11*11',
     'Lepton_pt[1]<20', 
     'Alt$(CleanJet_pt[0],0)<30',
     'fabs(mll-91.2) > 20.',
       ]
addcut('SS_pt2lt20_0j_ee', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] ==11*11',
     'Lepton_pt[1]<20', 
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)<30',
     'fabs(mll-91.2) > 20.',
       ]
addcut('SS_pt2lt20_1j_ee', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] ==11*11',
     'Lepton_pt[1]<20', 
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)>30',
     'Alt$(CleanJet_pt[2],0)<30',
     'fabs(mll-91.2) > 20.',
       ]
addcut('SS_pt2lt20_2j_ee', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] ==13*13',
     'Lepton_pt[1]<20',      
     'Alt$(CleanJet_pt[0],0)<30',
     'fabs(mll-91.2) > 20.',
      ]
addcut('SS_pt2lt20_0j_mm', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] ==13*13',
     'Lepton_pt[1]<20', 
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)<30',
     'fabs(mll-91.2) > 20.',
     ]
addcut('SS_pt2lt20_1j_mm', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] ==13*13',
     'Lepton_pt[1]<20', 
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)>30',
     'Alt$(CleanJet_pt[2],0)<30',
     'fabs(mll-91.2) > 20.',
     ]
addcut('SS_pt2lt20_2j_mm', _tmp)

_tmp = [
     'Lepton_pdgId[0]==Lepton_pdgId[1]',
     'Lepton_pt[1]<20', 
     'Alt$(CleanJet_pt[0],0)<30',
     'fabs(mll-91.2) > 20.',
     ]
addcut('SS_pt2lt20_0j_sf', _tmp)

_tmp = [
     'Lepton_pdgId[0]==Lepton_pdgId[1]',
     'Lepton_pt[1]<20', 
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)<30',
     'fabs(mll-91.2) > 20.',
     ]
addcut('SS_pt2lt20_1j_sf', _tmp)

_tmp = [
     'Lepton_pdgId[0]==Lepton_pdgId[1]',
     'Lepton_pt[1]<20', 
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)>30',
     'Alt$(CleanJet_pt[2],0)<30',
     'fabs(mll-91.2) > 20.',
     ]
addcut('SS_pt2lt20_2j_sf', _tmp)

