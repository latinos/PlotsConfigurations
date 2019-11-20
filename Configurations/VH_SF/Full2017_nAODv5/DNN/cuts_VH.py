
supercut = '    mll>12 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
            && 2jVH \
           '

# Some cuts

dymvaVHee   = 'hww_DYmvaDNN_VH(Entry$)> 0.83'
dymvaVHmm   = 'hww_DYmvaDNN_VH(Entry$)> 0.83'

# Higgs Signal Regions: ee/uu * 0/1 jet

cuts['hww2l2v_13TeV_2017_2jee_vh2j'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && bVeto \
                             && ZVeto \
                             && Higgs2jetee \
                             && '+dymvaVHee+' \
                             '

cuts['hww2l2v_13TeV_2017_2jmm_vh2j'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && bVeto \
                             && ZVeto \
                             && Higgs2jetmm \
                             && '+dymvaVHmm+' \
                             '

## Loose dymva + H sel for DY Acc
cuts['hww2l2v_13TeV_2017_2jee_vh2j_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && bVeto \
                             && ZVeto \
                             && Higgs2jetee \
                             && hww_DYmvaDNN_VH(Entry$)>0.8 \
                             '

cuts['hww2l2v_13TeV_2017_2jmm_vh2j_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && bVeto \
                             && ZVeto \
                             && Higgs2jetmm \
                             && hww_DYmvaDNN_VH(Entry$)>0.8 \
                             '


## Top CR: No H sel , bTag , tight DYmva
cuts['hww2l2v_13TeV_2017_top_2jee_vh2j'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && topcr \
                             && ZVeto \
                             && '+dymvaVHee+' \
                             '

cuts['hww2l2v_13TeV_2017_top_2jmm_vh2j'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && topcr \
                             && ZVeto \
                             && '+dymvaVHmm+' \
                             '


## WW CR: No H Sel , mll>80, tight DYMva
cuts['hww2l2v_13TeV_2017_WW_2jee_vh2j'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && wwcr \
                             && '+dymvaVHee+' \
                             '

cuts['hww2l2v_13TeV_2017_WW_2jmm_vh2j'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && wwcr \
                             && '+dymvaVHmm+' \
                             '


## DY Background IN with DYMVA>0.9X : Split ee/mm , No H cut !
cuts['hww2l2v_13TeV_2017_DYin_2jee_vh2j'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && bVeto \
                             && '+dymvaVHee+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_2017_DYin_2jmm_vh2j'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && bVeto \
                             && '+dymvaVHmm+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_2017_DYin_2jdf_vh2j'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                             && bVeto \
                             && '+dymvaVHee+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

## DY CR for Acc Denominator
cuts['hww2l2v_13TeV_2017_2jee_vh2j_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && bVeto \
                             && ZVeto \
                             && hww_DYmvaDNN_VH(Entry$) > 0.8 \
                             '

cuts['hww2l2v_13TeV_2017_2jmm_vh2j_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && bVeto \
                             && ZVeto \
                             && hww_DYmvaDNN_VH(Entry$) > 0.8 \
                             '


## Loose dymva + WW sel for DY Acc
cuts['hww2l2v_13TeV_2017_WW_2jee_vh2j_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && wwcr \
                             && hww_DYmvaDNN_VH(Entry$) > 0.8 \
                             '

cuts['hww2l2v_13TeV_2017_WW_2jmm_vh2j_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && wwcr \
                             && hww_DYmvaDNN_VH(Entry$) > 0.8 \
                             '
