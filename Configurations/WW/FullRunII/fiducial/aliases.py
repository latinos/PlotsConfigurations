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
