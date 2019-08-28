# cuts

supercut = '(nLepton==1 && Lepton_pt[0] >= 30) \
            && (  Lepton_isTightElectron_mvaFall17V2Iso_WP90[0] > 0.5 \
                    || Lepton_isTightMuon_cut_Tight_HWWW[0] > 0.5) \
            && CleanJet_pt[2] >= 30                                \
           '

cuts["ele_baseline"] = 'abs(Lepton_pdgId[0])==11 \
                        && Lepton_pt[0] >= 40 '

cuts["mu_baseline"] = 'abs(Lepton_pdgId[0])==13  \
                        && Lepton_pt[0] >= 30 '

cuts["ele_baseline_nohorn"] = 'abs(Lepton_pdgId[0])==11 \
                                && Lepton_pt[0] >= 40   \
                                && (abs(CleanJet_eta[0]) <= 2.5 || abs(CleanJet_eta[0]) >= 3.2) \
                                && (abs(CleanJet_eta[1]) <= 2.5 || abs(CleanJet_eta[1]) >= 3.2)  \
                                '

cuts["mu_baseline_nohorn"] = 'abs(Lepton_pdgId[0])==13 \
                                && Lepton_pt[0] >= 30           \
                                && (abs(CleanJet_eta[0] <= 2.5) || abs(CleanJet_eta[0]) >= 3.2) \
                                && (abs(CleanJet_eta[1] <= 2.5) || abs(CleanJet_eta[1]) >= 3.2)  \
                        '





