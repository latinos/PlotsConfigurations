#cuts = {}
# Aliases in supercut doesnt seem to work!
#            && hm > 0  \not used for boosted category --> also changed in getconstant.cc macro

supercut = 'Lepton_pt[0]>25 && Lepton_pt[1]>13 \
            && Lepton_pdgId[0]*Lepton_pdgId[1]==-11*13 \
            && Alt$(Lepton_pt[2],0)<10 \
            && ptll>30 \
            && PuppiMET_pt>20 \
            && nCleanFatJet>0 \
            '

cuts['hww2l2v_13TeV_of2j_Vh'] = '(mll>12) && bVeto && FatJet_pt_nom[CleanFatJet_jetIdx[0]]>=200 && abs(CleanFatJet_eta[0])<2.4 && (FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]>70 && FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]<110) && (mth>=60)'

cuts['hww2l2v_13TeV_of2j_Vh_hmip']  = '(mll>12) && bVeto && FatJet_pt_nom[CleanFatJet_jetIdx[0]]>=200 && abs(CleanFatJet_eta[0])<2.4 && (FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]>70 && FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]<110) && (mth>=60) && kd_Vh_mixhm > 0'

cuts['hww2l2v_13TeV_of2j_Vh_hmin']  = '(mll>12) && bVeto && FatJet_pt_nom[CleanFatJet_jetIdx[0]]>=200 && abs(CleanFatJet_eta[0])<2.4 && (FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]>70 && FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]<110) && (mth>=60) && kd_Vh_mixhm < 0'

cuts['hww2l2v_13TeV_of2j_Vh_hpip']  = '(mll>12) && bVeto && FatJet_pt_nom[CleanFatJet_jetIdx[0]]>=200 && abs(CleanFatJet_eta[0])<2.4 && (FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]>70 && FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]<110) && (mth>=60) && kd_Vh_mixhp > -0.4'

cuts['hww2l2v_13TeV_of2j_Vh_hpin']  = '(mll>12) && bVeto && FatJet_pt_nom[CleanFatJet_jetIdx[0]]>=200 && abs(CleanFatJet_eta[0])<2.4 && (FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]>70 && FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]<110) && (mth>=60) && kd_Vh_mixhp < -0.4'

cuts['hww2l2v_13TeV_top_fj'] = 'topcr'

cuts['hww2l2v_13TeV_dytt_fj'] = 'mth < 60. && bVeto && (FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]<70 || FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]>110) && mll > 40. && mll < 80.'

#cuts['hww2l2v_13TeV_dytt'] =  'dycr'

#cuts['hww2l2v_13TeV_dytt_nocfj'] =  'dycr && nCleanFatJet==0'

#cuts['hww2l2v_13TeV_dytt_of2j'] = 'dycr && nCleanJet>1 && nCleanFatJet==0'




