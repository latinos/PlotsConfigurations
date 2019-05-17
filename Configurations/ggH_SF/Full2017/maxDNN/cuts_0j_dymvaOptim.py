
supercut = ' mll > 12 \
            && Lepton_pt[0]>20 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[0])==13 || Lepton_pt[0]>25) \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
            && (dymva_dnn_0j > 0.8) \
            && Alt$(CleanJet_pt[0],0)<30 \
            && Alt$(CleanJet_pt[1],0)<30 \
           '

optim={}
optim['dymva0p80']  = ' && dymva_dnn_0j > 0.80 ' 
optim['dymva0p805']  = ' && dymva_dnn_0j > 0.805 ' 
optim['dymva0p81']  = ' && dymva_dnn_0j > 0.81 ' 
optim['dymva0p815']  = ' && dymva_dnn_0j > 0.815 ' 
optim['dymva0p825']  = ' && dymva_dnn_0j > 0.825 ' 
optim['dymva0p83']  = ' && dymva_dnn_0j > 0.83 ' 
#optim['dymva0p835']  = ' && dymva_dnn_0j > 0.835 ' 
optim['dymva0p84']  = ' && dymva_dnn_0j > 0.84 ' 
#optim['dymva0p845']  = ' && dymva_dnn_0j > 0.845 ' 
#optim['dymva0p82']  = ' && dymva_dnn_0j > 0.82 ' 
#optim['dymva0p85']  = ' && dymva_dnn_0j > 0.85 ' 
#optim['dymva0p90']  = ' && dymva_dnn_0j > 0.90 ' 
#optim['dymva0p91']  = ' && dymva_dnn_0j > 0.91 ' 
#optim['dymva0p92']  = ' && dymva_dnn_0j > 0.92 ' 
#optim['dymva0p93']  = ' && dymva_dnn_0j > 0.93 ' 
#optim['dymva0p94']  = ' && dymva_dnn_0j > 0.94 ' 
#optim['dymva0p945'] = ' && dymva_dnn_0j > 0.945 ' 
#optim['dymva0p95']  = ' && dymva_dnn_0j > 0.95 ' 
#optim['dymva0p955'] = ' && dymva_dnn_0j > 0.955 ' 
#optim['dymva0p96']  = ' && dymva_dnn_0j > 0.96 ' 
#optim['dymva0p965'] = ' && dymva_dnn_0j > 0.965 ' 
#optim['dymva0p97']  = ' && dymva_dnn_0j > 0.97 ' 
#optim['dymva0p975'] = ' && dymva_dnn_0j > 0.975 ' 
#optim['dymva0p98']  = ' && dymva_dnn_0j > 0.98 ' 
#optim['dymva0p985']  = ' && dymva_dnn_0j > 0.985 ' 
#optim['dymva0p99']  = ' && dymva_dnn_0j > 0.99 ' 
#optim['dymva0p995']  = ' && dymva_dnn_0j > 0.995 ' 


for iCut in optim:
  
  # Higgs Signal Regions: ee/uu * 0/1 jet
  
  cuts['hww2l2v_13TeV_0jee_'+iCut] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
               && ZVeto \
               && bVeto \
               && Higgs0jetsf \
                 ' + optim[iCut]

  cuts['hww2l2v_13TeV_0jmm_'+iCut] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
               && ZVeto \
               && bVeto \
               && Higgs0jetsf \
                 ' + optim[iCut]

  
  ## Top CR: No H sel , bTag , tight DYmva
  
  cuts['hww2l2v_13TeV_top_0jee_'+iCut] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
               && ZVeto \
               && btag0 \
                 ' + optim[iCut]

  cuts['hww2l2v_13TeV_top_0jmm_'+iCut] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
               && ZVeto \
               && btag0 \
                 ' + optim[iCut]
  

  ## WW CR: No H Sel , mll>80, tight DYMva
  
  cuts['hww2l2v_13TeV_WW_0jee_'+iCut] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
               && ZVeto \
               && bVeto \
               && mll > 80 \
                 ' + optim[iCut]

  cuts['hww2l2v_13TeV_WW_0jmm_'+iCut] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
               && ZVeto \
               && bVeto \
               && mll > 80 \
                 ' + optim[iCut]
  
  
  ## DY Background IN with DYMVA>0.9X : Split ee/mm , No H cut !
  
  cuts['hww2l2v_13TeV_DYin_0jee_'+iCut] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
               && bVeto \
               && fabs(91.1876 - mll) < 7.5  \
                 ' + optim[iCut]
   
  cuts['hww2l2v_13TeV_DYin_0jmm_'+iCut] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
               && bVeto \
               && fabs(91.1876 - mll) < 7.5  \
                 ' + optim[iCut]

  cuts['hww2l2v_13TeV_DYin_0jdf_'+iCut] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
               && bVeto \
               && fabs(91.1876 - mll) < 7.5  \
                 ' + optim[iCut]

  
  ## DY Background IN with btag : Split ee/mm , No H cut !
  #  0jet only: Negligible DY background in 1jet bTag region

  cuts['hww2l2v_13TeV_DYin_btag_0jee_'+iCut] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
               && btag0 \
               && fabs(91.1876 - mll) < 7.5  \
                 ' + optim[iCut]

  cuts['hww2l2v_13TeV_DYin_btag_0jmm_'+iCut] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
               && btag0 \
               && fabs(91.1876 - mll) < 7.5  \
                 ' + optim[iCut]

  cuts['hww2l2v_13TeV_DYin_btag_0jdf_'+iCut] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
               && btag0 \
               && fabs(91.1876 - mll) < 7.5  \
                 ' + optim[iCut]
  

## Loose dymva + H sel for DY Acc
cuts['hww2l2v_13TeV_0jee_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
             && ZVeto \
             && bVeto \
             && Higgs0jetsf \
             && dymva_dnn_0j > 0.8 \
               '

cuts['hww2l2v_13TeV_0jmm_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
             && ZVeto \
             && bVeto \
             && Higgs0jetsf \
             && dymva_dnn_0j > 0.8 \
               '


## DY CR for Acc Denominator

cuts['hww2l2v_13TeV_0jee_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
             && ZVeto \
             && bVeto \
             && dymva_dnn_0j > 0.8 \
               '

cuts['hww2l2v_13TeV_0jmm_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
             && ZVeto \
             && bVeto \
             && dymva_dnn_0j > 0.8 \
               '


## Loose dymva + WW sel for DY Acc

cuts['hww2l2v_13TeV_WW_0jee_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
             && ZVeto \
             && bVeto \
             && dymva_dnn_0j > 0.8 \
             && mll > 80 \
               '

cuts['hww2l2v_13TeV_WW_0jmm_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
             && ZVeto \
             && bVeto \
             && dymva_dnn_0j > 0.8 \
             && mll > 80 \
               '
