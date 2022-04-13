import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # TheoUnc
configurations = os.path.dirname(configurations) # jetpt0
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

aliases['jetpt0gen'] = {
    'class': 'CleanGenJet',
    'args': ("jetpt0"),
    'samples': ['WW','ggWW']
}

aliases['B0'] = {
    'expr' : 'jetpt0gen >= 30.  && jetpt0gen < 40.',
    'samples' : ['WW','ggWW']
}
aliases['B1'] = {
    'expr' : 'jetpt0gen >= 40.  && jetpt0gen < 55.',
    'samples' : ['WW','ggWW']
}
aliases['B2'] = {
    'expr' : 'jetpt0gen >= 55.  && jetpt0gen < 75.',
    'samples' : ['WW','ggWW']
}
aliases['B3'] = {
    'expr' : 'jetpt0gen >= 75.  && jetpt0gen < 95.',
    'samples' : ['WW','ggWW']
}
aliases['B4'] = {
    'expr' : 'jetpt0gen >= 95.  && jetpt0gen < 120.',
    'samples' : ['WW','ggWW']
}
aliases['B5'] = {
    'expr' : 'jetpt0gen >= 120. && jetpt0gen < 145.',
    'samples' : ['WW','ggWW']
}
aliases['B6'] = {
    'expr' : 'jetpt0gen >= 145. && jetpt0gen < 180.',
    'samples' : ['WW','ggWW']
}
aliases['B7'] = {
    'expr' : 'jetpt0gen >= 180. && jetpt0gen < 215.',
    'samples' : ['WW','ggWW']
}
aliases['B8'] = {
    'expr' : 'jetpt0gen >= 215. && jetpt0gen < 250.',
    'samples' : ['WW','ggWW']
}
aliases['B9'] = {
    'expr' : 'jetpt0gen >= 250. && jetpt0gen < 300.',
    'samples' : ['WW','ggWW']
}
aliases['B10'] = {
    'expr' : 'jetpt0gen >= 300. && jetpt0gen < 350.',
    'samples' : ['WW','ggWW']
}
aliases['B11'] = {
    'expr' : 'jetpt0gen >= 350.',
    'samples' : ['WW','ggWW']
}

aliases['fid'] = {
    'expr' : 'fiducial && nGoodGenJet >= 1',
    'samples' : ['WW','ggWW']
}

