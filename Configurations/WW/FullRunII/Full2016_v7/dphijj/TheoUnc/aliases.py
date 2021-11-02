import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # TheoUnc
configurations = os.path.dirname(configurations) # dphijj
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

aliases['dphijjsigngen'] = {
    'class': 'CleanGenJet',
    'args': ("dphijj"),
    'samples': ['WW','ggWW']
}

aliases['B0'] = {
    'expr' : 'dphijjsigngen >= 0.0       && dphijjsigngen < 1./7.*pi',
    'samples' : ['WW','ggWW']
}
aliases['B1'] = {
    'expr' : 'dphijjsigngen >= 1./7.*pi  && dphijjsigngen < 2./7.*pi',
    'samples' : ['WW','ggWW']
}
aliases['B2'] = {
    'expr' : 'dphijjsigngen >= 2./7.*pi  && dphijjsigngen < 3./7.*pi',
    'samples' : ['WW','ggWW']
}
aliases['B3'] = {
    'expr' : 'dphijjsigngen >= 3./7.*pi  && dphijjsigngen < 4./7.*pi',
    'samples' : ['WW','ggWW']
}
aliases['B4'] = {
    'expr' : 'dphijjsigngen >= 4./7.*pi  && dphijjsigngen < 5./7.*pi',
    'samples' : ['WW','ggWW']
}
aliases['B5'] = {
    'expr' : 'dphijjsigngen >= 5./7.*pi  && dphijjsigngen < 6./7.*pi',
    'samples' : ['WW','ggWW']
}
aliases['B6'] = {
    'expr' : 'dphijjsigngen >= 6./7.*pi  && dphijjsigngen < pi',
    'samples' : ['WW','ggWW']
}
aliases['B7'] = {
    'expr' : 'dphijjsigngen >= pi        && dphijjsigngen < 8./7.*pi',
    'samples' : ['WW','ggWW']
}
aliases['B8'] = {
    'expr' : 'dphijjsigngen >= 8./7.*pi  && dphijjsigngen < 9./7.*pi',
    'samples' : ['WW','ggWW']
}
aliases['B9'] = {
    'expr' : 'dphijjsigngen >= 9./7.*pi  && dphijjsigngen < 10./7.*pi',
    'samples' : ['WW','ggWW']
}
aliases['B10'] = {
    'expr' : 'dphijjsigngen >= 10./7.*pi && dphijjsigngen < 11./7.*pi',
    'samples' : ['WW','ggWW']
}
aliases['B11'] = {
    'expr' : 'dphijjsigngen >= 11./7.*pi && dphijjsigngen < 12./7.*pi',
    'samples' : ['WW','ggWW']
}
aliases['B12'] = {
    'expr' : 'dphijjsigngen >= 12./7.*pi && dphijjsigngen < 13./7.*pi',
    'samples' : ['WW','ggWW']
}
aliases['B13'] = {
    'expr' : 'dphijjsigngen >= 13./7.*pi && dphijjsigngen < 2.*pi',
    'samples' : ['WW','ggWW']
}

aliases['fid'] = {
    'expr' : 'fiducial && nGoodGenJet >= 2',
    'samples' : ['WW','ggWW']
}

