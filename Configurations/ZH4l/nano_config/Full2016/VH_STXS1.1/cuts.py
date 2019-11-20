# cuts

supercut = ' Lepton_pt[0]>25 \
          && Lepton_pt[1]>15 \
          && Lepton_pt[2]>10 \
          && Lepton_pt[3]>10 \
          && (nLepton>=4 && Alt$(Lepton_pt[4],0)<10) \
          && chllll_zh4l == 0 \
          && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 && abs(Lepton_eta[2])<2.5 && abs(Lepton_eta[3])<2.5 \
          && z0Mass_zh4l>12 \
          && z1Mass_zh4l>12\
          && Sum$(CleanJet_pt > 20. && abs(CleanJet_eta)<2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217) == 0 \
                             '

cuts['zh4l_XSF_13TeV']  = {
    'expr' : 'flagZ1SF_zh4l == 1 \
           && mllll_zh4l > 140 \
           && abs(z1DeltaPhi_zh4l) < 2.2 \
           && abs(z0Mass_zh4l-91.1876) < 15 \
           && MET_pt > 35 \
           ',
    'categories' : {
        'ptv_0_75'         : 'recoZPt <= 75',
        'ptv_75_150'       : 'recoZPt >  75 && recoZPt <= 150',
        'ptv_150_250_0j'   : 'Alt$(CleanJet_pt[0], 0) < 30  && recoZPt > 150 && recoZPt <= 250',
        'ptv_150_250_ge1j' : 'Alt$(CleanJet_pt[0], 0) >= 30 && recoZPt > 150 && recoZPt <= 250',
        'ptv_gt250'        : 'recoZPt > 250',
    }
}

cuts['zh4l_XDF_13TeV']  = {
    'expr' : 'flagZ1SF_zh4l == 0 \
           && abs(z1DeltaPhi_zh4l) < 1.9 \
           && abs(z0Mass_zh4l-91.1876) < 15 \
           && MET_pt > 20 \
           ',
    'categories' : {
        'ptv_0_75'         : 'recoZPt <= 75',
        'ptv_75_150'       : 'recoZPt >  75 && recoZPt <= 150',
        'ptv_150_250_0j'   : 'Alt$(CleanJet_pt[0], 0) < 30  && recoZPt > 150 && recoZPt <= 250',
        'ptv_150_250_ge1j' : 'Alt$(CleanJet_pt[0], 0) >= 30 && recoZPt > 150 && recoZPt <= 250',
        'ptv_gt250'        : 'recoZPt > 250',
    }
}

cuts['zh4l_ZZ_13TeV']  = 'flagZ1SF_zh4l == 1 \
                       && z1Mass_zh4l < 105 && z1Mass_zh4l > 75 \
                       && MET_pt < 35 \
                       && fabs(z0Mass_zh4l-91.1876) < 15 \
                       '
