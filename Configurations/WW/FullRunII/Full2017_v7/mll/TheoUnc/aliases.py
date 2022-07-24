import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # TheoUnc
configurations = os.path.dirname(configurations) # mll
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

aliases['genmll'] = {
    'linesToAdd': ['.L %s/WW/FullRunII/Tools/mll.cc+' % configurations],
    'class': 'MLL',
    'samples': ['WW','ggWW']
}

aliases['B0'] = {
    'expr' : 'genmll > 20. && genmll <= 30.',
    'samples' : ['WW','ggWW']
}
aliases['B1'] = {
    'expr' : 'genmll > 30. && genmll <= 40.',
    'samples' : ['WW','ggWW']
}
aliases['B2'] = {
    'expr' : 'genmll > 40. && genmll <= 45.',
    'samples' : ['WW','ggWW']
}
aliases['B3'] = {
    'expr' : 'genmll > 45. && genmll <= 50.',
    'samples' : ['WW','ggWW']
}

aliases['B4'] = {
    'expr' : 'genmll > 50. && genmll <= 55.',
    'samples' : ['WW','ggWW']
}

aliases['B5'] = {
    'expr' : 'genmll > 55. && genmll <= 60.',
    'samples' : ['WW','ggWW']
}

aliases['B6'] = {
    'expr' : 'genmll > 60. && genmll <= 70.',
    'samples' : ['WW','ggWW']
}

aliases['B7'] = {
    'expr' : 'genmll > 70. && genmll <= 80.',
    'samples' : ['WW','ggWW']
}

aliases['B8'] = {
    'expr' : 'genmll > 80. && genmll <= 100.',
    'samples' : ['WW','ggWW']
}

aliases['B9'] = {
    'expr' : 'genmll > 100. && genmll <= 150.',
    'samples' : ['WW','ggWW']
}

aliases['B10'] = {
    'expr' : 'genmll > 150. && genmll <= 200.',
    'samples' : ['WW','ggWW']
}

aliases['B11'] = {
    'expr' : 'genmll > 200. && genmll <= 300.',
    'samples' : ['WW','ggWW']
}

aliases['B12'] = {
    'expr' : 'genmll > 300.',
    'samples' : ['WW','ggWW']
}

aliases['fid'] = {
    'expr' : 'fiducial',
    'samples' : ['WW','ggWW']
}
