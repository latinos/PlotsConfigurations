import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # ggH2016
configurations = os.path.dirname(configurations) # Differential
configurations = os.path.dirname(configurations) # Configurations

#aliases = {}

# imported from samples.py:
## samples, signals
#signal_file = '2HDMa_signal.py'
#if os.path.exists(signal_file) :
#    handle = open(signal_file,'r')
#    exec(handle)
#    handle.close()
#else:
#    raise IOError('FILE NOT FOUND: '+signal_file+'does not exist.')


mc = [skey for skey in samples if skey not in ('FAKE', 'DATA')]

eleWP    = 'mvaFall17V1Iso_WP90'
muWP     = 'cut_Tight_HWWW'

LepWPCut ='(Lepton_isTightElectron_'+eleWP+'[0] > 0.5 || Lepton_isTightMuon_'+muWP+'[0] > 0.5)'

Lep1WPCut='(Lepton_isTightElectron_'+eleWP+'[1] > 0.5 || Lepton_isTightMuon_'+muWP+'[1] > 0.5)'

###### Lepton WP ######

aliases['WPTightL0'] = {
    'expr': LepWPCut,
}
aliases['WPTightL1'] = {
    'expr': Lep1WPCut,
}


###### PromptGenMatch ######

###### SFweight ######

###### bVeto ######

###### top ######

##### DY Z pT reweighting

###### PU jet Id SF ######


###### W EWK nlo ######

###### R(l[0], j) ######
