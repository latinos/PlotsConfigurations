# cuts
# Looking at events with no fat jets and 4 paired jets with >= 30GeV
# MET > 30 GeV already applied : to be fixed

supercut = '(nLepton==1 && Lepton_pt[0]>30 ) \
            && (  Lepton_isTightElectron_mvaFall17V2Iso_WP90[0] > 0.5 \
                    || Lepton_isTightMuon_cut_Tight_HWWW[0] > 0.5) \
            && VBS_category ==1         \
            && vbs_pt_low >= 30 && vjet_pt_low >=30  \
           '

cuts["ele_lowenergy"] = 'abs(Lepton_pdgId[0])==11 \
                        && Lepton_pt[0] >= 40 '

cuts["mu_lowenergy"] =  'abs(Lepton_pdgId[0])==13  \
                        && Lepton_pt[0] >= 30 '

# No associated jets in the horn
cuts["ele_lowenergy_nohorn"] = 'abs(Lepton_pdgId[0])==11 \
                                && Lepton_pt[0] >= 40   \
                                && (abs(vbs_eta_high) <= 2.5 || abs(vbs_eta_high) >= 3.2) \
                                && (abs(vbs_eta_low) <= 2.5 || abs(vbs_eta_low) >= 3.2)  \
                                && (abs(vjet_eta_high) <= 2.5 || abs(vjet_eta_high) >= 3.2)       \
                                && (abs(vjet_eta_low) <= 2.5 || abs(vjet_eta_low) >= 3.2)       \
                                '

cuts["mu_lowenergy_nohorn"] = 'abs(Lepton_pdgId[0])==13 \
                         && Lepton_pt[0] >= 30    \
                         && (abs(vbs_eta_high) <= 2.5 || abs(vbs_eta_high) >= 3.2) \
                        && (abs(vbs_eta_low) <= 2.5 || abs(vbs_eta_low) >= 3.2)  \
                        && (abs(vjet_eta_high) <= 2.5 || abs(vjet_eta_high) >= 3.2)       \
                        && (abs(vjet_eta_low) <= 2.5 || abs(vjet_eta_low) >= 3.2)       \
                        '

