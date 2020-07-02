# cuts

supercut = 'mll>12 \
            && Lepton_pt[0]>25 && Lepton_pt[1]>10 \
            && Lepton_pdgId[0]*Lepton_pdgId[1]==-11*13 \
            && (abs(Lepton_pdgId[1] == 13) || Lepton_pt[1]>13) \
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

cuts['hww2l2v_13TeV_of2j_DNN_vbf']  = ' (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && vbflike \
                                      && bVeto \
                                      && mtw2>30 \
                                      '


cuts['hww2l2v_13TeV_of2j_DNN_top']  = ' (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && toplike \
                                      && bVeto \
                                      && mtw2>30 \
                                      '


cuts['hww2l2v_13TeV_of2j_DNN_ww']  = ' (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && wwlike \
                                      && bVeto \
                                      && mtw2>30 \
                                      '


cuts['hww2l2v_13TeV_of2j_DNN_ggh']  = ' (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && gghlike \
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

