# # statistical fluctuation
# # on MC/data
# # "stat" is a special word to identify this nuisance
# nuisances['stat']  = {
#     # apply to the following samples: name of samples here must match keys in samples.py
#     'samples'  : {
        
#         'ttbar': {
#             'typeStat' : 'bbb',
#             },
        
#         'singletop': {
#             'typeStat' : 'bbb',
#             },
        
#         'top': {
#             'typeStat' : 'bbb',
#             },
        
#         'DY': {
#             'typeStat' : 'bbb',
#             #'keepNormalization' : '1'  # default = 0 -> 0=don't keep normalization
#             },
        
#         'ggWW': {
#             'typeStat' : 'bbb',
#             },
        
#         'ggWW_Int': {
#             'typeStat' : 'bbb',
#             },
        
#         'WW': {
#             'typeStat' : 'bbb',
#             },
        
#         'VZ': {
#             'typeStat' : 'bbb',
#             },
        
#         'WZ': {
#             'typeStat' : 'bbb',
#             },
        
#         'VVV': {
#             'typeStat' : 'bbb',
#             },
        
#         'H_hww': {
#             'typeStat' : 'bbb',
#             },
        
#         'ggH_hww': {
#             'typeStat' : 'bbb',
#             },
        
#         'qqH_hww': {
#             'typeStat' : 'bbb',
#             },
        
#         'WH_hww': {
#             'typeStat' : 'bbb',
#             },
        
#         'ZH_hww': {
#             'typeStat' : 'bbb',
#             },
        
#         'H_htt': {
#             'typeStat' : 'bbb',
#             },
        
#         'ggH_htt': {
#             'typeStat' : 'bbb',
#             },
        
#         'qqH_htt': {
#             'typeStat' : 'bbb',
#             },
        
#         'WH_htt': {
#             'typeStat' : 'bbb',
#             },
        
#         'ZH_htt': {
#             'typeStat' : 'bbb',
#             },
        
#         'ggZH_hww': {
#             'typeStat' : 'bbb',
#             },
        
#         'Fake': {  # needed? YES?
#             'typeStat' : 'bbb',
#             },
        
#         'Vg': {  
#             'typeStat' : 'bbb',
#             },
        
#         'VgS': {  
#             'typeStat' : 'bbb',
#             },
        
#         },
#     'type'  : 'shape'
#     }


# ZpMasses={"600","800","1000","1200","1700","2000","2500"}
# A0Masses={"300","400","500","600","700","800"}
        
nuisances['lumi2016']  = {
    'name'  : 'lumi_13TeV_2016', 
    'samples'  : {
        'qqH_hww'  : '1.023',
        'WH_hww'   : '1.023',
        'ZH_hww'   : '1.023',
        'H_htt'    : '1.023',
        'H_hww'    : '1.023',
        'WH_hww'   : '1.023',
        'ggZH_hww' : '1.023',
        'VVV'      : '1.023',
        'VZ'       : '1.023',
        'ggWW'     : '1.023',
        'Vg'       : '1.023',
        'VgS'      : '1.023',
        'DY'       : '1.023',    # --> datadriven
        'WW'       : '1.023',    # --> datadriven
        'top'      : '1.023',    # --> datadriven
        },
    'type'  : 'lnN',
    }

# for mZp in ZpMasses:
#     for mA0 in A0Masses :
#         if ((mZp == "600" and (mA0 == "300" or mA0 == "400")) or ((mZp == "800" and (mA0 == "300" or mA0 == "400" or mA0 == "500" or mA0 == "600"))) or (mZp != "600" and mZp != "800")) :
#             nuisances['lumi2016']['samples'].update({'monoH_' + mZp + '_' + mA0:'1.062'})
