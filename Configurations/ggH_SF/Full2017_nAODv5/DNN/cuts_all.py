
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

dymva0jetee = 'dymva_dnn_0j > 0.980'
dymva0jetmm = 'dymva_dnn_0j > 0.980'
dymva1jetee = 'dymva_dnn_1j > 0.975'
dymva1jetmm = 'dymva_dnn_1j > 0.975'
dymva2jetee = 'dymva_dnn_2j > 0.925'
dymva2jetmm = 'dymva_dnn_2j > 0.940'
dymvaVBFee  = 'dymva_dnn_VBF> 0.810'
dymvaVBFmm  = 'dymva_dnn_VBF> 0.810'

TagggH   = '( mjj <  65 || mjj >  105 )'
TagVH    = '( mjj >= 65 && mjj <= 105 )'

# Higgs Signal Regions: ee/uu * 0/1 jet

cuts['hww2l2v_13TeV_2017_0jee_pt2ge20'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Lepton_pt[1]>=20 \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && Higgs0jetee \
                             && '+dymva0jetee+' \
                             '

cuts['hww2l2v_13TeV_2017_0jee_pt2lt20'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Lepton_pt[1]<20 \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && Higgs0jetee \
                             && '+dymva0jetee+' \
                             '

cuts['hww2l2v_13TeV_2017_1jee'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && Higgs1jetee \
                             && '+dymva1jetee+' \
                             '

cuts['hww2l2v_13TeV_2017_0jmm_pt2ge20'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Lepton_pt[1]>=20 \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && Higgs0jetmm \
                             && '+dymva0jetmm+' \
                             '

cuts['hww2l2v_13TeV_2017_0jmm_pt2lt20'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Lepton_pt[1]<20 \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && Higgs0jetmm \
                             && '+dymva0jetmm+' \
                             '

cuts['hww2l2v_13TeV_2017_1jmm'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && Higgs1jetmm \
                             && '+dymva1jetmm+' \
                             '

## Loose dymva + H sel for DY Acc
cuts['hww2l2v_13TeV_2017_0jee_HAccNum_pt2ge20'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Lepton_pt[1]>=20 \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && Higgs0jetee \
                             && dymva_dnn_0j>0.8 \
                             '

cuts['hww2l2v_13TeV_2017_0jee_HAccNum_pt2lt20'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Lepton_pt[1]<20 \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && Higgs0jetee \
                             && dymva_dnn_0j>0.8 \
                             '

cuts['hww2l2v_13TeV_2017_1jee_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && Higgs1jetee \
                             && dymva_dnn_1j>0.8 \
                             '

cuts['hww2l2v_13TeV_2017_0jmm_HAccNum_pt2ge20'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Lepton_pt[1]>=20 \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && Higgs0jetmm \
                             && dymva_dnn_0j>0.8 \
                             '

cuts['hww2l2v_13TeV_2017_0jmm_HAccNum_pt2lt20'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Lepton_pt[1]<20 \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && Higgs0jetmm \
                             && dymva_dnn_0j>0.8 \
                             '

cuts['hww2l2v_13TeV_2017_1jmm_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && Higgs1jetmm \
                             && dymva_dnn_1j>0.8 \
                             '

## Top CR: No H sel , bTag , tight DYmva

cuts['hww2l2v_13TeV_2017_top_0jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && btag0 \
                             && ZVeto \
                             && '+dymva0jetee+' \
                             '

cuts['hww2l2v_13TeV_2017_top_1jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && btag1 \
                             && ZVeto \
                             && '+dymva1jetee+' \
                             '

cuts['hww2l2v_13TeV_2017_top_0jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && btag0 \
                             && ZVeto \
                             && '+dymva0jetmm+' \
                             '

cuts['hww2l2v_13TeV_2017_top_1jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && btag1 \
                             && ZVeto \
                             && '+dymva1jetmm+' \
                             '

## WW CR: No H Sel , mll>80, tight DYMva

cuts['hww2l2v_13TeV_2017_WW_0jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && '+dymva0jetee+' \
                             && mll > 80 \
                             '

cuts['hww2l2v_13TeV_2017_WW_1jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && '+dymva1jetee+' \
                             && mll > 80 \
                             '

cuts['hww2l2v_13TeV_2017_WW_0jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && '+dymva0jetmm+' \
                             && mll > 80 \
                             '

cuts['hww2l2v_13TeV_2017_WW_1jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && '+dymva1jetmm+' \
                             && mll > 80 \
                             '

## DY Background IN with DYMVA>0.9X : Split ee/mm , No H cut !

cuts['hww2l2v_13TeV_2017_DYin_0jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && '+dymva0jetee+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_2017_DYin_1jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && bVeto \
                             && '+dymva1jetee+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_2017_DYin_0jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && '+dymva0jetmm+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_2017_DYin_1jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && bVeto \
                             && '+dymva1jetmm+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_2017_DYin_0jdf_ee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && '+dymva0jetee+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_2017_DYin_1jdf_ee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && bVeto \
                             && '+dymva1jetee+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_2017_DYin_0jdf_mm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && '+dymva0jetmm+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_2017_DYin_1jdf_mm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && bVeto \
                             && '+dymva1jetmm+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

## DY Background IN with btag : Split ee/mm , No H cut !
#  0jet only: Negligible DY background in 1jet bTag region

cuts['hww2l2v_13TeV_2017_DYin_btag_0jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && btag0 \
                             && '+dymva0jetee+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_2017_DYin_btag_0jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && btag0 \
                             && '+dymva0jetmm+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_2017_DYin_btag_0jdf_ee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && btag0 \
                             && '+dymva0jetee+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_2017_DYin_btag_0jdf_mm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && btag0 \
                             && '+dymva0jetmm+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

## DY CR for Acc Denominator

cuts['hww2l2v_13TeV_2017_0jee_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && dymva_dnn_0j > 0.8 \
                             '

cuts['hww2l2v_13TeV_2017_1jee_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && dymva_dnn_1j > 0.8 \
                             '

cuts['hww2l2v_13TeV_2017_0jmm_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && dymva_dnn_0j > 0.8 \
                             '

cuts['hww2l2v_13TeV_2017_1jmm_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && dymva_dnn_1j > 0.8 \
                             '

## Loose dymva + WW sel for DY Acc


cuts['hww2l2v_13TeV_2017_WW_0jee_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && mll > 80 \
                             && dymva_dnn_0j > 0.8 \
                             '

cuts['hww2l2v_13TeV_2017_WW_1jee_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && mll > 80 \
                             && dymva_dnn_1j > 0.8 \
                             '

cuts['hww2l2v_13TeV_2017_WW_0jmm_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && mll > 80 \
                             && dymva_dnn_0j > 0.8 \
                             '

cuts['hww2l2v_13TeV_2017_WW_1jmm_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                             && bVeto \
                             && ZVeto \
                             && mll > 80 \
                             && dymva_dnn_1j > 0.8 \
                             '

cuts['hww2l2v_13TeV_2017_2jee_vbf_lowmjj'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && 2jVBF \
                             && bVeto \
                             && ZVeto \
                             && Higgsvbfee \
                             && mjj < 700 \
                             && '+dymvaVBFee+' \
                             '

cuts['hww2l2v_13TeV_2017_2jmm_vbf_lowmjj'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && 2jVBF \
                             && bVeto \
                             && ZVeto \
                             && Higgsvbfmm \
                             && mjj < 700 \
                             && '+dymvaVBFmm+' \
                             '

cuts['hww2l2v_13TeV_2017_2jee_vbf_highmjj'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && 2jVBF \
                             && bVeto \
                             && ZVeto \
                             && Higgsvbfee \
                             && mjj >= 700 \
                             && '+dymvaVBFee+' \
                             '

cuts['hww2l2v_13TeV_2017_2jmm_vbf_highmjj'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && 2jVBF \
                             && bVeto \
                             && ZVeto \
                             && Higgsvbfmm \
                             && mjj >= 700 \
                             && '+dymvaVBFmm+' \
                             '


## Loose dymva + H sel for DY Acc
cuts['hww2l2v_13TeV_2017_2jee_vbf_lowmjj_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && 2jVBF \
                             && bVeto \
                             && ZVeto \
                             && Higgsvbfee \
                             && dymva_dnn_VBF>0.8 \
                             && mjj < 700 \
                             '

cuts['hww2l2v_13TeV_2017_2jmm_vbf_lowmjj_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && 2jVBF \
                             && bVeto \
                             && ZVeto \
                             && Higgsvbfmm \
                             && dymva_dnn_VBF>0.8 \
                             && mjj < 700 \
                             '

cuts['hww2l2v_13TeV_2017_2jee_vbf_highmjj_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && 2jVBF \
                             && bVeto \
                             && ZVeto \
                             && Higgsvbfee \
                             && dymva_dnn_VBF>0.8 \
                             && mjj >= 700 \
                             '

cuts['hww2l2v_13TeV_2017_2jmm_vbf_highmjj_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && 2jVBF \
                             && bVeto \
                             && ZVeto \
                             && Higgsvbfmm \
                             && dymva_dnn_VBF>0.8 \
                             && mjj >= 700 \
                             '

## Top CR: No H sel , bTag , tight DYmva

cuts['hww2l2v_13TeV_2017_top_2jee_vbf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && 2jVBF \
                             && btag2 \
                             && ZVeto \
                             && '+dymvaVBFee+' \
                             '

cuts['hww2l2v_13TeV_2017_top_2jmm_vbf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && 2jVBF \
                             && btag2 \
                             && ZVeto \
                             && '+dymvaVBFmm+' \
                             '

## WW CR: No H Sel , mll>80, tight DYMva

cuts['hww2l2v_13TeV_2017_WW_2jee_vbf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && 2jVBF \
                             && bVeto \
                             && ZVeto \
                             && '+dymvaVBFee+' \
                             && mll > 80 \
                             '

cuts['hww2l2v_13TeV_2017_WW_2jmm_vbf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && 2jVBF \
                             && bVeto \
                             && ZVeto \
                             && '+dymvaVBFmm+' \
                             && mll > 80 \
                             '

## DY Background IN with DYMVA>0.9X : Split ee/mm , No H cut !

cuts['hww2l2v_13TeV_2017_DYin_2jee_vbf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && 2jVBF \
                             && bVeto \
                             && '+dymvaVBFee+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_2017_DYin_2jmm_vbf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && 2jVBF \
                             && bVeto \
                             && '+dymvaVBFmm+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_2017_DYin_2jdf_ee_vbf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                             && 2jVBF \
                             && bVeto \
                             && '+dymvaVBFee+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_2017_DYin_2jdf_mm_vbf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                             && 2jVBF \
                             && bVeto \
                             && '+dymvaVBFmm+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '


## DY Background IN with btag : Split ee/mm , No H cut !
#  0jet only: Negligible DY background in 1jet bTag region

cuts['hww2l2v_13TeV_2017_DYin_btag_2jee_vbf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && 2jVBF \
                             && btag2 \
                             && '+dymvaVBFee+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_2017_DYin_btag_2jmm_vbf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && 2jVBF \
                             && btag2 \
                             && '+dymvaVBFmm+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_2017_DYin_btag_2jdf_ee_vbf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                             && 2jVBF \
                             && btag2 \
                             && '+dymvaVBFee+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_2017_DYin_btag_2jdf_mm_vbf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                             && 2jVBF \
                             && btag2 \
                             && '+dymvaVBFmm+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '


## DY CR for Acc Denominator

cuts['hww2l2v_13TeV_2017_2jee_vbf_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && 2jVBF \
                             && bVeto \
                             && ZVeto \
                             && dymva_dnn_VBF > 0.8 \
                             '

cuts['hww2l2v_13TeV_2017_2jmm_vbf_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && 2jVBF \
                             && bVeto \
                             && ZVeto \
                             && dymva_dnn_VBF > 0.8 \
                             '

## Loose dymva + WW sel for DY Acc

cuts['hww2l2v_13TeV_2017_WW_2jee_vbf_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && 2jVBF \
                             && bVeto \
                             && ZVeto \
                             && mll > 80 \
                             && dymva_dnn_VBF > 0.8 \
                             '

cuts['hww2l2v_13TeV_2017_WW_2jmm_vbf_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && 2jVBF \
                             && bVeto \
                             && ZVeto \
                             && mll > 80 \
                             && dymva_dnn_VBF > 0.8 \
                             '


cuts['hww2l2v_13TeV_2017_2jee'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && 2jggH \
                             && bVeto \
                             && ZVeto \
                             && Higgs2jetee \
                             && '+dymva2jetee+' \
                             && '+TagggH+' \
                             '

cuts['hww2l2v_13TeV_2017_2jmm'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && 2jggH \
                             && bVeto \
                             && ZVeto \
                             && Higgs2jetmm \
                             && '+dymva2jetmm+' \
                             && '+TagggH+' \
                             '

cuts['hww2l2v_13TeV_2017_2jee_vh2j'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && 2jggH \
                             && bVeto \
                             && ZVeto \
                             && Higgs2jetee \
                             && '+dymva2jetee+' \
                             && '+TagVH+' \
                             '

cuts['hww2l2v_13TeV_2017_2jmm_vh2j'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && 2jggH \
                             && bVeto \
                             && ZVeto \
                             && Higgs2jetmm \
                             && '+dymva2jetmm+' \
                             && '+TagVH+' \
                             '

## Loose dymva + H sel for DY Acc
cuts['hww2l2v_13TeV_2017_2jee_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && 2jggH \
                             && bVeto \
                             && ZVeto \
                             && Higgs2jetee \
                             && dymva_dnn_2j>0.8 \
                             && '+TagggH+' \
                             '

cuts['hww2l2v_13TeV_2017_2jmm_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && 2jggH \
                             && bVeto \
                             && ZVeto \
                             && Higgs2jetmm \
                             && dymva_dnn_2j>0.8 \
                             && '+TagggH+' \
                             '

cuts['hww2l2v_13TeV_2017_2jee_vh2j_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && 2jggH \
                             && bVeto \
                             && ZVeto \
                             && Higgs2jetee \
                             && dymva_dnn_2j>0.8 \
                             && '+TagVH+' \
                             '

cuts['hww2l2v_13TeV_2017_2jmm_vh2j_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && 2jggH \
                             && bVeto \
                             && ZVeto \
                             && Higgs2jetmm \
                             && dymva_dnn_2j>0.8 \
                             && '+TagVH+' \
                             '


## Top CR: No H sel , bTag , tight DYmva

cuts['hww2l2v_13TeV_2017_top_2jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && 2jggH \
                             && btag2 \
                             && ZVeto \
                             && '+dymva2jetee+' \
                             '

cuts['hww2l2v_13TeV_2017_top_2jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && 2jggH \
                             && btag2 \
                             && ZVeto \
                             && '+dymva2jetmm+' \
                             '

## WW CR: No H Sel , mll>80, tight DYMva

cuts['hww2l2v_13TeV_2017_WW_2jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && 2jggH \
                             && bVeto \
                             && ZVeto \
                             && '+dymva2jetee+' \
                             && mll > 80 \
                             '

cuts['hww2l2v_13TeV_2017_WW_2jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && 2jggH \
                             && bVeto \
                             && ZVeto \
                             && '+dymva2jetmm+' \
                             && mll > 80 \
                             '

## DY Background IN with DYMVA>0.9X : Split ee/mm , No H cut !

cuts['hww2l2v_13TeV_2017_DYin_2jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && 2jggH \
                             && bVeto \
                             && '+dymva2jetee+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_2017_DYin_2jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && 2jggH \
                             && bVeto \
                             && '+dymva2jetmm+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_2017_DYin_2jdf_ee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                             && 2jggH \
                             && bVeto \
                             && '+dymva2jetee+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_2017_DYin_2jdf_mm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                             && 2jggH \
                             && bVeto \
                             && '+dymva2jetmm+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

## DY CR for Acc Denominator

cuts['hww2l2v_13TeV_2017_2jee_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && 2jggH \
                             && bVeto \
                             && ZVeto \
                             && dymva_dnn_2j > 0.8 \
                             '

cuts['hww2l2v_13TeV_2017_2jmm_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && 2jggH \
                             && bVeto \
                             && ZVeto \
                             && dymva_dnn_2j > 0.8 \
                             '

## Loose dymva + WW sel for DY Acc

cuts['hww2l2v_13TeV_2017_WW_2jee_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && 2jggH \
                             && bVeto \
                             && ZVeto \
                             && mll > 80 \
                             && dymva_dnn_2j > 0.8 \
                             '

cuts['hww2l2v_13TeV_2017_WW_2jmm_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && 2jggH \
                             && bVeto \
                             && ZVeto \
                             && mll > 80 \
                             && dymva_dnn_2j > 0.8 \
                             '
