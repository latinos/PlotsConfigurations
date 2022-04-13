import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # TheoUnc
configurations = os.path.dirname(configurations) # mjj
configurations = os.path.dirname(configurations) # Full2018_v7
configurations = os.path.dirname(configurations) # FullRunII
configurations = os.path.dirname(configurations) # WW
configurations = os.path.dirname(configurations) # Configurations

aliases['nCleanGenJet'] = {
    'linesToAdd': ['.L %s/Differential/ngenjet.cc+' % configurations],
    'class': 'CountGenJet',
}

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

aliases['mjjgen'] = {
    'class': 'CleanGenJet',
    'args': ("mjj"),
    'samples': ['WW','ggWW']
}

aliases['B0'] = {
    'expr' : 'mjjgen >= 0.   && mjjgen < 35.',
    'samples' : ['WW','ggWW']
}
aliases['B1'] = {
    'expr' : 'mjjgen >= 35.  && mjjgen < 50.',
    'samples' : ['WW','ggWW']
}
aliases['B2'] = {
    'expr' : 'mjjgen >= 50.  && mjjgen < 65.',
    'samples' : ['WW','ggWW']
}
aliases['B3'] = {
    'expr' : 'mjjgen >= 65.  && mjjgen < 85.',
    'samples' : ['WW','ggWW']
}
aliases['B4'] = {
    'expr' : 'mjjgen >= 85.  && mjjgen < 105.',
    'samples' : ['WW','ggWW']
}
aliases['B5'] = {
    'expr' : 'mjjgen >= 105. && mjjgen < 130.',
    'samples' : ['WW','ggWW']
}
aliases['B6'] = {
    'expr' : 'mjjgen >= 130. && mjjgen < 160.',
    'samples' : ['WW','ggWW']
}
aliases['B7'] = {
    'expr' : 'mjjgen >= 160. && mjjgen < 200.',
    'samples' : ['WW','ggWW']
}
aliases['B8'] = {
    'expr' : 'mjjgen >= 200. && mjjgen < 250.',
    'samples' : ['WW','ggWW']
}
aliases['B9'] = {
    'expr' : 'mjjgen >= 250. && mjjgen < 300.',
    'samples' : ['WW','ggWW']
}
aliases['B10'] = {
    'expr' : 'mjjgen >= 300. && mjjgen < 350.',
    'samples' : ['WW','ggWW']
}
aliases['B11'] = {
    'expr' : 'mjjgen >= 350.',
    'samples' : ['WW','ggWW']
}

aliases['fid'] = {
    'expr' : 'fiducial && nGoodGenJet >= 2',
    'samples' : ['WW','ggWW']
}
