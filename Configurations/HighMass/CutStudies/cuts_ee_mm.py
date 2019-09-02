# cuts

supercut = '   mll>20 \
            && Lepton_pt[0]>30 \
            && Lepton_pt[1]>20 \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 40 \
            && mth>60 \
            && mtw1>60 \
            && MET_pt > 10 \
           '

# (mll>100 || mll<80) : Remove DY
# 3.lep veto          : Absolutely no signal here
# Lep eta < 2.5       : Actually useless because there's already no events here
# ptll > 30           : Loose cut that removes few background
# PuppiMET > 40       : Loose cut that removes few background. Stronger cut than in em because of DY
# mtw1 > 60           : Loose cut that removes few background
# MET > 10            : Very loose, you almost don't even need it (Does it make sense to use this even together with PuppiMET?)

# mth > 40            : While no tautau analysis in ee/mumu channel, still good cut to use -> Remove in DY CR
# bVeto               : Remove tops


## Signal regions

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_mllincl']  = '   bVeto \
                                            && finalstate \
                                           '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_highmllincl']  = '   bVeto \
                                            && finalstate \
                                            && HighMass \
                                           '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_0j']  = '   (mll>100 || mll<80) \
                                            && Alt$(CleanJet_pt[0],0)<30 \
                                            && bVeto \
                                            && finalstate \
                                           '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_1j']  = '   (mll>100 || mll<80) \
                                            && Alt$(CleanJet_pt[0],0)>30 \
                                            && Alt$(CleanJet_pt[1],0)<30 \
                                            && !VBFcut\
                                            && bVeto \
                                            && finalstate \
                                           '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_2j']  = '   (mll>100 || mll<80) \
                                            && Alt$(CleanJet_pt[0],0)>30 \
                                            && Alt$(CleanJet_pt[1],0)>30 \
                                            && !VBFcut\
                                            && bVeto \
                                            && finalstate \
                                           '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_vbf']  = '   (mll>100 || mll<80) \
                                             && Alt$(CleanJet_pt[0],0)>30 \
                                             && VBFcut\
                                             && bVeto \
                                             && finalstate \
                                            '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_high0j']  = '   (mll>100 || mll<80) \
                                            && Alt$(CleanJet_pt[0],0)<30 \
                                            && bVeto \
                                            && finalstate \
                                            && HighMass \
                                           '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_high1j']  = '   (mll>100 || mll<80) \
                                            && Alt$(CleanJet_pt[0],0)>30 \
                                            && Alt$(CleanJet_pt[1],0)<30 \
                                            && !HighVBFcut\
                                            && bVeto \
                                            && finalstate \
                                            && HighMass \
                                           '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_high2j']  = '   (mll>100 || mll<80) \
                                            && Alt$(CleanJet_pt[0],0)>30 \
                                            && Alt$(CleanJet_pt[1],0)>30 \
                                            && !HighVBFcut\
                                            && bVeto \
                                            && finalstate \
                                            && HighMass \
                                           '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_highvbf']  = '   (mll>100 || mll<80) \
                                             && Alt$(CleanJet_pt[0],0)>30 \
                                             && HighVBFcut\
                                             && bVeto \
                                             && finalstate \
                                             && HighMass \
                                            '

