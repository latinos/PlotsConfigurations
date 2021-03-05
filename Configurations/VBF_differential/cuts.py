supercut = 'mll>12 \
            && Lepton_pt[0]>25 && Lepton_pt[1]>13 \
            && Lepton_pdgId[0]*Lepton_pdgId[1]==-11*13 \
            && Alt$(Lepton_pt[2],0)<10 \
            && Sum$(CleanJet_pt>30)>=2\
            && ptll>30 \
            && mjj>120 \
            && PuppiMET_pt>20 \
            '


## Signal regions

# Reco-level dphijj bins

# Needed to define pi
import numpy as np

n_bins = 4

cuts['hww2l2v_13TeV_of2j_dphijj_4bins_vbflike'] = {
    'expr': ' (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && bVeto && mtw2>30 && mth>60 && vbflike',
    # Define the sub-categorization of sr
    'categories': {
        '0' : '(DeltaPhi > {} && DeltaPhi < {})'.format(0*2*np.pi/n_bins - np.pi, 1*2*np.pi/n_bins - np.pi),
        '1' : '(DeltaPhi > {} && DeltaPhi < {})'.format(1*2*np.pi/n_bins - np.pi, 2*2*np.pi/n_bins - np.pi),
        '2' : '(DeltaPhi > {} && DeltaPhi < {})'.format(2*2*np.pi/n_bins - np.pi, 3*2*np.pi/n_bins - np.pi),
        '3' : '(DeltaPhi > {} && DeltaPhi < {})'.format(3*2*np.pi/n_bins - np.pi, 4*2*np.pi/n_bins - np.pi),
    }
}

cuts['hww2l2v_13TeV_of2j_dphijj_4bins_gghlike'] = {
    'expr': ' (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && bVeto && mtw2>30 && mth>60 && gghlike',
    # Define the sub-categorization of sr
    'categories': {
        '0' : '(DeltaPhi > {} && DeltaPhi < {})'.format(0*2*np.pi/n_bins - np.pi, 1*2*np.pi/n_bins - np.pi),
        '1' : '(DeltaPhi > {} && DeltaPhi < {})'.format(1*2*np.pi/n_bins - np.pi, 2*2*np.pi/n_bins - np.pi),
        '2' : '(DeltaPhi > {} && DeltaPhi < {})'.format(2*2*np.pi/n_bins - np.pi, 3*2*np.pi/n_bins - np.pi),
        '3' : '(DeltaPhi > {} && DeltaPhi < {})'.format(3*2*np.pi/n_bins - np.pi, 4*2*np.pi/n_bins - np.pi),
    }
}

cuts['hww2l2v_13TeV_of2j_dphijj_4bins_wwlike'] = {
    'expr': ' (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && bVeto && mtw2>30 && mth>60 && wwlike',
    # Define the sub-categorization of sr
    'categories': {
        '0' : '(DeltaPhi > {} && DeltaPhi < {})'.format(0*2*np.pi/n_bins - np.pi, 1*2*np.pi/n_bins - np.pi),
        '1' : '(DeltaPhi > {} && DeltaPhi < {})'.format(1*2*np.pi/n_bins - np.pi, 2*2*np.pi/n_bins - np.pi),
        '2' : '(DeltaPhi > {} && DeltaPhi < {})'.format(2*2*np.pi/n_bins - np.pi, 3*2*np.pi/n_bins - np.pi),
        '3' : '(DeltaPhi > {} && DeltaPhi < {})'.format(3*2*np.pi/n_bins - np.pi, 4*2*np.pi/n_bins - np.pi),
    }
}

cuts['hww2l2v_13TeV_of2j_dphijj_4bins_toplike'] = {
    'expr': ' (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && bVeto && mtw2>30 && mth>60 && toplike',
    # Define the sub-categorization of sr
    'categories': {
        '0' : '(DeltaPhi > {} && DeltaPhi < {})'.format(0*2*np.pi/n_bins - np.pi, 1*2*np.pi/n_bins - np.pi),
        '1' : '(DeltaPhi > {} && DeltaPhi < {})'.format(1*2*np.pi/n_bins - np.pi, 2*2*np.pi/n_bins - np.pi),
        '2' : '(DeltaPhi > {} && DeltaPhi < {})'.format(2*2*np.pi/n_bins - np.pi, 3*2*np.pi/n_bins - np.pi),
        '3' : '(DeltaPhi > {} && DeltaPhi < {})'.format(3*2*np.pi/n_bins - np.pi, 4*2*np.pi/n_bins - np.pi),
    }
}

## Top control regions
cuts['hww2l2v_13TeV_top_of2j_dphijj_4bins']  = { 
   'expr' : 'topcr ',#????
    # Define the sub-categorization of topcr
   'categories' : {
        '0' : '(DeltaPhi > {} && DeltaPhi < {})'.format(0*2*np.pi/n_bins - np.pi, 1*2*np.pi/n_bins - np.pi),
        '1' : '(DeltaPhi > {} && DeltaPhi < {})'.format(1*2*np.pi/n_bins - np.pi, 2*2*np.pi/n_bins - np.pi),
        '2' : '(DeltaPhi > {} && DeltaPhi < {})'.format(2*2*np.pi/n_bins - np.pi, 3*2*np.pi/n_bins - np.pi),
        '3' : '(DeltaPhi > {} && DeltaPhi < {})'.format(3*2*np.pi/n_bins - np.pi, 4*2*np.pi/n_bins - np.pi),
   }
}

## DYtt control regions
cuts['hww2l2v_13TeV_dytt_of2j_dphijj_4bins']  = { 
   'expr' : 'dycr',
   # Define the sub-categorization of dycr
   'categories' : { 
       '0' : '(DeltaPhi > {} && DeltaPhi < {})'.format(0*2*np.pi/n_bins - np.pi, 1*2*np.pi/n_bins - np.pi),
       '1' : '(DeltaPhi > {} && DeltaPhi < {})'.format(1*2*np.pi/n_bins - np.pi, 2*2*np.pi/n_bins - np.pi),
       '2' : '(DeltaPhi > {} && DeltaPhi < {})'.format(2*2*np.pi/n_bins - np.pi, 3*2*np.pi/n_bins - np.pi),
       '3' : '(DeltaPhi > {} && DeltaPhi < {})'.format(3*2*np.pi/n_bins - np.pi, 4*2*np.pi/n_bins - np.pi),
   }
}
