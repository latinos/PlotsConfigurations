# cuts

supercut = 'mll>12 \
            && Lepton_pt[0]>25 && Lepton_pt[1]>10 \
            && Lepton_pdgId[0]*Lepton_pdgId[1]==-11*13 \
            && Alt$(Lepton_pt[2],0)<10 \
            && Sum$(CleanJet_pt>30)==2\
            && CleanJet_pt[0]>30 && CleanJet_pt[1]>30 \
            && ptll>30 \
            && PuppiMET_pt>20 \
            && mjj>200 \
            detajj>3.5 \
            '

## Signal regions


cuts['hww2l2v_13TeV_of2j_vbf']  = '(abs(Lepton_pdgId[0] == 13) || Lepton_pt[1]>13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && bVeto \
                                      '



cuts['hww2l2v_13TeV_of2j_DNN_vbf_cut_1']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                            && (mth>=60 && mth<125) \
                                            && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                            && (evaluate_multiclass(Entry$,1))<0.1 \
                                            && (evaluate_multiclass(Entry$,2))<0.1 \
                                            && bVeto \
                                            '

cuts['hww2l2v_13TeV_of2j_DNN_vbf_cut_2']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                            && (mth>=60 && mth<125) \
                                            && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                            && (evaluate_multiclass(Entry$,1))>0.1 \
                                            && (evaluate_multiclass(Entry$,2))<0.1 \
                                            && bVeto \
                                            '
cuts['hww2l2v_13TeV_of2j_DNN_vbf_cut_3']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                            && (mth>=60 && mth<125) \
                                            && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                            && (evaluate_multiclass(Entry$,1))<0.1 \
                                            && (evaluate_multiclass(Entry$,2))>0.1 \
                                            && bVeto \
                                            '
cuts['hww2l2v_13TeV_of2j_DNN_vbf_cut_4']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                            && (mth>=60 && mth<125) \
                                            && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                            && (evaluate_multiclass(Entry$,1))>0.1 \
                                            && (evaluate_multiclass(Entry$,2))>0.1 \
                                            && bVeto \
                                            '


cuts['hww2l2v_13TeV_of2j_DNN_vbf']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && (evaluate_multiclass(Entry$,0))>(evaluate_multiclass(Entry$,1)) \
                                      && (evaluate_multiclass(Entry$,0))>(evaluate_multiclass(Entry$,2)) \
                                      && (evaluate_multiclass(Entry$,0))>(evaluate_multiclass(Entry$,3)) \
                                      && bVeto \
                                      '


cuts['hww2l2v_13TeV_of2j_DNN_top']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && (evaluate_multiclass(Entry$,1))>(evaluate_multiclass(Entry$,0)) \
                                      && (evaluate_multiclass(Entry$,1))>(evaluate_multiclass(Entry$,2)) \
                                      && (evaluate_multiclass(Entry$,1))>(evaluate_multiclass(Entry$,3)) \
                                      && bVeto \
                                      '


cuts['hww2l2v_13TeV_of2j_DNN_ww']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && (evaluate_multiclass(Entry$,2))>(evaluate_multiclass(Entry$,0)) \
                                      && (evaluate_multiclass(Entry$,2))>(evaluate_multiclass(Entry$,1)) \
                                      && (evaluate_multiclass(Entry$,2))>(evaluate_multiclass(Entry$,3)) \
                                      && bVeto \
                                      '


cuts['hww2l2v_13TeV_of2j_DNN_ggh']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && (evaluate_multiclass(Entry$,3))>(evaluate_multiclass(Entry$,0)) \
                                      && (evaluate_multiclass(Entry$,3))>(evaluate_multiclass(Entry$,1)) \
                                      && (evaluate_multiclass(Entry$,3))>(evaluate_multiclass(Entry$,2)) \
                                      && bVeto \
                                      '

## Control regions

cuts['hww2l2v_13TeV_top_of2j']  = '    (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
                                    && (detajj>3.5 && mjj>400) \
                                    && topcr \
                                  '
cuts['hww2l2v_13TeV_dytt_of2j']  = '   (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
                                    && mth<60 \
                                    && mll>40 && mll<80 \
                                    && (detajj>3.5 && mjj>400) \
                                    && bVeto \
                                   '

