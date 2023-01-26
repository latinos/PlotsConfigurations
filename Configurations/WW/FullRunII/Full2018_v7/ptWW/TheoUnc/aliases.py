import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # TheoUnc
configurations = os.path.dirname(configurations) # ptww
configurations = os.path.dirname(configurations) # Full2018_v7
configurations = os.path.dirname(configurations) # FullRunII
configurations = os.path.dirname(configurations) # WW
configurations = os.path.dirname(configurations) # Configurations

aliases['nCleanGenJet'] = {
    'linesToAdd': ['.L %s/Differential/ngenjet.cc+' % configurations],
    'class': 'CountGenJet',
    'samples': ['WW','ggWW']
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

aliases['genptww'] = {
    'linesToAdd': ['.L %s/WW/FullRunII/Tools/wwpt.cc+' % configurations],
    'class': 'WWPT',
    'samples': ['WW','ggWW']
}

aliases['B0'] = {
    'expr' : 'genptww > 0. && genptww <= 10.',
    'samples' : ['WW','ggWW']
}
aliases['B1'] = {
    'expr' : 'genptww > 10. && genptww <= 20.',
    'samples' : ['WW','ggWW']
}
aliases['B2'] = {
    'expr' : 'genptww > 20. && genptww <= 30.',
    'samples' : ['WW','ggWW']
}
aliases['B3'] = {
    'expr' : 'genptww > 30. && genptww <= 40.',
    'samples' : ['WW','ggWW']
}

aliases['B4'] = {
    'expr' : 'genptww > 40. && genptww <= 50.',
    'samples' : ['WW','ggWW']
}

aliases['B5'] = {
    'expr' : 'genptww > 50. && genptww <= 60.',
    'samples' : ['WW','ggWW']
}

aliases['B6'] = {
    'expr' : 'genptww > 60. && genptww <= 70.',
    'samples' : ['WW','ggWW']
}

aliases['B7'] = {
    'expr' : 'genptww > 70. && genptww <= 80.',
    'samples' : ['WW','ggWW']
}

aliases['B8'] = {
    'expr' : 'genptww > 80. && genptww <= 100.',
    'samples' : ['WW','ggWW']
}

aliases['B9'] = {
    'expr' : 'genptww > 100. && genptww <= 150.',
    'samples' : ['WW','ggWW']
}

aliases['B10'] = {
    'expr' : 'genptww > 150. && genptww <= 200.',
    'samples' : ['WW','ggWW']
}   

aliases['B11'] = {
    'expr' : 'genptww > 200. && genptww <= 300.',
    'samples' : ['WW','ggWW']
}   

aliases['B12'] = {
    'expr' : 'genptww > 300.',
    'samples' : ['WW','ggWW']
}
 
aliases['fid'] = {
    'expr' : 'fiducial',
    'samples' : ['WW','ggWW']
}
