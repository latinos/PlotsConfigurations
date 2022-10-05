# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py    
#

### nuisances handled by means of a weight in the tree

### Pile-up uncertainty
nuisances['pileup']  = {
    'name'  : 'pileup', 
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'DY' : ['puWeightUp/puWeight', 'puWeightDown/puWeight']
    }
}


### PU ID SF uncertainty
nuisances['jetPUID'] = {
    'name': 'CMS_PUID_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'DY' : ['Jet_PUIDSF_loose_up/Jet_PUIDSF_loose', 'Jet_PUIDSF_loose_down/Jet_PUIDSF_loose']
    }
}
