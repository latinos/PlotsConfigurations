# cuts

supercut = 'mll>12 \
            && Lepton_pt[0]>25 && Lepton_pt[1]>13 \
            && Lepton_pdgId[0]*Lepton_pdgId[1]==-11*13 \
            && Alt$(Lepton_pt[2],0)<10 \
            && Sum$(CleanJet_pt>30)==2\
            && ptll>30 \
            && PuppiMET_pt>20 \
            && mjj>200 \
            '

## Signal regions


cuts['hww2l2v_13TeV_of2j_vbf']  = ' (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && bVeto \
                                      && mtw2>30 \
                                      '

'''

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
'''

cuts['hww2l2v_13TeV_of2j_DNN_vbf']  = ' (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && (evaluate_multiclass(Entry$,0))>(evaluate_multiclass(Entry$,1)) \
                                      && (evaluate_multiclass(Entry$,0))>(evaluate_multiclass(Entry$,2)) \
                                      && (evaluate_multiclass(Entry$,0))>(evaluate_multiclass(Entry$,3)) \
                                      && bVeto \
                                      && mtw2>30 \
                                      '


cuts['hww2l2v_13TeV_of2j_DNN_top']  = ' (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && (evaluate_multiclass(Entry$,1))>(evaluate_multiclass(Entry$,0)) \
                                      && (evaluate_multiclass(Entry$,1))>(evaluate_multiclass(Entry$,2)) \
                                      && (evaluate_multiclass(Entry$,1))>(evaluate_multiclass(Entry$,3)) \
                                      && bVeto \
                                      && mtw2>30 \
                                      '


cuts['hww2l2v_13TeV_of2j_DNN_ww']  = ' (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && (evaluate_multiclass(Entry$,2))>(evaluate_multiclass(Entry$,0)) \
                                      && (evaluate_multiclass(Entry$,2))>(evaluate_multiclass(Entry$,1)) \
                                      && (evaluate_multiclass(Entry$,2))>(evaluate_multiclass(Entry$,3)) \
                                      && bVeto \
                                      && mtw2>30 \
                                      '


cuts['hww2l2v_13TeV_of2j_DNN_ggh']  = ' (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && (evaluate_multiclass(Entry$,3))>(evaluate_multiclass(Entry$,0)) \
                                      && (evaluate_multiclass(Entry$,3))>(evaluate_multiclass(Entry$,1)) \
                                      && (evaluate_multiclass(Entry$,3))>(evaluate_multiclass(Entry$,2)) \
                                      && bVeto \
                                      && mtw2>30 \
                                      '

## Control regions

cuts['hww2l2v_13TeV_top_of2j']  = ' topcr \
                                  '

cuts['hww2l2v_13TeV_dytt_of2j']  = ' mth<60 \
                                    && mll>40 && mll<80 \
                                    && bVeto \
                                   '

