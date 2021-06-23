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

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_ggh']  = '   mth>80 \
                                             && (mll>110 || mll<70) \
                                             && !VBFcut_NEW && ggFcut_NEW \
                                             && bVeto \
                                             && finalstate \
                                           '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_vbf']  = '   mth>80 \
                                             && (mll>110 || mll<70) \
                                             && VBFcut_NEW \
                                             && bVeto \
                                             && finalstate \
                                           '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_notag']  = '   mth>80 \
                                             && (mll>110 || mll<70) \
                                             && !VBFcut_NEW && !ggFcut_NEW \
                                             && bVeto \
                                             && finalstate \
                                           '


## Default Top control regions

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_incl']  = '   mth>80 \
#                                                && (mll>110 || mll<70) \
#                                                && bReq \
#                                                && finalstate \
#                                               '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_0j']  = '   mth>80 \
#                                                && (mll>110 || mll<70) \
#                                                && njet0 \
#                                                && bReq0j \
#                                                && finalstate \
#                                               '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_1j']  = '   mth>80 \
#                                                && (mll>110 || mll<70) \
#                                                && njet1 \
#                                                && bReq \
#                                                && finalstate \
#                                               '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_2j']  = '   mth>80 \
#                                                && (mll>110 || mll<70) \
#                                                && njet2 \
#                                                && bReq \
#                                                && finalstate \
#                                               '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_ggh']  = '   mth>80 \
                                                 && (mll>110 || mll<70) \
                                                 && !VBFcut_NEW && ggFcut_NEW \
                                                 && bReq \
                                                 && finalstate \
                                                '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_vbf']  = '   mth>80 \
                                                 && (mll>110 || mll<70) \
                                                 && VBFcut_NEW \
                                                 && bReq \
                                                 && finalstate \
                                                '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_notag']  = '   mth>80 \
                                                 && (mll>110 || mll<70) \
                                                 && !VBFcut_NEW && !ggFcut_NEW \
                                                 && bReq \
                                                 && finalstate \
                                                '


## Default DYtt control regions

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_incl']  = '   (mll<=110 && mll>=70) \
#                                               && bVeto \
#                                               && finalstate \
#                                              '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_0j']  = '   (mll<=110 && mll>=70) \
#                                               && njet0 \
#                                               && bVeto \
#                                               && finalstate \
#                                              '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_1j']  = '   (mll<=110 && mll>=70) \
#                                               && njet1 \
#                                               && bVeto \
#                                               && finalstate \
#                                              '

#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_2j']  = '   (mll<=110 && mll>=70) \
#                                               && njet2 \
#                                               && bVeto \
#                                               && finalstate \
#                                              '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_ggh']  = '   (mll<=110 && mll>=70) \
                                                   && !VBFcut_NEW && ggFcut_NEW \
                                                   && bVeto \
                                                   && finalstate \
                                                  '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_vbf']  = '   (mll<=110 && mll>=70) \
                                                   && VBFcut_NEW \
                                                   && bVeto \
                                                   && finalstate \
                                                  '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_notag']  = '   (mll<=110 && mll>=70) \
                                                     && !VBFcut_NEW && !ggFcut_NEW \
                                                     && bVeto \
                                                     && finalstate \
                                                    '


## High mass Signal regions
#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_highincl']  = '   mth>80 \
#                                                    && (mll>110 || mll<70) \
#                                                    && bVeto \
#                                                    && finalstate \
#                                                    && HighMass \
#                                                   '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_highggh']  = '   mth>80 \
                                                    && (mll>110 || mll<70) \
                                                    && !VBFcut_NEW && ggFcut_NEW \
                                                    && bVeto \
                                                    && finalstate \
                                                    && HighMass \
                                                   '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_highvbf']  = '   mth>80 \
                                                    && (mll>110 || mll<70) \
                                                    && VBFcut_NEW \
                                                    && bVeto \
                                                    && finalstate \
                                                    && HighMass \
                                                   '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_highnotag']  = '   mth>80 \
                                                      && (mll>110 || mll<70) \
                                                      && !VBFcut_NEW && !ggFcut_NEW \
                                                      && bVeto \
                                                      && finalstate \
                                                      && HighMass \
                                                     '
