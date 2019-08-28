# cuts
# Looking only at FatJet category with two jets of 30 JeV

supercut = '(nLepton==1 && Lepton_pt[0]>30 ) \
            && (  Lepton_isTightElectron_mvaFall17V2Iso_WP90[0] > 0.5 \
                    || Lepton_isTightMuon_cut_Tight_HWWW[0] > 0.5) \
            && VBS_category == 0 && nCleanJetNotFat >= 2        \
            && CleanJet_pt[CleanJetNotFat_jetIdx[1]] >= 30      \
           '

cuts["ele_fatjet"] = 'abs(Lepton_pdgId[0])==11 \
                        && Lepton_pt[0] >= 40 '

cuts["mu_fatjet"] = 'abs(Lepton_pdgId[0])==13  \
                        && Lepton_pt[0] >= 30 '

cuts["ele_fatjet_nohorn"] = 'abs(Lepton_pdgId[0])==11 \
                        && Lepton_pt[0] >= 40   \
                        && (abs(CleanJet_eta[CleanJetNotFat_jetIdx[0]]) <= 2.5 || abs(CleanJet_eta[CleanJetNotFat_jetIdx[0]]) >= 3.2) \
                        && (abs(CleanJet_eta[CleanJetNotFat_jetIdx[1]]) <= 2.5 || abs(CleanJet_eta[CleanJetNotFat_jetIdx[1]]) >= 3.2)  \
                        '

cuts["mu_fatjet_nohorn"] = 'abs(Lepton_pdgId[0])==13 \
                        && Lepton_pt[0] >= 30    \
                        && (abs(CleanJet_eta[CleanJetNotFat_jetIdx[0]]) <= 2.5 || abs(CleanJet_eta[CleanJetNotFat_jetIdx[0]]) >= 3.2) \
                        && (abs(CleanJet_eta[CleanJetNotFat_jetIdx[1]]) <= 2.5 || abs(CleanJet_eta[CleanJetNotFat_jetIdx[1]]) >= 3.2)  \
                        '

