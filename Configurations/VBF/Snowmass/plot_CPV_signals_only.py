# plot configuration

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

n_color = 1

# VBF CP-violation samples
CP_V_samples = ['VBF_H0PM_ToWWTo2L2Nu',      # Pure SM sample H0PM
                'VBF_H0M_ToWWTo2L2Nu',       # Pure AC sample H0M  - a3 coupling
                'VBF_H0PH_ToWWTo2L2Nu',      # Pure AC sample H0PH - a2 coupling
                'VBF_H0L1_ToWWTo2L2Nu',      # Pure AC sample H0L1 - lambda1 coupling
                # 'VBF_H0Mf05_ToWWTo2L2Nu',    # Mixed SM/AC 
                # 'VBF_H0PHf05_ToWWTo2L2Nu',   # Mixed SM/AC 
                # 'VBF_H0L1f05_ToWWTo2L2Nu',   # Mixed SM/AC 
                # 'VBF_H0L1Zgf05_ToWWTo2L2Nu'
] # Mixed SM/AC 

for CP_V_sample in CP_V_samples:
    CP_V_sample_short = CP_V_sample.replace('_ToWWTo2L2Nu','')
    groupPlot[CP_V_sample] = {
        'nameHR'   : CP_V_sample_short,
        'isSignal' : 2,
        'color'    : n_color,
        'samples'  : [CP_V_sample]
    }
    n_color = n_color+1


#plot = {}

# keys here must match keys in samples.py    
#

for CP_V_sample in CP_V_samples:
    scale_value = 1
    plot[CP_V_sample] = {
        'nameHR'   : CP_V_sample,
        'color'    : 632,
        'isSignal' : 1,
        'isData'   : 0,    
        'scale'    : scale_value
    }

# additional options

legend['lumi'] = 'L = 59.7/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'
