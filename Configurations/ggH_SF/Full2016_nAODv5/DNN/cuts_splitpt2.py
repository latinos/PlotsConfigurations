
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
dymva2jetee = 'dymva_dnn_2j > 0.940'
dymva2jetmm = 'dymva_dnn_2j > 0.940'
dymvaVBFee  = 'dymva_dnn_VBF> 0.810'
dymvaVBFmm  = 'dymva_dnn_VBF> 0.810'

# Higgs Signal Regions: ee/uu * 0/1 jet
cuts['hww2l2v_13TeV_2016_0jee_pt2ge20'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && zeroJet && sr && Lepton_pt[1]>=20 \
                             && Higgs0jetee \
                             && '+dymva0jetee+' \
                             '
cuts['hww2l2v_13TeV_2016_0jee_pt2lt20'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && zeroJet && sr && Lepton_pt[1]<20 \
                             && Higgs0jetee \
                             && '+dymva0jetee+' \
                             '
cuts['hww2l2v_13TeV_2016_1jee'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && oneJet && sr && Lepton_pt[1]<20 \
                             && Higgs1jetee \
                             && '+dymva1jetee+' \
                             '
cuts['hww2l2v_13TeV_2016_0jmm_pt2ge20'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && zeroJet && sr && Lepton_pt[1]>=20 \
                             && Higgs0jetmm \
                             && '+dymva0jetmm+' \
                             '
cuts['hww2l2v_13TeV_2016_0jmm_pt2lt20'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && zeroJet && sr && Lepton_pt[1]<20 \
                             && Higgs0jetmm \
                             && '+dymva0jetmm+' \
                             '
cuts['hww2l2v_13TeV_2016_1jmm'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && oneJet && sr && Lepton_pt[1]<20 \
                             && Higgs1jetmm \
                             && '+dymva1jetmm+' \
                             '

## Top CR: No H sel , bTag , tight DYmva
cuts['hww2l2v_13TeV_2016_top_0jee'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && zeroJet && topcr && ZVeto \
                             && '+dymva0jetee+' \
                             '
cuts['hww2l2v_13TeV_2016_top_1jee'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && oneJet && topcr && ZVeto \
                             && '+dymva1jetee+' \
                             '
cuts['hww2l2v_13TeV_2016_top_0jmm'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && zeroJet && topcr && ZVeto \
                             && '+dymva0jetmm+' \
                             '
cuts['hww2l2v_13TeV_2016_top_1jmm'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && oneJet && topcr && ZVeto \
                             && '+dymva1jetmm+' \
                             '

## WW CR: No H Sel , mll>80, tight DYMva
cuts['hww2l2v_13TeV_2016_WW_0jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && zeroJet && wwcr \
                             && '+dymva0jetee+' \
                             '
cuts['hww2l2v_13TeV_2016_WW_1jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && oneJet && wwcr \
                             && '+dymva1jetee+' \
                             '
cuts['hww2l2v_13TeV_2016_WW_0jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && zeroJet && wwcr \
                             && '+dymva0jetmm+' \
                             '
cuts['hww2l2v_13TeV_2016_WW_1jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && oneJet && wwcr \
                             && '+dymva1jetmm+' \
                             '

## DY Background IN with DYMVA>0.9X : Split ee/mm , No H cut !
cuts['hww2l2v_13TeV_2016_DYin_0jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && zeroJet && Zpeak && bVeto \
                             && '+dymva0jetee+' \
                             '
cuts['hww2l2v_13TeV_2016_DYin_1jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && oneJet && Zpeak && bVeto \
                             && '+dymva1jetee+' \
                             '
cuts['hww2l2v_13TeV_2016_DYin_0jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && zeroJet && Zpeak && bVeto \
                             && '+dymva0jetmm+' \
                             '
cuts['hww2l2v_13TeV_2016_DYin_1jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && oneJet && Zpeak && bVeto \
                             && '+dymva1jetmm+' \
                             '
cuts['hww2l2v_13TeV_2016_DYin_0jdf_ee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && zeroJet && Zpeak && bVeto \
                             && '+dymva0jetee+' \
                             '
cuts['hww2l2v_13TeV_2016_DYin_1jdf_ee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && oneJet && Zpeak && bVeto \
                             && '+dymva1jetee+' \
                             '
cuts['hww2l2v_13TeV_2016_DYin_0jdf_mm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && zeroJet && Zpeak && bVeto \
                             && '+dymva0jetmm+' \
                             '
cuts['hww2l2v_13TeV_2016_DYin_1jdf_mm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && oneJet && Zpeak && bVeto \
                             && '+dymva1jetmm+' \
                             '

## DY Background IN with btag : Split ee/mm , No H cut !
cuts['hww2l2v_13TeV_2016_DYin_btag_0jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && zeroJet && topcr && Zpeak \
                             && '+dymva0jetee+' \
                             '
cuts['hww2l2v_13TeV_2016_DYin_btag_0jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && zeroJet && topcr && Zpeak \
                             && '+dymva0jetmm+' \
                             '
cuts['hww2l2v_13TeV_2016_DYin_btag_0jdf_ee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && zeroJet && topcr && Zpeak \
                             && '+dymva0jetee+' \
                             '
cuts['hww2l2v_13TeV_2016_DYin_btag_0jdf_mm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && zeroJet && topcr && Zpeak \
                             && '+dymva0jetmm+' \
                             '

## Acc Denominator
cuts['hww2l2v_13TeV_2016_0jee_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && zeroJet && sr && dymva_dnn_0j > 0.8 \
                             '
cuts['hww2l2v_13TeV_2016_1jee_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && oneJet && sr && dymva_dnn_1j > 0.8 \
                             '
cuts['hww2l2v_13TeV_2016_0jmm_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && zeroJet && sr && dymva_dnn_0j > 0.8 \
                             '
cuts['hww2l2v_13TeV_2016_1jmm_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && oneJet && sr && dymva_dnn_1j > 0.8 \
                             '

## H Acc Numerator: loose dymva + H sel
cuts['hww2l2v_13TeV_2016_0jee_HAccNum_pt2ge20'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && zeroJet && sr && Lepton_pt[1]>=20 \
                             && Higgs0jetee \
                             && dymva_dnn_0j>0.8 \
                             '
cuts['hww2l2v_13TeV_2016_0jee_HAccNum_pt2lt20'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && zeroJet && sr && Lepton_pt[1]<20 \
                             && Higgs0jetee \
                             && dymva_dnn_0j>0.8 \
                             '
cuts['hww2l2v_13TeV_2016_1jee_HAccNum'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && oneJet && sr && Lepton_pt[1]<20 \
                             && Higgs1jetee \
                             && dymva_dnn_1j>0.8 \
                             '
cuts['hww2l2v_13TeV_2016_0jmm_HAccNum_pt2ge20'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && zeroJet && sr && Lepton_pt[1]>=20 \
                             && Higgs0jetee \
                             && dymva_dnn_0j>0.8 \
                             '
cuts['hww2l2v_13TeV_2016_0jmm_HAccNum_pt2lt20'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && zeroJet && sr && Lepton_pt[1]<20 \
                             && Higgs0jetee \
                             && dymva_dnn_0j>0.8 \
                             '
cuts['hww2l2v_13TeV_2016_1jmm_HAccNum'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && oneJet && sr && Lepton_pt[1]<20 \
                             && Higgs1jetee \
                             && dymva_dnn_1j>0.8 \
                             '

## WW Acc Numerator: loose dymva + WW sel
cuts['hww2l2v_13TeV_2016_WW_0jee_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && zeroJet && wwcr \
                             && dymva_dnn_0j > 0.8 \
                             '

cuts['hww2l2v_13TeV_2016_WW_1jee_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && oneJet && wwcr \
                             && dymva_dnn_1j > 0.8 \
                             '

cuts['hww2l2v_13TeV_2016_WW_0jmm_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && zeroJet && wwcr \
                             && dymva_dnn_0j > 0.8 \
                             '

cuts['hww2l2v_13TeV_2016_WW_1jmm_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && oneJet && wwcr \
                             && dymva_dnn_1j > 0.8 \
                             '
