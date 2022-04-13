# variables

variables['events'] = {
    'name'  : '1',
    'range' : (1,0,2),
    'xaxis' : 'events',
    'fold' : 3,
}


### Legacy discriminants


# Leading electron
variables['Legacy_ttHMVA_electron1'] = {
    'name'  : 'Alt$(Electron_mvaTTH[0],-1)',
    'range' : (1000,-1,1),
    'xaxis' : 'Leading electron legacy discrminant',
    'fold' : 3,
}

# Sub-leading electron
variables['Legacy_ttHMVA_electron2'] = {
    'name'  : 'Alt$(Electron_mvaTTH[1],-1)',
    'range' : (1000,-1,1),
    'xaxis' : 'Sub-leading electron legacy discrminant',
    'fold' : 3,
}

# Minimum of the two discriminants
variables['min_legacy_ttHMVA_electron'] = {
    'name'  : 'MinIf$(Electron_mvaTTH[],Electron_mvaTTH[0]>=-1 && Electron_mvaTTH[1]>=-1)',
    'range' : (1000,-1,1),
    'xaxis' : 'Minimum electron legacy discrminant',
    'fold' : 3,
}


# Leading muon
variables['Legacy_ttHMVA_muon1'] = {
    'name'  : 'Alt$(Muon_mvaTTH[0],-1)',
    'range' : (1000,-1,1),
    'xaxis' : 'Leading muon legacy discrminant',
    'fold' : 3,
}

# Sub-leading muon
variables['Legacy_ttHMVA_muon2'] = {
    'name'  : 'Alt$(Muon_mvaTTH[1],-1)',
    'range' : (1000,-1,1),
    'xaxis' : 'Sub-leading muon legacy discrminant',
    'fold' : 3,
}

# Minimum of the two discriminants
variables['min_legacy_ttHMVA_muon'] = {
    'name'  : 'MinIf$(Muon_mvaTTH[],Muon_mvaTTH[0]>=-1 && Muon_mvaTTH[1]>=-1)',
    'range' : (1000,-1,1),
    'xaxis' : 'Minimum muon legacy discrminant',
    'fold' : 3,
}



### UL discriminants

# Minimum of the two electrons discriminants
variables['min_UL_ttHMVA_electron'] = {
    'name'  : 'Electron_ttHMVA',
    'range' : (1000,-1,1),
    'xaxis' : 'Minimum electron UL discrminant',
    'fold' : 3,
}

# Minimum of the two muons discriminants
variables['min_UL_ttHMVA_muon'] = {
    'name'  : 'Muon_ttHMVA',
    'range' : (1000,-1,1),
    'xaxis' : 'Minimum muon UL discrminant',
    'fold' : 3,
}
