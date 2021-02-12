import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # fiducial
configurations = os.path.dirname(configurations) # FullRunII
configurations = os.path.dirname(configurations) # WW
configurations = os.path.dirname(configurations) # Configurations

aliases['fiducial'] = {
    'linesToAdd': ['.L %s/WW/FullRunII/fiducial/fiducial.cc+' % configurations],
    'class': 'FiducialRegion'
}

'''
aliases['fiducial_1'] = {
    'linesToAdd': ['.L %s/WW/FullRunII/fiducial/nonfiducial.cc+' % configurations],
    'class': 'NonFiducialRegion'
}

aliases['notfiducial'] = {
    'expr': '!fiducial && ((LeptonGen_pdgId[0] * LeptonGen_pdgId[1]) == -143)'
}
'''
aliases['nCleanGenJet'] = {
    'linesToAdd': ['.L %s/Differential/ngenjet.cc+' % configurations],
    'class': 'CountGenJet',
}
