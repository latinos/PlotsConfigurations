import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # TheoUnc
configurations = os.path.dirname(configurations) # jetpt1
configurations = os.path.dirname(configurations) # Full2018_v9
configurations = os.path.dirname(configurations) # FullRunII_UL
configurations = os.path.dirname(configurations) # WW
configurations = os.path.dirname(configurations) # Configurations

aliases['fiducial'] = {
    'linesToAdd': ['.L %s/WW/FullRunII/fiducial.cc+' % configurations],
    'class': 'FiducialRegion',
    'samples': ['WW','ggWW']
}

aliases['nGoodGenJet'] = {
    'linesToAdd': ['.L %s/WW/FullRunII/goodgenjet.cc+' % configurations],
    'class': 'CleanGenJet',
    'args': ("njet"),
    'samples': ['WW','ggWW']
}

aliases['jetpt1gen'] = {
    'class': 'CleanGenJet',
    'args': ("jetpt1"),
    'samples': ['WW','ggWW']
}

aliases['B0'] = {
    'expr' : 'jetpt1gen >= 30.  && jetpt1gen < 40.',
    'samples' : ['WW','ggWW']
}
aliases['B1'] = {
    'expr' : 'jetpt1gen >= 40.  && jetpt1gen < 55.',
    'samples' : ['WW','ggWW']
}
aliases['B2'] = {
    'expr' : 'jetpt1gen >= 55.  && jetpt1gen < 75.',
    'samples' : ['WW','ggWW']
}
aliases['B3'] = {
    'expr' : 'jetpt1gen >= 75.  && jetpt1gen < 100.',
    'samples' : ['WW','ggWW']
}
aliases['B4'] = {
    'expr' : 'jetpt1gen >= 100. && jetpt1gen < 150.',
    'samples' : ['WW','ggWW']
}
aliases['B5'] = {
    'expr' : 'jetpt1gen >= 150. && jetpt1gen < 400.',
    'samples' : ['WW','ggWW']
}

aliases['fid'] = {
    'expr' : 'fiducial && nGoodGenJet >= 2',
    'samples' : ['WW','ggWW']
}
