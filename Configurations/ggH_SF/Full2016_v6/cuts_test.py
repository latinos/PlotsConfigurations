
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

dymva0jet = 'dymva_dnn_0j  > 0.975'
dymva1jet = 'dymva_dnn_1j  > 0.975'
dymva2jet = 'dymva_dnn_2j  > 0.965'
dymvaVBF  = 'dymva_dnn_VBF > 0.965'
dymvaVH   = 'dymva_dnn_VH  > 0.850'

# Higgs Signal Regions: ee/uu * 0/1/2 jet

cuts['hww2l2v_13TeV'] = {
   'expr': 'sr' ,
   'categories' : {
       '0j_pt2ge20'            : 'zeroJet && Higgs0jet && Lepton_pt[1]>=20 && '+dymva0jet,
       '0j_sf_pt2ge20'         : 'zeroJet && (Lepton_pdgId[0] == -Lepton_pdgId[1])       && Higgs0jet && Lepton_pt[1]>=20 && '+dymva0jet,
       '0j_ee_pt2ge20'         : 'zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && Higgs0jet && Lepton_pt[1]>=20 && '+dymva0jet,
       '0j_mm_pt2ge20'         : 'zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && Higgs0jet && Lepton_pt[1]>=20 && '+dymva0jet,
   }
}
