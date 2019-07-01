# cuts

supercut = '   mll>12 \
            && Lepton_pt[0]>25 && Lepton_pt[1]>10 \
            && Lepton_pdgId[0]*Lepton_pdgId[1]==-11*13 \
            && Alt$(Lepton_pt[2],0)<10 \
            && Sum$(CleanJet_pt>30)==2\
            && CleanJet_pt[0]>30 && CleanJet_pt[1]>30 \
            && ptll>30 \
            && MET_pt>20 \
            && mjj>200 \
           '


## Signal regions


cuts['hww2l2v_13TeV_of2j_vbf']  = '(abs(Lepton_pdgId[0] == 13) || Lepton_pt[1]>13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && bVeto \
                                      '



'''
cuts['hww2l2v_13TeV_of2j_vbf']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && bVeto \
                                      '
'''

'''
'''
'''
cuts['hww2l2v_13TeV_of2j_vbf_0p1_1']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && bVeto \
                                      && (hww_VBF_MYmvaBDTG(Entry$,1))<0.1 \
                                      && (hww_VBF_MYmvaBDTG(Entry$,3))<0.1 \
                                      '


cuts['hww2l2v_13TeV_of2j_vbf_0p1_2']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && bVeto \
                                      && (hww_VBF_MYmvaBDTG(Entry$,1))>0.1 \
                                      && (hww_VBF_MYmvaBDTG(Entry$,3))<0.1 \
                                      '

cuts['hww2l2v_13TeV_of2j_vbf_0p1_3']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && bVeto \
                                      && (hww_VBF_MYmvaBDTG(Entry$,1))<0.1 \
                                      && (hww_VBF_MYmvaBDTG(Entry$,3))>0.1 \
                                      '

cuts['hww2l2v_13TeV_of2j_vbf_0p1_4']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && bVeto \
                                      && (hww_VBF_MYmvaBDTG(Entry$,1))>0.1 \
                                      && (hww_VBF_MYmvaBDTG(Entry$,3))>0.1 \
                                      '

'''
'''


cuts['hww2l2v_13TeV_of2j_vbf_0p15_1']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && bVeto \
                                      && (hww_VBF_MYmvaBDTG(Entry$,1))<0.15 \
                                      && (hww_VBF_MYmvaBDTG(Entry$,3))<0.15 \
                                      '


cuts['hww2l2v_13TeV_of2j_vbf_0p15_2']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && bVeto \
                                      && (hww_VBF_MYmvaBDTG(Entry$,1))>0.15 \
                                      && (hww_VBF_MYmvaBDTG(Entry$,3))<0.15 \
                                      '

cuts['hww2l2v_13TeV_of2j_vbf_0p15_3']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && bVeto \
                                      && (hww_VBF_MYmvaBDTG(Entry$,1))<0.15 \
                                      && (hww_VBF_MYmvaBDTG(Entry$,3))>0.15 \
                                      '

cuts['hww2l2v_13TeV_of2j_vbf_0p15_4']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && bVeto \
                                      && (hww_VBF_MYmvaBDTG(Entry$,1))>0.15 \
                                      && (hww_VBF_MYmvaBDTG(Entry$,3))>0.15 \
                                      '

'''
'''


cuts['hww2l2v_13TeV_of2j_vbf_0p2_1']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && bVeto \
                                      && (hww_VBF_MYmvaBDTG(Entry$,1))<0.2 \
                                      && (hww_VBF_MYmvaBDTG(Entry$,3))<0.2 \
                                      '


cuts['hww2l2v_13TeV_of2j_vbf_0p2_2']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && bVeto \
                                      && (hww_VBF_MYmvaBDTG(Entry$,1))>0.2 \
                                      && (hww_VBF_MYmvaBDTG(Entry$,3))<0.2 \
                                      '

cuts['hww2l2v_13TeV_of2j_vbf_0p2_3']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && bVeto \
                                      && (hww_VBF_MYmvaBDTG(Entry$,1))<0.2 \
                                      && (hww_VBF_MYmvaBDTG(Entry$,3))>0.2 \
                                      '

cuts['hww2l2v_13TeV_of2j_vbf_0p2_4']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && bVeto \
                                      && (hww_VBF_MYmvaBDTG(Entry$,1))>0.2 \
                                      && (hww_VBF_MYmvaBDTG(Entry$,3))>0.2 \
                                      '

'''
'''


cuts['hww2l2v_13TeV_of2j_vbf_0p3_1']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && bVeto \
                                      && (hww_VBF_MYmvaBDTG(Entry$,1))<0.3 \
                                      && (hww_VBF_MYmvaBDTG(Entry$,3))<0.3 \
                                      '


cuts['hww2l2v_13TeV_of2j_vbf_0p3_2']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && bVeto \
                                      && (hww_VBF_MYmvaBDTG(Entry$,1))>0.3 \
                                      && (hww_VBF_MYmvaBDTG(Entry$,3))<0.3 \
                                      '

cuts['hww2l2v_13TeV_of2j_vbf_0p3_3']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && bVeto \
                                      && (hww_VBF_MYmvaBDTG(Entry$,1))<0.3 \
                                      && (hww_VBF_MYmvaBDTG(Entry$,3))>0.3 \
                                      '

cuts['hww2l2v_13TeV_of2j_vbf_0p3_4']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && bVeto \
                                      && (hww_VBF_MYmvaBDTG(Entry$,1))>0.3 \
                                      && (hww_VBF_MYmvaBDTG(Entry$,3))>0.3 \
                                      '


'''
'''

cuts['hww2l2v_13TeV_of2j_vbf_0p05_1']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && bVeto \
                                      && (hww_VBF_MYmvaBDTG(Entry$,1))<0.05 \
                                      && (hww_VBF_MYmvaBDTG(Entry$,3))<0.05 \
                                      '


cuts['hww2l2v_13TeV_of2j_vbf_0p05_2']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && bVeto \
                                      && (hww_VBF_MYmvaBDTG(Entry$,1))>0.05 \
                                      && (hww_VBF_MYmvaBDTG(Entry$,3))<0.05 \
                                      '

cuts['hww2l2v_13TeV_of2j_vbf_0p05_3']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && bVeto \
                                      && (hww_VBF_MYmvaBDTG(Entry$,1))<0.05 \
                                      && (hww_VBF_MYmvaBDTG(Entry$,3))>0.05 \
                                      '

cuts['hww2l2v_13TeV_of2j_vbf_0p05_4']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                                      && bVeto \
                                      && (hww_VBF_MYmvaBDTG(Entry$,1))>0.05 \
                                      && (hww_VBF_MYmvaBDTG(Entry$,3))>0.05 \
                                      '
'''
'''

cuts['hww2l2v_13TeV_of0j']  = '   (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                               && mth>60 \
                               && mtw2>30 \
                               && Alt$(CleanJet_pt[0],0)<30 \
                               && bVeto \
                              '

cuts['hww2l2v_13TeV_of1j']  = '   (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                               && mth>60 \
                               && mtw2>30 \
                               && Alt$(CleanJet_pt[0],0)>30 \
                               && Alt$(CleanJet_pt[1],0)<30 \
                               && bVeto \
                              '

cuts['hww2l2v_13TeV_of2j']  = '   (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
                               && mth>60 \
                               && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                               && bVeto \
                              '

'''
'''
cuts['hww2l2v_13TeV_of2j_lowmjj']  = '   (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
                               && (mth>=60 && mth<125)  \
                               && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                               && (mjj>=400 && mjj<700) \
                               && bVeto \
                              '

cuts['hww2l2v_13TeV_of2j_highmjj']  = '   (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
                               && (mth>=60 && mth<125) \
                               && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                               && mjj>=700 \
                               && bVeto \
                              '
'''
'''
cuts['hww2l2v_13TeV_of2j_lowpurity']  = '   (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
                               && mth>60 \
                               && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) \
                               && (hww_VBF_MYmvaBDTG(Entry$,0)<0.15) \
                               && bVeto \
                              '
'''


## Top control regions
'''
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
'''
cuts['hww2l2v_13TeV_top_of2j']  = '    (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
                                    && mll>50 \
                                    && (detajj>3.5 && mjj>400) \
                                    && btag2 \
                                  '
'''

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
'''
cuts['hww2l2v_13TeV_dytt_of2j']  = '   (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
                                    && mth<60 \
                                    && mll>40 && mll<80 \
                                    && (detajj>3.5 && mjj>400) \
                                    && bVeto \
                                   '

