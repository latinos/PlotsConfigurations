supercut = 'mll>12 \
            && Lepton_pt[0]>25 && Lepton_pt[1]>13 \
            && Lepton_pdgId[0]*Lepton_pdgId[1]==-11*13 \
            && Alt$(Lepton_pt[2],0)<10 \
            && Sum$(CleanJet_pt>30)==2\
            && ptll>30 \
            && mjj>120 \
            && PuppiMET_pt>20 \
            '


## Signal regions

# Reco-level dphijj bins
n_bins = 8

# Needed to define pi
import numpy as np

# Differential analysis signal region
cuts['hww2l2v_13TeV_of2j_dphijj'] = {
    'expr': ' (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && bVeto && mtw2>30 && (mth>=60 && mth<125) && mll < 100',
    'categories': {
        '0' : '(DeltaPhi > {} && DeltaPhi < {})'.format(0*2*np.pi/n_bins - np.pi, 1*2*np.pi/n_bins - np.pi),
        '1' : '(DeltaPhi > {} && DeltaPhi < {})'.format(1*2*np.pi/n_bins - np.pi, 2*2*np.pi/n_bins - np.pi),
        '2' : '(DeltaPhi > {} && DeltaPhi < {})'.format(2*2*np.pi/n_bins - np.pi, 3*2*np.pi/n_bins - np.pi),
        '3' : '(DeltaPhi > {} && DeltaPhi < {})'.format(3*2*np.pi/n_bins - np.pi, 4*2*np.pi/n_bins - np.pi),
        '4' : '(DeltaPhi > {} && DeltaPhi < {})'.format(4*2*np.pi/n_bins - np.pi, 5*2*np.pi/n_bins - np.pi),
        '5' : '(DeltaPhi > {} && DeltaPhi < {})'.format(5*2*np.pi/n_bins - np.pi, 6*2*np.pi/n_bins - np.pi),
        '6' : '(DeltaPhi > {} && DeltaPhi < {})'.format(6*2*np.pi/n_bins - np.pi, 7*2*np.pi/n_bins - np.pi),
        '7' : '(DeltaPhi > {} && DeltaPhi < {})'.format(7*2*np.pi/n_bins - np.pi, 8*2*np.pi/n_bins - np.pi),
    }
}

# CPV analysis signal regions attempts
cuts['hww2l2v_13TeV_of2j_mll'] = {
    'expr': ' (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && bVeto && mtw2>30 && (mth>=60 && mth<125) && mll < 100',
    'categories': {
        'high_purity' : 'vbfdnn > 0.4',
        'low_purity'  : 'vbfdnn <= 0.4',
    }
}

cuts['hww2l2v_13TeV_of2j_mll_loose'] = {
    'expr': ' (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && bVeto && mtw2>30 && (mth>=60 && mth<125) && mll < 250',
    'categories': {
        'high_purity' : 'vbfdnn > 0.4',
        'low_purity'  : 'vbfdnn <= 0.4',
    }
}

## Control regions

cuts['hww2l2v_13TeV_top_of2j'] = ' topcr \
                                  '
cuts['hww2l2v_13TeV_dytt_of2j'] = ' mth<60 \
                                    && mll>40 && mll<80 \
                                    && bVeto \
                                   '
