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

# # 0j btagging SF scale factors
# scale_histo_Vg = 10.9206851392 / 11.0873090297
# scale_histo_qqH_bonly_off = 7.39434023087 / 7.43678575797
# scale_histo_VVV = 15.6406891714 / 15.8159937811
# scale_histo_top = 6462.44053243 / 6484.35330286
# scale_histo_Higgs = 15.4187794252 / 18.9050840021
# scale_histo_qqH_bonly_on = 0.000846393331778 / 0.00084268852286
# scale_histo_WW = 8689.43584535 / 8709.79397273
# scale_histo_qqH_sand_on = 3.17571798274 / 3.16847882101
# scale_histo_ggH_bonly_on = 8.77035447497 / 8.77725228986
# scale_histo_ZZ = 11.8285143506 / 12.1366078443
# scale_histo_DY = 265.11154055 / 266.541762003
# scale_histo_ggH_bonly_off = 638.281765355 / 639.136502385
# scale_histo_WZ = 224.14419045 / 227.484378844
# scale_histo_qqH_sonly_on = 3.17514258272 / 3.16791995101
# scale_histo_qqH_sand_off = 6.39262958753 / 6.43047571989
# scale_histo_ggH_sand_on = 174.319807914 / 174.575123692
# scale_histo_ggH_sonly_on = 177.49409804 / 177.707314042
# scale_histo_ggH_sonly_off = 33.208333638 / 33.2566735286
# scale_histo_qqH_sonly_off = 0.871688972207 / 0.874976871036
# scale_histo_ggH_sand_off = 606.681941097 / 607.628839909

# 1j btagging SF scale factors
    "Vg" : 10.9056606804 / 10.8594594671,
    "qqH_bonly_off" : 34.8010685134 / 34.6446652889,
    "VVV" : 40.3784455814 / 39.2502382471,
    "top" : (37745.2605562 / 34004.5348012)*0.861, ##
    "Higgs" : 21.1164809217 / 40.1538706528,
    "qqH_bonly_on" : 0.00458316979855 / 0.0044919808299,
    "WW" : (3815.01274535 / 3774.78054939)*0.867, ##
    "qqH_sand_on" : 19.3663347204 / 19.0932273933,
    "ggH_bonly_on" : 3.71410996085 / 3.67301850343,
    "ZZ" : 18.0584873932 / 18.7862077878,
    "DY" : 371.529579352 / 370.067505961,
    "ggH_bonly_off" : 380.247829513 / 374.983260918,
    "WZ" : 282.763419799 / 290.155225249,
    "qqH_sonly_on" : 19.371052989 / 19.0979671996,
    "qqH_sand_off" : 30.133851189 / 30.0108295192,
    "ggH_sand_on" : 61.6968695624 / 60.9828724392,
    "ggH_sonly_on" : 61.3428090241 / 60.5838069391,
    "ggH_sonly_off" : 27.7041335845 / 27.297849819,
    "qqH_sonly_off" : 4.11801337096 / 4.08931161063,
    "ggH_sand_off" : 355.150773376 / 350.264181094
}

# # 2j btagging SF scale factors
# scale_histo_Vg = 9.16242614234 / 9.49712285194
# scale_histo_qqH_bonly_off = 65.0891201233 / 65.6938669953
# scale_histo_VVV = 87.2250459588 / 88.1312885228
# scale_histo_top = 135644.575413 / 132432.45242
# scale_histo_Higgs = 80.2771038866 / 117.735332157
# scale_histo_qqH_bonly_on = 0.00896900480233 / 0.0090675721874
# scale_histo_WW = 2411.60270505 / 2417.58608918
# scale_histo_qqH_sand_on = 35.9699576206 / 35.7764089767
# scale_histo_ggH_bonly_on = 0.920799224495 / 0.915617862242
# scale_histo_ZZ = 14.2229459008 / 15.3408393782
# scale_histo_DY = 307.539108003 / 304.811114188
# scale_histo_ggH_bonly_off = 160.716138023 / 159.71542309
# scale_histo_WZ = 243.987692998 / 258.774337348
# scale_histo_qqH_sonly_on = 35.9697003772 / 35.7763503476
# scale_histo_qqH_sand_off = 56.8804404338 / 57.4662627074
# scale_histo_ggH_sand_on = 13.1462977925 / 13.0840474846
# scale_histo_ggH_sonly_on = 12.5631806502 / 12.5314881278
# scale_histo_ggH_sonly_off = 18.0951220323 / 17.9725444089
# scale_histo_qqH_sonly_off = 6.37886840112 / 6.39917725759
# scale_histo_ggH_sand_off = 144.142598407 / 143.345444158


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

