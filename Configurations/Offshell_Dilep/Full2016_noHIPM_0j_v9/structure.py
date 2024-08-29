# structure configuration for datacard
# keys here must match keys in samples.py    

#structure ={} ##commented out with mkdatacard change

        # Topnorm_0j    0.959                                                                                                                      
        #  WWnorm_0j    1.11                                                                                                                       

        # Topnorm_1j    0.861                                                                                                                      
        #  WWnorm_1j    0.867

##new nomenclature instituted:

scale_factors = {

    "DATA" : 1,
    "Fake_em" : 1,
    "Fake_me" : 1,

# 0j btagging SF scale factors
    "Vg" : 8.3709950021 / 8.52747707646,
    "qqH_bonly_off" : 3.66738086292 / 3.69995831491,
    "VVV" : 5.80263940596 / 5.9678623098,
    "top" : (2462.96102203 / 2489.49745866)*0.959, ##
    "Higgs" : 11.2655496624 / 11.5385981518,
    "qqH_bonly_on" : 0.00027723385257 / 0.000274256729805,
    "WW" : (3742.63379549 / 3769.08630652)*1.11, ##
    "qqH_sand_on" : 1.4802426169 / 1.49806754598,
    "ggH_bonly_on" : 3.99516477795 / 4.0340398581,
    "ZZ" : 2.4323586987 / 2.50392675717,
    "DY" : 153.966300833 / 156.086690506,
    "ggH_bonly_off" : 279.754866948 / 282.248361315,
    "WZ" : 106.211686534 / 109.086640072,
    "qqH_sonly_on" : 1.48005322701 / 1.49788073056,
    "qqH_sand_off" : 3.18816993577 / 3.21577715833,
    "ggH_sand_on" : 79.4917528124 / 80.1303628477,
    "ggH_sonly_on" : 80.507896025 / 81.1223754846,
    "ggH_sonly_off" : 14.3000842371 / 14.4260619603,
    "qqH_sonly_off" : 0.404398202513 / 0.408128993729,
    "ggH_sand_off" : 265.79197928 / 268.109463625
}


# # 1j btagging SF scale factors
# scale_histo_Vg = 7.28908544798 / 7.59515858209
# scale_histo_qqH_bonly_off = 16.0748815129 / 16.0939543412
# scale_histo_VVV = 12.5179565984 / 12.3532333485
# scale_histo_top = 14690.3494783 / 13259.3701498
# scale_histo_Higgs = 14.5716680993 / 14.5263780445
# scale_histo_qqH_bonly_on = 0.00148881108473 / 0.00147901635386
# scale_histo_WW = 1523.81371642 / 1530.15053244
# scale_histo_qqH_sand_on = 8.39274027565 / 8.31737895888
# scale_histo_ggH_bonly_on = 1.55727993248 / 1.5635567979
# scale_histo_ZZ = 2.9705956303 / 3.0910799241
# scale_histo_DY = 163.891171837 / 165.086224723
# scale_histo_ggH_bonly_off = 156.654851794 / 156.79063006
# scale_histo_WZ = 121.993221959 / 126.399559391
# scale_histo_qqH_sonly_on = 8.39133017874 / 8.31596142077
# scale_histo_qqH_sand_off = 13.9996083846 / 14.0206024261
# scale_histo_ggH_sand_on = 25.3591805853 / 25.4341578567
# scale_histo_ggH_sonly_on = 25.1994847456 / 25.240886964
# scale_histo_ggH_sonly_off = 11.4144920677 / 11.4032476373
# scale_histo_qqH_sonly_off = 1.79721323531 / 1.79588012809
# scale_histo_ggH_sand_off = 146.023295415 / 145.955674995


# # 2j btagging SF scale factors
# scale_histo_Vg = 3.9035767061 / 3.8063594225
# scale_histo_qqH_bonly_off = 27.7433156162 / 28.2590589168
# scale_histo_VVV = 28.2907251665 / 29.5304570527
# scale_histo_top = 54038.9194473 / 53104.1320988
# scale_histo_Higgs = 44.549770773 / 45.9865981303
# scale_histo_qqH_bonly_on = 0.00276089968126 / 0.0028127842788
# scale_histo_WW = 960.392081125 / 979.345541808
# scale_histo_qqH_sand_on = 14.670112283 / 14.7811660015
# scale_histo_ggH_bonly_on = 0.343154478776 / 0.351274435229
# scale_histo_ZZ = 2.37336338422 / 2.54473982269
# scale_histo_DY = 138.813827264 / 141.704715948
# scale_histo_ggH_bonly_off = 61.935859296 / 62.8639780522
# scale_histo_WZ = 95.5187839122 / 104.520400309
# scale_histo_qqH_sonly_on = 14.6680199401 / 14.7790623693
# scale_histo_qqH_sand_off = 24.4376256872 / 24.9199964557
# scale_histo_ggH_sand_on = 4.39610772285 / 4.49782612178
# scale_histo_ggH_sonly_on = 4.47430047849 / 4.53456981711
# scale_histo_ggH_sonly_off = 7.1573030726 / 7.25539232023
# scale_histo_qqH_sonly_off = 2.61896848289 / 2.64707459257
# scale_histo_ggH_sand_off = 55.0583494601 / 55.8954029555

# keys here must match keys in samples.py 
for iproc in samples.keys():
    structure[iproc] = {
        #'isSignal' : 1 if ('Offshell' in iproc or 'qqH_sonly_off' in iproc or 'ggH_bonly_off'  in iproc or 'ggH_sonly_on'  in iproc or 'ggH_bonly_on'  in iproc) else 0, ##also changed
        'isSignal' : 1 if ('Offshell' in iproc or 'qqH_sonly_off' in iproc or 'qqH_bonly_off'  in iproc or 'qqH_sonly_on'  in iproc or 'qqH_bonly_on'  in iproc) else 0,
        'isData'   : 1 if iproc == 'DATA' else 0,
        #'scaleSampleForDatacard' : eval('scale_histo_' + iproc),
        'scaleSampleForDatacard' : scale_factors[iproc], ##using dictionary version
    }

for nuis in nuisances.itervalues():
  if 'cutspost' in nuis:
    nuis['cuts'] = nuis['cutspost'](nuis, cuts)

    print nuis

