# cuts

supercut = ' mll > 12 \
          && Lepton_pt[0]>25 \
          && Lepton_pt[1]>10 \
          && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
          && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
          && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
          && ptll>30 \
          && PuppiMET_pt > 20 \
          && bVeto \
           '

# DNN cuts
 
dymva0jet = 'dymva_alt_dnn_0j  > 0.975'
dymva1jet = 'dymva_alt_dnn_1j  > 0.975'
dymva2jet = 'dymva_alt_dnn_2j  > 0.900'
dymvaVBF  = 'dymva_alt_dnn_VBF > 0.970'
dymvaVH   = 'dymva_alt_dnn_VH  > 0.810'

cuts['0j'] = {
   'expr': 'zeroJet && ' + dymva0jet ,
   'categories' : {
       'ee_in'         : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && fabs(91.1876 - mll) <  7.5',
       'mm_in'         : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && fabs(91.1876 - mll) <  7.5',
       'df_in'         : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && fabs(91.1876 - mll) <  7.5',
       'ee_out'        : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && fabs(91.1876 - mll) < 15 && fabs(91.1876 - mll) > 7.5',
       'mm_out'        : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && fabs(91.1876 - mll) < 15 && fabs(91.1876 - mll) > 7.5',
       'df_out'        : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && fabs(91.1876 - mll) < 15 && fabs(91.1876 - mll) > 7.5',
   }
}

cuts['1j'] = {
   'expr': 'oneJet && ' + dymva1jet,
   'categories' : {
       'ee_in'         : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && fabs(91.1876 - mll) <  7.5',
       'mm_in'         : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && fabs(91.1876 - mll) <  7.5',
       'df_in'         : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && fabs(91.1876 - mll) <  7.5',
       'ee_out'        : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && fabs(91.1876 - mll) < 15 && fabs(91.1876 - mll) > 7.5',
       'mm_out'        : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && fabs(91.1876 - mll) < 15 && fabs(91.1876 - mll) > 7.5',
       'df_out'        : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && fabs(91.1876 - mll) < 15 && fabs(91.1876 - mll) > 7.5',
   }
}

cuts['2j'] = {
   'expr': '2jggH && ' + dymva2jet ,
   'categories' : {
       'ee_in'         : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && fabs(91.1876 - mll) <  7.5',
       'mm_in'         : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && fabs(91.1876 - mll) <  7.5',
       'df_in'         : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && fabs(91.1876 - mll) <  7.5',
       'ee_out'        : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && fabs(91.1876 - mll) < 15 && fabs(91.1876 - mll) > 7.5',
       'mm_out'        : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && fabs(91.1876 - mll) < 15 && fabs(91.1876 - mll) > 7.5',
       'df_out'        : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && fabs(91.1876 - mll) < 15 && fabs(91.1876 - mll) > 7.5',
   }
}

cuts['VH'] = {
   'expr': '2jVH && ' + dymvaVH ,
   'categories' : {
       'ee_in'         : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && fabs(91.1876 - mll) <  7.5',
       'mm_in'         : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && fabs(91.1876 - mll) <  7.5',
       'df_in'         : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && fabs(91.1876 - mll) <  7.5',
       'ee_out'        : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && fabs(91.1876 - mll) < 15 && fabs(91.1876 - mll) > 7.5',
       'mm_out'        : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && fabs(91.1876 - mll) < 15 && fabs(91.1876 - mll) > 7.5',
       'df_out'        : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && fabs(91.1876 - mll) < 15 && fabs(91.1876 - mll) > 7.5',
   }
}

cuts['VBF'] = {
   'expr': '2jVBF && ' + dymvaVBF ,
   'categories' : {
       'ee_in'         : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && fabs(91.1876 - mll) <  7.5',
       'mm_in'         : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && fabs(91.1876 - mll) <  7.5',
       'df_in'         : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && fabs(91.1876 - mll) <  7.5',
       'ee_out'        : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && fabs(91.1876 - mll) < 15 && fabs(91.1876 - mll) > 7.5',
       'mm_out'        : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && fabs(91.1876 - mll) < 15 && fabs(91.1876 - mll) > 7.5',
       'df_out'        : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && fabs(91.1876 - mll) < 15 && fabs(91.1876 - mll) > 7.5',
   }
}
