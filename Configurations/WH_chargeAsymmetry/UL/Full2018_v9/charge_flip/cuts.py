# cuts
supercut = 'Lepton_pt[0] > 25 \
         && Lepton_pt[1] > 13 \
         && (nLepton>=2 && Alt$(Lepton_pt[2],0) < 10) \
         && abs(Lepton_eta[0]) < 2.5 \
         && abs(Lepton_eta[1]) < 2.5 \
         && abs(Lepton_pdgId[0]*Lepton_pdgId[1]) == 11*11 \
         && abs(mll-91.2) < 15 \
         '

# Same-sign category
cuts['DY_ee_cf_ss'] = {
    'expr'       : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*11',
    'categories' : {
        'high_pt_EBEB' : 'Lepton_pt[1] >  20 && abs(Lepton_eta[0]) <  1.4 && abs(Lepton_eta[1]) <  1.4',
        'low_pt_EBEB'  : 'Lepton_pt[1] <= 20 && abs(Lepton_eta[0]) <  1.4 && abs(Lepton_eta[1]) <  1.4',
        'high_pt_EBEE' : 'Lepton_pt[1] >  20 && abs(Lepton_eta[0]) <  1.4 && abs(Lepton_eta[1]) >= 1.4',
        'low_pt_EBEE'  : 'Lepton_pt[1] <= 20 && abs(Lepton_eta[0]) <  1.4 && abs(Lepton_eta[1]) >= 1.4',
        'high_pt_EEEB' : 'Lepton_pt[1] >  20 && abs(Lepton_eta[0]) >= 1.4 && abs(Lepton_eta[1]) <  1.4',
        'low_pt_EEEB'  : 'Lepton_pt[1] <= 20 && abs(Lepton_eta[0]) >= 1.4 && abs(Lepton_eta[1]) <  1.4',
        'high_pt_EEEE' : 'Lepton_pt[1] >  20 && abs(Lepton_eta[0]) >= 1.4 && abs(Lepton_eta[1]) >= 1.4',
        'low_pt_EEEE'  : 'Lepton_pt[1] <= 20 && abs(Lepton_eta[0]) >= 1.4 && abs(Lepton_eta[1]) >= 1.4',
    }
}

# Opposite-sign category
cuts['DY_ee_cf_os'] = {
    'expr'       : 'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11',
    'categories' : {
        'high_pt_EBEB' : 'Lepton_pt[1] >  20 && abs(Lepton_eta[0]) <  1.4 && abs(Lepton_eta[1]) <  1.4',
        'low_pt_EBEB'  : 'Lepton_pt[1] <= 20 && abs(Lepton_eta[0]) <  1.4 && abs(Lepton_eta[1]) <  1.4',
        'high_pt_EBEE' : 'Lepton_pt[1] >  20 && abs(Lepton_eta[0]) <  1.4 && abs(Lepton_eta[1]) >= 1.4',
        'low_pt_EBEE'  : 'Lepton_pt[1] <= 20 && abs(Lepton_eta[0]) <  1.4 && abs(Lepton_eta[1]) >= 1.4',
        'high_pt_EEEB' : 'Lepton_pt[1] >  20 && abs(Lepton_eta[0]) >= 1.4 && abs(Lepton_eta[1]) <  1.4',
        'low_pt_EEEB'  : 'Lepton_pt[1] <= 20 && abs(Lepton_eta[0]) >= 1.4 && abs(Lepton_eta[1]) <  1.4',
        'high_pt_EEEE' : 'Lepton_pt[1] >  20 && abs(Lepton_eta[0]) >= 1.4 && abs(Lepton_eta[1]) >= 1.4',
        'low_pt_EEEE'  : 'Lepton_pt[1] <= 20 && abs(Lepton_eta[0]) >= 1.4 && abs(Lepton_eta[1]) >= 1.4',
    }
}
