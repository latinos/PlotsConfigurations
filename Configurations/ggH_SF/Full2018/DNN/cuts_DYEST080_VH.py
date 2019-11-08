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
          && hww_DYmvaDNN_VH(Entry$) > 0.8 \
          && 2jVH \
           '               

cuts['VH_ee_in'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                  && fabs(91.1876 - mll) < 7.5  \
               '

cuts['VH_uu_in'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                  && fabs(91.1876 - mll) < 7.5  \
               '

cuts['VH_df_in'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                  && fabs(91.1876 - mll) < 7.5  \
               '

cuts['VH_ee_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                  && fabs(91.1876 - mll) > 15  \
               '

cuts['VH_uu_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                  && fabs(91.1876 - mll) > 15  \
               '

cuts['VH_df_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                  && fabs(91.1876 - mll) > 15  \
               '
