# cuts
print("Cuts include 0jet/1jet SRs with boosted jet veto and mth125 cut.")
supercut = ' mll > 12 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>13 \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
            && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
            && nCleanFatJet==0 \
            '

orthoCuts = [('',''),
           #('_mllCut',' && (mll < 76.2 || mll > 106.2)'),
           #('_mth125',' && mth < 125.'),
           ('_mth125_mllCut',' && mth < 125. && (mll < 76.2 || mll > 106.2)')
          ]
dphillCuts = [
              ('_dphill0to14',' && dphill < 1.4'),
              ('_dphill14to32',' && dphill >= 1.4')
]
for cutLabel,cut in orthoCuts:
    ## Signal regions
    cuts['hww2l2v_13TeV_orig'+cutLabel] = {
       'expr': 'sr'+cut,
       'categories' : {
         '0j' : 'zeroJet',
         '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30'
       }
    }
    if cutLabel in ['_mth125_mllCut']:
        cuts['hww2l2v_13TeV'+cutLabel] = {
           'expr': 'sr'+cut,
           'categories' : {}
        }
        for dphillLabel, dphillCut in dphillCuts:
            cuts['hww2l2v_13TeV'+cutLabel]['categories']['0j'+dphillLabel] = 'zeroJet'+dphillCut
            cuts['hww2l2v_13TeV'+cutLabel]['categories']['1j'+dphillLabel] = 'oneJet && Alt$(CleanJet_pt[1],0)<30'+dphillCut

## Top control regions
cuts['hww2l2v_13TeV_top']  = {
   'expr' : 'topcr',
   # Define the sub-categorization of topcr
   'categories' : {
      '0j' : 'zeroJet',
      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
   }
}

## DYtt control regions
cuts['hww2l2v_13TeV_dytt']  = {
   'expr' : 'dycr',
   # Define the sub-categorization of dycr
   'categories' : {
      '0j' : 'zeroJet',
      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
   }
}
