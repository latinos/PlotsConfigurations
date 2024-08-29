# structure configuration for datacard
# keys here must match keys in samples.py    
#structure ={}

        # Topnorm_0j    0.959                                                                                                                      
        #  WWnorm_0j    1.11                                                                                                                       

        # Topnorm_1j    0.861                                                                                                                      
        #  WWnorm_1j    0.867

scale_factors = {
    "DATA" : 1,
    "Fake_em" : 1,
    "Fake_me" : 1,

# 0j btagging SF scale factors
    "Vg" : 9.59896822733 / 9.59292747502,
    "qqH_bonly_off" : 4.1154406816 / 4.11023976935,
    "VVV" : 6.72462682558 / 6.70734445134,
    "top" : (2864.36354278 / 2873.44165138)*0.959, ##
    "Higgs" : 12.8448566455 / 14.8804996733,
    "qqH_bonly_on" : 0.000396717727711 / 0.000397666722718,
    "WW" : (4396.5863548 / 4390.84958038)*1.11, ##
    "qqH_sand_on" : 2.07842485672 / 2.08437337658,
    "ggH_bonly_on" : 4.66183594903 / 4.66120769206,
    "ZZ" : 2.70835052127 / 2.731712876,
    "DY" : 172.126661185 / 171.514937987,
    "ggH_bonly_off" : 323.137754368 / 323.16424696,
    "WZ" : 122.234022556 / 123.32525977,
    "qqH_sonly_on" : 2.0782065388 / 2.08414728365,
    "qqH_sand_off" : 3.58110191701 / 3.57660236269,
    "ggH_sand_on" : 93.4924669827 / 93.5062640437,
    "ggH_sonly_on" : 93.2168600965 / 93.2264286027,
    "ggH_sonly_off" : 16.5081762057 / 16.5419899748,
    "qqH_sonly_off" : 0.457474692901 / 0.457403690679,
    "ggH_sand_off" : 309.046764385 / 308.990062778
    }

# # 1j btagging SF scale factors
# scale_histo_Vg = 5.98075532824 / 6.18911477897
# scale_histo_qqH_bonly_off = 18.1497062279 / 17.9814180622
# scale_histo_VVV = 15.4591975855 / 15.0883975175
# scale_histo_top = 16815.2102852 / 15120.6211579
# scale_histo_Higgs = 16.2700580915 / 25.9920774039
# scale_histo_qqH_bonly_on = 0.00172416196285 / 0.00170499882648
# scale_histo_WW = 1769.94065764 / 1743.39918446
# scale_histo_qqH_sand_on = 10.4004166054 / 10.2488042703
# scale_histo_ggH_bonly_on = 1.68996817721 / 1.66100633463
# scale_histo_ZZ = 2.88504639971 / 2.85757496304
# scale_histo_DY = 158.782522302 / 155.683539316
# scale_histo_ggH_bonly_off = 178.831580508 / 176.010372983
# scale_histo_WZ = 143.401165648 / 143.464104052
# scale_histo_qqH_sonly_on = 10.3989486943 / 10.24738653
# scale_histo_qqH_sand_off = 15.799040334 / 15.6587226319
# scale_histo_ggH_sand_on = 29.1253829857 / 28.6999972321
# scale_histo_ggH_sonly_on = 28.9582532831 / 28.5678046802
# scale_histo_ggH_sonly_off = 12.8197017021 / 12.6111711347
# scale_histo_qqH_sonly_off = 2.04808382989 / 2.02464038282
# scale_histo_ggH_sand_off = 165.340715854 / 162.654165051


# # 2j btagging SF scale factors
# scale_histo_Vg = 5.14039899853 / 5.1097267441
# scale_histo_qqH_bonly_off = 31.7269775295 / 31.7345416855
# scale_histo_VVV = 28.606849916 / 28.9278248718
# scale_histo_top = 61417.9241712 / 60135.2607298
# scale_histo_Higgs = 49.5304712671 / 66.9928202234
# scale_histo_qqH_bonly_on = 0.00362932578667 / 0.00382075832907
# scale_histo_WW = 1057.84603773 / 1060.13612904
# scale_histo_qqH_sand_on = 16.7916656318 / 16.6859482737
# scale_histo_ggH_bonly_on = 0.382549753855 / 0.372997314904
# scale_histo_ZZ = 2.41771556506 / 2.44696649486
# scale_histo_DY = 124.705352575 / 126.652281463
# scale_histo_ggH_bonly_off = 69.6584648656 / 68.5811837399
# scale_histo_WZ = 104.830580703 / 108.508472325
# scale_histo_qqH_sonly_on = 16.7893870364 / 16.6834148718
# scale_histo_qqH_sand_off = 27.8922473562 / 27.92848067
# scale_histo_ggH_sand_on = 5.06648023158 / 5.01016700963
# scale_histo_ggH_sonly_on = 4.99765927096 / 4.90518795727
# scale_histo_ggH_sonly_off = 7.84693583788 / 7.74385541993
# scale_histo_qqH_sonly_off = 2.9557977872 / 2.93878186102
# scale_histo_ggH_sand_off = 61.6121990391 / 60.6485107591

# keys here must match keys in samples.py 
for iproc in samples.keys():
    structure[iproc] = {
        'isSignal' : 1 if ('Offshell' in iproc or 'qqH_sonly_off' in iproc or 'qqH_bonly_off'  in iproc or 'qqH_sonly_on'  in iproc or 'qqH_bonly_on'  in iproc) else 0,
        'isData'   : 1 if iproc == 'DATA' else 0,
        #'scaleSampleForDatacard' : eval('scale_histo_' + iproc),
        'scaleSampleForDatacard' : scale_factors[iproc], ##using dictionary version

    }

for nuis in nuisances.itervalues():
  if 'cutspost' in nuis:
    nuis['cuts'] = nuis['cutspost'](nuis, cuts)

    print nuis

