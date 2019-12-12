# cuts

supercut = '   mll>12 \
            && Lepton_pt[0]>20 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[0])==13 || Lepton_pt[0]>25) \
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

## VBF

cuts['VBF_ee_in']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && 2jVBF \
                       && bVeto \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['VBF_mm_in']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && 2jVBF \
                       && bVeto \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['VBF_df_in']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                       && 2jVBF \
                       && bVeto \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['btag_VBF_ee_in']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && 2jVBF \
                       && topcr \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['btag_VBF_mm_in']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && 2jVBF \
                       && topcr \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['btag_VBF_df_in']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                       && 2jVBF \
                       && topcr \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['VBF_ee_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && 2jVBF \
                       && bVeto \
                       && ZVeto \
                              '

cuts['VBF_mm_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && 2jVBF \
                       && bVeto \
                       && ZVeto \
                              '

cuts['VBF_df_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                       && 2jVBF \
                       && bVeto \
                       && ZVeto \
                              '

cuts['btag_VBF_ee_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && 2jVBF \
                       && topcr \
                       && ZVeto \
                              '

cuts['btag_VBF_mm_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && 2jVBF \
                       && topcr \
                       && ZVeto \
                              '

cuts['btag_VBF_df_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                       && 2jVBF \
                       && topcr \
                       && ZVeto \
                              '

cuts['H_VBF_ee_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && 2jVBF \
                       && bVeto \
                       && ZVeto \
                       && Higgsvbfee \
                              '

cuts['H_VBF_mm_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && 2jVBF \
                       && bVeto \
                       && ZVeto \
                       && Higgsvbfee \
                              '

cuts['ww_VBF_ee_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && 2jVBF \
                       && wwcr \
                              '

cuts['ww_VBF_mm_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && 2jVBF \
                       && wwcr \
                              '
