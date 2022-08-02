import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # TheoUnc
configurations = os.path.dirname(configurations) # jetpt1
configurations = os.path.dirname(configurations) # Full2016_v7
configurations = os.path.dirname(configurations) # FullRunII
configurations = os.path.dirname(configurations) # WW
configurations = os.path.dirname(configurations) # Configurations

aliases['nCleanGenJet'] = {
    'linesToAdd': ['.L %s/Differential/ngenjet.cc+' % configurations],
    'class': 'CountGenJet',
}

aliases['nGoodGenJet'] = {
    'linesToAdd': ['.L %s/WW/FullRunII/goodgenjet.cc+' % configurations],
    'class': 'CleanGenJet',
    'args': ("njet"),
    'samples': ['WW','ggWW']
}

aliases['fiducial'] = {
    'linesToAdd': ['.L %s/WW/FullRunII/fiducial.cc+' % configurations],
    'class': 'FiducialRegion',
    'samples': ['WW','ggWW']
}

aliases['jetpt1gen'] = {
    'class': 'CleanGenJet',
    'args': ("jetpt1"),
    'samples': ['WW','ggWW']
}

aliases['B0'] = {
    'expr' : 'jetpt1gen >= 30.   && jetpt1gen < 40.',
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
    'expr' : 'jetpt1gen >= 75.  && jetpt1gen < 95.',
    'samples' : ['WW','ggWW']
}
aliases['B4'] = {
    'expr' : 'jetpt1gen >= 95.  && jetpt1gen < 120.',
    'samples' : ['WW','ggWW']
}
aliases['B5'] = {
    'expr' : 'jetpt1gen >= 120. && jetpt1gen < 150.',
    'samples' : ['WW','ggWW']
}
aliases['B6'] = {
    'expr' : 'jetpt1gen >= 150. && jetpt1gen < 200.',
    'samples' : ['WW','ggWW']
}
aliases['B7'] = {
    'expr' : 'jetpt1gen >= 200.',
    'samples' : ['WW','ggWW']
}

aliases['fid'] = {
    'expr' : 'fiducial && nGoodGenJet >= 2',
    'samples' : ['WW','ggWW']
}

