# structure configuration for datacard
# keys here must match keys in samples.py    
#structure ={}


scale_factors = {"Vg" : 13.5251922103 / 14.0925982593,
"qqH_bonly_off" : 108.384543103 / 110.698825047,
"VVV" : 97.4356736902 / 98.4395568593,
"top" : 199231.493393 / 194130.29306 * .944, #* .9697 ## INCLUDES RATE PARAM,
"Higgs" : 138.742189136 / 200.478702555,
"qqH_bonly_on" : 0.459540234653 / 0.412521465569,
"WW" : 3687.2061233 / 3703.45910658 * .591, #* .58833 ## INCLUDES RATE PARAM,
"qqH_sand_on" : 57.8737442305 / 58.1395424243,
"ggH_bonly_on" : 1.34789012113 / 1.34700308844,
"ZZ" : 8.36442074344 / 9.06564163272,
"DY" : 483.192854055 / 490.378277798,
"ggH_bonly_off" : 243.156182327 / 241.419998061,
"WZ" : 360.452056974 / 386.958556193,
"qqH_sonly_on" : 57.64526205 / 57.9352422441,
"qqH_sand_off" : 95.1059771767 / 96.9126654057,
"ggH_sand_on" : 18.8738760554 / 18.830543741,
"ggH_sonly_on" : 18.7505592178 / 18.6473579061,
"ggH_sonly_off" : 27.502110059 / 27.4518061848,
"qqH_sonly_off" : 10.1969614749 / 10.2822739084,
"ggH_sand_off" : 217.039937542 / 215.645183556,
"Fake_em" : 1,
"Fake_me" : 1,
"DATA" : 1
}


# keys here must match keys in samples.py 
for iproc in samples.keys():
    structure[iproc] = {
        'isSignal' : 1 if ('Offshell' in iproc or 'qqH_sonly_off' in iproc or 'qqH_bonly_off'  in iproc or 'qqH_sonly_on'  in iproc or 'qqH_bonly_on'  in iproc) else 0,
        'isData'   : 1 if iproc == 'DATA' else 0,
        'scaleSampleForDatacard' : scale_factors[iproc],
    }

for nuis in nuisances.itervalues():
  if 'cutspost' in nuis:
    nuis['cuts'] = nuis['cutspost'](nuis, cuts)

    print nuis

