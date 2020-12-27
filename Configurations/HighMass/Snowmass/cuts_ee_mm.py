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
# MET > 10            : Very loose, you almost don't even need it (Does it make sense to use this even together with PuppiMET?)

# mth > 40            : While no tautau analysis in ee/mumu channel, still good cut to use -> Remove in DY CR
# bVeto               : Remove tops


## Default Signal regions

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_0j']  = '   mth>80 \
                                            && (mll>110 || mll<70) \
                                            && Alt$(CleanJet_pt[0],0)<30 \
                                            && !VBFcut \
                                            && bVeto \
                                            && DYmva_bdtalt>0.5 \
                                            && finalstate \
                                           '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_1j']  = '   mth>80 \
                                            && (mll>110 || mll<70) \
                                            && Alt$(CleanJet_pt[0],0)>=30 \
                                            && Alt$(CleanJet_pt[1],0)< 30 \
                                            && !VBFcut \
                                            && bVeto \
                                            && DYmva_bdtalt>0.5 \
                                            && finalstate \
                                           '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_2j']  = '   mth>80 \
                                            && (mll>110 || mll<70) \
                                            && Alt$(CleanJet_pt[0],0)>=30 \
                                            && Alt$(CleanJet_pt[1],0)>=30 \
                                            && !VBFcut \
                                            && bVeto \
                                            && DYmva_bdtalt>0.5 \
                                            && finalstate \
                                           '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_ggh']  = '   mth>80 \
                                            && (mll>110 || mll<70) \
                                            && !VBFcut \
                                            && bVeto \
                                            && DYmva_bdtalt>0.5 \
                                            && finalstate \
                                           '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_vbf']  = '   mth>80 \
                                             && (mll>110 || mll<70) \
                                             && VBFcut \
                                             && bVeto \
                                             && DYmva_bdtalt>0.5 \
                                             && finalstate \
                                            '

## Default Top control regions
cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_0j']  = '   mth>80 \
                                                && (mll>110 || mll<70) \
                                                && Alt$(CleanJet_pt[0],0)<30 \
                                                && !VBFcut \
                                                && bReq0j \
                                                && DYmva_bdtalt>0.5 \
                                                && finalstate \
                                               '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_1j']  = '   mth>80 \
                                                && (mll>110 || mll<70) \
                                                && Alt$(CleanJet_pt[0],0)>=30 \
                                                && Alt$(CleanJet_pt[1],0)< 30 \
                                                && !VBFcut \
                                                && bReq \
                                                && DYmva_bdtalt>0.5 \
                                                && finalstate \
                                               '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_2j']  = '   mth>80 \
                                                && (mll>110 || mll<70) \
                                                && Alt$(CleanJet_pt[0],0)>=30 \
                                                && Alt$(CleanJet_pt[1],0)>=30 \
                                                && !VBFcut \
                                                && bReq \
                                                && DYmva_bdtalt>0.5 \
                                                && finalstate \
                                               '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_ggh']  = '   mth>80 \
                                                && (mll>110 || mll<70) \
                                                && !VBFcut \
                                                && bReq \
                                                && DYmva_bdtalt>0.5 \
                                                && finalstate \
                                               '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_vbf']  = '   mth>80 \
                                                 && (mll>110 || mll<70) \
                                                 && VBFcut \
                                                 && bReq \
                                                 && DYmva_bdtalt>0.5 \
                                                 && finalstate \
                                                '


## Default DYtt control regions
cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_0j']  = '   (mll<110 && mll>70)\
                                               && Alt$(CleanJet_pt[0],0)<30 \
                                               && !VBFcut \
                                               && bVeto \
                                               && finalstate \
                                              '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_1j']  = '   (mll<110 && mll>70)\
                                               && Alt$(CleanJet_pt[0],0)>=30 \
                                               && Alt$(CleanJet_pt[1],0)< 30 \
                                               && !VBFcut \
                                               && bVeto \
                                               && finalstate \
                                              '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_2j']  = '   (mll<110 && mll>70)\
                                               && Alt$(CleanJet_pt[0],0)>=30 \
                                               && Alt$(CleanJet_pt[1],0)>=30 \
                                               && !VBFcut \
                                               && bVeto \
                                               && finalstate \
                                              '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_ggh']  = '   (mll<110 && mll>70)\
                                               && !VBFcut \
                                               && bVeto \
                                               && finalstate \
                                              '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_vbf']  = '   (mll<110 && mll>70)\
                                                && VBFcut \
                                                && bVeto \
                                                && finalstate \
                                               '

## High mass Signal regions

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_high0j']  = '   mth>80 \
                                                && (mll>110 || mll<70) \
                                                && Alt$(CleanJet_pt[0],0)<30 \
                                                && !VBFcut_HM \
                                                && bVeto \
                                                && DYmva_bdtalt>0.0 \
                                                && finalstate \
                                                && HighMass \
                                               '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_high1j']  = '   mth>80 \
                                                && (mll>110 || mll<70) \
                                                && Alt$(CleanJet_pt[0],0)>=30 \
                                                && Alt$(CleanJet_pt[1],0)< 30 \
                                                && !VBFcut_HM \
                                                && bVeto \
                                                && DYmva_bdtalt>0.0 \
                                                && finalstate \
                                                && HighMass \
                                               '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_high2j']  = '   mth>80 \
                                                && (mll>110 || mll<70) \
                                                && Alt$(CleanJet_pt[0],0)>=30 \
                                                && Alt$(CleanJet_pt[1],0)>=30 \
                                                && !VBFcut_HM \
                                                && bVeto \
                                                && DYmva_bdtalt>0.0 \
                                                && finalstate \
                                                && HighMass \
                                               '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_highggh']  = '   mth>80 \
                                                && (mll>110 || mll<70) \
                                                && !VBFcut_HM \
                                                && bVeto \
                                                && DYmva_bdtalt>0.0 \
                                                && finalstate \
                                                && HighMass \
                                               '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_highvbf']  = '   mth>80 \
                                                 && (mll>110 || mll<70) \
                                                 && VBFcut_HM \
                                                 && bVeto \
                                                 && DYmva_bdtalt>0.0 \
                                                 && finalstate \
                                                 && HighMass \
                                                '

## High mass Top control regions
cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_high0j']  = '   mth>80 \
                                                    && (mll>110 || mll<70) \
                                                    && Alt$(CleanJet_pt[0],0)<30 \
                                                    && !VBFcut_HM \
                                                    && bReq0j \
                                                    && DYmva_bdtalt>0.0 \
                                                    && finalstate \
                                                    && HighMass \
                                                   '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_high1j']  = '   mth>80 \
                                                    && (mll>110 || mll<70) \
                                                    && Alt$(CleanJet_pt[0],0)>=30 \
                                                    && Alt$(CleanJet_pt[1],0)< 30 \
                                                    && !VBFcut_HM \
                                                    && bReq \
                                                    && DYmva_bdtalt>0.0 \
                                                    && finalstate \
                                                    && HighMass \
                                                   '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_high2j']  = '   mth>80 \
                                                    && (mll>110 || mll<70) \
                                                    && Alt$(CleanJet_pt[0],0)>=30 \
                                                    && Alt$(CleanJet_pt[1],0)>=30 \
                                                    && !VBFcut_HM \
                                                    && bReq \
                                                    && DYmva_bdtalt>0.0 \
                                                    && finalstate \
                                                    && HighMass \
                                                   '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_highggh']  = '   mth>80 \
                                                    && (mll>110 || mll<70) \
                                                    && !VBFcut_HM \
                                                    && bReq \
                                                    && DYmva_bdtalt>0.0 \
                                                    && finalstate \
                                                    && HighMass \
                                                   '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_highvbf']  = '   mth>80 \
                                                     && (mll>110 || mll<70) \
                                                     && VBFcut_HM \
                                                     && bReq \
                                                     && DYmva_bdtalt>0.0 \
                                                     && finalstate \
                                                     && HighMass \
                                                    '


## High mass DYtt control regions -> Sideband not Z peak because HM mll cut.
#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_high0j']  = '   mth<60 \
#                                                   && Alt$(CleanJet_pt[0],0)<30 \
#                                                   && !VBFcut_HM \
#                                                   && bVeto \
#                                                   && finalstate \
#                                                   && HighMass \
#                                                  '
#
#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_high1j']  = '   mth<60 \
#                                                   && Alt$(CleanJet_pt[0],0)>=30 \
#                                                   && Alt$(CleanJet_pt[1],0)< 30 \
#                                                   && !VBFcut_HM \
#                                                   && bVeto \
#                                                   && finalstate \
#                                                   && HighMass \
#                                                  '
#
#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_high2j']  = '   mth<60 \
#                                                   && Alt$(CleanJet_pt[0],0)>=30 \
#                                                   && Alt$(CleanJet_pt[1],0)>=30 \
#                                                   && !VBFcut_HM \
#                                                   && bVeto \
#                                                   && finalstate \
#                                                   && HighMass \
#                                                  '
#
#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_highggh']  = '   mth<60 \
#                                                   && !VBFcut_HM \
#                                                   && bVeto \
#                                                   && finalstate \
#                                                   && HighMass \
#                                                  '
#
#cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_highvbf']  = '   mth<60 \
#                                                    && VBFcut_HM \
#                                                    && bVeto \
#                                                    && finalstate \
#                                                    && HighMass \
#                                                   '
