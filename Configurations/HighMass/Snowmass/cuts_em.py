# cuts

supercut = '   mll>20 \
            && Lepton_pt[0]>30 \
            && Lepton_pt[1]>20 \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 30 \
           '

## Default Signal regions

cuts['hww2l2v_13TeV_em_0j']  = '   mth>60 \
                                && Alt$(CleanJet_pt[0],0)<30 \
                                && !VBFcut \
                                && bVeto \
                                && finalstate \
                              '

cuts['hww2l2v_13TeV_em_1j']  = '   mth>60 \
                                && Alt$(CleanJet_pt[0],0)>=30 \
                                && Alt$(CleanJet_pt[1],0)< 30 \
                                && !VBFcut \
                                && bVeto \
                                && finalstate \
                              '

cuts['hww2l2v_13TeV_em_2j']  = '   mth>60 \
                                && Alt$(CleanJet_pt[0],0)>=30 \
                                && Alt$(CleanJet_pt[1],0)>=30 \
                                && !VBFcut \
                                && bVeto \
                                && finalstate \
                              '

cuts['hww2l2v_13TeV_em_ggh']  = '   mth>60 \
                                && !VBFcut \
                                && bVeto \
                                && finalstate \
                              '

cuts['hww2l2v_13TeV_em_vbf']  = '   mth>60 \
                                && VBFcut \
                                && bVeto \
                                && finalstate \
                              '

## Default Top control regions
cuts['hww2l2v_13TeV_em_top_0j']  = '   mth>60 \
                                    && Alt$(CleanJet_pt[0],0)<30 \
                                    && !VBFcut \
                                    && bReq0j \
                                    && finalstate \
                                   '

cuts['hww2l2v_13TeV_em_top_1j']  = '   mth>60 \
                                    && Alt$(CleanJet_pt[0],0)>=30 \
                                    && Alt$(CleanJet_pt[1],0)< 30 \
                                    && !VBFcut \
                                    && bReq \
                                    && finalstate \
                                   '

cuts['hww2l2v_13TeV_em_top_2j']  = '   mth>60 \
                                    && Alt$(CleanJet_pt[0],0)>=30 \
                                    && Alt$(CleanJet_pt[1],0)>=30 \
                                    && !VBFcut \
                                    && bReq \
                                    && finalstate \
                                   '

cuts['hww2l2v_13TeV_em_top_ggh']  = '   mth>60 \
                                    && !VBFcut \
                                    && bReq \
                                    && finalstate \
                                   '

cuts['hww2l2v_13TeV_em_top_vbf']  = '   mth>60 \
                                     && VBFcut \
                                     && bReq \
                                     && finalstate \
                                    '


## Default DYtt control regions
cuts['hww2l2v_13TeV_em_dy_0j']  = '   mth<60 \
                                   && mll<90 \
                                   && Alt$(CleanJet_pt[0],0)<30 \
                                   && !VBFcut \
                                   && bVeto \
                                   && finalstate \
                                  '

cuts['hww2l2v_13TeV_em_dy_1j']  = '   mth<60 \
                                   && mll<90 \
                                   && Alt$(CleanJet_pt[0],0)>=30 \
                                   && Alt$(CleanJet_pt[1],0)< 30 \
                                   && !VBFcut \
                                   && bVeto \
                                   && finalstate \
                                  '

cuts['hww2l2v_13TeV_em_dy_2j']  = '   mth<60 \
                                   && mll<90 \
                                   && Alt$(CleanJet_pt[0],0)>=30 \
                                   && Alt$(CleanJet_pt[1],0)>=30 \
                                   && !VBFcut \
                                   && bVeto \
                                   && finalstate \
                                  '

cuts['hww2l2v_13TeV_em_dy_ggh']  = '   mth<60 \
                                   && mll<90 \
                                   && !VBFcut \
                                   && bVeto \
                                   && finalstate \
                                  '

cuts['hww2l2v_13TeV_em_dy_vbf']  = '   mth<60 \
                                    && mll<90 \
                                    && VBFcut \
                                    && bVeto \
                                    && finalstate \
                                   '

'''
## High mass Signal regions

cuts['hww2l2v_13TeV_em_high0j']  = '   mth>60 \
                                    && Alt$(CleanJet_pt[0],0)<30 \
                                    && !VBFcut_HM \
                                    && bVeto \
                                    && finalstate \
                                    && HighMass \
                              '

cuts['hww2l2v_13TeV_em_high1j']  = '   mth>60 \
                                    && Alt$(CleanJet_pt[0],0)>=30 \
                                    && Alt$(CleanJet_pt[1],0)< 30 \
                                    && !VBFcut_HM \
                                    && bVeto \
                                    && finalstate \
                                    && HighMass \
                              '

cuts['hww2l2v_13TeV_em_high2j']  = '   mth>60 \
                                    && Alt$(CleanJet_pt[0],0)>=30 \
                                    && Alt$(CleanJet_pt[1],0)>=30 \
                                    && !VBFcut_HM \
                                    && bVeto \
                                    && finalstate \
                                    && HighMass \
                              '

cuts['hww2l2v_13TeV_em_highggh']  = '   mth>60 \
                                    && !VBFcut_HM \
                                    && bVeto \
                                    && finalstate \
                                    && HighMass \
                              '

cuts['hww2l2v_13TeV_em_highvbf']  = '   mth>60 \
                                    && VBFcut_HM \
                                    && bVeto \
                                    && finalstate \
                                    && HighMass \
                              '

## High mass Top control regions
cuts['hww2l2v_13TeV_em_top_high0j']  = '   mth>60 \
                                        && Alt$(CleanJet_pt[0],0)<30 \
                                        && !VBFcut_HM \
                                        && bReq0j \
                                        && finalstate \
                                        && HighMass \
                                   '

cuts['hww2l2v_13TeV_em_top_high1j']  = '   mth>60 \
                                        && Alt$(CleanJet_pt[0],0)>=30 \
                                        && Alt$(CleanJet_pt[1],0)< 30 \
                                        && !VBFcut_HM \
                                        && bReq \
                                        && finalstate \
                                        && HighMass \
                                   '

cuts['hww2l2v_13TeV_em_top_high2j']  = '   mth>60 \
                                        && Alt$(CleanJet_pt[0],0)>=30 \
                                        && Alt$(CleanJet_pt[1],0)>=30 \
                                        && !VBFcut_HM \
                                        && bReq \
                                        && finalstate \
                                        && HighMass \
                                   '

cuts['hww2l2v_13TeV_em_top_highggh']  = '   mth>60 \
                                        && !VBFcut_HM \
                                        && bReq \
                                        && finalstate \
                                        && HighMass \
                                   '

cuts['hww2l2v_13TeV_em_top_highvbf']  = '   mth>60 \
                                         && VBFcut_HM \
                                         && bReq \
                                         && finalstate \
                                         && HighMass \
                                    '
'''

## High mass DYtt control regions
#cuts['hww2l2v_13TeV_em_dy_high0j']  = '   mth<60 \
#                                       && Alt$(CleanJet_pt[0],0)<30 \
#                                       && !VBFcut_HM \
#                                       && bVeto \
#                                       && finalstate \
#                                       && HighMass \
#                                  '

#cuts['hww2l2v_13TeV_em_dy_high1j']  = '   mth<60 \
#                                       && Alt$(CleanJet_pt[0],0)>=30 \
#                                       && Alt$(CleanJet_pt[1],0)< 30 \
#                                       && !VBFcut_HM \
#                                       && bVeto \
#                                       && finalstate \
#                                       && HighMass \
#                                  '

#cuts['hww2l2v_13TeV_em_dy_high2j']  = '   mth<60 \
#                                       && Alt$(CleanJet_pt[0],0)>=30 \
#                                       && Alt$(CleanJet_pt[1],0)>=30 \
#                                       && !VBFcut_HM \
#                                       && bVeto \
#                                       && finalstate \
#                                       && HighMass \
#                                  '

#cuts['hww2l2v_13TeV_em_dy_highggh']  = '   mth<60 \
#                                       && !VBFcut_HM \
#                                       && bVeto \
#                                       && finalstate \
#                                       && HighMass \
#                                  '

#cuts['hww2l2v_13TeV_em_dy_highvbf']  = '   mth<60 \
#                                        && VBFcut_HM \
#                                        && bVeto \
#                                        && finalstate \
#                                        && HighMass \
#                                   '
