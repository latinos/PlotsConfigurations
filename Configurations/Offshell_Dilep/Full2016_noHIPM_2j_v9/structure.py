# structure configuration for datacard
# keys here must match keys in samples.py    
#structure ={}


scale_factors = {"Vg" : 3.9035767061 / 3.8063594225,
"qqH_bonly_off" : 27.7433156162 / 28.2590589168,
"VVV" : 28.2907251665 / 29.5304570527,
"top" : 54038.9194473 / 53104.1320988  * .944, ## INCLUDES RATE PARAM,
"Higgs" : 44.549770773 / 45.9865981303,
"qqH_bonly_on" : 0.00276089968126 / 0.0028127842788,
"WW" : 960.392081125 / 979.345541808  * .591,  ## INCLUDES RATE PARAM,
"qqH_sand_on" : 14.670112283 / 14.7811660015,
"ggH_bonly_on" : 0.343154478776 / 0.351274435229,
"ZZ" : 2.37336338422 / 2.54473982269,
"DY" : 138.813827264 / 141.70471594,
"ggH_bonly_off" : 61.935859296 / 62.8639780522,
"WZ" : 95.5187839122 / 104.520400309,
"qqH_sonly_on" : 14.6680199401 / 14.7790623693,
"qqH_sand_off" : 24.4376256872 / 24.9199964557,
"ggH_sand_on" : 4.39610772285 / 4.49782612178,
"ggH_sonly_on" : 4.47430047849 / 4.53456981711,
"ggH_sonly_off" : 7.1573030726 / 7.25539232023,
"qqH_sonly_off" : 2.61896848289 / 2.64707459257,
"ggH_sand_off" : 55.0583494601 / 55.8954029555,
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

