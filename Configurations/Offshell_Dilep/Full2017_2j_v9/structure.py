# structure configuration for datacard
# keys here must match keys in samples.py    
#structure ={}

scale_factors = {"Vg" : 9.16242614234 / 9.49712285194,
"qqH_bonly_off" : 65.0891201233 / 65.6938669953,
"VVV" : 87.2250459588 / 88.1312885228,
"top" : 135644.575413 / 132432.45242   * .944 , # INCLUDES RATE PARAM
"Higgs" : 80.2771038866 / 117.735332157,
"qqH_bonly_on" : 0.00896900480233 / 0.0090675721874,
"WW" : 2411.60270505 / 2417.58608918   * .591, #INCLUDES RATE PARAM
"qqH_sand_on" : 35.9699576206 / 35.7764089767,
"ggH_bonly_on" : 0.920799224495 / 0.915617862242,
"ZZ" : 14.2229459008 / 15.3408393782,
"DY" : 307.539108003 / 304.81111418,
"ggH_bonly_off" : 160.716138023 / 159.71542309,
"WZ" : 243.987692998 / 258.774337348,
"qqH_sonly_on" : 35.9697003772 / 35.7763503476,
"qqH_sand_off" : 56.8804404338 / 57.4662627074,
"ggH_sand_on" : 13.1462977925 / 13.0840474846,
"ggH_sonly_on" : 12.5631806502 / 12.5314881278,
"ggH_sonly_off" : 18.0951220323 / 17.9725444089 ,
"qqH_sonly_off" : 6.37886840112 / 6.39917725759 ,
"ggH_sand_off" : 144.142598407 / 143.345444158,
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

