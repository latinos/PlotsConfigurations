# cuts

supercut = '   mll>20 \
            && Lepton_pt[0]>30 \
            && Lepton_pt[1]>20 \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 40 \
            && mtw1>60 \
           '

# (mll>110 || mll<70) : Remove DY
# 3.lep veto          : Absolutely no signal here
# Lep eta < 2.5       : Actually useless because there's already no events here
# ptll > 30           : Loose cut that removes few background
# PuppiMET > 40       : Loose cut that removes few background. Stronger cut than in em because of DY
# mtw1 > 60           : Loose cut that removes few background

# mth > 80            : While no tautau analysis in ee/mumu channel, still good cut to use -> Remove in DY CR
# bVeto               : Remove tops


## Default Signal regions

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_incl']  = '   mth>80 \
#                                            && (mll>110 || mll<70) \
#                                            && bVeto \
#                                            && finalstate \
#                                           '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_0j']  = '   mth>80 \
#                                            && (mll>110 || mll<70) \
#                                            && njet0 \
#                                            && bVeto \
#                                            && finalstate \
#                                           '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_1j']  = '   mth>80 \
#                                            && (mll>110 || mll<70) \
#                                            && njet1 \
#                                            && bVeto \
#                                            && finalstate \
#                                           '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_2j']  = '   mth>80 \
#                                            && (mll>110 || mll<70) \
#                                            && njet2 \
#                                            && bVeto \
#                                            && finalstate \
#                                           '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_ggh']  = '   mth>80 \
#                                            && (mll>110 || mll<70) \
#                                            && !VBFcut \
#                                            && bVeto \
#                                            && finalstate \
#                                           '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_vbf']  = '   mth>80 \
#                                             && (mll>110 || mll<70) \
#                                             && VBFcut \
#                                             && bVeto \
#                                             && finalstate \
#                                            '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_newggh']  = '   mth>80 \
#                                             && (mll>110 || mll<70) \
#                                             && !VBFcut_NEW && ggFcut_NEW \
#                                             && bVeto \
#                                             && finalstate \
#                                           '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_newvbf']  = '   mth>80 \
#                                             && (mll>110 || mll<70) \
#                                             && VBFcut_NEW \
#                                             && bVeto \
#                                             && finalstate \
#                                           '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_newnotag']  = '   mth>80 \
#                                             && (mll>110 || mll<70) \
#                                             && !VBFcut_NEW && !ggFcut_NEW \
#                                             && bVeto \
#                                             && finalstate \
#                                           '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_newggh_01j']  = '   mth>80 \
#                                             && (mll>110 || mll<70) \
#                                             && (njet0 || njet1) \
#                                             && !VBFcut_NEW && ggFcut_NEW \
#                                             && bVeto \
#                                             && finalstate \
#                                           '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_newvbf_01j']  = '   mth>80 \
#                                             && (mll>110 || mll<70) \
#                                             && (njet0 || njet1) \
#                                             && VBFcut_NEW \
#                                             && bVeto \
#                                             && finalstate \
#                                           '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_newnotag_01j']  = '   mth>80 \
#                                             && (mll>110 || mll<70) \
#                                             && (njet0 || njet1) \
#                                             && !VBFcut_NEW && !ggFcut_NEW \
#                                             && bVeto \
#                                             && finalstate \
#                                           '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_newggh_2j']  = '   mth>80 \
#                                             && (mll>110 || mll<70) \
#                                             && njet2 \
#                                             && !VBFcut_NEW && ggFcut_NEW \
#                                             && bVeto \
#                                             && finalstate \
#                                           '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_newvbf_2j']  = '   mth>80 \
#                                             && (mll>110 || mll<70) \
#                                             && njet2 \
#                                             && VBFcut_NEW \
#                                             && bVeto \
#                                             && finalstate \
#                                           '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_newnotag_2j']  = '   mth>80 \
#                                             && (mll>110 || mll<70) \
#                                             && njet2 \
#                                             && !VBFcut_NEW && !ggFcut_NEW \
#                                             && bVeto \
#                                             && finalstate \
#                                           '


## Default Top control regions

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_incl']  = '   mth>80 \
                                                && (mll>110 || mll<70) \
                                                && bReq \
                                                && finalstate \
                                               '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_0j']  = '   mth>80 \
                                                && (mll>110 || mll<70) \
                                                && njet0 \
                                                && bReq0j \
                                                && finalstate \
                                               '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_1j']  = '   mth>80 \
                                                && (mll>110 || mll<70) \
                                                && njet1 \
                                                && bReq \
                                                && finalstate \
                                               '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_2j']  = '   mth>80 \
                                                && (mll>110 || mll<70) \
                                                && njet2 \
                                                && bReq \
                                                && finalstate \
                                               '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_ggh']  = '   mth>80 \
#                                                && (mll>110 || mll<70) \
#                                                && !VBFcut \
#                                                && bReq \
#                                                && finalstate \
#                                               '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_vbf']  = '   mth>80 \
#                                                 && (mll>110 || mll<70) \
#                                                 && VBFcut \
#                                                 && bReq \
#                                                 && finalstate \
#                                                '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_newggh']  = '   mth>80 \
                                                 && (mll>110 || mll<70) \
                                                 && !VBFcut_NEW && ggFcut_NEW \
                                                 && bReq \
                                                 && finalstate \
                                                '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_newvbf']  = '   mth>80 \
                                                 && (mll>110 || mll<70) \
                                                 && VBFcut_NEW \
                                                 && bReq \
                                                 && finalstate \
                                                '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_newnotag']  = '   mth>80 \
                                                 && (mll>110 || mll<70) \
                                                 && !VBFcut_NEW && !ggFcut_NEW \
                                                 && bReq \
                                                 && finalstate \
                                                '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_newggh_01j']  = '   mth>80 \
#                                                 && (mll>110 || mll<70) \
#                                                 && (njet0 || njet1) \
#                                                 && !VBFcut_NEW && ggFcut_NEW \
#                                                 && (bReq0j || (bReq && njet1)) \
#                                                 && finalstate \
#                                                '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_newvbf_01j']  = '   mth>80 \
#                                                 && (mll>110 || mll<70) \
#                                                 && (njet0 || njet1) \
#                                                 && VBFcut_NEW \
#                                                 && (bReq0j || (bReq && njet1)) \
#                                                 && finalstate \
#                                                '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_newnotag_01j']  = '   mth>80 \
#                                                 && (mll>110 || mll<70) \
#                                                 && (njet0 || njet1) \
#                                                 && !VBFcut_NEW && !ggFcut_NEW \
#                                                 && (bReq0j || (bReq && njet1)) \
#                                                 && finalstate \
#                                                '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_newggh_2j']  = '   mth>80 \
#                                                 && (mll>110 || mll<70) \
#                                                 && njet2 \
#                                                 && !VBFcut_NEW && ggFcut_NEW \
#                                                 && bReq \
#                                                 && finalstate \
#                                                '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_newvbf_2j']  = '   mth>80 \
#                                                 && (mll>110 || mll<70) \
#                                                 && njet2 \
#                                                 && VBFcut_NEW \
#                                                 && bReq \
#                                                 && finalstate \
#                                                '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_newnotag_2j']  = '   mth>80 \
#                                                 && (mll>110 || mll<70) \
#                                                 && njet2 \
#                                                 && !VBFcut_NEW && !ggFcut_NEW \
#                                                 && bReq \
#                                                 && finalstate \
#                                                '


## Default DYtt control regions

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_incl']  = '   (mll<=110 && mll>=70) \
                                               && bVeto \
                                               && finalstate \
                                              '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_0j']  = '   (mll<=110 && mll>=70) \
                                               && njet0 \
                                               && bVeto \
                                               && finalstate \
                                              '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_1j']  = '   (mll<=110 && mll>=70) \
                                               && njet1 \
                                               && bVeto \
                                               && finalstate \
                                              '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_2j']  = '   (mll<=110 && mll>=70) \
                                               && njet2 \
                                               && bVeto \
                                               && finalstate \
                                              '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_ggh']  = '   (mll<=110 && mll>=70) \
#                                               && !VBFcut \
#                                               && bVeto \
#                                               && finalstate \
#                                              '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_vbf']  = '   (mll<=110 && mll>=70) \
#                                                && VBFcut \
#                                                && bVeto \
#                                                && finalstate \
#                                               '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_newggh']  = '   (mll<=110 && mll>=70) \
                                                   && !VBFcut_NEW && ggFcut_NEW \
                                                   && bVeto \
                                                   && finalstate \
                                                  '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_newvbf']  = '   (mll<=110 && mll>=70) \
                                                   && VBFcut_NEW \
                                                   && bVeto \
                                                   && finalstate \
                                                  '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_newnotag']  = '   (mll<=110 && mll>=70) \
                                                     && !VBFcut_NEW && !ggFcut_NEW \
                                                     && bVeto \
                                                     && finalstate \
                                                    '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_newggh_01j']  = '   (mll<=110 && mll>=70) \
#                                                       && (njet0 || njet1) \
#                                                       && !VBFcut_NEW && ggFcut_NEW \
#                                                       && bVeto \
#                                                       && finalstate \
#                                                      '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_newvbf_01j']  = '   (mll<=110 && mll>=70) \
#                                                       && (njet0 || njet1) \
#                                                       && VBFcut_NEW \
#                                                       && bVeto \
#                                                       && finalstate \
#                                                      '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_newnotag_01j']  = '   (mll<=110 && mll>=70) \
#                                                         && (njet0 || njet1) \
#                                                         && !VBFcut_NEW && !ggFcut_NEW \
#                                                         && bVeto \
#                                                         && finalstate \
#                                                        '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_newggh_2j']  = '   (mll<=110 && mll>=70) \
#                                                      && njet2 \
#                                                      && !VBFcut_NEW && ggFcut_NEW \
#                                                      && bVeto \
#                                                      && finalstate \
#                                                     '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_newvbf_2j']  = '   (mll<=110 && mll>=70) \
#                                                      && njet2 \
#                                                      && VBFcut_NEW \
#                                                      && bVeto \
#                                                      && finalstate \
#                                                     '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_newnotag_2j']  = '   (mll<=110 && mll>=70) \
#                                                        && njet2 \
#                                                        && !VBFcut_NEW && !ggFcut_NEW \
#                                                        && bVeto \
#                                                        && finalstate \
#                                                       '


## High mass Signal regions

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_high0j']  = '   mth>80 \
#                                                && (mll>110 || mll<70) \
#                                                && njet0 \
#                                                && bVeto \
#                                                && finalstate \
#                                                && HighMass \
#                                               '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_high1j']  = '   mth>80 \
#                                                && (mll>110 || mll<70) \
#                                                && njet1 \
#                                                && bVeto \
#                                                && finalstate \
#                                                && HighMass \
#                                               '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_high2j']  = '   mth>80 \
#                                                && (mll>110 || mll<70) \
#                                                && njet2 \
#                                                && bVeto \
#                                                && finalstate \
#                                                && HighMass \
#                                               '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_highggh']  = '   mth>80 \
#                                                && (mll>110 || mll<70) \
#                                                && !VBFcut \
#                                                && bVeto \
#                                                && finalstate \
#                                                && HighMass \
#                                               '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_highvbf']  = '   mth>80 \
#                                                 && (mll>110 || mll<70) \
#                                                 && VBFcut \
#                                                 && bVeto \
#                                                 && finalstate \
#                                                 && HighMass \
#                                                '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_highnewggh']  = '   mth>80 \
#                                                    && (mll>110 || mll<70) \
#                                                    && !VBFcut_NEW && ggFcut_NEW \
#                                                    && bVeto \
#                                                    && finalstate \
#                                                    && HighMass \
#                                                   '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_highnewvbf']  = '   mth>80 \
#                                                    && (mll>110 || mll<70) \
#                                                    && VBFcut_NEW \
#                                                    && bVeto \
#                                                    && finalstate \
#                                                    && HighMass \
#                                                   '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_highnewnotag']  = '   mth>80 \
#                                                      && (mll>110 || mll<70) \
#                                                      && !VBFcut_NEW && !ggFcut_NEW \
#                                                      && bVeto \
#                                                      && finalstate \
#                                                      && HighMass \
#                                                     '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_highnewggh_01j']  = '   mth>80 \
#                                                        && (mll>110 || mll<70) \
#                                                        && (njet0 || njet1) \
#                                                        && !VBFcut_NEW && ggFcut_NEW \
#                                                        && bVeto \
#                                                        && finalstate \
#                                                        && HighMass \
#                                                       '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_highnewvbf_01j']  = '   mth>80 \
#                                                        && (mll>110 || mll<70) \
#                                                        && (njet0 || njet1) \
#                                                        && VBFcut_NEW \
#                                                        && bVeto \
#                                                        && finalstate \
#                                                        && HighMass \
#                                                       '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_highnewnotag_01j']  = '   mth>80 \
#                                                          && (mll>110 || mll<70) \
#                                                          && (njet0 || njet1) \
#                                                          && !VBFcut_NEW && !ggFcut_NEW \
#                                                          && bVeto \
#                                                          && finalstate \
#                                                          && HighMass \
#                                                         '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_highnewggh_2j']  = '   mth>80 \
#                                                       && (mll>110 || mll<70) \
#                                                       && njet2 \
#                                                       && !VBFcut_NEW && ggFcut_NEW \
#                                                       && bVeto \
#                                                       && finalstate \
#                                                       && HighMass \
#                                                      '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_highnewvbf_2j']  = '   mth>80 \
#                                                       && (mll>110 || mll<70) \
#                                                       && njet2 \
#                                                       && VBFcut_NEW \
#                                                       && bVeto \
#                                                       && finalstate \
#                                                       && HighMass \
#                                                      '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_highnewnotag_2j']  = '   mth>80 \
#                                                         && (mll>110 || mll<70) \
#                                                         && njet2 \
#                                                         && !VBFcut_NEW && !ggFcut_NEW \
#                                                         && bVeto \
#                                                         && finalstate \
#                                                         && HighMass \
#                                                        '


## High mass Top control regions

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_highggh']  = '   mth>80 \
#                                                    && (mll>110 || mll<70) \
#                                                    && !VBFcut \
#                                                    && bReq \
#                                                    && finalstate \
#                                                    && HighMass \
#                                                   '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_highvbf']  = '   mth>80 \
#                                                     && (mll>110 || mll<70) \
#                                                     && VBFcut \
#                                                     && bReq \
#                                                     && finalstate \
#                                                     && HighMass \
#                                                    '
