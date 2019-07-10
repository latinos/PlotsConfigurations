# cuts

supercut = '   mll>40 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>20 \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
           '


## Signal regions

# Don't unblind signal!
'''
cuts['hww2l2v_13TeV_em_0j']  = '   mth>60 \
                                && Alt$(CleanJet_pt[0],0)<30 \
                                && bVeto \
                                && finalstate \
                              '

cuts['hww2l2v_13TeV_em_1j']  = '   mth>60 \
                                && Alt$(CleanJet_pt[0],0)>30 \
                                && Alt$(CleanJet_pt[1],0)<30 \
                                && bVeto \
                                && finalstate \
                              '

cuts['hww2l2v_13TeV_em_2j']  = '   mth>60 \
                                && Alt$(CleanJet_pt[0],0)>30 \
                                && Alt$(CleanJet_pt[1],0)>30 \
                                && (mjj<300 || detajj<3) \
                                && bVeto \
                                && finalstate \
                              '

cuts['hww2l2v_13TeV_em_vbf']  = '   mth>60 \
                                && Alt$(CleanJet_pt[0],0)>30 \
                                && Alt$(CleanJet_pt[1],0)>30 \
                                && (mjj>300 && detajj>3)\
                                && bVeto \
                                && finalstate \
                              '
'''

## Top control regions
cuts['hww2l2v_13TeV_em_top_0j']  = '   mth>60 \
                                    && Alt$(CleanJet_pt[0],0)<30 \
                                    && btag0 \
                                    && finalstate \
                                   '

cuts['hww2l2v_13TeV_em_top_1j']  = '   mth>60 \
                                    && Alt$(CleanJet_pt[0],0)>30 \
                                    && Alt$(CleanJet_pt[1],0)<30 \
                                    && btag1 \
                                    && finalstate \
                                   '

cuts['hww2l2v_13TeV_em_top_2j']  = '   mth>60 \
                                    && Alt$(CleanJet_pt[0],0)>30 \
                                    && Alt$(CleanJet_pt[1],0)>30 \
                                    && (mjj<300 || detajj<3) \
                                    && btag2 \
                                    && finalstate \
                                   '

cuts['hww2l2v_13TeV_em_top_vbf']  = '   mth>60 \
                                     && Alt$(CleanJet_pt[0],0)>30 \
                                     && Alt$(CleanJet_pt[1],0)>30 \
                                     && (mjj>300 && detajj>3)\
                                     && btag2 \
                                     && finalstate \
                                    '


## DYtt control regions
cuts['hww2l2v_13TeV_em_dy_0j']  = '   mth<60 \
                                   && mll>40 && mll<80 \
                                   && Alt$(CleanJet_pt[0],0)<30 \
                                   && bVeto \
                                   && finalstate \
                                  '

cuts['hww2l2v_13TeV_em_dy_1j']  = '   mth<60 \
                                   && mll>40 && mll<80 \
                                   && Alt$(CleanJet_pt[0],0)>30 \
                                   && Alt$(CleanJet_pt[1],0)<30 \
                                   && bVeto \
                                   && finalstate \
                                  '

cuts['hww2l2v_13TeV_em_dy_2j']  = '   mth<60 \
                                   && mll>40 && mll<80 \
                                   && Alt$(CleanJet_pt[0],0)>30 \
                                   && Alt$(CleanJet_pt[1],0)>30 \
                                   && (mjj<300 || detajj<3) \
                                   && bVeto \
                                   && finalstate \
                                  '

cuts['hww2l2v_13TeV_em_dy_vbf']  = '   mth<60 \
                                    && mll>40 && mll<80 \
                                    && Alt$(CleanJet_pt[0],0)>30 \
                                    && Alt$(CleanJet_pt[1],0)>30 \
                                    && (mjj>300 && detajj>3)\
                                    && bVeto \
                                    && finalstate \
                                   '

