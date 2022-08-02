# cuts

supercut = '   Lepton_pt[0]>25 \
            && Lepton_pt[1]>13 \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 60 \
            && mjj > 300 \
            && detajj > 2.5 \
            && ((Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) || (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13)) \
           '


## Signal regions
cuts['VBS'] = {
   'expr': 'sr',
   'categories' : {
      '2j_ee_lowZ_mjj300To500_detajj2p5To3p5'  : 'mjj<500 && detajj<3.5 && mll>120 && multiJet && LowZ[0] && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11)', 
      '2j_ee_lowZ_mjj300To500_detajj3p5ToInf'  : 'mjj<500 && detajj>=3.5 && mll>120 && multiJet && LowZ[0] && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11)',
      '2j_ee_lowZ_mjj500ToInf_detajj2p5To3p5'  : 'mjj>=500 && detajj<3.5 && mll>120 && multiJet && LowZ[0] && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11)', 
      '2j_ee_lowZ'                             : 'mjj>=500 && detajj>=3.5 && mll>120 && multiJet && LowZ[0] && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11)',
      '2j_ee_highZ_mjj300To500_detajj2p5To3p5' : 'mjj<500 && detajj<3.5 && mll>120 && multiJet && HighZ[0] && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11)', 
      '2j_ee_highZ_mjj300To500_detajj3p5ToInf' : 'mjj<500 && detajj>=3.5 && mll>120 && multiJet && HighZ[0] && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11)',
      '2j_ee_highZ_mjj500ToInf_detajj2p5To3p5' : 'mjj>=500 && detajj<3.5 && mll>120 && multiJet && HighZ[0] && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11)',
      '2j_ee_highZ'                            : 'mjj>=500 && detajj>=3.5 && mll>120 && multiJet && HighZ[0] && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11)',
      '2j_mm_lowZ_mjj300To500_detajj2p5To3p5'  : 'mjj<500 && detajj<3.5 && mll>120 && multiJet && LowZ[0] && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13)', 
      '2j_mm_lowZ_mjj300To500_detajj3p5ToInf'  : 'mjj<500 && detajj>=3.5 && mll>120 && multiJet && LowZ[0] && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13)',
      '2j_mm_lowZ_mjj500ToInf_detajj2p5To3p5'  : 'mjj>=500 && detajj<3.5 && mll>120 && multiJet && LowZ[0] && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13)', 
      '2j_mm_lowZ'                             : 'mjj>=500 && detajj>=3.5 && mll>120 && multiJet && LowZ[0] && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13)',
      '2j_mm_highZ_mjj300To500_detajj2p5To3p5' : 'mjj<500 && detajj<3.5 && mll>120 && multiJet && HighZ[0] && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13)', 
      '2j_mm_highZ_mjj300To500_detajj3p5ToInf' : 'mjj<500 && detajj>=3.5 && mll>120 && multiJet && HighZ[0] && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13)',
      '2j_mm_highZ_mjj500ToInf_detajj2p5To3p5' : 'mjj>=500 && detajj<3.5 && mll>120 && multiJet && HighZ[0] && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13)',
      '2j_mm_highZ'                            : 'mjj>=500 && detajj>=3.5 && mll>120 && multiJet && HighZ[0] && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13)',

    }
}

## Top control regions
cuts['top']  = { 
   'expr' : 'topcr',
   'categories' : {
      '2j_ee' : 'mll>120 && multiJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11)',
      '2j_mm' : 'mll>120 && multiJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13)',
   }
}

## DY control regions
cuts['DY']  = { 
   'expr' : 'dycr',
   'categories' : { 
      '2j_ee_lowDetajj'   : 'multiJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && detajj < 5',
      '2j_ee_highDetajj'  : 'multiJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && detajj >= 5',
      '2j_mm_lowDetajj'   : 'multiJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && detajj < 5',
      '2j_mm_highDetajj'  : 'multiJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && detajj >= 5',
      }
}
