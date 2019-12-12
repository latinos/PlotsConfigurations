# cuts

supercut = '   mll>20 \
            && Lepton_pt[0]>30 \
            && Lepton_pt[1]>20 \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 30 \
           '

# mll > 20        : Remove Fakes and Vg
# 1.lep pt > 30   : Seems pretty baseline, doesn't remove many events with all other cuts.
# 2.lep pt > 20   : Loose cut that removes few background (good in 0j)
# 3.lep veto      : Absolutely no signal here
# Lep eta < 2.5   : Actually useless because there's already no events here
# ptll > 30       : Loose cut that removes few background
# PuppiMET > 30   : Loose cut that removes few background

# mth > 60        : Orthogonality with tautau analysis
# bVeto           : Remove tops

# mtw2 > 20       : Good for 0j category, reduced DY especially, but also (some) very high mass signal! So don't use!
# VBF from 1jet   : Brings some background form 1j to VBF category. Very useful for VBF signal in high mass region though.
# HM dphilmet     : dphilmet = min(dphi_l1,met ; dphi_l2,met). Distribution similar to dphi_l2,met, but dphi_l2,met has signal events in tail


## Default Signal regions

cuts['hww2l2v_13TeV_em_0j']  = '   mth>60 \
                                && Alt$(CleanJet_pt[0],0)<30 \
                                && bVeto \
                                && finalstate \
                              '

cuts['hww2l2v_13TeV_em_1j']  = '   mth>60 \
                                && Alt$(CleanJet_pt[0],0)>30 \
                                && Alt$(CleanJet_pt[1],0)<30 \
                                && !VBFcut \
                                && bVeto \
                                && finalstate \
                              '

cuts['hww2l2v_13TeV_em_2j']  = '   mth>60 \
                                && Alt$(CleanJet_pt[0],0)>30 \
                                && Alt$(CleanJet_pt[1],0)>30 \
                                && !VBFcut \
                                && bVeto \
                                && finalstate \
                              '

cuts['hww2l2v_13TeV_em_vbf']  = '   mth>60 \
                                && Alt$(CleanJet_pt[0],0)>30 \
                                && VBFcut\
                                && bVeto \
                                && finalstate \
                              '

## Default Top control regions
cuts['hww2l2v_13TeV_em_top_0j']  = '   mth>60 \
                                    && Alt$(CleanJet_pt[0],0)<30 \
                                    && btag0 \
                                    && finalstate \
                                   '

cuts['hww2l2v_13TeV_em_top_1j']  = '   mth>60 \
                                    && Alt$(CleanJet_pt[0],0)>30 \
                                    && Alt$(CleanJet_pt[1],0)<30 \
                                    && !VBFcut \
                                    && btag1 \
                                    && finalstate \
                                   '

cuts['hww2l2v_13TeV_em_top_2j']  = '   mth>60 \
                                    && Alt$(CleanJet_pt[0],0)>30 \
                                    && Alt$(CleanJet_pt[1],0)>30 \
                                    && !VBFcut \
                                    && btag2 \
                                    && finalstate \
                                   '

cuts['hww2l2v_13TeV_em_top_vbf']  = '   mth>60 \
                                     && Alt$(CleanJet_pt[0],0)>30 \
                                     && VBFcut \
                                     && btagvbf \
                                     && finalstate \
                                    '


## Default DYtt control regions
cuts['hww2l2v_13TeV_em_dy_0j']  = '   mth<60 \
                                   && mll<90 \
                                   && Alt$(CleanJet_pt[0],0)<30 \
                                   && bVeto \
                                   && finalstate \
                                  '

cuts['hww2l2v_13TeV_em_dy_1j']  = '   mth<60 \
                                   && mll<90 \
                                   && Alt$(CleanJet_pt[0],0)>30 \
                                   && Alt$(CleanJet_pt[1],0)<30 \
                                   && !VBFcut \
                                   && bVeto \
                                   && finalstate \
                                  '

cuts['hww2l2v_13TeV_em_dy_2j']  = '   mth<60 \
                                   && mll<90 \
                                   && Alt$(CleanJet_pt[0],0)>30 \
                                   && Alt$(CleanJet_pt[1],0)>30 \
                                   && !VBFcut \
                                   && bVeto \
                                   && finalstate \
                                  '

cuts['hww2l2v_13TeV_em_dy_vbf']  = '   mth<60 \
                                    && mll<90 \
                                    && Alt$(CleanJet_pt[0],0)>30 \
                                    && VBFcut \
                                    && bVeto \
                                    && finalstate \
                                   '

## High mass Signal regions

cuts['hww2l2v_13TeV_em_high0j']  = '   mth>60 \
                                    && Alt$(CleanJet_pt[0],0)<30 \
                                    && bVeto \
                                    && finalstate \
                                    && HighMass \
                              '

cuts['hww2l2v_13TeV_em_high1j']  = '   mth>60 \
                                    && Alt$(CleanJet_pt[0],0)>30 \
                                    && Alt$(CleanJet_pt[1],0)<30 \
                                    && !HighVBFcut \
                                    && bVeto \
                                    && finalstate \
                                    && HighMass \
                              '

cuts['hww2l2v_13TeV_em_high2j']  = '   mth>60 \
                                    && Alt$(CleanJet_pt[0],0)>30 \
                                    && Alt$(CleanJet_pt[1],0)>30 \
                                    && !HighVBFcut \
                                    && bVeto \
                                    && finalstate \
                                    && HighMass \
                              '

cuts['hww2l2v_13TeV_em_highvbf']  = '   mth>60 \
                                    && Alt$(CleanJet_pt[0],0)>30 \
                                    && HighVBFcut\
                                    && bVeto \
                                    && finalstate \
                                    && HighMass \
                              '

## High mass Top control regions
cuts['hww2l2v_13TeV_em_top_high0j']  = '   mth>60 \
                                        && Alt$(CleanJet_pt[0],0)<30 \
                                        && btag0 \
                                        && finalstate \
                                        && HighMass \
                                   '

cuts['hww2l2v_13TeV_em_top_high1j']  = '   mth>60 \
                                        && Alt$(CleanJet_pt[0],0)>30 \
                                        && Alt$(CleanJet_pt[1],0)<30 \
                                        && !HighVBFcut \
                                        && btag1 \
                                        && finalstate \
                                        && HighMass \
                                   '

cuts['hww2l2v_13TeV_em_top_high2j']  = '   mth>60 \
                                        && Alt$(CleanJet_pt[0],0)>30 \
                                        && Alt$(CleanJet_pt[1],0)>30 \
                                        && !HighVBFcut \
                                        && btag2 \
                                        && finalstate \
                                        && HighMass \
                                   '

cuts['hww2l2v_13TeV_em_top_highvbf']  = '   mth>60 \
                                         && Alt$(CleanJet_pt[0],0)>30 \
                                         && HighVBFcut \
                                         && btag2 \
                                         && finalstate \
                                         && HighMass \
                                    '


## High mass DYtt control regions
#cuts['hww2l2v_13TeV_em_dy_high0j']  = '   mth<60 \
#                                       && Alt$(CleanJet_pt[0],0)<30 \
#                                       && bVeto \
#                                       && finalstate \
#                                       && HighMass \
#                                  '

#cuts['hww2l2v_13TeV_em_dy_high1j']  = '   mth<60 \
#                                       && Alt$(CleanJet_pt[0],0)>30 \
#                                       && Alt$(CleanJet_pt[1],0)<30 \
#                                       && !HighVBFcut \
#                                       && bVeto \
#                                       && finalstate \
#                                       && HighMass \
#                                  '

#cuts['hww2l2v_13TeV_em_dy_high2j']  = '   mth<60 \
#                                       && Alt$(CleanJet_pt[0],0)>30 \
#                                       && Alt$(CleanJet_pt[1],0)>30 \
#                                       && !HighVBFcut \
#                                       && bVeto \
#                                       && finalstate \
#                                       && HighMass \
#                                  '

#cuts['hww2l2v_13TeV_em_dy_highvbf']  = '   mth<60 \
#                                        && Alt$(CleanJet_pt[0],0)>30 \
#                                        && HighVBFcut \
#                                        && bVeto \
#                                        && finalstate \
#                                        && HighMass \
#                                   '
