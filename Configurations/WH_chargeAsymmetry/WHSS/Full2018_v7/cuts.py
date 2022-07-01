# cuts
supercut = 'mll>12  \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && bVeto \
            && PuppiMET_pt > 30 \
            '

## && Lepton_pt[0]>25 && Lepton_pt[1]>20 \

## SR 2jets

# mu-mu
cuts['hww2l2v_13TeV_WH_SS_mm_2j'] = {
    'expr' : '(Lepton_pdgId[0]*Lepton_pdgId[1] == 13*13) && nLepton==2 && Alt$(CleanJet_pt[0],0)>30 && Alt$(CleanJet_pt[1],0)>30 && mjj < 100 && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 && abs(mll-91.2)>15 && mlljj20_whss > 50.',
    'categories' : {
        # Sub-leading lepton pT >= 20 GeV
        'plus_pt2ge20'  : 'Lepton_pdgId[0] == -13 && Lepton_pdgId[1] == -13 && Lepton_pt[1]>=20',
        'minus_pt2ge20' : 'Lepton_pdgId[0] == +13 && Lepton_pdgId[1] == +13 && Lepton_pt[1]>=20',
        # Sub-leading lepton pT < 20 GeV
        'plus_pt2lt20'  : 'Lepton_pdgId[0] == -13 && Lepton_pdgId[1] == -13 && Lepton_pt[1]<20',
        'minus_pt2lt20' : 'Lepton_pdgId[0] == +13 && Lepton_pdgId[1] == +13 && Lepton_pt[1]<20',
    }
}

# mu-e
cuts['hww2l2v_13TeV_WH_SS_em_2j'] = {
    'expr' : '(Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13) && nLepton==2 && Alt$(CleanJet_pt[0],0)>30 && Alt$(CleanJet_pt[1],0)>30 && mjj < 100 && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 && mlljj20_whss > 50.',
    'categories' : {
        # Sub-leading lepton pT >= 20 GeV
        'plus_pt2ge20'  : '(Lepton_pdgId[0] == -13 && Lepton_pdgId[1] == -11) || (Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -13) && Lepton_pt[1]>=20',
        'minus_pt2ge20' : '(Lepton_pdgId[0] == +13 && Lepton_pdgId[1] == +11) || (Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +13) && Lepton_pt[1]>=20',
        # Sub-leading lepton pT < 20 GeV
        'plus_pt2lt20'  : '(Lepton_pdgId[0] == -13 && Lepton_pdgId[1] == -11) || (Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -13) && Lepton_pt[1]<20',
        'minus_pt2lt20' : '(Lepton_pdgId[0] == +13 && Lepton_pdgId[1] == +11) || (Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +13) && Lepton_pt[1]<20',
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

## SR 1jet

# mu-mu
cuts['hww2l2v_13TeV_WH_SS_mm_1j'] = {
    'expr' : '(Lepton_pdgId[0]*Lepton_pdgId[1] == 13*13) && nLepton==2 && Alt$(CleanJet_pt[0],0)>30 && Alt$(CleanJet_pt[1],0)<30 && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 && abs(mll-91.2)>15 && mlljj20_whss > 50.',
    'categories' : {
        # Sub-leading lepton pT >= 20 GeV
        'plus_pt2ge20'  : 'Lepton_pdgId[0] == -13 && Lepton_pdgId[1] == -13 && Lepton_pt[1]>=20',
        'minus_pt2ge20' : 'Lepton_pdgId[0] == +13 && Lepton_pdgId[1] == +13 && Lepton_pt[1]>=20',
        # Sub-leading lepton pT < 20 GeV
        'plus_pt2lt20'  : 'Lepton_pdgId[0] == -13 && Lepton_pdgId[1] == -13 && Lepton_pt[1]<20',
        'minus_pt2lt20' : 'Lepton_pdgId[0] == +13 && Lepton_pdgId[1] == +13 && Lepton_pt[1]<20',
    }
}

# mu-e
cuts['hww2l2v_13TeV_WH_SS_em_1j'] = {
    'expr' : '(Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13) && nLepton==2 && Alt$(CleanJet_pt[0],0)>30 && Alt$(CleanJet_pt[1],0)<30 && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 && mlljj20_whss > 50.',
    'categories' : {
        # Sub-leading lepton pT >= 20 GeV
        'plus_pt2ge20'  : '(Lepton_pdgId[0] == -13 && Lepton_pdgId[1] == -11) || (Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -13) && Lepton_pt[1]>=20',
        'minus_pt2ge20' : '(Lepton_pdgId[0] == +13 && Lepton_pdgId[1] == +11) || (Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +13) && Lepton_pt[1]>=20',
        # Sub-leading lepton pT < 20 GeV
        'plus_pt2lt20'  : '(Lepton_pdgId[0] == -13 && Lepton_pdgId[1] == -11) || (Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -13) && Lepton_pt[1]<20',
        'minus_pt2lt20' : '(Lepton_pdgId[0] == +13 && Lepton_pdgId[1] == +11) || (Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +13) && Lepton_pt[1]<20',
    }
}

# e-e
cuts['hww2l2v_13TeV_WH_SS_ee_1j'] = {
    'expr' : '(Lepton_pdgId[0]*Lepton_pdgId[1] == 11*11) && nLepton==2 && Alt$(CleanJet_pt[0],0)>30 && Alt$(CleanJet_pt[1],0)<30 && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 && abs(mll-91.2)>15 && mlljj20_whss > 50.',
    'categories' : {
        # Sub-leading lepton pT >= 20 GeV
        'plus_pt2ge20'  : 'Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -11 && Lepton_pt[1]>=20',
        'minus_pt2ge20' : 'Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +11 && Lepton_pt[1]>=20',
        # Sub-leading lepton pT < 20 GeV
        'plus_pt2lt20'  : 'Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -11 && Lepton_pt[1]<20',
        'minus_pt2lt20' : 'Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +11 && Lepton_pt[1]<20',
    }
}


## WZ CR --> 3l control region: should it go in a different cfg, due to lepton selections and SFs? Check it!

# CR 1jet
cuts['hww2l2v_13TeV_WH_SS_WZ_1j'] = '((Lepton_pdgId[0]*Lepton_pdgId[1] == 13*13) || (Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13) || (Lepton_pdgId[0]*Lepton_pdgId[1] == 11*11))\
                                       && (nLepton>=3 && Alt$(Lepton_pt[3],0)<10) \
                                       && Lepton_pt[2]>15 \
                                       && Alt$(CleanJet_pt[0],0)>30 \
                                       && Alt$(CleanJet_pt[1],0)<30 \
                                       && WH3l_mlll > 100 \
                                       && abs(WH3l_chlll) == 1 \
                                       '

# CR 2jets
cuts['hww2l2v_13TeV_WH_SS_WZ_2j'] = '((Lepton_pdgId[0]*Lepton_pdgId[1] == 13*13) || (Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13) || (Lepton_pdgId[0]*Lepton_pdgId[1] == 11*11)) \
                                       && (nLepton>=3 && Alt$(Lepton_pt[3],0)<10) \
                                       && Lepton_pt[2]>15 \
                                       && Alt$(CleanJet_pt[0],0)>30 \
                                       && Alt$(CleanJet_pt[1],0)>30 \
                                       && WH3l_mlll > 100 \
                                       && abs(WH3l_chlll) == 1 \
                                       '

# CR 1jet (from ZH3l analysis)
cuts['hww2l2v_13TeV_ZH3l_WZ_CR_1j'] = 'MinIf$( WH3l_mOSll[], WH3l_mOSll[Iteration$] > 0) > 12 \
                                    && Alt$(Lepton_pt[2],0)>15 \
                                    && Alt$(Lepton_pt[3],0)<10 \
                                    && abs(WH3l_chlll) == 1 \
                                    && Alt$( CleanJet_pt[0], 0) > 30 \
                                    && Alt$( CleanJet_pt[1], 0) < 30 \
                                    && WH3l_ZVeto < 25 \
                                    && ZH3l_Z4lveto > 20 \
                                    && ZH3l_dphilmetj > 3.14159/2 \
                                    '         

# CR 1jet (from ZH3l analysis)
cuts['hww2l2v_13TeV_ZH3l_WZ_CR_2j'] = 'MinIf$( WH3l_mOSll[], WH3l_mOSll[Iteration$] > 0) > 12 \
                                    && Alt$(Lepton_pt[2],0)>15 \
                                    && Alt$(Lepton_pt[3],0)<10 \
                                    && abs(WH3l_chlll) == 1 \
                                    && Alt$( CleanJet_pt[0], 0) > 30 \
                                    && Alt$( CleanJet_pt[1], 0) > 30 \
                                    && WH3l_ZVeto < 25 \
                                    && ZH3l_Z4lveto > 20 \
                                    && ZH3l_dphilmetj > 3.14159/2 \
                                    '         


## DY->ee CR - 2 same-sign electrons IN the Z peak. To check the charge-flip probability method to estimate DY in the signal region

# CR 2jets
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

# CR 1jets
cuts['hww2l2v_13TeV_WH_SS_DYee_1j'] = {
    'expr' : '(Lepton_pdgId[0]*Lepton_pdgId[1] == 11*11) && nLepton==2 && Alt$(CleanJet_pt[0],0)>30 && Alt$(CleanJet_pt[1],0)<30 && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 && abs(mll-91.2)<15 && mlljj20_whss > 50.',
    'categories' : {
        # Sub-leading lepton pT >= 20 GeV
        'plus_pt2ge20'  : 'Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -11 && Lepton_pt[1]>=20',
        'minus_pt2ge20' : 'Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +11 && Lepton_pt[1]>=20',
        # Sub-leading lepton pT < 20 GeV
        'plus_pt2lt20'  : 'Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -11 && Lepton_pt[1]<20',
        'minus_pt2lt20' : 'Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +11 && Lepton_pt[1]<20',
    }
}


# mlljj20_whss:
# inv_mass of: (jet1, jet2, 2*closest_lep_to_jets)
# jets are considered with pT > 20 GeV 

# Definitions of WH3l variables:
# https://github.com/latinos/LatinoAnalysis/blob/76e7c4b93aa5f056c92440d4e8d24e7de749c8fe/NanoGardener/python/modules/l3KinProducer.py


# Original cfg
# ## SR 2jets
# cuts['hww2l2v_13TeV_of2j_WH_SS_mm_2j'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == 13*13) \
#                                        && nLepton==2  \
#                                        && Alt$(CleanJet_pt[0],0)>30 \
#                                        && Alt$(CleanJet_pt[1],0)>30 \
#                                        && mjj < 100 \
#                                        && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 \
#                                        && abs(mll-91.2)>15 \
#                                        && mlljj20_whss > 50. \
#                                        '
# cuts['hww2l2v_13TeV_of2j_WH_SS_em_2j'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13) \
#                                        && nLepton==2 \
#                                        && Alt$(CleanJet_pt[0],0)>30 \
#                                        && Alt$(CleanJet_pt[1],0)>30 \
#                                        && mjj < 100 \
#                                        && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 \
#                                        && mlljj20_whss > 50. \
#                                        '
# ## SR 1jet

# cuts['hww2l2v_13TeV_of2j_WH_SS_mm_1j'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == 13*13) \
#                                        && nLepton==2 \
#                                        && Alt$(CleanJet_pt[0],0)>30 \
#                                        && Alt$(CleanJet_pt[1],0)<30 \
#                                        && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 \
#                                        && abs(mll-91.2)>15 \
#                                        && mlljj20_whss > 50. \
#                                        '
# cuts['hww2l2v_13TeV_of2j_WH_SS_em_1j'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13) \
#                                        && nLepton==2 \
#                                        && Alt$(CleanJet_pt[0],0)>30 \
#                                        && Alt$(CleanJet_pt[1],0)<30 \
#                                        && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 \
#                                        && mlljj20_whss > 50. \
#                                        '
