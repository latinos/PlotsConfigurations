# cuts
# Looking at events with no fat jets and 4 paired jets with >= 30GeV
# MET > 30 GeV already applied : to be fixed

supercut = '(nLepton==1 && Lepton_pt[0]>30 ) \
            && (  Lepton_isTightElectron_mvaFall17V2Iso_WP90[0] > 0.5 \
                    || Lepton_isTightMuon_cut_Tight_HWWW[0] > 0.5) \
                && Alt$(Lepton_pt[1],0)<=10 && Alt$(Lepton_isLoose[1],1)>0.5\
                && ( Alt$(Lepton_isTightElectron_mvaFall17V2Iso_WP90[1], 0) < 0.5 \
                && Alt$(Lepton_isTightMuon_cut_Tight_HWWW[1],0) < 0.5 ) \
            && VBS_category ==1    \
            && vbs_pt_low >= 30    \
            && vjet_pt_low >= 30    \
           '

cuts["lowen_ele"] = 'abs(Lepton_pdgId[0])==11 \
                        && Lepton_pt[0] >= 40 \
                        '

cuts["lowen_mu"] =  'abs(Lepton_pdgId[0])==13  \
                        && Lepton_pt[0] >= 30 \
                        '

cuts["lowen_ele_bveto"] = 'abs(Lepton_pdgId[0])==11 \
                        && Lepton_pt[0] >= 40 \
                        && bVeto \
                        '

cuts["lowen_mu_bveto"] =  'abs(Lepton_pdgId[0])==13 \
                        && Lepton_pt[0] >= 30 \
                        && bVeto  \
                        '

# No associated jets in the horn
cuts["lowen_ele_looseVBS"] = 'abs(Lepton_pdgId[0])==11 \
                                && Lepton_pt[0] >= 40   \
                                && mjj_vbs >=300    \
                                && deltaeta_vbs >= 2  \
                                && bVeto \
                                '

cuts["lowen_mu_looseVBS"] = 'abs(Lepton_pdgId[0])==13 \
                         && Lepton_pt[0] >= 30    \
                         && mjj_vbs >=300    \
                         && deltaeta_vbs >= 2  \
                         && bVeto \
                        '

