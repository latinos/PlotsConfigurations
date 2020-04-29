# cuts
supercut = 'mll>12  \
            && Lepton_pt[0]>25 && Lepton_pt[1]>20 \
            && bVeto \
            && PuppiMET_pt > 30 \
            '

## SR 2jets
cuts['hww2l2v_13TeV_of2j_WH_SS_uu_2j'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == 13*13) \
                                       && nLepton==2  \
                                       && Alt$(CleanJet_pt[0],0)>30 \
                                       && Alt$(CleanJet_pt[1],0)>30 \
                                       && mjj < 100 \
                                       && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 \
                                       && abs(mll-91.2)>15 \
                                       && mlljj20_whss > 50. \
                                       '
cuts['hww2l2v_13TeV_of2j_WH_SS_eu_2j'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13) \
                                       && nLepton==2 \
                                       && Alt$(CleanJet_pt[0],0)>30 \
                                       && Alt$(CleanJet_pt[1],0)>30 \
                                       && mjj < 100 \
                                       && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 \
                                       && mlljj20_whss > 50. \
                                       '
## SR 1jet

cuts['hww2l2v_13TeV_of2j_WH_SS_uu_1j'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == 13*13) \
                                       && nLepton==2 \
                                       && Alt$(CleanJet_pt[0],0)>30 \
                                       && Alt$(CleanJet_pt[1],0)<30 \
                                       && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 \
                                       && abs(mll-91.2)>15 \
                                       && mlljj20_whss > 50. \
                                       '
cuts['hww2l2v_13TeV_of2j_WH_SS_eu_1j'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13) \
                                       && nLepton==2 \
                                       && Alt$(CleanJet_pt[0],0)>30 \
                                       && Alt$(CleanJet_pt[1],0)<30 \
                                       && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 \
                                       && mlljj20_whss > 50. \
                                       '

### WZ CR

'''
cuts['hww2l2v_13TeV_of2j_WH_SS_WZ_1j'] = '((Lepton_pdgId[0]*Lepton_pdgId[1] == 13*13) || (Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13))\
                                       && (nLepton>=3 && Alt$(Lepton_pt[3],0)<10) \
                                       && Lepton_pt[2]>15 \
                                       && Alt$(CleanJet_pt[0],0)>30 \
                                       && Alt$(CleanJet_pt[1],0)<30 \
                                       && WH3l_mlll > 100 \
                                       && abs(WH3l_chlll) == 1 \
                                       '

cuts['hww2l2v_13TeV_of2j_WH_SS_WZ_2j'] = '((Lepton_pdgId[0]*Lepton_pdgId[1] == 13*13) || (Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13)) \
                                       && (nLepton>=3 && Alt$(Lepton_pt[3],0)<10) \
                                       && Lepton_pt[2]>15 \
                                       && Alt$(CleanJet_pt[0],0)>30 \
                                       && Alt$(CleanJet_pt[1],0)>30 \
                                       && WH3l_mlll > 100 \
                                       && abs(WH3l_chlll) == 1 \
                                       '
'''
