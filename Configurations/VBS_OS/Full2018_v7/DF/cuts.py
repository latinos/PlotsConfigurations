# cuts

supercut = '   Lepton_pt[0]>25 \
            && Lepton_pt[1]>13 \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
            && mjj > 500 \
            && detajj > 3.5 \
           '


## Signal regions

cuts['VBS'] = {
   'expr': 'sr',
   'categories' : {
      '2j_em_me_lowZ'   : 'mll>50 && multiJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && 0.5*abs((Lepton_eta[0]+Lepton_eta[1])-(CleanJet_eta[0]+CleanJet_eta[1]))<1', 
      '2j_em_me_highZ'  : 'mll>50 && multiJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && 0.5*abs((Lepton_eta[0]+Lepton_eta[1])-(CleanJet_eta[0]+CleanJet_eta[1]))>=1',
    }
}

## Top control regions
cuts['top']  = { 
   'expr' : 'topcr',
   'categories' : {
      '2j_em_me' : 'multiJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13)',
   }
}

## DY control regions
cuts['DY']  = { 
   'expr' : 'dycr',
   # Define the sub-categorization of dycr
   'categories' : { 
      '2j_em_me'     : 'multiJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && mll>50 && mll<80', 
#      '2j_em_me_lowZ'     : 'multiJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && mll>50 && mll<80 && 0.5*abs((Lepton_eta[0]+Lepton_eta[1])-(CleanJet_eta[0]+CleanJet_eta[1]))<1', 
#      '2j_em_me_highZ'     : 'multiJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && mll>50 && mll<80 && 0.5*abs((Lepton_eta[0]+Lepton_eta[1])-(CleanJet_eta[0]+CleanJet_eta[1]))>1', 
      }
}

