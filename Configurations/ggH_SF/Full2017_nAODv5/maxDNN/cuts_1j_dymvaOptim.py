
supercut = ' mll > 12 \
            && Lepton_pt[0]>20 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[0])==13 || Lepton_pt[0]>25) \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
            && (hww_DYmvaDNN_1j(Entry$) > 0.8) \
            && Alt$(CleanJet_pt[0],0)>=30 \
            && Alt$(CleanJet_pt[1],0)<30 \
           '

optim={}
#optim['dymva0p80']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.80 ' 
#optim['dymva0p805']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.805 ' 
##optim['dymva0p81']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.81 '
#optim['dymva0p815']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.815 ' 
##optim['dymva0p825']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.825 ' 
#optim['dymva0p83']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.83 ' 
#optim['dymva0p835']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.835 ' 
#optim['dymva0p84']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.84 ' 
#optim['dymva0p845']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.845 ' 
#optim['dymva0p82']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.82 ' 
##optim['dymva0p85']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.85 '
##optim['dymva0p875']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.875 '
#optim['dymva0p88']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.88 ' 
#optim['dymva0p885']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.885 ' 
#optim['dymva0p89']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.89 ' 
#optim['dymva0p895']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.895 ' 
##optim['dymva0p90']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.90 '
#optim['dymva0p905']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.905 ' 
#optim['dymva0p91']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.91 ' 
#optim['dymva0p915']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.915 ' 
#optim['dymva0p92']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.92 ' 
##optim['dymva0p925']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.925 '
optim['dymva0p93']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.93 ' 
optim['dymva0p935']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.935 ' 
optim['dymva0p94']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.94 ' 
optim['dymva0p945'] = ' && hww_DYmvaDNN_1j(Entry$) > 0.945 ' 
##optim['dymva0p95']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.95 '
optim['dymva0p955'] = ' && hww_DYmvaDNN_1j(Entry$) > 0.955 ' 
optim['dymva0p96']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.96 ' 
optim['dymva0p965'] = ' && hww_DYmvaDNN_1j(Entry$) > 0.965 ' 
optim['dymva0p97']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.97 ' 
##optim['dymva0p975'] = ' && hww_DYmvaDNN_1j(Entry$) > 0.975 '
#optim['dymva0p98']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.98 ' 
#optim['dymva0p985']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.985 ' 
#optim['dymva0p99']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.99 ' 
##optim['dymva0p995']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.995 '

for iCut in optim:
  
  # Higgs Signal Regions: ee/uu * 0/1 jet
  
  cuts['hww2l2v_13TeV_1jee_'+iCut] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
               && ZVeto \
               && bVeto \
               && Higgs1jetee \
                 ' + optim[iCut]

  cuts['hww2l2v_13TeV_1jmm_'+iCut] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
               && ZVeto \
               && bVeto \
               && Higgs1jetee \
                 ' + optim[iCut]

  
  ## Top CR: No H sel , bTag , tight DYmva
  
  cuts['hww2l2v_13TeV_top_1jee_'+iCut] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
               && ZVeto \
               && topcr \
                 ' + optim[iCut]

  cuts['hww2l2v_13TeV_top_1jmm_'+iCut] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
               && ZVeto \
               && topcr \
                 ' + optim[iCut]
  

  ## WW CR: No H Sel , mll>80, tight DYMva
  
  cuts['hww2l2v_13TeV_WW_1jee_'+iCut] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
               && wwcr \
                 ' + optim[iCut]

  cuts['hww2l2v_13TeV_WW_1jmm_'+iCut] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
               && wwcr \
                 ' + optim[iCut]
  
  
  ## DY Background IN with DYMVA>0.9X : Split ee/mm , No H cut !
  
  cuts['hww2l2v_13TeV_DYin_1jee_'+iCut] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
               && bVeto \
               && fabs(91.1876 - mll) < 7.5  \
                 ' + optim[iCut]
   
  cuts['hww2l2v_13TeV_DYin_1jmm_'+iCut] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
               && bVeto \
               && fabs(91.1876 - mll) < 7.5  \
                 ' + optim[iCut]

  cuts['hww2l2v_13TeV_DYin_1jdf_'+iCut] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
               && bVeto \
               && fabs(91.1876 - mll) < 7.5  \
                 ' + optim[iCut]

  
  ## DY Background IN with btag : Split ee/mm , No H cut !
  #  1jet only: Negligible DY background in 1jet bTag region

  cuts['hww2l2v_13TeV_DYin_btag_1jee_'+iCut] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
               && topcr \
               && fabs(91.1876 - mll) < 7.5  \
                 ' + optim[iCut]

  cuts['hww2l2v_13TeV_DYin_btag_1jmm_'+iCut] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
               && topcr \
               && fabs(91.1876 - mll) < 7.5  \
                 ' + optim[iCut]

  cuts['hww2l2v_13TeV_DYin_btag_1jdf_'+iCut] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
               && topcr \
               && fabs(91.1876 - mll) < 7.5  \
                 ' + optim[iCut]
  

## Loose dymva + H sel for DY Acc
cuts['hww2l2v_13TeV_1jee_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
             && ZVeto \
             && bVeto \
             && Higgs1jetee \
             && hww_DYmvaDNN_1j(Entry$) > 0.8 \
               '

cuts['hww2l2v_13TeV_1jmm_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
             && ZVeto \
             && bVeto \
             && Higgs1jetee \
             && hww_DYmvaDNN_1j(Entry$) > 0.8 \
               '


## DY CR for Acc Denominator

cuts['hww2l2v_13TeV_1jee_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
             && ZVeto \
             && bVeto \
             && hww_DYmvaDNN_1j(Entry$) > 0.8 \
               '

cuts['hww2l2v_13TeV_1jmm_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
             && ZVeto \
             && bVeto \
             && hww_DYmvaDNN_1j(Entry$) > 0.8 \
               '


## Loose dymva + WW sel for DY Acc

cuts['hww2l2v_13TeV_WW_1jee_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
             && wwcr \
             && hww_DYmvaDNN_1j(Entry$) > 0.8 \
               '

cuts['hww2l2v_13TeV_WW_1jmm_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
             && wwcr \
             && hww_DYmvaDNN_1j(Entry$) > 0.8 \
               '
