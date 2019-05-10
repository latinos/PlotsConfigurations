
supercut = '    mll>12 \
            && Lepton_pt[0]>20 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[0])==13 || Lepton_pt[0]>25) \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
           '

# Some cuts

dymva0jet = 'dymva_dnn_0j > 0.95'
dymva1jet = 'dymva_dnn_1j > 0.95'
dymva2jet = 'dymva_dnn_2j > 0.95'

# Higgs Signal Regions: ee/uu * 0/1 jet

cuts['hww2l2v_13TeV_0jee'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && Higgs0jetsf \
                             && '+dymva0jet+' \
                             '

cuts['hww2l2v_13TeV_1jee'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && Higgs1jetsf \
                             && '+dymva1jet+' \
                             '

cuts['hww2l2v_13TeV_2jee'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)>=30 \
                             && bVeto \
                             && ZVeto \
                             && Higgs2jetsf \
                             && '+dymva2jet+' \
                             '

cuts['hww2l2v_13TeV_0jmm'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && Higgs0jetsf \
                             && '+dymva0jet+' \
                             '

cuts['hww2l2v_13TeV_1jmm'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && Higgs1jetsf \
                             && '+dymva1jet+' \
                             '

cuts['hww2l2v_13TeV_2jmm'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)>=30 \
                             && bVeto \
                             && ZVeto \
                             && Higgs2jetsf \
                             && '+dymva2jet+' \
                             '

## Loose dymva + H sel for DY Acc
cuts['hww2l2v_13TeV_0jee_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && Higgs0jetsf \
                             && dymva_dnn_0j>0.8 \
                             '

cuts['hww2l2v_13TeV_1jee_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && Higgs1jetsf \
                             && dymva_dnn_1j>0.8 \
                             '

cuts['hww2l2v_13TeV_2jee_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)>=30 \
                             && bVeto \
                             && ZVeto \
                             && Higgs2jetsf \
                             && dymva_dnn_2j>0.8 \
                             '

cuts['hww2l2v_13TeV_0jmm_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && Higgs0jetsf \
                             && dymva_dnn_0j>0.8 \
                             '

cuts['hww2l2v_13TeV_1jmm_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && Higgs1jetsf \
                             && dymva_dnn_1j>0.8 \
                             '

cuts['hww2l2v_13TeV_2jmm_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)>=30 \
                             && bVeto \
                             && ZVeto \
                             && Higgs2jetsf \
                             && dymva_dnn_2j>0.8 \
                             '

## Top CR: No H sel , bTag , tight DYmva

cuts['hww2l2v_13TeV_top_0jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && btag0 \
                             && ZVeto \
                             && '+dymva0jet+' \
                             '

cuts['hww2l2v_13TeV_top_1jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && btag1 \
                             && ZVeto \
                             && '+dymva1jet+' \
                             '

cuts['hww2l2v_13TeV_top_2jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)>=30 \
                             && btag2 \
                             && ZVeto \
                             && '+dymva2jet+' \
                             '

cuts['hww2l2v_13TeV_top_0jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && btag0 \
                             && ZVeto \
                             && '+dymva0jet+' \
                             '

cuts['hww2l2v_13TeV_top_1jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && btag1 \
                             && ZVeto \
                             && '+dymva1jet+' \
                             '

cuts['hww2l2v_13TeV_top_2jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)>=30 \
                             && btag2 \
                             && ZVeto \
                             && '+dymva2jet+' \
                             '

## WW CR: No H Sel , mll>80, tight DYMva

cuts['hww2l2v_13TeV_WW_0jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && '+dymva0jet+' \
                             && mll > 80 \
                             '

cuts['hww2l2v_13TeV_WW_1jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && '+dymva1jet+' \
                             && mll > 80 \
                             '

cuts['hww2l2v_13TeV_WW_2jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)>=30 \
                             && bVeto \
                             && ZVeto \
                             && '+dymva2jet+' \
                             && mll > 80 \
                             '

cuts['hww2l2v_13TeV_WW_0jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && '+dymva0jet+' \
                             && mll > 80 \
                             '

cuts['hww2l2v_13TeV_WW_1jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && '+dymva1jet+' \
                             && mll > 80 \
                             '

cuts['hww2l2v_13TeV_WW_2jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)>=30 \
                             && bVeto \
                             && ZVeto \
                             && '+dymva2jet+' \
                             && mll > 80 \
                             '

## DY Background IN with DYMVA>0.9X : Split ee/mm , No H cut !

cuts['hww2l2v_13TeV_DYin_0jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && '+dymva0jet+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_DYin_1jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && bVeto \
                             && '+dymva1jet+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_DYin_2jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)>=30 \
                             && bVeto \
                             && '+dymva2jet+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_DYin_0jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && '+dymva0jet+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_DYin_1jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && bVeto \
                             && '+dymva1jet+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_DYin_2jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)>=30 \
                             && bVeto \
                             && '+dymva2jet+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_DYin_0jdf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && '+dymva0jet+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_DYin_1jdf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && bVeto \
                             && '+dymva1jet+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_DYin_2jdf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)>=30 \
                             && bVeto \
                             && '+dymva2jet+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

## DY Background IN with btag : Split ee/mm , No H cut !
#  0jet only: Negligible DY background in 1jet bTag region

cuts['hww2l2v_13TeV_DYin_btag_0jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && btag0 \
                             && '+dymva0jet+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_DYin_btag_0jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && btag0 \
                             && '+dymva0jet+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_DYin_btag_0jdf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && btag0 \
                             && '+dymva0jet+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

## DY CR for Acc Denominator

cuts['hww2l2v_13TeV_0jee_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && dymva_dnn_0j > 0.8 \
                             '

cuts['hww2l2v_13TeV_1jee_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && dymva_dnn_1j > 0.8 \
                             '

cuts['hww2l2v_13TeV_2jee_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)>=30 \
                             && bVeto \
                             && ZVeto \
                             && dymva_dnn_2j > 0.8 \
                             '

cuts['hww2l2v_13TeV_0jmm_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && dymva_dnn_0j > 0.8 \
                             '

cuts['hww2l2v_13TeV_1jmm_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && dymva_dnn_1j > 0.8 \
                             '

cuts['hww2l2v_13TeV_2jmm_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)>=30 \
                             && bVeto \
                             && ZVeto \
                             && dymva_dnn_2j > 0.8 \
                             '

## Loose dymva + WW sel for DY Acc


cuts['hww2l2v_13TeV_WW_0jee_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && mll > 80 \
                             && dymva_dnn_0j > 0.8 \
                             '

cuts['hww2l2v_13TeV_WW_1jee_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && mll > 80 \
                             && dymva_dnn_0j > 0.8 \
                             '

cuts['hww2l2v_13TeV_WW_2jee_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)>=30 \
                             && bVeto \
                             && ZVeto \
                             && mll > 80 \
                             && dymva_dnn_0j > 0.8 \
                             '

cuts['hww2l2v_13TeV_WW_0jmm_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && mll > 80 \
                             && dymva_dnn_0j > 0.8 \
                             '

cuts['hww2l2v_13TeV_WW_1jmm_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && mll > 80 \
                             && dymva_dnn_0j > 0.8 \
                             '

cuts['hww2l2v_13TeV_WW_2jmm_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)>=30 \
                             && bVeto \
                             && ZVeto \
                             && mll > 80 \
                             && dymva_dnn_0j > 0.8 \
                             '
