# variables

#variables = {}



variables['events']  = {
    'name' : '1',
    'range': (1,0,2),
    'xaxis': 'events',
    'fold' : 3
}

variables['firstLeptonPt']  = {
    'name' : 'Lepton_pt[0]',
    'range': (40,0,500),
    'xaxis': '1st lep pt',
    'fold' : 0
}

# only as function  of pT
variables['probe_pt']  = {
    'name' : 'Lepton_pt[1]',
    'range': ([0, 10, 25, 50, 90, 150, 500],),
    'xaxis': '2nd lep pt',
    'fold' : 0
}

# only as function of Lepton_eta
# FIXME: binning
variables['probe_eta']  = {
    'name' : 'Lepton_eta[1]',
    'range': ([-2.5, -2.1, -1.6, -1.4, 0.0, 1.4, 1.6, 2.1, 2.5],),
    'xaxis': '2nd lep eta',
    'fold' : 0
}



# as function of pT and eta
variables['probe_pt_eta']  = {
    'name' : 'Lepton_pt[1]:Lepton_eta[1]',
    'range': ([0, 10, 25, 50, 90, 150, 500],[-2.5, -2.1, -1.6, -1.4, 0.0, 1.4, 2.1, 1.6, 2.5]),
    'xaxis': '2nd lep pt',
    'yaxis': '2nd lep eta',
    'fold' : 0,
    'binX' : 6,
    'binY' : 8
}


# as function of abs(p)
variables['probe_pabs']  = {
    'name' : 'Lepton_pt[1]*TMath::CosH(Lepton_eta[1])',
    'range': ([0, 10, 25, 50, 90, 150, 500],),
    'xaxis': '2nd lep abs(p)',
    'fold' : 0
}
