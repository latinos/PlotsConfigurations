# cuts


supercut = 'mll>12  \
            && Lepton_pt[0]>25 && Lepton_pt[1]>15 \
            '

#supercut = '   mll>12 \
#            && Lepton_pt[0]>25 \
#            && Lepton_pt[1]>15 \
#            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
#            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
#            && MET_pt > 20 \
#            && Sum$(CleanJet_pt>30)>=1 \
#           '


## Signal regions

#cuts['hww2l2v_13TeV_of2j_WH_SS_ll_1j'] = '((Lepton_pdgId[0] * Lepton_pdgId[1] == 13*13) || (Lepton_pdgId[0] * Lepton_pdgId[1] == 11*11)) \
#                                       && bVeto \
#                                       && abs(mll-91.2)>15 \
#                                       && Alt$(CleanJet_pt[0],0)>30 \
#                                       && Alt$(CleanJet_pt[1],0)>20 \
#                                       && Alt$(CleanJet_pt[1],0)<30 \
#                                       '
#cuts['hww2l2v_13TeV_of2j_WH_SS_ll_2j'] = '((Lepton_pdgId[0] * Lepton_pdgId[1] == 13*13) || (Lepton_pdgId[0] * Lepton_pdgId[1] == 11*11)) \
#                                       && bVeto \
#                                       && abs(mll-91.2)>15 \
#                                       && Alt$(CleanJet_pt[0],0)>30 \
#                                       && Alt$(CleanJet_pt[1],0)>30 \
#                                       '
#cuts['hww2l2v_13TeV_of2j_WH_SS_eu_1j'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13) \
#                                       && bVeto \
#                                       && Alt$(CleanJet_pt[0],0)>30 \
#                                       && Alt$(CleanJet_pt[1],0)>20 \
#                                       && Alt$(CleanJet_pt[1],0)<30 \
#                                       '
#cuts['hww2l2v_13TeV_of2j_WH_SS_eu_2j'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13) \
#                                       && bVeto \
#                                       && Alt$(CleanJet_pt[0],0)>30 \
#                                       && Alt$(CleanJet_pt[1],0)>30 \
#                                       '
#Control regions 
cuts['hww2l2v_13TeV_of2j_WH_SS_ll_1j_WZ_CR'] = '((Lepton_pdgId[0] * Lepton_pdgId[1] == 13*13) || (Lepton_pdgId[0] * Lepton_pdgId[1] == 11*11)) \
                                       && bVeto \
                                       && Alt$(CleanJet_pt[0],0)>30 \
                                       && Lepton_pt[2]>15 \
                                       && Lepton_pt[3]<10 \
                                       '
cuts['hww2l2v_13TeV_of2j_WH_SS_ll_2j_WZ_CR'] = '((Lepton_pdgId[0] * Lepton_pdgId[1] == 13*13) || (Lepton_pdgId[0] * Lepton_pdgId[1] == 11*11)) \
                                       && bVeto \
                                       && Alt$(CleanJet_pt[0],0)>30 \
                                       && Lepton_pt[2]>15 \
                                       && Lepton_pt[3]<10 \
                                       '
cuts['hww2l2v_13TeV_of2j_WH_SS_eu_1j_WZ_CR'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13) \
                                       && bVeto \
                                       && Alt$(CleanJet_pt[0],0)>30 \
                                       && Lepton_pt[2]>15 \
                                       && Lepton_pt[3]<10 \
                                       '
cuts['hww2l2v_13TeV_of2j_WH_SS_eu_2j_WZ_CR'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13) \
                                       && bVeto \
                                       && Alt$(CleanJet_pt[0],0)>30 \
                                       && Lepton_pt[2]>15 \
                                       && Lepton_pt[3]<10 \
                                       '

cuts['hww2l2v_13TeV_WH_SS_ll_1j_DY_CR'] = '((Lepton_pdgId[0] * Lepton_pdgId[1] == 13*13) || (Lepton_pdgId[0] * Lepton_pdgId[1] == 11*11)) \
                                       && bVeto \
                                       && Lepton_pt[2]<10 \
                                       && abs(mll-91.2)<15  \
                                       && Alt$(CleanJet_pt[0],0)>=30 \
                                       '
cuts['hww2l2v_13TeV_WH_SS_ll_2j_DY_CR'] = '((Lepton_pdgId[0] * Lepton_pdgId[1] == 13*13) || (Lepton_pdgId[0] * Lepton_pdgId[1] == 11*11)) \
                                       && bVeto \
                                       && Lepton_pt[2]<10 \
                                       && abs(mll-91.2)<15  \
                                       && Alt$(CleanJet_pt[0],0)>=30 \
                                       '
cuts['hww2l2v_13TeV_WH_SS_eu_1j_DY_CR'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13) \
                                       && bVeto \
                                       && Lepton_pt[2]<10 \
                                       && abs(mll-91.2)<15  \
                                       && Alt$(CleanJet_pt[0],0)>=30 \
                                       '
cuts['hww2l2v_13TeV_WH_SS_eu_2j_DY_CR'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13) \
                                       && bVeto \
                                       && Lepton_pt[2]<10 \
                                       && abs(mll-91.2)<15  \
                                       && Alt$(CleanJet_pt[0],0)>=30 \
                                       '

cuts['hww2l2v_13TeV_WH_SS_eu_1j_Top_CR'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13) \
                                        && Lepton_pt[2]<10 \
                                        && Alt$(CleanJet_pt[0],0)>=30 \
                                        && Alt$(CleanJet_pt[1],0)<30 \
                                        '
cuts['hww2l2v_13TeV_WH_SS_eu_2j_Top_CR'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13) \
                                        && Lepton_pt[2]<10 \
                                        && Alt$(CleanJet_pt[0],0)>=30 \
                                        && Alt$(CleanJet_pt[1],0)>30 \
                                        '
#cuts['hww2l2v_13TeV_of2j_WH_SS_ee'] = '   (Lepton_pdgId[0]*Lepton_pdgId[1] == 11*11) \
#                                       && Lepton_pt[1]>20 \
#                                       && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 \
#                                       && abs(mll-91.2)>15 \
#                                       && Alt$(CleanJet_pt[0],0)>30 \
#                                       && (Sum$(CleanJet_pt>30)>=2 || mjj < 100) \
#                                       && bVeto \
#                                     '
#
#cuts['hww2l2v_13TeV_of2j_WH_SS_uu'] = '   (Lepton_pdgId[0]*Lepton_pdgId[1] == 13*13) \
#                                       && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 \
#                                       && abs(mll-91.2)>15 \
#                                       && Alt$(CleanJet_pt[0],0)>30 \
#                                       && (Sum$(CleanJet_pt>30)>=2 || mjj < 100) \
#                                       && bVeto \
#                                     '
#
#cuts['hww2l2v_13TeV_of2j_WH_SS_eu'] = '   ((Lepton_pdgId[0] == 11 && Lepton_pdgId[1] == 13) || (Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -13)) \
#                                       && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 \
#                                       && Alt$(CleanJet_pt[0],0)>30 \
#                                       && (Sum$(CleanJet_pt>30)>=2 || mjj < 100) \
#                                       && bVeto \
#                                     '
#
#cuts['hww2l2v_13TeV_of2j_WH_SS_ue'] = '   ((Lepton_pdgId[0] == 13 && Lepton_pdgId[1] == 11) || (Lepton_pdgId[0] == -13 && Lepton_pdgId[1] == -11)) \
#                                       && Lepton_pt[1]>20 \
#                                       && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 \
#                                       && Alt$(CleanJet_pt[0],0)>30 \
#                                       && (Sum$(CleanJet_pt>30)>=2 || mjj < 100) \
#                                       && bVeto \
#                                     '

### Top control regions
#cuts['hww2l2v_13TeV_top_of0j']  = '    (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
#                                    && mll>50 \
#                                    && mtw2>30 \
#                                    && Alt$(CleanJet_pt[0],0)<30 \
#                                    && btag0 \
#                                  '
#
#cuts['hww2l2v_13TeV_top_of1j']  = '    (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
#                                    && mll>50 \
#                                    && mtw2>30 \
#                                    && Alt$(CleanJet_pt[0],0)>30 \
#                                    && Alt$(CleanJet_pt[1],0)<30 \
#                                    && btag1 \
#                                  '
#
#cuts['hww2l2v_13TeV_top_of2j']  = '    (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
#                                    && mll>50 \
#                                    && mtw2>30 \
#                                    && Alt$(CleanJet_pt[0],0)>30 \
#                                    && Alt$(CleanJet_pt[1],0)>30 \
#                                    && btag2 \
#                                  '
#
#
### DYtt control regions
#cuts['hww2l2v_13TeV_dytt_of0j']  = '   (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
#                                    && mth<60 \
#                                    && mll>40 && mll<80 \
#                                    && Alt$(CleanJet_pt[0],0)<30 \
#                                    && bVeto \
#                                   '
#
#cuts['hww2l2v_13TeV_dytt_of1j']  = '   (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
#                                    && mth<60 \
#                                    && mll>40 && mll<80 \
#                                    && Alt$(CleanJet_pt[0],0)>30 \
#                                    && Alt$(CleanJet_pt[1],0)<30 \
#                                    && bVeto \
#                                   '
#
#cuts['hww2l2v_13TeV_dytt_of2j']  = '   (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
#                                    && mth<60 \
#                                    && mll>40 && mll<80 \
#                                    && Alt$(CleanJet_pt[0],0)>30 \
#                                    && Alt$(CleanJet_pt[1],0)>30 \
#                                    && bVeto \
#                                   '

