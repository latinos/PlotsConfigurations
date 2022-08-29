# # variables

#
# variables = {}

variables['events']  = {
    'name' : '1',
    'range': (1,0,2),
    'xaxis': 'events',
    'fold' : 3,
}


variables['Boson_Lep_pt'] = {
    'name' : 'HM_Wlep_pt_Puppi[0]',
    'range': (25,0,400),
    'xaxis': 'p_{T} W lep. [GeV]',
    'fold' : 0
}


variables['Gen_WLep_pt'] = {
    'name' : 'W_Lep_Gen[0]',
    'range': (25,0,400),
    'xaxis': 'p_{T} W lep. [GeV]',
    'fold' : 0
}

variables['Gen_WLep_pt_Large'] = {
    'name' : 'W_Lep_Gen[0]',
    'range': (50,0,800),
    'xaxis': 'p_{T} W lep. [GeV]',
    'fold' : 0
}

variables['Boson_had_pt'] = {
    'name' : 'HM_Whad_pt[0]',
    'range': (25,0,400),
    'xaxis': 'p_{T} W had. [GeV]',
    'fold' : 0
}


variables['HT'] = {
    'name' : 'LHE_HT[0]',
    'range': (260,10,2610),
    'xaxis': 'LHE_HT [GeV]',
    'fold' : 0
}

variables['HT_plot'] = {
    'name' : 'LHE_HT[0]',
    'range': (30,0,3000),
    'xaxis': 'LHE_HT [GeV]',
    'fold' : 0
}
variables['HT_binned'] = {
    'name' : 'LHE_HT[0]',
    'range': ([0,70,100,200,400,600,800,1200,2500,5000],),
    'xaxis': 'LHE_HT [GeV]',
    'fold' : 0
}
