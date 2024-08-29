# structure configuration for datacard
# keys here must match keys in samples.py    
#structure ={} ##comment out due to mkDatacards.py change

##new nomenclature instead of scale_histo_DATA = #/# etc

        # Topnorm_0j    0.959                                                                                                                      
        #  WWnorm_0j    1.11                                                                                                                        
        # Topnorm_1j    0.861                                                                                                                      
        #  WWnorm_1j    0.867 

scale_factors = {

    "DATA" : 1,
    "Fake_em" : 1,
    "Fake_me" : 1,

# 0j btagging SF scale factors
    "Vg" : 18.6674765356 / 18.6785556482,
    "qqH_bonly_off" : 11.6461471383 / 11.6658388208,
    "VVV" : 18.7437919714 / 18.8964007526,
    "top" : (8418.47286106 / 8388.95170962)*0.959, ##
    "Higgs" : 32.1904363026 / 37.6365326295,
    "qqH_bonly_on" : 0.00109149607178 / 0.00109329036783,
    "WW" : (13173.8464907 / 13187.89789)*1.11, ##
    "qqH_sand_on" : 5.06703708287 / 5.05911367399,
    "ggH_bonly_on" : 13.6131974827 / 13.6156798125,
    "ZZ" : 7.45085572639 / 7.52211457513,
    "DY" : 411.103785594 / 411.856079666,
    "ggH_bonly_off" : 963.929494719 / 963.87917819,
    "WZ" : 359.039645212 / 362.121780433,
    "qqH_sonly_on" : 5.06624453477 / 5.05830624994,
    "qqH_sand_off" : 10.0513026354 / 10.0683193663,
    "ggH_sand_on" : 271.745165913 / 271.773726277,
    "ggH_sonly_on" : 272.459048607 / 272.498387373,
    "ggH_sonly_off" : 49.0493036742 / 49.0351361851,
    "qqH_sonly_off" : 1.32546853709 / 1.32731490308,
    "ggH_sand_off" : 917.91893705 / 917.931927039
}

# # 1j btagging SF scale factors
# scale_histo_Vg = 16.8870788449 / 17.0351095305
# scale_histo_qqH_bonly_off = 54.1554642709 / 53.9210714134
# scale_histo_VVV = 45.7372199885 / 44.3173457858
# scale_histo_top = 51303.4303005 / 45950.5258618
# scale_histo_Higgs = 44.3645948804 / 74.8453827219
# scale_histo_qqH_bonly_on = 0.00519059071856 / 0.00516143629503
# scale_histo_WW = 5811.45777013 / 5757.20995646
# scale_histo_qqH_sand_on = 30.9367075097 / 30.6528813399
# scale_histo_ggH_bonly_on = 5.55476472142 / 5.47997920836
# scale_histo_ZZ = 9.1221298821 / 9.37114598792
# scale_histo_DY = 527.104712991 / 526.999192484
# scale_histo_ggH_bonly_off = 573.946894401 / 565.65930494
# scale_histo_WZ = 452.070742507 / 467.022146097
# scale_histo_qqH_sonly_on = 30.9353562617 / 30.6516111269
# scale_histo_qqH_sand_off = 46.8527896189 / 46.6647178564
# scale_histo_ggH_sand_on = 94.2353545346 / 92.9814496238
# scale_histo_ggH_sonly_on = 93.8180769091 / 92.4695618313
# scale_histo_ggH_sonly_off = 41.4924522336 / 40.8699246532
# scale_histo_qqH_sonly_off = 6.40309408103 / 6.37014126115
# scale_histo_ggH_sand_off = 535.301174206 / 527.923571898


# # 2j btagging SF scale factors
# scale_histo_Vg = 13.5251922103 / 14.0925982593
# scale_histo_qqH_bonly_off = 108.384543103 / 110.698825047
# scale_histo_VVV = 97.4356736902 / 98.4395568593
# scale_histo_top = 199231.493393 / 194130.29306
# scale_histo_Higgs = 138.742189136 / 200.478702555
# scale_histo_qqH_bonly_on = 0.459540234653 / 0.412521465569
# scale_histo_WW = 3687.2061233 / 3703.45910658
# scale_histo_qqH_sand_on = 57.8737442305 / 58.1395424243
# scale_histo_ggH_bonly_on = 1.34789012113 / 1.34700308844
# scale_histo_ZZ = 8.36442074344 / 9.06564163272
# scale_histo_DY = 483.192854055 / 490.378277798
# scale_histo_ggH_bonly_off = 243.156182327 / 241.419998061
# scale_histo_WZ = 360.452056974 / 386.958556193
# scale_histo_qqH_sonly_on = 57.64526205 / 57.9352422441
# scale_histo_qqH_sand_off = 95.1059771767 / 96.9126654057
# scale_histo_ggH_sand_on = 18.8738760554 / 18.830543741
# scale_histo_ggH_sonly_on = 18.7505592178 / 18.6473579061
# scale_histo_ggH_sonly_off = 27.502110059 / 27.4518061848
# scale_histo_qqH_sonly_off = 10.1969614749 / 10.2822739084
# scale_histo_ggH_sand_off = 217.039937542 / 215.645183556



# keys here must match keys in samples.py 
for iproc in samples.keys():
    structure[iproc] = {
        'isSignal' : 1 if ('Offshell' in iproc or 'qqH_sonly_off' in iproc or 'qqH_bonly_off'  in iproc or 'qqH_sonly_on'  in iproc or 'qqH_bonly_on'  in iproc) else 0,
        'isData'   : 1 if iproc == 'DATA' else 0,
        #'scaleSampleForDatacard' : eval('scale_histo_' + iproc), ##if using nomenclature scale_histo_NAME
        'scaleSampleForDatacard' : scale_factors[iproc], ##using dictionary version
    }

for nuis in nuisances.itervalues():
  if 'cutspost' in nuis:
    nuis['cuts'] = nuis['cutspost'](nuis, cuts)

    print nuis

