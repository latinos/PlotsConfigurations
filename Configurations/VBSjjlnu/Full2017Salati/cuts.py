# cuts
# Looking only at FatJet category with two jets of 30 JeV
# Removing events with the two highest pt jets are between [2.5,3.2] eta

supercut = '(nLepton==1 && Lepton_pt[0]>30 ) \
            && (  Lepton_isTightElectron_mvaFall17V2Iso_WP90[0] > 0.5 \
                    || Lepton_isTightMuon_cut_Tight_HWWW[0] > 0.5) \
            && VBS_category == 0  \
            && vbs_pt_high >= 30  \
            && vbs_pt_low >= 30    \
            && (vbs_eta_high <= 2.5 || vbs_eta_high >= 3.2 )    \
            && (vbs_eta_low <= 2.5 || vbs_eta_low >= 3.2)   \
            && bVeto                            \
            && FatJet_mass > 60 && FatJet_mass < 110
           '
# Vbs jets are the jets extracted by MaxMjj association from the CleanJet after FatJet cleaning

cuts["fatjet_ele"] = 'abs(Lepton_pdgId[0])==11 \
                        && Lepton_pt[0] >= 40 \
                        '

cuts["fatjet_mu"] = 'abs(Lepton_pdgId[0])==13  \
                        && Lepton_pt[0] >= 30 \
                        '

cuts["fatjet_ele_looseVBS"] = 'abs(Lepton_pdgId[0])==11 \
                        && Lepton_pt[0] >= 40 \
                        && mjj_vbs >=300    \
                        && deltaeta_vbs >= 2  \
                        '

cuts["fatjet_mu_looseVBS"] = 'abs(Lepton_pdgId[0])==13 \
                        && Lepton_pt[0] >= 30 \
                        && mjj_vbs >=300    \
                        && deltaeta_vbs >= 2  \
                        '