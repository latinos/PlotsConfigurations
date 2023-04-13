# cuts
supercut = 'Lepton_pt[0]>25 && Lepton_pt[1]>13 \
            && Lepton_pdgId[0]*Lepton_pdgId[1]==-11*13 \
            && Alt$(Lepton_pt[2],0)<10 \
            && ptll>30 && mll>12 \
            && PuppiMET_pt>20 \
            && nCleanFatJet>0 \
            '

cuts['hww2l2v_13TeV_of2j_Vh'] = 'mll<76.2 && bVeto && FatJet_pt_nom[CleanFatJet_jetIdx[0]]>=200 && abs(CleanFatJet_eta[0])<2.4 \
                                && (FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]>65 && FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]<105) && (mth>=60 && mth<125)'

cuts['hww2l2v_13TeV_of2j_Vh_hip'] = 'mll<76.2 && bVeto && FatJet_pt_nom[CleanFatJet_jetIdx[0]]>=200 && abs(CleanFatJet_eta[0])<2.4 \
                                && (FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]>65 && FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]<105) && (mth>=60 && mth<125) && kd_Vh_mixhm>=0'

cuts['hww2l2v_13TeV_of2j_Vh_hin'] = 'mll<76.2 && bVeto && FatJet_pt_nom[CleanFatJet_jetIdx[0]]>=200 && abs(CleanFatJet_eta[0])<2.4 \
                                && (FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]>65 && FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]<105) && (mth>=60 && mth<125) && kd_Vh_mixhm<0'

## Control regions

cuts['hww2l2v_13TeV_top_fj']  = 'topcr'

#cuts['hww2l2v_13TeV_dytt_of2j']  = 'mth<60 && mll>40 && mll<80 && bVeto && Sum$(CleanJet_pt>30)==2'

#cuts['hww2l2v_13TeV_WW_of2j'] = 'mll>106.2 && (mth>=60 && mth<125) && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && bVeto && mtw2>30 && Sum$(CleanJet_pt>30)==2'
