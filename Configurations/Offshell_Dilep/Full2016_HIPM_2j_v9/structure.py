# structure configuration for datacard
# keys here must match keys in samples.py    
#structure ={}

scale_factors = {"Vg" :  5.14039899853 / 5.1097267441,
"qqH_bonly_off" :  31.7269775295 / 31.7345416855,
"VVV" : 28.606849916 / 28.9278248718,
"top" :  61417.9241712 / 60135.2607298 * .944, #INCLUDES RATE PARAM
"Higgs" : 49.5304712671 / 66.9928202234,
"qqH_bonly_on" : 0.00362932578667 / 0.00382075832907,
"WW" : 1057.84603773 / 1060.13612904 * .591, # INCLUDES RATE PARAM
"qqH_sand_on" : 16.7916656318 / 16.6859482737,
"ggH_bonly_on" : 0.382549753855 / 0.372997314904,
"ZZ" : 2.41771556506 / 2.44696649486,
"DY" : 124.705352575 / 126.652281463,
"ggH_bonly_off" : 69.6584648656 / 68.5811837399,
"WZ" : 104.830580703 / 108.508472325,
"qqH_sonly_on" : 16.7893870364 / 16.6834148718,
"qqH_sand_off" : 27.8922473562 / 27.92848067,
"ggH_sand_on" :  5.06648023158 / 5.01016700963,
"ggH_sonly_on" : 4.99765927096 / 4.90518795727,
"ggH_sonly_off" : 7.84693583788 / 7.74385541993,
"qqH_sonly_off" : 2.9557977872 / 2.93878186102,
"ggH_sand_off" :  61.6121990391 / 60.6485107591,
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

