# cuts
#(mth>=60 && mth<125) && ((mll>12 && mll<76.2) || mll>106.2)
supercut = 'Lepton_pt[0]>25 && Lepton_pt[1]>10 && mll>12 && Lepton_pdgId[0]*Lepton_pdgId[1]==-11*13 && (abs(Lepton_pdgId[1] == 13) || Lepton_pt[1]>13) && Alt$(Lepton_pt[2],0)<10 && ptll>30 && PuppiMET_pt>20 && hm > 0'

## Signal regions

cuts['hww2l2v_13TeV_of2j_vbf']  = '(mth>=60 && mth<125) && mll<76.2 && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && bVeto && mtw2>30 && mjj>120 && Sum$(CleanJet_pt>30)==2 && nCleanFatJet==0'

cuts['hww2l2v_13TeV_of2j_vbf_hmip']  = '(mth>=60 && mth<125) && mll<76.2 && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && bVeto && mtw2>30 && mjj>120 && kd_vbf_mixhm>0 && Sum$(CleanJet_pt>30)==2 && nCleanFatJet==0'

cuts['hww2l2v_13TeV_of2j_vbf_hmin']  = '(mth>=60 && mth<125) && mll<76.2 && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && bVeto && mtw2>30 && mjj>120 && kd_vbf_mixhm<0 && Sum$(CleanJet_pt>30)==2 && nCleanFatJet==0'

cuts['hww2l2v_13TeV_of2j_vbf_hpip']  = '(mth>=60 && mth<125) && mll<76.2 && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && bVeto && mtw2>30 && mjj>120 && kd_vbf_mixhp>0.8 && Sum$(CleanJet_pt>30)==2 && nCleanFatJet==0'

cuts['hww2l2v_13TeV_of2j_vbf_hpin']  = '(mth>=60 && mth<125) && mll<76.2 && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && bVeto && mtw2>30 && mjj>120 && kd_vbf_mixhp<0.8 && Sum$(CleanJet_pt>30)==2 && nCleanFatJet==0'

cuts['hww2l2v_13TeV_of2j_vh']  = '(mth>=60 && mth<125) && mll<76.2 && (abs(CleanJet_eta[0])<2.4) && (abs(CleanJet_eta[1])<2.4) && bVeto && mtw2>30 && (mjj>60 && mjj<120) && Sum$(CleanJet_pt>30)==2 && nCleanFatJet==0'

cuts['hww2l2v_13TeV_of2j_vh_hmip']  = '(mth>=60 && mth<125) && mll<76.2 && (abs(CleanJet_eta[0])<2.4) && (abs(CleanJet_eta[1])<2.4) && bVeto && mtw2>30 && (mjj>60 && mjj<120) && kd_vh_mixhm>0 && Sum$(CleanJet_pt>30)==2 && nCleanFatJet==0'

cuts['hww2l2v_13TeV_of2j_vh_hmin']  = '(mth>=60 && mth<125) && mll<76.2 && (abs(CleanJet_eta[0])<2.4) && (abs(CleanJet_eta[1])<2.4) && bVeto && mtw2>30 && (mjj>60 && mjj<120) && kd_vh_mixhm<0 && Sum$(CleanJet_pt>30)==2 && nCleanFatJet==0'

cuts['hww2l2v_13TeV_of2j_vh_hpip']  = '(mth>=60 && mth<125) && mll<76.2 && (abs(CleanJet_eta[0])<2.4) && (abs(CleanJet_eta[1])<2.4) && bVeto && mtw2>30 && (mjj>60 && mjj<120) && kd_vh_mixhp>-0.8 && Sum$(CleanJet_pt>30)==2 && nCleanFatJet==0'

cuts['hww2l2v_13TeV_of2j_vh_hpin']  = '(mth>=60 && mth<125) && mll<76.2 && (abs(CleanJet_eta[0])<2.4) && (abs(CleanJet_eta[1])<2.4) && bVeto && mtw2>30 && (mjj>60 && mjj<120) && kd_vh_mixhp<-0.8 && Sum$(CleanJet_pt>30)==2 && nCleanFatJet==0'

cuts['hww2l2v_13TeV_of2j_ggh_thmip']  = '(mth>=60 && mth<125) && mll<76.2 && abs(CleanJet_eta[0])<4.7 && abs(CleanJet_eta[1])<4.7 && bVeto && mtw2>30 && mjj>200 && kd_ggh_mixhm>0 && Sum$(CleanJet_pt>30)==2 && nCleanFatJet==0'

cuts['hww2l2v_13TeV_of2j_ggh_thmin']  = '(mth>=60 && mth<125) && mll<76.2 && abs(CleanJet_eta[0])<4.7 && abs(CleanJet_eta[1])<4.7 && bVeto && mtw2>30 && mjj>200 && kd_ggh_mixhm<0 && Sum$(CleanJet_pt>30)==2 && nCleanFatJet==0'

cuts['hww2l2v_13TeV_of2j_ggh_untagged'] = '(mth>=60 && mth<125) && mll<76.2 && bVeto && mtw2>30 && mjj<200 && nCleanJet<=2 && nCleanFatJet==0'

## Control regions
cuts['hww2l2v_13TeV_WW_of2j'] = 'mll>106.2 && (mth>=60 && mth<125) && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && bVeto && mtw2>30 && Sum$(CleanJet_pt>30)==2'

cuts['hww2l2v_13TeV_top_of2j']  = 'topcr && Sum$(CleanJet_pt>30)==2 && nCleanFatJet==0'

cuts['hww2l2v_13TeV_dytt_of2j']  = 'mth<60 && mll>40 && mll<80 && bVeto && Sum$(CleanJet_pt>30)==2'

cuts['hww2l2v_13TeV_top_of2j_nofjveto']  = 'topcr && Sum$(CleanJet_pt>30)==2'

#cuts['hww2l2v_13TeV_of2j_ggh_t']  = 'hm>0 && (mth>=60 && mth<125) && (mll<76.2 || mll>106.2) && abs(CleanJet_eta[0])<4.7 && abs(CleanJet_eta[1])<4.7 && bVeto && mtw2>30 && mjj>300'

#cuts['hww2l2v_13TeV_of2j_ggh_l']  = 'hm>0 && (mth>=60 && mth<125) && (mll<76.2 || mll>106.2) && abs(CleanJet_eta[0])<4.7 && abs(CleanJet_eta[1])<4.7 && bVeto && mtw2>30 && mjj<300'

#cuts['hww2l2v_13TeV_of2j_ggh_lhmip']  = 'hm>0 && (mth>=60 && mth<125) && (mll<76.2 || mll>106.2) && abs(CleanJet_eta[0])<4.7 && abs(CleanJet_eta[1])<4.7 && bVeto && mtw2>30 && mjj<300 && kd_ggh_mixhm>0'

#cuts['hww2l2v_13TeV_of2j_ggh_lhmin']  = 'hm>0 && (mth>=60 && mth<125) && (mll<76.2 || mll>106.2) && abs(CleanJet_eta[0])<4.7 && abs(CleanJet_eta[1])<4.7 && bVeto && mtw2>30 && mjj<300 && kd_ggh_mixhm<0'

