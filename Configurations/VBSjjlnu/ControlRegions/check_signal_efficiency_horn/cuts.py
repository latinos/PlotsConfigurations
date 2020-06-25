# cuts
# Looking at events with no fat jets and 4 paired jets with >= 30GeV
# MET > 30 GeV already applied : to be fixed

supercut = 'Lepton_pt[0]>30 \
            && Alt$(Lepton_pt[1],0)<=10 && Alt$(Lepton_isLoose[1],1)>0.5\
            && ( Alt$(Lepton_isTightElectron_mvaFall17V1Iso_WP90[1], 0) < 0.5 \
                && Alt$(Lepton_isTightMuon_cut_Tight_HWWW[1],0) < 0.5 ) \
            && VBS_category ==1    \
            && vbs_pt_low >= 30    \
            && vjet_pt_low >= 30    \
           '

cuts["lowen_ele_incl"] = 'abs(Lepton_pdgId[0])==11 \
                        && Lepton_pt[0] >= 40 \
                        '

cuts["lowen_mu_incl"] =  'abs(Lepton_pdgId[0])==13  \
                        && Lepton_pt[0] >= 30 \
                        '

# No associated jets in the horn
cuts["ele_jetpt40"] = 'abs(Lepton_pdgId[0])==11 \
                        && Lepton_pt[0] >= 40   \
                        && ( 1 -1*( abs(vbs_eta_low) > 2.5 && abs(vbs_eta_low) < 3.2 && vbs_pt_low < 40) ) \
                        && ( 1 -1*( abs(vbs_eta_high) > 2.5 && abs(vbs_eta_high) < 3.2 && vbs_pt_high < 40) ) \
                        && ( 1 -1*( abs(vjet_eta_low) > 2.5 && abs(vjet_eta_low) < 3.2 && vjet_pt_low < 40) ) \
                        && ( 1 -1*( abs(vjet_eta_high) > 2.5 && abs(vjet_eta_high) < 3.2 && vjet_pt_high < 40) ) \
                       '

cuts["mu_jetpt40"] = 'abs(Lepton_pdgId[0])==13 \
                        && Lepton_pt[0] >= 30   \
                        && ( 1 -1*( abs(vbs_eta_low) > 2.5 && abs(vbs_eta_low) < 3.2 && vbs_pt_low < 40) ) \
                        && ( 1 -1*( abs(vbs_eta_high) > 2.5 && abs(vbs_eta_high) < 3.2 && vbs_pt_high < 40) ) \
                        && ( 1 -1*( abs(vjet_eta_low) > 2.5 && abs(vjet_eta_low) < 3.2 && vjet_pt_low < 40) ) \
                        && ( 1 -1*( abs(vjet_eta_high) > 2.5 && abs(vjet_eta_high) < 3.2 && vjet_pt_high < 40) ) \
                       '

cuts["ele_jetpt50"] = 'abs(Lepton_pdgId[0])==11 \
                        && Lepton_pt[0] >= 40   \
                        && ( 1 -1*( abs(vbs_eta_low) > 2.5 && abs(vbs_eta_low) < 3.2 && vbs_pt_low < 50) ) \
                        && ( 1 -1*( abs(vbs_eta_high) > 2.5 && abs(vbs_eta_high) < 3.2 && vbs_pt_high < 50) ) \
                        && ( 1 -1*( abs(vjet_eta_low) > 2.5 && abs(vjet_eta_low) < 3.2 && vjet_pt_low < 50) ) \
                        && ( 1 -1*( abs(vjet_eta_high) > 2.5 && abs(vjet_eta_high) < 3.2 && vjet_pt_high < 50) ) \
                       '

cuts["mu_jetpt50"] = 'abs(Lepton_pdgId[0])==13 \
                        && Lepton_pt[0] >= 30   \
                        && ( 1 -1*( abs(vbs_eta_low) > 2.5 && abs(vbs_eta_low) < 3.2 && vbs_pt_low < 50) ) \
                        && ( 1 -1*( abs(vbs_eta_high) > 2.5 && abs(vbs_eta_high) < 3.2 && vbs_pt_high < 50) ) \
                        && ( 1 -1*( abs(vjet_eta_low) > 2.5 && abs(vjet_eta_low) < 3.2 && vjet_pt_low < 50) ) \
                        && ( 1 -1*( abs(vjet_eta_high) > 2.5 && abs(vjet_eta_high) < 3.2 && vjet_pt_high < 50) ) \
                       '

cuts["ele_jetpt60"] = 'abs(Lepton_pdgId[0])==11 \
                        && Lepton_pt[0] >= 40   \
                        && ( 1 -1*( abs(vbs_eta_low) > 2.5 && abs(vbs_eta_low) < 3.2 && vbs_pt_low < 60) ) \
                        && ( 1 -1*( abs(vbs_eta_high) > 2.5 && abs(vbs_eta_high) < 3.2 && vbs_pt_high < 60) ) \
                        && ( 1 -1*( abs(vjet_eta_low) > 2.5 && abs(vjet_eta_low) < 3.2 && vjet_pt_low < 60) ) \
                        && ( 1 -1*( abs(vjet_eta_high) > 2.5 && abs(vjet_eta_high) < 3.2 && vjet_pt_high < 60) ) \
                       '

cuts["mu_jetpt60"] = 'abs(Lepton_pdgId[0])==13 \
                        && Lepton_pt[0] >= 30   \
                        && ( 1 -1*( abs(vbs_eta_low) > 2.5 && abs(vbs_eta_low) < 3.2 && vbs_pt_low < 60) ) \
                        && ( 1 -1*( abs(vbs_eta_high) > 2.5 && abs(vbs_eta_high) < 3.2 && vbs_pt_high < 60) ) \
                        && ( 1 -1*( abs(vjet_eta_low) > 2.5 && abs(vjet_eta_low) < 3.2 && vjet_pt_low < 60) ) \
                        && ( 1 -1*( abs(vjet_eta_high) > 2.5 && abs(vjet_eta_high) < 3.2 && vjet_pt_high < 60) ) \
                       '

cuts["ele_jetpt80"] = 'abs(Lepton_pdgId[0])==11 \
                        && Lepton_pt[0] >= 40   \
                        && ( 1 -1*( abs(vbs_eta_low) > 2.5 && abs(vbs_eta_low) < 3.2 && vbs_pt_low < 80) ) \
                        && ( 1 -1*( abs(vbs_eta_high) > 2.5 && abs(vbs_eta_high) < 3.2 && vbs_pt_high < 80) ) \
                        && ( 1 -1*( abs(vjet_eta_low) > 2.5 && abs(vjet_eta_low) < 3.2 && vjet_pt_low < 80) ) \
                        && ( 1 -1*( abs(vjet_eta_high) > 2.5 && abs(vjet_eta_high) < 3.2 && vjet_pt_high < 80) ) \
                       '

cuts["mu_jetpt80"] = 'abs(Lepton_pdgId[0])==13 \
                        && Lepton_pt[0] >= 30   \
                        && ( 1 -1*( abs(vbs_eta_low) > 2.5 && abs(vbs_eta_low) < 3.2 && vbs_pt_low < 80) ) \
                        && ( 1 -1*( abs(vbs_eta_high) > 2.5 && abs(vbs_eta_high) < 3.2 && vbs_pt_high < 80) ) \
                        && ( 1 -1*( abs(vjet_eta_low) > 2.5 && abs(vjet_eta_low) < 3.2 && vjet_pt_low < 80) ) \
                        && ( 1 -1*( abs(vjet_eta_high) > 2.5 && abs(vjet_eta_high) < 3.2 && vjet_pt_high < 80) ) \
                       '

cuts["ele_jetpt100"] = 'abs(Lepton_pdgId[0])==11 \
                        && Lepton_pt[0] >= 40   \
                        && ( 1 -1*( abs(vbs_eta_low) > 2.5 && abs(vbs_eta_low) < 3.2 && vbs_pt_low < 100) ) \
                        && ( 1 -1*( abs(vbs_eta_high) > 2.5 && abs(vbs_eta_high) < 3.2 && vbs_pt_high < 100) ) \
                        && ( 1 -1*( abs(vjet_eta_low) > 2.5 && abs(vjet_eta_low) < 3.2 && vjet_pt_low < 100) ) \
                        && ( 1 -1*( abs(vjet_eta_high) > 2.5 && abs(vjet_eta_high) < 3.2 && vjet_pt_high < 100) ) \
                       '

cuts["mu_jetpt100"] = 'abs(Lepton_pdgId[0])==13 \
                        && Lepton_pt[0] >= 30   \
                        && ( 1 -1*( abs(vbs_eta_low) > 2.5 && abs(vbs_eta_low) < 3.2 && vbs_pt_low < 100) ) \
                        && ( 1 -1*( abs(vbs_eta_high) > 2.5 && abs(vbs_eta_high) < 3.2 && vbs_pt_high < 100) ) \
                        && ( 1 -1*( abs(vjet_eta_low) > 2.5 && abs(vjet_eta_low) < 3.2 && vjet_pt_low < 100) ) \
                        && ( 1 -1*( abs(vjet_eta_high) > 2.5 && abs(vjet_eta_high) < 3.2 && vjet_pt_high < 100) ) \
                       '