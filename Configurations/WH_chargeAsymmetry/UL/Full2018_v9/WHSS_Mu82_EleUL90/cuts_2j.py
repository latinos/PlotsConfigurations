# cuts
supercut = 'mll>12  \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && bVeto \
            && PuppiMET_pt > 30 \
            && !hole_veto[0] \
            '

# Splitting in sub-leading lepton pT 
####################################

## SR 2jets

# # mu-mu
# cuts['hww2l2v_13TeV_WH_SS_noZveto_mm_2j'] = {
#     'expr' : '(Lepton_pdgId[0]*Lepton_pdgId[1] == 13*13) && nLepton==2 && Alt$(CleanJet_pt[0],0)>30 && Alt$(CleanJet_pt[1],0)>30 && mjj < 100 && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 && mlljj20_whss > 50.',
#     'categories' : {
#         # Sub-leading lepton pT >= 20 GeV
#         'plus_pt2ge20'  : 'Lepton_pdgId[0] == -13 && Lepton_pdgId[1] == -13 && Lepton_pt[1]>=20',
#         'minus_pt2ge20' : 'Lepton_pdgId[0] == +13 && Lepton_pdgId[1] == +13 && Lepton_pt[1]>=20',
#         # Sub-leading lepton pT < 20 GeV
#         'plus_pt2lt20'  : 'Lepton_pdgId[0] == -13 && Lepton_pdgId[1] == -13 && Lepton_pt[1]<20',
#         'minus_pt2lt20' : 'Lepton_pdgId[0] == +13 && Lepton_pdgId[1] == +13 && Lepton_pt[1]<20',
#     }
# }

# mu-e
cuts['hww2l2v_13TeV_WH_SS_em_2j'] = {
    'expr' : '(Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13) && nLepton==2 && Alt$(CleanJet_pt[0],0)>30 && Alt$(CleanJet_pt[1],0)>30 && mjj < 100 && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 && mlljj20_whss > 50.',
    'categories' : {
        # Sub-leading lepton pT >= 20 GeV
        'plus_pt2ge20'  : '((Lepton_pdgId[0] == -13 && Lepton_pdgId[1] == -11) || (Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -13)) && Lepton_pt[1]>=20',
        'minus_pt2ge20' : '((Lepton_pdgId[0] == +13 && Lepton_pdgId[1] == +11) || (Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +13)) && Lepton_pt[1]>=20',
        # Sub-leading lepton pT < 20 GeV
        'plus_pt2lt20'  : '((Lepton_pdgId[0] == -13 && Lepton_pdgId[1] == -11) || (Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -13)) && Lepton_pt[1]<20',
        'minus_pt2lt20' : '((Lepton_pdgId[0] == +13 && Lepton_pdgId[1] == +11) || (Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +13)) && Lepton_pt[1]<20',
    }
}

# e-e
cuts['hww2l2v_13TeV_WH_SS_ee_2j'] = {
    'expr' : '(Lepton_pdgId[0]*Lepton_pdgId[1] == 11*11) && nLepton==2 && Alt$(CleanJet_pt[0],0)>30 && Alt$(CleanJet_pt[1],0)>30 && mjj < 100 && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 && abs(mll-91.2)>15 && mlljj20_whss > 50.',
    'categories' : {
        # Sub-leading lepton pT >= 20 GeV
        'plus_pt2ge20'  : 'Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -11 && Lepton_pt[1]>=20',
        'minus_pt2ge20' : 'Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +11 && Lepton_pt[1]>=20',
        # Sub-leading lepton pT < 20 GeV
        'plus_pt2lt20'  : 'Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -11 && Lepton_pt[1]<20',
        'minus_pt2lt20' : 'Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +11 && Lepton_pt[1]<20',
    }
}


## DY->ee CR - 2 same-sign electrons IN the Z peak. To check the charge-flip probability method to estimate DY in the signal region

# DY CR 2jets
cuts['hww2l2v_13TeV_WH_SS_DYee_2j'] = {
    'expr' : '(Lepton_pdgId[0]*Lepton_pdgId[1] == 11*11) && nLepton==2 && Alt$(CleanJet_pt[0],0)>30 && Alt$(CleanJet_pt[1],0)>30 && mjj < 100 && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 && abs(mll-91.2)<15 && mlljj20_whss > 50.',
    'categories' : {
        # Sub-leading lepton pT >= 20 GeV
        'plus_pt2ge20'  : 'Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -11 && Lepton_pt[1]>=20',
        'minus_pt2ge20' : 'Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +11 && Lepton_pt[1]>=20',
        # Sub-leading lepton pT < 20 GeV
        'plus_pt2lt20'  : 'Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -11 && Lepton_pt[1]<20',
        'minus_pt2lt20' : 'Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +11 && Lepton_pt[1]<20',
    }
}
