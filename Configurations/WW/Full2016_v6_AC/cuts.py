# cuts

supercut = '   mll>12 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>20 \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && ptll>30 \
            && PuppiMET_pt > 20 \
            && mpmet > 20. \
            && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
           '

#
#            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
# --> needed??
# It should be by default, actually 2.4 for muons
#
#


## Signal regions
cuts['ww2l2v_13TeV'] = {
   'expr': 'srww',
    # Define the sub-categorization of sr
   'categories' : {
      '0j' : ' zeroJet',
      '1j' : ' oneJet && Alt$(CleanJet_pt[1],0)<30',
      '2j' : ' (mjj<65 || mjj>105) && multiJet', 
   }
}

## Top control regions
cuts['ww2l2v_13TeV_top']  = { 
   'expr' : 'topcrww',
    # Define the sub-categorization of topcr
   'categories' : {
      '0j' : 'zeroJet',
      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      '2j' : ' (mjj<65 || mjj>105) && multiJet', 
   }
}

## DYtt control regions
cuts['ww2l2v_13TeV_dytt']  = { 
        'expr' : 'dycrww',
# Define the sub-categorization of dycr
   'categories' : { 
      '0j' : 'zeroJet',
      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      '2j' : ' (mjj<65 || mjj>105) && multiJet', 
   }
}





###         
###         def addcut(name, exprs):
###             cuts[name] = ' && '.join(exprs)
###         
###         
###         ## Signal and control regions
###         
###         _tmp = [
###             'mth > 40.',
###             'mll < 76.',
###             'drll < 2.5',
###             'bVeto',
###                ]
###         
###         addcut('SR_Incl', _tmp)
###         
###         
###         _tmp = [
###             'mth > 40.',
###             'mll > 76.',
###             'drll < 2.5',
###             'bVeto',
###                ]
###         
###         addcut('WWCR_Incl', _tmp)
###         
###         
###         
###         _tmp = [
###             'mth > 40.',
###             'mll < 76.',
###             'drll < 2.5',
###             '(bReq || (!bVeto && zeroJet))',
###                ]
###         
###         addcut('TopCR_Incl', _tmp)
###         
###         
###         #
###         #
###         #
###         
###         tmp = [
###             'mth > 40.',
###             'mll < 76.',
###             'drll < 2.5',
###             'bVeto',
###             'zeroJet',
###                ]
###         
###         addcut('WW_0j', _tmp)
###         
###         
###         
###         tmp = [
###             'mth > 40.',
###             'mll < 76.',
###             'drll < 2.5',
###             '!bVeto',
###             'zeroJet',
###                ]
###         
###         addcut('Top_0j', _tmp)
###         
###         
###         
###         
###         #aliases['topcr'] = {
###             #'expr': 'mtw2>30 && mll>50 && ((zeroJet && !bVeto) || bReq)'
###         #}
###         
###         
###         #aliases['bVeto'] = {
###             #'expr': 'Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217) == 0'
###         #}
###         
###         #aliases['bReq'] = {
###             #'expr': 'Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217) >= 1'
###         #}
###         
###         
###         
###         #cuts['ww2l2v_13TeV'] = {
###            #'expr': 'sr',
###             ## Define the sub-categorization of sr
###            #'categories' : {
###               #'0j' : ' mth > 40. &&  mll < 76. && zeroJet',
###            #}
###         #}
###         
###         ### Top control regions
###         #cuts['ww2l2v_13TeV_top']  = { 
###            #'expr' : 'topcr',
###             ## Define the sub-categorization of topcr
###            #'categories' : {
###               #'0j' : 'zeroJet',
###               #'1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
###               #'2j' : '(mjj<65 || mjj>105) && mjj<200 && multiJet',
###            #}
###         #}
###         
###         ### DYtt control regions
###         #cuts['ww2l2v_13TeV_dytt']  = { 
###         	#'expr' : 'dycr',
###         ## Define the sub-categorization of dycr
###            #'categories' : { 
###               #'0j' : 'zeroJet',
###               #'1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
###               #'2j' : '(mjj<65 || mjj>105) && mjj<200 && multiJet',
###            #}
###         #}
###         
###         ### WW control regions
###         ### Used only for control plots, no need to add these cuts for the fit
###         #cuts['ww2l2v_13TeV_ww'] = {
###         #  'expr' : 'wwcr',
###         #	  'categories' : {
###         #	    '0j' : 'zeroJet',
###         #	    '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
###         #	    '2j' : '(mjj<65 || mjj>105) && mjj<200 && multiJet'
###         #	  }
###         #	}
###         #
