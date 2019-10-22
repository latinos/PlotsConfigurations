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
