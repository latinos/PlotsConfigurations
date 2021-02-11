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

aliases['notfiducial'] = {
    'expr': '!fiducial && (DressedLepton_pdgId->At(iPromptL[0]) * DressedLepton_pdgId->At(iPromptL[1]) == -143)'
}

aliases['nCleanGenJet'] = {
    'linesToAdd': ['.L %s/Differential/ngenjet.cc+' % configurations],
    'class': 'CountGenJet',
}
