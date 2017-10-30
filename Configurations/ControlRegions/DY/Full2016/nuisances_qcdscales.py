
# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py 

################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

##### B-tagger

nuisances['QCDscale']  = {
                'name'  : 'QCDscale',
                'kind'  : 'weight',
               'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['std_vector_LHE_weight[8]/std_vector_LHE_weight[0]', 'std_vector_LHE_weight[4]/std_vector_LHE_weight[0]'],
                }
}

