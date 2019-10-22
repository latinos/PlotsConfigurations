# cuts

supercut = ' mll > 12 \
          && Lepton_pt[0]>20 \
          && Lepton_pt[1]>10 \
          && (abs(Lepton_pdgId[0])==13 || Lepton_pt[0]>25) \
          && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
          && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
          && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
          && ptll>30 \
          && PuppiMET_pt > 20 \
          && topcr \
           '               

cuts['0j_ee_in'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                  && Alt$(CleanJet_pt[0],0)<30 \
                  && fabs(91.1876 - mll) < 7.5  \
                  && hww_DYmvaDNN_0j(Entry$) > 0.8 \
               '

cuts['1j_ee_in'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                  && Alt$(CleanJet_pt[0],0)>=30 \
                  && Alt$(CleanJet_pt[1],0)<30 \
                  && fabs(91.1876 - mll) < 7.5  \
                  && hww_DYmvaDNN_1j(Entry$) > 0.8 \
               '

cuts['2j_ggH_ee_in'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                  && 2jggH \
                  && fabs(91.1876 - mll) < 7.5  \
                  && hww_DYmvaDNN_2j(Entry$) > 0.8 \
               '

cuts['2j_VBF_ee_in'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                  && 2jVBF \
                  && fabs(91.1876 - mll) < 7.5  \
                  && hww_DYmvaDNN_VBF(Entry$) > 0.8 \
               '

cuts['0j_uu_in'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                  && Alt$(CleanJet_pt[0],0)<30 \
                  && fabs(91.1876 - mll) < 7.5  \
                  && hww_DYmvaDNN_0j(Entry$) > 0.8 \
               '

cuts['1j_uu_in'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                  && Alt$(CleanJet_pt[0],0)>=30 \
                  && Alt$(CleanJet_pt[1],0)<30 \
                  && fabs(91.1876 - mll) < 7.5  \
                  && hww_DYmvaDNN_1j(Entry$) > 0.8 \
               '
 
cuts['2j_ggH_uu_in'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                  && 2jggH \
                  && fabs(91.1876 - mll) < 7.5  \
                  && hww_DYmvaDNN_2j(Entry$) > 0.8 \
               '
 
cuts['2j_VBF_uu_in'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                  && 2jVBF \
                  && fabs(91.1876 - mll) < 7.5  \
                  && hww_DYmvaDNN_VBF(Entry$) > 0.8 \
               '

cuts['0j_df_in'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                  && Alt$(CleanJet_pt[0],0)<30 \
                  && fabs(91.1876 - mll) < 7.5  \
                  && hww_DYmvaDNN_0j(Entry$) > 0.8 \
               '

cuts['1j_df_in'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                  && Alt$(CleanJet_pt[0],0)>=30 \
                  && Alt$(CleanJet_pt[1],0)<30 \
                  && fabs(91.1876 - mll) < 7.5  \
                  && hww_DYmvaDNN_1j(Entry$) > 0.8 \
               '
 
cuts['2j_ggH_df_in'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                  && 2jggH \
                  && fabs(91.1876 - mll) < 7.5  \
                  && hww_DYmvaDNN_2j(Entry$) > 0.8 \
               '
 
cuts['2j_VBF_df_in'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                  && 2jVBF \
                  && fabs(91.1876 - mll) < 7.5  \
                  && hww_DYmvaDNN_VBF(Entry$) > 0.8 \
               '

cuts['0j_ee_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                  && Alt$(CleanJet_pt[0],0)<30 \
                  && fabs(91.1876 - mll) > 15  \
                  && hww_DYmvaDNN_0j(Entry$) > 0.8 \
               '

cuts['1j_ee_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                  && Alt$(CleanJet_pt[0],0)>=30 \
                  && Alt$(CleanJet_pt[1],0)<30 \
                  && fabs(91.1876 - mll) > 15  \
                  && hww_DYmvaDNN_1j(Entry$) > 0.8 \
               '

cuts['2j_ggH_ee_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                  && 2jggH \
                  && fabs(91.1876 - mll) > 15  \
                  && hww_DYmvaDNN_2j(Entry$) > 0.8 \
               '

cuts['2j_VBF_ee_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                  && 2jVBF \
                  && fabs(91.1876 - mll) > 15  \
                  && hww_DYmvaDNN_VBF(Entry$) > 0.8 \
               '

cuts['0j_uu_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                  && Alt$(CleanJet_pt[0],0)<30 \
                  && fabs(91.1876 - mll) > 15  \
                  && hww_DYmvaDNN_0j(Entry$) > 0.8 \
               '

cuts['1j_uu_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                  && Alt$(CleanJet_pt[0],0)>=30 \
                  && Alt$(CleanJet_pt[1],0)<30 \
                  && fabs(91.1876 - mll) > 15  \
                  && hww_DYmvaDNN_1j(Entry$) > 0.8 \
               '

cuts['2j_ggH_uu_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                  && 2jggH \
                  && fabs(91.1876 - mll) > 15  \
                  && hww_DYmvaDNN_2j(Entry$) > 0.8 \
               '
 
cuts['2j_VBF_uu_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                  && 2jVBF \
                  && fabs(91.1876 - mll) > 15  \
                  && hww_DYmvaDNN_VBF(Entry$) > 0.8 \
               '

cuts['0j_df_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                  && Alt$(CleanJet_pt[0],0)<30 \
                  && fabs(91.1876 - mll) > 15  \
                  && hww_DYmvaDNN_0j(Entry$) > 0.8 \
               '

cuts['1j_df_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                  && Alt$(CleanJet_pt[0],0)>=30 \
                  && Alt$(CleanJet_pt[1],0)<30 \
                  && fabs(91.1876 - mll) > 15  \
                  && hww_DYmvaDNN_1j(Entry$) > 0.8 \
               '
 
cuts['2j_ggH_df_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                  && 2jggH \
                  && fabs(91.1876 - mll) > 15  \
                  && hww_DYmvaDNN_2j(Entry$) > 0.8 \
               '
 
cuts['2j_VBF_df_out'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                  && 2jVBF \
                  && fabs(91.1876 - mll) > 15  \
                  && hww_DYmvaDNN_VBF(Entry$) > 0.8 \
               '
