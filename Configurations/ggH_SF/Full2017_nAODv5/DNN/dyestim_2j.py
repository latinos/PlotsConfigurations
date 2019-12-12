
#RAndKff  = {}
RAndKff['DYmva0p8'] = {
                      'RFile'   : '../DNN/rootFile/plots_BG_DY_NOHR_2017_MVA080_2j.root' ,
                      'KffFile' : '../DNN/rootFile/plots_BG_DY_NOHR_2017_MVA080_2j.root' ,
                      'Regions' : { '2jee' : {
                                               'kNum' : '2j_ee_in/events/histo_DY' ,
                                               'kDen' : '2j_uu_in/events/histo_DY' ,
                                               'RNum' : '2j_ee_out/events/histo_DY' ,
                                               'RDen' : '2j_ee_in/events/histo_DY' ,
                                             } ,
                                    '2jmm' : {
                                               'kNum' : '2j_uu_in/events/histo_DY' ,
                                               'kDen' : '2j_ee_in/events/histo_DY' ,
                                               'RNum' : '2j_uu_out/events/histo_DY' ,
                                               'RDen' : '2j_uu_in/events/histo_DY' ,
                                             } ,
                                   } ,
                     }

#DYestim = {}

DYestim['hww2l2v_13TeV_2017_2jee'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.06 ,
                                 'ksyst'   : 0.09 ,
                                 'njet'    : '2j'    ,
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_2017_DYin_2jee' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_2017_DYin_2jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYeenorm2j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_2017_2jee_HAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_2017_2jee_AccDen/events/histo_DY',
                                 'asyst'   : 0.03 ,
                                }

DYestim['hww2l2v_13TeV_2017_2jmm'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.06 ,
                                 'ksyst'   : 0.10 ,
                                 'njet'    : '2j'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_2017_DYin_2jmm' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_2017_DYin_2jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYmmnorm2j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_2017_2jmm_HAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_2017_2jmm_AccDen/events/histo_DY',
                                 'asyst'   : 0.03 ,
                                }

DYestim['hww2l2v_13TeV_2017_WW_2jee'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'njet'    : '2j'    ,
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_2017_DYin_2jee' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_2017_DYin_2jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYeenorm2j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_2017_WW_2jee_WWAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_2017_2jee_AccDen/events/histo_DY',
                                 'asyst'   : 0.02 ,
                                   }

DYestim['hww2l2v_13TeV_2017_WW_2jmm'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'njet'    : '2j'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_2017_DYin_2jmm' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_2017_DYin_2jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYmmnorm2j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_2017_WW_2jmm_WWAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_2017_2jmm_AccDen/events/histo_DY',
                                 'asyst'   : 0.03 ,
                                   }
