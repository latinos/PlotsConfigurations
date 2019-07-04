# cuts

supercut = '   mll>40 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>20 \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 30 \
            && mtw2 > 20 \
           '


## Signal regions

# Don't unblind signal!
'''
cuts['hww2l2v_13TeV_'+EMorEEorMM+'_0j']  = '   mll>120 \
                                            && mth>60 \
                                            && Alt$(CleanJet_pt[0],0)<30 \
                                            && bVeto \
                                            && finalstate \
                                           '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_1j']  = '   mll>120 \
                                            && mth>60 \
                                            && Alt$(CleanJet_pt[0],0)>30 \
                                            && Alt$(CleanJet_pt[1],0)<30 \
                                            && bVeto \
                                            && finalstate \
                                           '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_2j']  = '   mll>120 \
                                            && mth>60 \
                                            && Alt$(CleanJet_pt[0],0)>30 \
                                            && Alt$(CleanJet_pt[1],0)>30 \
                                            && (mjj<300 || detajj<3) \
                                            && bVeto \
                                            && finalstate \
                                           '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_vbf']  = '   mll>120 \
                                             && mth>60 \
                                             && Alt$(CleanJet_pt[0],0)>30 \
                                             && Alt$(CleanJet_pt[1],0)>30 \
                                             && (mjj>300 && detajj>3)\
                                             && bVeto \
                                             && finalstate \
                                            '
'''

## Top control regions
cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_0j']  = '   mll>120 \
                                                && mth>60 \
                                                && Alt$(CleanJet_pt[0],0)<30 \
                                                && btag0 \
                                                && finalstate \
                                               '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_1j']  = '   mll>120 \
                                                && mth>60 \
                                                && Alt$(CleanJet_pt[0],0)>30 \
                                                && Alt$(CleanJet_pt[1],0)<30 \
                                                && btag1 \
                                                && finalstate \
                                               '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_2j']  = '   mll>120 \
                                                && mth>60 \
                                                && Alt$(CleanJet_pt[0],0)>30 \
                                                && Alt$(CleanJet_pt[1],0)>30 \
                                                && (mjj<300 || detajj<3) \
                                                && btag2 \
                                                && finalstate \
                                               '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_top_vbf']  = '    mll>120 \
                                                 && mth>60 \
                                                 && Alt$(CleanJet_pt[0],0)>30 \
                                                 && Alt$(CleanJet_pt[1],0)>30 \
                                                 && (mjj>300 && detajj>3)\
                                                 && btag2 \
                                                 && finalstate \
                                                '


## DYtt control regions
cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_0j']  = '   mll>70 && mll<120 \
                                               && Alt$(CleanJet_pt[0],0)<30 \
                                               && bVeto \
                                               && finalstate \
                                              '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_1j']  = '   mll>70 && mll<120 \
                                               && Alt$(CleanJet_pt[0],0)>30 \
                                               && Alt$(CleanJet_pt[1],0)<30 \
                                               && bVeto \
                                               && finalstate \
                                              '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_2j']  = '   mll>70 && mll<120 \
                                               && Alt$(CleanJet_pt[0],0)>30 \
                                               && Alt$(CleanJet_pt[1],0)>30 \
                                               && (mjj<300 || detajj<3) \
                                               && bVeto \
                                               && finalstate \
                                              '

cuts['hww2l2v_13TeV_'+EMorEEorMM+'_dy_vbf']  = '   mll>70 && mll<120 \
                                                && Alt$(CleanJet_pt[0],0)>30 \
                                                && Alt$(CleanJet_pt[1],0)>30 \
                                                && (mjj>300 && detajj>3)\
                                                && bVeto \
                                                && finalstate \
                                               '

