
supercut = '    mll>12 \
            && Lepton_pt[0]>20 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[0])==13 || Lepton_pt[0]>25) \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
            && 2jVBF \
           '

# Some cuts

dymvaVBFee  = 'hww_DYmvaDNN_VBF(Entry$) > 0.97'
dymvaVBFmm  = 'hww_DYmvaDNN_VBF(Entry$) > 0.97'

# Higgs Signal Regions: ee/uu * 0/1 jet

cuts['hww2l2v_13TeV_2018_2jee_vbf_lowmjj'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && bVeto \
                             && ZVeto \
                             && Higgsvbfee \
                             && mjj < 700 \
                             && '+dymvaVBFee+' \
                             '

cuts['hww2l2v_13TeV_2018_2jmm_vbf_lowmjj'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && bVeto \
                             && ZVeto \
                             && Higgsvbfmm \
                             && mjj < 700 \
                             && '+dymvaVBFmm+' \
                             '

cuts['hww2l2v_13TeV_2018_2jee_vbf_highmjj'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && bVeto \
                             && ZVeto \
                             && Higgsvbfee \
                             && mjj >= 700 \
                             && '+dymvaVBFee+' \
                             '

cuts['hww2l2v_13TeV_2018_2jmm_vbf_highmjj'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && bVeto \
                             && ZVeto \
                             && Higgsvbfmm \
                             && mjj >= 700 \
                             && '+dymvaVBFmm+' \
                             '


## Loose dymva + H sel for DY Acc
cuts['hww2l2v_13TeV_2018_2jee_vbf_lowmjj_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && bVeto \
                             && ZVeto \
                             && Higgsvbfee \
                             && dymva_dnn_VBF>0.8 \
                             && mjj < 700 \
                             '

cuts['hww2l2v_13TeV_2018_2jmm_vbf_lowmjj_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && bVeto \
                             && ZVeto \
                             && Higgsvbfmm \
                             && dymva_dnn_VBF>0.8 \
                             && mjj < 700 \
                             '

cuts['hww2l2v_13TeV_2018_2jee_vbf_highmjj_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && bVeto \
                             && ZVeto \
                             && Higgsvbfee \
                             && dymva_dnn_VBF>0.8 \
                             && mjj >= 700 \
                             '

cuts['hww2l2v_13TeV_2018_2jmm_vbf_highmjj_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && bVeto \
                             && ZVeto \
                             && Higgsvbfmm \
                             && dymva_dnn_VBF>0.8 \
                             && mjj >= 700 \
                             '

## Top CR: No H sel , bTag , tight DYmva

cuts['hww2l2v_13TeV_2018_top_2jee_vbf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && topcr \
                             && ZVeto \
                             && '+dymvaVBFee+' \
                             '

cuts['hww2l2v_13TeV_2018_top_2jmm_vbf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && topcr \
                             && ZVeto \
                             && '+dymvaVBFmm+' \
                             '

## WW CR: No H Sel , mll>80, tight DYMva

cuts['hww2l2v_13TeV_2018_WW_2jee_vbf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && wwcr \
                             && '+dymvaVBFee+' \
                             '

cuts['hww2l2v_13TeV_2018_WW_2jmm_vbf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && wwcr \
                             && '+dymvaVBFmm+' \
                             '

## DY Background IN with DYMVA>0.9X : Split ee/mm , No H cut !

cuts['hww2l2v_13TeV_2018_DYin_2jee_vbf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && bVeto \
                             && '+dymvaVBFee+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_2018_DYin_2jmm_vbf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && bVeto \
                             && '+dymvaVBFmm+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_2018_DYin_2jdf_vbf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                             && bVeto \
                             && '+dymvaVBFee+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

## DY Background IN with btag : Split ee/mm , No H cut !
#  0jet only: Negligible DY background in 1jet bTag region

cuts['hww2l2v_13TeV_2018_DYin_btag_2jee_vbf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && topcr \
                             && '+dymvaVBFee+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_2018_DYin_btag_2jmm_vbf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && topcr \
                             && '+dymvaVBFmm+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_2018_DYin_btag_2jdf_vbf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                             && topcr \
                             && '+dymvaVBFee+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

## DY CR for Acc Denominator

cuts['hww2l2v_13TeV_2018_2jee_vbf_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && bVeto \
                             && ZVeto \
                             && dymva_dnn_VBF > 0.8 \
                             '

cuts['hww2l2v_13TeV_2018_2jmm_vbf_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && bVeto \
                             && ZVeto \
                             && dymva_dnn_VBF > 0.8 \
                             '

## Loose dymva + WW sel for DY Acc

cuts['hww2l2v_13TeV_2018_WW_2jee_vbf_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && wwcr \
                             && dymva_dnn_VBF > 0.8 \
                             '

cuts['hww2l2v_13TeV_2018_WW_2jmm_vbf_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && wwcr \
                             && dymva_dnn_VBF > 0.8 \
                             '
