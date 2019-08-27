# cuts
# Looking at events with no fat jets and 4 paired jets with >= 30GeV
# MET > 30 GeV already applied : to be fixed

supercut = '(nLepton==1 && Lepton_pt[0]>30 ) \
            && (  Lepton_isTightElectron_mvaFall17V2Iso_WP90[0] > 0.5 \
                    || Lepton_isTightMuon_cut_Tight_HWWW[0] > 0.5) \
            && VBS_category ==1         \
            && vbs_pt_low >= 30 && vjet_pt_low >=30  \
           '

cuts["ele_lowenergy"] = 'abs(Lepton_pdgId[0])==11 '

cuts["mu_lowenergy"] = 'abs(Lepton_pdgId[0])==13'

cuts["ele_lowenergy_nohorn"] = 'abs(Lepton_pdgId[0])==11 \
                                && (abs(CleanJet_eta[0]) <= 2.5 || abs(CleanJet_eta[0]) >= 3.2) \
                                && (abs(CleanJet_eta[1]) <= 2.5 || abs(CleanJet_eta[1]) >= 3.2)  \
                                '

cuts["mu_lowenergy_nohorn"] = 'abs(Lepton_pdgId[0])==13 \
                         && (abs(CleanJet_eta[0]) <= 2.5 || abs(CleanJet_eta[0]) >= 3.2) \
                         && (abs(CleanJet_eta[1]) <= 2.5 || abs(CleanJet_eta[1]) >= 3.2)  \
                        '
