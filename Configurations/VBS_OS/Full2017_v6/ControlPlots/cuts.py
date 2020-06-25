# cuts

supercut = '   Lepton_pt[0]>25 \
            && Lepton_pt[1]>13 \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
            && mjj > 500 \
            && detajj > 3.5 \
            && (abs(CleanJet_eta[0]) < 2.5 || abs(CleanJet_eta[0]) > 3.2) \
            && (abs(CleanJet_eta[1]) < 2.5 || abs(CleanJet_eta[1]) > 3.2) \
            '

## to include the tight Jet_puId inside jet horns add this to supercut:            
##           && (abs(CleanJet_eta[0]) < 2.5 || abs(CleanJet_eta[0]) > 3.2 || (Jet_puId[CleanJet_jetIdx[0]] & (1 << 0))) \
##           && (abs(CleanJet_eta[1]) < 2.5 || abs(CleanJet_eta[1]) > 3.2 || (Jet_puId[CleanJet_jetIdx[1]] & (1 << 0))) \

## Signal regions

cuts['VBS'] = {
   'expr': 'sr',
   'categories' : {
      '2j_em_me_lowZ'   : 'mll>50 && multiJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && 0.5*abs((Lepton_eta[0]+Lepton_eta[1])-(CleanJet_eta[0]+CleanJet_eta[1]))<1', 
      '2j_em_me_highZ'  : 'mll>50 && multiJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && 0.5*abs((Lepton_eta[0]+Lepton_eta[1])-(CleanJet_eta[0]+CleanJet_eta[1]))>=1',
      '2j_ee_mm_lowZ'   : 'mll>120 && PuppiMET_pt>60 && multiJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11 || Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && 0.5*abs((Lepton_eta[0]+Lepton_eta[1])-(CleanJet_eta[0]+CleanJet_eta[1]))<1',
      '2j_ee_mm_highZ'  : 'mll>120 && PuppiMET_pt>60 && multiJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11 || Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && 0.5*abs((Lepton_eta[0]+Lepton_eta[1])-(CleanJet_eta[0]+CleanJet_eta[1]))>=1',
#      '2j_ee_lowZ'     : 'mll>120 && PuppiMET_pt>60 && multiJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && 0.5*abs((Lepton_eta[0]+Lepton_eta[1])-(CleanJet_eta[0]+CleanJet_eta[1]))<1',
#      '2j_ee_highZ'    : 'mll>120 && PuppiMET_pt>60 && multiJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && 0.5*abs((Lepton_eta[0]+Lepton_eta[1])-(CleanJet_eta[0]+CleanJet_eta[1]))>=1',
#      '2j_mm_lowZ'     : 'mll>120 && PuppiMET_pt>60 && multiJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && 0.5*abs((Lepton_eta[0]+Lepton_eta[1])-(CleanJet_eta[0]+CleanJet_eta[1]))<1',
#      '2j_mm_highZ'    : 'mll>120 && PuppiMET_pt>60 && multiJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && 0.5*abs((Lepton_eta[0]+Lepton_eta[1])-(CleanJet_eta[0]+CleanJet_eta[1]))>=1',

    }
}

## Top control regions
cuts['top']  = { 
   'expr' : 'topcr',
   'categories' : {
#      '0j' : 'zeroJet',
#      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      '2j_em_me' : 'multiJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13)',
      '2j_ee_mm' : 'mll>120 && PuppiMET_pt>60 && multiJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11 || Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13)',
      }
}


## DYtt control regions
cuts['DY']  = { 
   'expr' : 'dycr',
   # Define the sub-categorization of dycr
   'categories' : { 
#      '0j'     : 'zeroJet',
#      '1j'     : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
       '2j'     : 'multiJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11 || Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13)', 
#      '2j_ee'  : 'mjj>500 && detajj>3.5 && multiJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11)',
#      '2j_mm'  : 'mjj>500 && detajj>3.5 && multiJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13)',
    }
}

