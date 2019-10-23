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
## 2j

cuts['2j_ee_in']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && 2jggH \
                       && bVeto \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['2j_mm_in']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && 2jggH \
                       && bVeto \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['2j_df_in']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                       && 2jggH \
                       && bVeto \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['btag_2j_ee_in']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && 2jggH \
                       && topcr \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['btag_2j_mm_in']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && 2jggH \
                       && topcr \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['btag_2j_df_in']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                       && 2jggH \
                       && topcr \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['2j_ee_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && 2jggH \
                       && bVeto \
                       && ZVeto \
                              '

cuts['2j_mm_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && 2jggH \
                       && bVeto \
                       && ZVeto \
                              '

cuts['2j_df_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                       && 2jggH \
                       && bVeto \
                       && ZVeto \
                              '

cuts['btag_2j_ee_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && 2jggH \
                       && topcr \
                       && ZVeto \
                              '

cuts['btag_2j_mm_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && 2jggH \
                       && topcr \
                       && ZVeto \
                              '

cuts['btag_2j_df_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                       && 2jggH \
                       && topcr \
                       && ZVeto \
                              '

cuts['H_2j_ee_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && 2jggH \
                       && bVeto \
                       && ZVeto \
                       && Higgs2jetee \
                              '

cuts['H_2j_mm_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && 2jggH \
                       && bVeto \
                       && ZVeto \
                       && Higgs2jetee \
                              '

cuts['ww_2j_ee_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && 2jggH \
                       && wwcr \
                              '

cuts['ww_2j_mm_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && 2jggH \
                       && wwcr \
                              '
