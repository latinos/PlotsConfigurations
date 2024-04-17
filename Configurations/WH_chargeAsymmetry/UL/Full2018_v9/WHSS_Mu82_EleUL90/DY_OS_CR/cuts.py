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

# SR-like e-e opposite-sign region - in this case, we don't split into charge.

# 2 Jets
cuts['hww2l2v_13TeV_WH_OS_ee_2j'] = {
    'expr' : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && nLepton==2 && Alt$(CleanJet_pt[0],0)>30 && Alt$(CleanJet_pt[1],0)>30 && mjj < 100 && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 && mlljj20_whss > 50.',
    'categories' : {
        # Sub-leading lepton pT >= 20 GeV 
        'pt2ge20'        : 'abs(mll-91.2)>15  && Lepton_pt[1]>=20', # OUT Z-peak
        'DYeeCR_pt2ge20' : 'abs(mll-91.2)<=15 && Lepton_pt[1]>=20', # IN Z-peak
        # Sub-leading lepton pT < 20 GeV
        'pt2lt20'        : 'abs(mll-91.2)>15  && Lepton_pt[1]<20', # OUT Z-peak
        'DYeeCR_pt2lt20' : 'abs(mll-91.2)<=15 && Lepton_pt[1]<20', # IN Z-peak
    }
}

# 1 Jet
cuts['hww2l2v_13TeV_WH_OS_ee_1j'] = {
    'expr' : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && nLepton==2 && Alt$(CleanJet_pt[0],0)>30 && Alt$(CleanJet_pt[1],0)<30 && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 && mlljj20_whss > 50.',
    'categories' : {
        # Sub-leading lepton pT >= 20 GeV 
        'pt2ge20'        : 'abs(mll-91.2)>15  && Lepton_pt[1]>=20', # OUT Z-peak
        'DYeeCR_pt2ge20' : 'abs(mll-91.2)<=15 && Lepton_pt[1]>=20', # IN Z-peak
        # Sub-leading lepton pT < 20 GeV
        'pt2lt20'        : 'abs(mll-91.2)>15  && Lepton_pt[1]<20', # OUT Z-peak
        'DYeeCR_pt2lt20' : 'abs(mll-91.2)<=15 && Lepton_pt[1]<20', # IN Z-peak
    }
}

# SR-like em opposite-sign region - in this case, we don't split into charge.

# 2 Jets
cuts['hww2l2v_13TeV_WH_OS_em_2j'] = {
    'expr' : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && nLepton==2 && Alt$(CleanJet_pt[0],0)>30 && Alt$(CleanJet_pt[1],0)>30 && mjj < 100 && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 && mlljj20_whss > 50.',
    'categories' : {
        # Sub-leading lepton pT >= 20 GeV 
        'pt2ge20'        : 'abs(mll-91.2)>15  && Lepton_pt[1]>=20', # OUT Z-peak
        # Sub-leading lepton pT < 20 GeV
        'pt2lt20'        : 'abs(mll-91.2)>15  && Lepton_pt[1]<20', # OUT Z-peak
    }
}

# 1 Jet
cuts['hww2l2v_13TeV_WH_OS_em_1j'] = {
    'expr' : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && nLepton==2 && Alt$(CleanJet_pt[0],0)>30 && Alt$(CleanJet_pt[1],0)<30 && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 && mlljj20_whss > 50.',
    'categories' : {
        # Sub-leading lepton pT >= 20 GeV 
        'pt2ge20'        : 'abs(mll-91.2)>15  && Lepton_pt[1]>=20', # OUT Z-peak
        # Sub-leading lepton pT < 20 GeV
        'pt2lt20'        : 'abs(mll-91.2)>15  && Lepton_pt[1]<20', # OUT Z-peak
    }
}
