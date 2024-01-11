# cuts
supercut = 'Lepton_pt[0]>25 && Lepton_pt[1]>10 && mll>12 && Lepton_pdgId[0]*Lepton_pdgId[1]==-11*13 && (abs(Lepton_pdgId[1] == 13) || Lepton_pt[1]>13) && Alt$(Lepton_pt[2],0)<10 && ptll>30 && PuppiMET_pt>20 && hm > 0'

## Signal regions

#cuts['hww2l2v_13TeV_of2j_ggh']  = 'mth>=60 && mth<125 && mll<55 && abs(CleanJet_eta[0])<4.7 && abs(CleanJet_eta[1])<4.7 && bVeto && mtw2>30 && mjj>120 && Sum$(CleanJet_pt>30)==2'

#cuts['hww2l2v_13TeV_of2j_gght']  = 'mth>=60 && mth<125 && mll<55 && abs(CleanJet_eta[0])<4.7 && abs(CleanJet_eta[1])<4.7 && bVeto && mtw2>30 && mjj>300 && Sum$(CleanJet_pt>30)==2'

cuts['hww2l2v_13TeV_of2j_ggh_thmip']  = 'mth>=60 && mth<125 && mll<55 && abs(CleanJet_eta[0])<4.7 && abs(CleanJet_eta[1])<4.7 && bVeto && mtw2>30 && mjj>120 && kd_ggh_mixhm>0 && Sum$(CleanJet_pt>30)==2'

cuts['hww2l2v_13TeV_of2j_ggh_thmin']  = 'mth>=60 && mth<125 && mll<55 && abs(CleanJet_eta[0])<4.7 && abs(CleanJet_eta[1])<4.7 && bVeto && mtw2>30 && mjj>120 && kd_ggh_mixhm<0 && Sum$(CleanJet_pt>30)==2'

#cuts['hww2l2v_13TeV_of2j_A']  = '(mth>=60 && mth<150) && mll<90 && abs(CleanJet_eta[0])<4.7 && abs(CleanJet_eta[1])<4.7 && bVeto && Sum$(CleanJet_pt>30)==2 && ptll>20 && dr_jj>1.0' 

## Control regions

cuts['hww2l2v_13TeV_top_of2j']  = 'topcr && Sum$(CleanJet_pt>30)==2'

cuts['hww2l2v_13TeV_dytt_of2j']  = 'mth<60 && mll>40 && mll<80 && bVeto && Sum$(CleanJet_pt>30)==2'

cuts['hww2l2v_13TeV_WW_of2j'] = 'mll>106.2 && (mth>=60 && mth<125) && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && bVeto && mtw2>30 && Sum$(CleanJet_pt>30)==2'
