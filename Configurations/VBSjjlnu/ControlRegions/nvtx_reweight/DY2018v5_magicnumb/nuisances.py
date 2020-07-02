# nuisances
#FIXME: TO BE UPDATED FOR 2018!

# name of samples here must match keys in samples.py 

################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

mc = [skey for skey in samples if skey != 'DATA' and not skey.startswith('Fake')]
mcNotDataDriven = [skey for skey in mc if skey != 'WW' and skey != 'DY' and skey != 'DY' and skey !='WW']

nuisances['lumi']  = {
               'name'  : 'lumi_13TeV_2018',
               'samples': dict((skey, '1.025') for skey in mc if skey not in ['WW', 'top', 'DY']), 
               'type'  : 'lnN',
              }

nuisances['PU']  = {
                'name'  : 'PU_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                  'DY':  ['0.993259983266*(puWeightUp/puWeight)', '0.997656381501*(puWeightDown/puWeight)'],
                  # 'DY':  ['(puWeightUp/puWeight)', '(puWeightDown/puWeight)'],
                  'top': ['(puWeightUp/puWeight)', '(puWeightDown/puWeight)'],
                  'WW':  ['(puWeightUp/puWeight)', '(puWeightDown/puWeight)'],
                  # 'ggH_hww': ['(puWeightUp/puWeight)', '(puWeightDown/puWeight)'],
                  # 'qqH_hww': ['(puWeightUp/puWeight)', '(puWeightDown/puWeight)'],
                },
#                'AsLnN'      : '1',
}