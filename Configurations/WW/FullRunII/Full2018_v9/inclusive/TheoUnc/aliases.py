import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # TheoUnc
configurations = os.path.dirname(configurations) # incl
configurations = os.path.dirname(configurations) # Full2018_v9
configurations = os.path.dirname(configurations) # FullRunII_UL
configurations = os.path.dirname(configurations) # WW
configurations = os.path.dirname(configurations) # Configurations

aliases['nCleanGenJet'] = {
    'linesToAdd': ['.L %s/Differential/ngenjet.cc+' % configurations],
    'class': 'CountGenJet',
}

aliases['fiducial'] = {
    'linesToAdd': ['.L %s/WW/FullRunII/fiducial.cc+' % configurations],
    'class': 'FiducialRegion',
    'samples': ['WW_minnlo','ggWW']
}

aliases['B0'] = {
    'expr' : '1',
    'samples' : ['WW_minnlo','ggWW']
}

aliases['fid'] = {
    'expr' : 'fiducial',
    'samples' : ['WW_minnlo','ggWW']
}
