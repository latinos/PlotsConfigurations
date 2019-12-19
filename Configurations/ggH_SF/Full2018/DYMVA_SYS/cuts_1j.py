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
## 1j

cuts['1j_ee_in']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && Alt$(CleanJet_pt[0],0)>=30 \
                       && Alt$(CleanJet_pt[1],0)<30 \
                       && bVeto \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['1j_mm_in']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && Alt$(CleanJet_pt[0],0)>=30 \
                       && Alt$(CleanJet_pt[1],0)<30 \
                       && bVeto \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['1j_df_in']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                       && Alt$(CleanJet_pt[0],0)>=30 \
                       && Alt$(CleanJet_pt[1],0)<30 \
                       && bVeto \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['btag_1j_ee_in']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && Alt$(CleanJet_pt[0],0)>=30 \
                       && Alt$(CleanJet_pt[1],0)<30 \
                       && topcr \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['btag_1j_mm_in']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && Alt$(CleanJet_pt[0],0)>=30 \
                       && Alt$(CleanJet_pt[1],0)<30 \
                       && topcr \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['btag_1j_df_in']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                       && Alt$(CleanJet_pt[0],0)>=30 \
                       && Alt$(CleanJet_pt[1],0)<30 \
                       && topcr \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['1j_ee_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && Alt$(CleanJet_pt[0],0)>=30 \
                       && Alt$(CleanJet_pt[1],0)<30 \
                       && bVeto \
                       && ZVeto \
                              '

cuts['1j_mm_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && Alt$(CleanJet_pt[0],0)>=30 \
                       && Alt$(CleanJet_pt[1],0)<30 \
                       && bVeto \
                       && ZVeto \
                              '

cuts['1j_df_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                       && Alt$(CleanJet_pt[0],0)>=30 \
                       && Alt$(CleanJet_pt[1],0)<30 \
                       && bVeto \
                       && ZVeto \
                              '

cuts['btag_1j_ee_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && Alt$(CleanJet_pt[0],0)>=30 \
                       && Alt$(CleanJet_pt[1],0)<30 \
                       && topcr \
                       && ZVeto \
                              '

cuts['btag_1j_mm_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && Alt$(CleanJet_pt[0],0)>=30 \
                       && Alt$(CleanJet_pt[1],0)<30 \
                       && topcr \
                       && ZVeto \
                              '

cuts['btag_1j_df_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                       && Alt$(CleanJet_pt[0],0)>=30 \
                       && Alt$(CleanJet_pt[1],0)<30 \
                       && topcr \
                       && ZVeto \
                              '


cuts['H_1j_ee_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && Alt$(CleanJet_pt[0],0)>=30 \
                       && Alt$(CleanJet_pt[1],0)<30 \
                       && bVeto \
                       && ZVeto \
                       && Higgs1jetee \
                              '

cuts['H_1j_mm_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && Alt$(CleanJet_pt[0],0)>=30 \
                       && Alt$(CleanJet_pt[1],0)<30 \
                       && bVeto \
                       && ZVeto \
                       && Higgs1jetee \
                              '

cuts['ww_1j_ee_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && Alt$(CleanJet_pt[0],0)>=30 \
                       && Alt$(CleanJet_pt[1],0)<30 \
                       && wwcr \
                              '

cuts['ww_1j_mm_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && Alt$(CleanJet_pt[0],0)>=30 \
                       && Alt$(CleanJet_pt[1],0)<30 \
                       && wwcr \
                              '
