# cuts

supercut = '   mll>12 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
           '

## 0j

cuts['0j_ee_in']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && Alt$(CleanJet_pt[0],0)<30 \
                       && bVeto \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['0j_mm_in']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && Alt$(CleanJet_pt[0],0)<30 \
                       && bVeto \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['0j_df_in']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                       && Alt$(CleanJet_pt[0],0)<30 \
                       && bVeto \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['btag_0j_ee_in']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && Alt$(CleanJet_pt[0],0)<30 \
                       && topcr \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['btag_0j_mm_in']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && Alt$(CleanJet_pt[0],0)<30 \
                       && topcr \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['btag_0j_df_in']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                       && Alt$(CleanJet_pt[0],0)<30 \
                       && topcr \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['0j_ee_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && Alt$(CleanJet_pt[0],0)<30 \
                       && bVeto \
                       && ZVeto \
                              '

cuts['0j_mm_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && Alt$(CleanJet_pt[0],0)<30 \
                       && bVeto \
                       && ZVeto \
                              '

cuts['0j_df_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                       && Alt$(CleanJet_pt[0],0)<30 \
                       && bVeto \
                       && ZVeto \
                              '

cuts['btag_0j_ee_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && Alt$(CleanJet_pt[0],0)<30 \
                       && topcr \
                       && ZVeto \
                              '

cuts['btag_0j_mm_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && Alt$(CleanJet_pt[0],0)<30 \
                       && topcr \
                       && ZVeto \
                              '

cuts['btag_0j_df_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                       && Alt$(CleanJet_pt[0],0)<30 \
                       && topcr \
                       && ZVeto \
                              '

cuts['H_0j_ee_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && Alt$(CleanJet_pt[0],0)<30 \
                       && bVeto \
                       && ZVeto \
                       && Higgs0jetee \
                              '

cuts['H_0j_mm_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && Alt$(CleanJet_pt[0],0)<30 \
                       && bVeto \
                       && ZVeto \
                       && Higgs0jetee \
                              '

cuts['ww_0j_ee_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && Alt$(CleanJet_pt[0],0)<30 \
                       && wwcr \
                              '

cuts['ww_0j_mm_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && Alt$(CleanJet_pt[0],0)<30 \
                       && wwcr \
                              '
