import os
import copy
import inspect

# /work/ntrevisa/latinos/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/LeptonMVA_studies

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # LeptonMVA_studies
configurations = os.path.dirname(configurations) # WH_chargeAsymmetry
configurations = os.path.dirname(configurations) # Configurations


aliases['Electron_ttHMVA'] = {
    'linesToAdd': [
        '.L %s/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/LeptonMVA_studies/scripts/ElectronMVA_reader.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'electronMVA_reader',
}

aliases['Muon_ttHMVA'] = {
    'linesToAdd': [
        '.L %s/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/LeptonMVA_studies/scripts/MuonMVA_reader.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'muonMVA_reader',
}
