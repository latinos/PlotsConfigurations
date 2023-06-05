import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # TheoUnc
configurations = os.path.dirname(configurations) # mjj
configurations = os.path.dirname(configurations) # Full2017_v9
configurations = os.path.dirname(configurations) # FullRunII
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

aliases['mjjgen'] = {
    'class': 'CleanGenJet',
    'args': ("mjj"),
    'samples': ['WW','ggWW']
}

aliases['B0'] = {
    'expr' : 'mjjgen >= 0.   && mjjgen < 40.',
    'samples' : ['WW','ggWW']
}
aliases['B1'] = {
    'expr' : 'mjjgen >= 40.  && mjjgen < 55.',
    'samples' : ['WW','ggWW']
}
aliases['B2'] = {
    'expr' : 'mjjgen >= 55.  && mjjgen < 70.',
    'samples' : ['WW','ggWW']
}
aliases['B3'] = {
    'expr' : 'mjjgen >= 70.  && mjjgen < 90.',
    'samples' : ['WW','ggWW']
}
aliases['B4'] = {
    'expr' : 'mjjgen >= 90.  && mjjgen < 110.',
    'samples' : ['WW','ggWW']
}
aliases['B5'] = {
    'expr' : 'mjjgen >= 110. && mjjgen < 135.',
    'samples' : ['WW','ggWW']
}
aliases['B6'] = {
    'expr' : 'mjjgen >= 135. && mjjgen < 165.',
    'samples' : ['WW','ggWW']
}
aliases['B7'] = {
    'expr' : 'mjjgen >= 165. && mjjgen < 200.',
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
    'expr' : 'mjjgen >= 300. && mjjgen < 400.',
    'samples' : ['WW','ggWW']
}

aliases['fid'] = {
    'expr' : 'fiducial && nGoodGenJet >= 2',
    'samples' : ['WW','ggWW']
}
