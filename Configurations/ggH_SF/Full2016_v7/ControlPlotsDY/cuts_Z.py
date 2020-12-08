
supercut = '    mll>12 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
           '

# Some cuts

dymva0jet = 'dymva_alt_dnn_0j  > 0.945'
dymva1jet = 'dymva_alt_dnn_1j  > 0.900'
dymva2jet = 'dymva_alt_dnn_2j  > 0.960'
dymvaVBF  = 'dymva_alt_dnn_VBF > 0.970'
dymvaVH   = 'dymva_alt_dnn_VH  > 0.825'

# Higgs Signal Regions: ee/uu * 0/1/2 jet
cuts['hww2l2v_13TeV'] = {
   'expr': 'fabs(91.1876 - mll) < 15 && fabs(91.1876 - mll) > 7.5 && bVeto && (Lepton_pdgId[0]==-Lepton_pdgId[1])' ,
   'categories' : {
       '0j_ee'         : 'zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymva0jet,
       '0j_mm'         : 'zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymva0jet,
       '1j_ee'         : ' oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymva1jet,
       '1j_mm'         : ' oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymva1jet,
       '2j_ee'         : '  2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymva2jet,
       '2j_mm'         : '  2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymva2jet,
       '2j_vh_ee'      : '  2jVH  && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymvaVH,
       '2j_vh_mm'      : '  2jVH  && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymvaVH,
       '2j_vbf_ee'     : '  2jVBF && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymvaVBF,
       '2j_vbf_mm'     : '  2jVBF && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymvaVBF,
   }
}

## DY Background IN with DYMVA>0.9X : Split ee/mm , No H cut !
cuts['hww2l2v_13TeV_DYin']  = {
   'expr' : 'Zpeak && bVeto',
   'categories' : {
      '0j_ee'     : 'zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymva0jet,
      '0j_mm'     : 'zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymva0jet,
      '0j_df'     : 'zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && '+dymva0jet,
      '1j_ee'     : ' oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymva1jet,
      '1j_mm'     : ' oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymva1jet,
      '1j_df'     : ' oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && '+dymva1jet,
      '2j_ee'     : '  2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymva2jet,
      '2j_mm'     : '  2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymva2jet,
      '2j_df'     : '  2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && '+dymva2jet,
      '2j_vh_ee'  : '  2jVH  && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymvaVH,
      '2j_vh_mm'  : '  2jVH  && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymvaVH,
      '2j_vh_df'  : '  2jVH  && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && '+dymvaVH,
      '2j_vbf_ee' : '  2jVBF && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymvaVBF,
      '2j_vbf_mm' : '  2jVBF && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymvaVBF,
      '2j_vbf_df' : '  2jVBF && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && '+dymvaVBF,
   }
}
