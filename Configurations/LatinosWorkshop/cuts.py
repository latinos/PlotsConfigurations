# cuts

supercut = ' MLL > 12 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>13 \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            '

## Signal regions
cuts["DY"] = {
   'expr': '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11 || Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13)',
    # Define the sub-categorization of sr
   'categories' : {
      'ee' : ' Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11 ',
      'mm' : ' Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13 ',
   }
}

