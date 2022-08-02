import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # TheoUnc
configurations = os.path.dirname(configurations) # leadlepPT
configurations = os.path.dirname(configurations) # Full2017_v7
configurations = os.path.dirname(configurations) # FullRunII
configurations = os.path.dirname(configurations) # WW
configurations = os.path.dirname(configurations) # Configurations

aliases['nCleanGenJet'] = {
    'linesToAdd': ['.L %s/Differential/ngenjet.cc+' % configurations],
    'class': 'CountGenJet',
    'samples': ['WW','ggWW']
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

aliases['B0'] = {
    'expr' : 'DressedLepton_pt[0] > 25. && DressedLepton_pt[0] <= 35.',
    'samples' : ['WW','ggWW']
}

aliases['B1'] = {
    'expr' : 'DressedLepton_pt[0] > 35. && DressedLepton_pt[0] <= 40.',
    'samples' : ['WW','ggWW']
}

aliases['B2'] = {
    'expr' : 'DressedLepton_pt[0] > 40. && DressedLepton_pt[0] <= 45.',
    'samples' : ['WW','ggWW']
}

aliases['B3'] = {
    'expr' : 'DressedLepton_pt[0] > 45. && DressedLepton_pt[0] <= 50.',
    'samples' : ['WW','ggWW']
}

aliases['B4'] = {
    'expr' : 'DressedLepton_pt[0] > 50. && DressedLepton_pt[0] <= 55.',
    'samples' : ['WW','ggWW']
}

aliases['B5'] = {
    'expr' : 'DressedLepton_pt[0] > 55. && DressedLepton_pt[0] <= 60.',
    'samples' : ['WW','ggWW']
}

aliases['B6'] = {
    'expr' : 'DressedLepton_pt[0] > 60. && DressedLepton_pt[0] <= 70.',
    'samples' : ['WW','ggWW']
}

aliases['B7'] = {
    'expr' : 'DressedLepton_pt[0] > 70. && DressedLepton_pt[0] <= 80.',
    'samples' : ['WW','ggWW']
}

aliases['B8'] = {
    'expr' : 'DressedLepton_pt[0] > 80. && DressedLepton_pt[0] <= 100.',
    'samples' : ['WW','ggWW']
}

aliases['B9'] = {
    'expr' : 'DressedLepton_pt[0] > 100. && DressedLepton_pt[0] <= 150.',
    'samples' : ['WW','ggWW']
}

aliases['B10'] = {
    'expr' : 'DressedLepton_pt[0] > 150. && DressedLepton_pt[0] <= 200.',
    'samples' : ['WW','ggWW']
}

aliases['B11'] = {
    'expr' : 'DressedLepton_pt[0] > 200. && DressedLepton_pt[0] <= 300.',
    'samples' : ['WW','ggWW']
}

aliases['B12'] = {
    'expr' : 'DressedLepton_pt[0] > 300.',
    'samples' : ['WW','ggWW']
}

aliases['fid'] = {
    'expr' : 'fiducial',
    'samples' : ['WW','ggWW']
}
