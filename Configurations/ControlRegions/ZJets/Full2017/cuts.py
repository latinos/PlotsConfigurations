# cuts

supercut = 'nLepton==3 && Lepton_pt[0]>25 && Lepton_pt[1]>15 && Lepton_pt[2]>13 \
            && fabs(Lepton_eta[0])<2.5 && fabs(Lepton_eta[1])<2.5 && fabs(Lepton_eta[2])<2.5 \
            && Lepton_pdgId[0]== -1* Lepton_pdgId[1] \
            && fabs(mll -91.2)<10 \
            && PuppiMET_pt < 20 \
           '
##Loose
'''
cuts['ee_eloose_noiso']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
                      && Lepton_isTightElectron_mvaFall17Iso_WP90[0]==1 && Lepton_isTightElectron_mvaFall17Iso_WP90[1]==1 \
                      && Electron_pfRelIso03_all[Lepton_electronIdx[0]]<0.06 && Electron_pfRelIso03_all[Lepton_electronIdx[1]]<0.06 \
                      && fabs(Lepton_pdgId[2])==11  \
                     '

cuts['mm_eloose_noiso']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
                      && Lepton_isTightMuon_cut_Tight_HWWW[0]==1 && Lepton_isTightMuon_cut_Tight_HWWW[1]==1 \
                      && fabs(Lepton_pdgId[2])==11  \
                     '

cuts['ee_eloose_iso']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
                      && Lepton_isTightElectron_mvaFall17Iso_WP90[0]==1 && Lepton_isTightElectron_mvaFall17Iso_WP90[1]==1 \
                      && Electron_pfRelIso03_all[Lepton_electronIdx[0]]<0.06 && Electron_pfRelIso03_all[Lepton_electronIdx[1]]<0.06 \
                      && fabs(Lepton_pdgId[2])==11  \
                      && Electron_pfRelIso03_all[Lepton_electronIdx[2]]<0.06 \
                    '

cuts['mm_eloose_iso']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
                      && Lepton_isTightMuon_cut_Tight_HWWW[0]==1 && Lepton_isTightMuon_cut_Tight_HWWW[1]==1 \
                      && fabs(Lepton_pdgId[2])==11  \
                      && Electron_pfRelIso03_all[Lepton_electronIdx[2]]<0.06 \
                     '
'''
##Cutbased
cuts['ee_eloose_cutbased']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
                      && Lepton_isTightElectron_mvaFall17Iso_WP90[0]==1 && Lepton_isTightElectron_mvaFall17Iso_WP90[1]==1 \
                      && Electron_pfRelIso03_all[Lepton_electronIdx[0]]<0.06 && Electron_pfRelIso03_all[Lepton_electronIdx[1]]<0.06 \
                      && fabs(Lepton_pdgId[2])==11  \
                      && Electron_cutBased[Lepton_electronIdx[2]]>=3 \
                     '

cuts['mm_eloose_cutbased']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
                      && Lepton_isTightMuon_cut_Tight_HWWW[0]==1 && Lepton_isTightMuon_cut_Tight_HWWW[1]==1 \
                      && fabs(Lepton_pdgId[2])==11  \
                      && Electron_cutBased[Lepton_electronIdx[2]]>=3 \
                    '

cuts['ee_etight_cutbased']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
                      && Lepton_isTightElectron_mvaFall17Iso_WP90[0]==1 && Lepton_isTightElectron_mvaFall17Iso_WP90[1]==1 \
                      && Electron_pfRelIso03_all[Lepton_electronIdx[0]]<0.06 && Electron_pfRelIso03_all[Lepton_electronIdx[1]]<0.06 \
                      && fabs(Lepton_pdgId[2])==11  \
                      && Electron_cutBased[Lepton_electronIdx[2]]>=3 \
                      && Lepton_isTightElectron_mvaFall17Iso_WP90[2]>0.5\
                    '

cuts['mm_etight_cutbased']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
                      && Lepton_isTightMuon_cut_Tight_HWWW[0]==1 && Lepton_isTightMuon_cut_Tight_HWWW[1]==1 \
                      && fabs(Lepton_pdgId[2])==11  \
                      && Electron_cutBased[Lepton_electronIdx[2]]>=3 \
                      && Lepton_isTightElectron_mvaFall17Iso_WP90[2]>0.5\
                     '
cuts['ee_eloose_cutbased_convveto']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
                      && Lepton_isTightElectron_mvaFall17Iso_WP90[0]==1 && Lepton_isTightElectron_mvaFall17Iso_WP90[1]==1 \
                      && Electron_pfRelIso03_all[Lepton_electronIdx[0]]<0.06 && Electron_pfRelIso03_all[Lepton_electronIdx[1]]<0.06 \
                      && fabs(Lepton_pdgId[2])==11  \
                      && Electron_cutBased[Lepton_electronIdx[2]]>=3 \
                      && Electron_convVeto[Lepton_electronIdx[2]]==1 \
                     '

cuts['mm_eloose_cutbased_convveto']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
                      && Lepton_isTightMuon_cut_Tight_HWWW[0]==1 && Lepton_isTightMuon_cut_Tight_HWWW[1]==1 \
                      && fabs(Lepton_pdgId[2])==11  \
                      && Electron_cutBased[Lepton_electronIdx[2]]>=3 \
                      && Electron_convVeto[Lepton_electronIdx[2]]==1 \
                     '

cuts['ee_etight_cutbased_iso']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
                      && Lepton_isTightElectron_mvaFall17Iso_WP90[0]==1 && Lepton_isTightElectron_mvaFall17Iso_WP90[1]==1 \
                      && Electron_pfRelIso03_all[Lepton_electronIdx[0]]<0.06 && Electron_pfRelIso03_all[Lepton_electronIdx[1]]<0.06 \
                      && fabs(Lepton_pdgId[2])==11  \
                      && Electron_cutBased[Lepton_electronIdx[2]]>=3 \
                      && Lepton_isTightElectron_mvaFall17Iso_WP90[2]>0.5\
                      && Electron_pfRelIso03_all[Lepton_electronIdx[2]]<0.06 \
                     '

cuts['mm_etight_cutbased_iso']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
                      && Lepton_isTightMuon_cut_Tight_HWWW[0]==1 && Lepton_isTightMuon_cut_Tight_HWWW[1]==1 \
                      && fabs(Lepton_pdgId[2])==11  \
                      && Electron_cutBased[Lepton_electronIdx[2]]>=3 \
                      && Lepton_isTightElectron_mvaFall17Iso_WP90[2]>0.5\
                      && Electron_pfRelIso03_all[Lepton_electronIdx[2]]<0.06 \
                     '

##Tight
'''
cuts['ee_etight_noiso']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
                      && Lepton_isTightElectron_mvaFall17Iso_WP90[0]==1 && Lepton_isTightElectron_mvaFall17Iso_WP90[1]==1 \
                      && fabs(Lepton_pdgId[2])==11  \
                      && Lepton_isTightElectron_mvaFall17Iso_WP90[2]>0.5\
                     '

cuts['mm_etight_noiso']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
                      && Lepton_isTightMuon_cut_Tight_HWWW[0]==1 && Lepton_isTightMuon_cut_Tight_HWWW[1]==1 \
                      && fabs(Lepton_pdgId[2])==11  \
                      && Lepton_isTightElectron_mvaFall17Iso_WP90[2]>0.5\
                     '

cuts['ee_etight_iso']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
                      && Lepton_isTightElectron_mvaFall17Iso_WP90[0]==1 && Lepton_isTightElectron_mvaFall17Iso_WP90[1]==1 \
                      && Electron_pfRelIso03_all[Lepton_electronIdx[0]]<0.06 && Electron_pfRelIso03_all[Lepton_electronIdx[1]]<0.06 \
                      && fabs(Lepton_pdgId[2])==11  \
                      && Lepton_isTightElectron_mvaFall17Iso_WP90[2]>0.5  && Electron_pfRelIso03_all[Lepton_electronIdx[2]]<0.06 \
                     '

cuts['mm_etight_iso']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
                      && Lepton_isTightMuon_cut_Tight_HWWW[0]==1 && Lepton_isTightMuon_cut_Tight_HWWW[1]==1 \
                      && fabs(Lepton_pdgId[2])==11  \
                      && Lepton_isTightElectron_mvaFall17Iso_WP90[2]>0.5  && Electron_pfRelIso03_all[Lepton_electronIdx[2]]<0.06 \
                     '
'''
