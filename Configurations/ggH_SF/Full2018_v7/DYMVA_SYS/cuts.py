supercut = '    mll>12 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
           '

# Higgs Signal Regions: ee/uu * 0/1/2 jet
cuts['0j'] = {
   'expr': 'zeroJet && bVeto' ,
   'categories' : {
       'ee_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && Zpeak',
       'mm_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && Zpeak',
       'df_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && Zpeak',
       'ee_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ZVeto',
       'mm_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ZVeto',
       'df_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && ZVeto',
   }
}

cuts['btag_0j'] = {
   'expr': 'zeroJet && topcr' ,
   'categories' : {
       'ee_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && Zpeak',
       'mm_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && Zpeak',
       'df_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && Zpeak',
       'ee_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ZVeto',
       'mm_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ZVeto',
       'df_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && ZVeto',
   }
}

cuts['H_0j'] = {
   'expr': 'zeroJet && bVeto && Higgs0jet' ,
   'categories' : {
       'ee_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && Zpeak',
       'mm_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && Zpeak',
       'df_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && Zpeak',
       'ee_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ZVeto',
       'mm_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ZVeto',
       'df_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && ZVeto',
   }
}

cuts['ww_0j'] = {
   'expr': 'zeroJet && bVeto && wwcr' ,
   'categories' : {
       'ee_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && Zpeak',
       'mm_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && Zpeak',
       'df_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && Zpeak',
       'ee_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ZVeto',
       'mm_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ZVeto',
       'df_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && ZVeto',
   }
}

cuts['1j'] = {
   'expr': 'oneJet && bVeto' ,
   'categories' : {
       'ee_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && Zpeak',
       'mm_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && Zpeak',
       'df_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && Zpeak',
       'ee_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ZVeto',
       'mm_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ZVeto',
       'df_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && ZVeto',
   }
}

cuts['btag_1j'] = {
   'expr': 'oneJet && topcr' ,
   'categories' : {
       'ee_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && Zpeak',
       'mm_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && Zpeak',
       'df_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && Zpeak',
       'ee_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ZVeto',
       'mm_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ZVeto',
       'df_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && ZVeto',
   }
}

cuts['H_1j'] = {
   'expr': 'oneJet && bVeto && Higgs1jet' ,
   'categories' : {
       'ee_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && Zpeak',
       'mm_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && Zpeak',
       'df_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && Zpeak',
       'ee_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ZVeto',
       'mm_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ZVeto',
       'df_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && ZVeto',
   }
}

cuts['ww_1j'] = {
   'expr': 'oneJet && bVeto && wwcr' ,
   'categories' : {
       'ee_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && Zpeak',
       'mm_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && Zpeak',
       'df_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && Zpeak',
       'ee_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ZVeto',
       'mm_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ZVeto',
       'df_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && ZVeto',
   }
}

cuts['2j'] = {
   'expr': '2jggH && bVeto' ,
   'categories' : {
       'ee_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && Zpeak',
       'mm_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && Zpeak',
       'df_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && Zpeak',
       'ee_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ZVeto',
       'mm_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ZVeto',
       'df_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && ZVeto',
   }
}

cuts['btag_2j'] = {
   'expr': '2jggH && topcr' ,
   'categories' : {
       'ee_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && Zpeak',
       'mm_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && Zpeak',
       'df_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && Zpeak',
       'ee_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ZVeto',
       'mm_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ZVeto',
       'df_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && ZVeto',
   }
}

cuts['H_2j'] = {
   'expr': '2jggH && bVeto && Higgs2jet' ,
   'categories' : {
       'ee_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && Zpeak',
       'mm_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && Zpeak',
       'df_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && Zpeak',
       'ee_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ZVeto',
       'mm_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ZVeto',
       'df_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && ZVeto',
   }
}

cuts['ww_2j'] = {
   'expr': '2jggH && bVeto && wwcr' ,
   'categories' : {
       'ee_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && Zpeak',
       'mm_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && Zpeak',
       'df_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && Zpeak',
       'ee_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ZVeto',
       'mm_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ZVeto',
       'df_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && ZVeto',
   }
}

cuts['VBF'] = {
   'expr': '2jVBF && bVeto' ,
   'categories' : {
       'ee_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && Zpeak',
       'mm_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && Zpeak',
       'df_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && Zpeak',
       'ee_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ZVeto',
       'mm_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ZVeto',
       'df_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && ZVeto',
   }
}

cuts['btag_VBF'] = {
   'expr': '2jVBF && topcr' ,
   'categories' : {
       'ee_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && Zpeak',
       'mm_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && Zpeak',
       'df_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && Zpeak',
       'ee_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ZVeto',
       'mm_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ZVeto',
       'df_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && ZVeto',
   }
}

cuts['H_VBF'] = {
   'expr': '2jVBF && bVeto && Higgsvbf' ,
   'categories' : {
       'ee_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && Zpeak',
       'mm_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && Zpeak',
       'df_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && Zpeak',
       'ee_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ZVeto',
       'mm_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ZVeto',
       'df_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && ZVeto',
   }
}

cuts['ww_VBF'] = {
   'expr': '2jVBF && bVeto && wwcr' ,
   'categories' : {
       'ee_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && Zpeak',
       'mm_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && Zpeak',
       'df_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && Zpeak',
       'ee_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ZVeto',
       'mm_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ZVeto',
       'df_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && ZVeto',
   }
}

cuts['VH'] = {
   'expr': '2jVH && bVeto' ,
   'categories' : {
       'ee_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && Zpeak',
       'mm_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && Zpeak',
       'df_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && Zpeak',
       'ee_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ZVeto',
       'mm_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ZVeto',
       'df_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && ZVeto',
   }
}

cuts['btag_VH'] = {
   'expr': '2jVH && topcr' ,
   'categories' : {
       'ee_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && Zpeak',
       'mm_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && Zpeak',
       'df_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && Zpeak',
       'ee_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ZVeto',
       'mm_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ZVeto',
       'df_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && ZVeto',
   }
}

cuts['H_VH'] = {
   'expr': '2jVH && bVeto && Higgsvh' ,
   'categories' : {
       'ee_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && Zpeak',
       'mm_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && Zpeak',
       'df_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && Zpeak',
       'ee_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ZVeto',
       'mm_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ZVeto',
       'df_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && ZVeto',
   }
}

cuts['ww_VH'] = {
   'expr': '2jVH && bVeto && wwcr' ,
   'categories' : {
       'ee_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && Zpeak',
       'mm_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && Zpeak',
       'df_in'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && Zpeak',
       'ee_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ZVeto',
       'mm_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ZVeto',
       'df_out'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && ZVeto',
   }
}
