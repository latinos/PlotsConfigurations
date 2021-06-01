#cuts = {}
# Aliases in supercut doesnt seem to work!

supercut = 'mll>12 \
            && Lepton_pt[0]>25 && Lepton_pt[1]>10 \
            && Lepton_pdgId[0]*Lepton_pdgId[1]==-11*13 \
            && (abs(Lepton_pdgId[1] == 13) || Lepton_pt[1]>13) \
            && Alt$(Lepton_pt[2],0)<10 \
            && ptll>30 \
            && PuppiMET_pt>20 \
            && hm > 0  \
            && nCleanFatJet>0 \
            '


cuts['hww2l2v_13TeV_of2j_Vh'] = 'bVeto && CleanFatJet_pt[0]>=200 && abs(CleanFatJet_eta[0])<2.4 \
                                && (mV[0]>70 && mV[0]<110) \
                                && (mth>=30 && mth<125)'

cuts['hww2l2v_13TeV_of2j_Vh_hmip']  = 'bVeto && CleanFatJet_pt[0]>=200 && abs(CleanFatJet_eta[0])<2.4 \
                                    && (mV[0]>70 && mV[0]<110) \
                                    && (mth>=30 && mth<125) && kd_Vh_mixhm > 0'

cuts['hww2l2v_13TeV_of2j_Vh_hmin']  = 'bVeto && CleanFatJet_pt[0]>=200 && abs(CleanFatJet_eta[0])<2.4 \
                                    && (mV[0]>70 && mV[0]<110) \
                                    && (mth>=30 && mth<125) && kd_Vh_mixhm < 0'

cuts['hww2l2v_13TeV_of2j_Vh_hpip']  = 'bVeto && CleanFatJet_pt[0]>=200 && abs(CleanFatJet_eta[0])<2.4 \
                                    && (mV[0]>70 && mV[0]<110) \
                                    && (mth>=30 && mth<125) && kd_Vh_mixhp > -0.4'#-0.4

cuts['hww2l2v_13TeV_of2j_Vh_hpin']  = 'bVeto && CleanFatJet_pt[0]>=200 && abs(CleanFatJet_eta[0]) \
                                    && (mV[0]>70 && mV[0]<110)\
                                    && (mth>=30 && mth<125) && kd_Vh_mixhp < -0.4'#-0.4

# Top control region

cuts['hww2l2v_13TeV_top_of2j'] = 'topcr'

# DY control region

cuts['hww2l2v_13TeV_dytt_of2j'] = 'mth < 60. && bVeto && (mV[0]<70 || mV[0]>110) && mll > 40. && mll < 80.'

#cuts['hww2l2v_13TeV_dy'] = 'mth < 60. && bVeto && mll > 40. && mll < 80.'

