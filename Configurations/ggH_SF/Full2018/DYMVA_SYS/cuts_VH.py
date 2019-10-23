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
## VH

cuts['VH_ee_in']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && 2jVH \
                       && bVeto \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['VH_mm_in']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && 2jVH \
                       && bVeto \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['VH_df_in']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                       && 2jVH \
                       && bVeto \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['btag_VH_ee_in']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && 2jVH \
                       && topcr \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['btag_VH_mm_in']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && 2jVH \
                       && topcr \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['btag_VH_df_in']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                       && 2jVH \
                       && topcr \
                       && fabs(91.1876 - mll) < 7.5  \
                              '

cuts['VH_ee_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && 2jVH \
                       && bVeto \
                       && ZVeto \
                              '

cuts['VH_mm_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && 2jVH \
                       && bVeto \
                       && ZVeto \
                              '

cuts['VH_df_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                       && 2jVH \
                       && bVeto \
                       && ZVeto \
                              '

cuts['btag_VH_ee_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && 2jVH \
                       && topcr \
                       && ZVeto \
                              '

cuts['btag_VH_mm_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && 2jVH \
                       && topcr \
                       && ZVeto \
                              '

cuts['btag_VH_df_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                       && 2jVH \
                       && topcr \
                       && ZVeto \
                              '

cuts['H_VH_ee_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && 2jVH \
                       && bVeto \
                       && ZVeto \
                       && Higgs2jetee \
                              '

cuts['H_VH_mm_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && 2jVH \
                       && bVeto \
                       && ZVeto \
                       && Higgs2jetee \
                              '

cuts['ww_VH_ee_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                       && 2jVH \
                       && wwcr \
                              '

cuts['ww_VH_mm_out']  = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                       && 2jVH \
                       && wwcr \
                              '
