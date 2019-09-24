# cuts

supercut = '   mll>12 \
            && Lepton_pt[0]>20 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[0])==13 || Lepton_pt[0]>25) \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && MET_pt > 20 \
            '


## Signal regions

cuts['hww2l2v_0j_df'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                         && Alt$(CleanJet_pt[0],0)<30 \
'


#cuts['hww2l2v_13TeV_of1j']  = '   (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
#                               && mth>60 \
#                               && mtw2>30 \
#                               && Alt$(CleanJet_pt[0],0)>30 \
#                               && Alt$(CleanJet_pt[1],0)<30 \
#                               && bVeto \
#                              '
'''
cuts['hww2l2v_13TeV_of2j']  = '   (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                               && mth>60 \
                               && mtw2>30 \
                               && Alt$(CleanJet_pt[0],0)>30 \
                               && Alt$(CleanJet_pt[1],0)>30 \
                               && bVeto \
                              '


## Top control regions
cuts['hww2l2v_13TeV_top_of0j']  = '    (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                    && mll>50 \
                                    && mtw2>30 \
                                    && Alt$(CleanJet_pt[0],0)<30 \
                                    && btag0 \
                                  '

cuts['hww2l2v_13TeV_top_of1j']  = '    (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                    && mll>50 \
                                    && mtw2>30 \
                                    && Alt$(CleanJet_pt[0],0)>30 \
                                    && Alt$(CleanJet_pt[1],0)<30 \
                                    && btag1 \
                                  '

cuts['hww2l2v_13TeV_top_of2j']  = '    (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                    && mll>50 \
                                    && mtw2>30 \
                                    && Alt$(CleanJet_pt[0],0)>30 \
                                    && Alt$(CleanJet_pt[1],0)>30 \
                                    && btag2 \
                                  '


## DYtt control regions
cuts['hww2l2v_13TeV_dytt_of0j']  = '   (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                    && mth<60 \
                                    && mll>40 && mll<80 \
                                    && Alt$(CleanJet_pt[0],0)<30 \
                                    && bVeto \
                                   '

cuts['hww2l2v_13TeV_dytt_of1j']  = '   (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                    && mth<60 \
                                    && mll>40 && mll<80 \
                                    && Alt$(CleanJet_pt[0],0)>30 \
                                    && Alt$(CleanJet_pt[1],0)<30 \
                                    && bVeto \
                                   '

cuts['hww2l2v_13TeV_dytt_of2j']  = '   (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                    && mth<60 \
                                    && mll>40 && mll<80 \
                                    && Alt$(CleanJet_pt[0],0)>30 \
                                    && Alt$(CleanJet_pt[1],0)>30 \
                                    && bVeto \
                                   '
'''
