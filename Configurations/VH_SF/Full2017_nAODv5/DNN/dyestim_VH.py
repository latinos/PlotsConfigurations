
#RAndKff  = {}
RAndKff['DYmva0p8'] = {
                      'RFile'   : 'rootFile/plots_BG_DY_NOHR_2017_MVA080_VH.root' ,
                      'KffFile' : 'rootFile/plots_BG_DY_NOHR_2017_MVA080_VH.root' ,
                      'Regions' : { '2jVHee' : {
                                               'kNum' : 'VH_ee_in/events/histo_DY' ,
                                               'kDen' : 'VH_uu_in/events/histo_DY' ,
                                               'RNum' : 'VH_ee_out/events/histo_DY' ,
                                               'RDen' : 'VH_ee_in/events/histo_DY' ,
                                             } ,
                                    '2jVHmm' : {
                                               'kNum' : 'VH_uu_in/events/histo_DY' ,
                                               'kDen' : 'VH_ee_in/events/histo_DY' ,
                                               'RNum' : 'VH_uu_out/events/histo_DY' ,
                                               'RDen' : 'VH_uu_in/events/histo_DY' ,
                                             } ,
                                   } ,
                     }


#DYestim = {}

DYestim['hww2l2v_13TeV_2017_2jee_vh2j'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.10 ,
                                 'ksyst'   : 0.10 ,
                                 'njet'    : '2jVH'    ,
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_2017_DYin_2jee_vh2j' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_2017_DYin_2jdf_vh2j' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYeenorm2j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_2017_2jee_vh2j_HAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_2017_2jee_vh2j_AccDen/events/histo_DY',
                                 'asyst'   : 0.04 ,
                                }

DYestim['hww2l2v_13TeV_2017_2jmm_vh2j'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.10 ,
                                 'ksyst'   : 0.20 ,
                                 'njet'    : '2jVH'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_2017_DYin_2jmm_vh2j' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_2017_DYin_2jdf_vh2j' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYmmnorm2j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_2017_2jmm_vh2j_HAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_2017_2jmm_vh2j_AccDen/events/histo_DY',
                                 'asyst'   : 0.08 ,
                                }

DYestim['hww2l2v_13TeV_2017_WW_2jee_vh2j'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'njet'    : '2jVH'    ,
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_2017_DYin_2jee_vh2j' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_2017_DYin_2jdf_vh2j' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYeenorm2j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_2017_WW_2jee_vh2j_WWAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_2017_2jee_vh2j_AccDen/events/histo_DY',
                                 'asyst'   : 0.10 ,
                                   }

DYestim['hww2l2v_13TeV_2017_WW_2jmm_vh2j'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'njet'    : '2jVH'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_2017_DYin_2jmm_vh2j' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_2017_DYin_2jdf_vh2j' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYmmnorm2j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_2017_WW_2jmm_vh2j_WWAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_2017_2jmm_vh2j_AccDen/events/histo_DY',
                                 'asyst'   : 0.02 ,
                                   }

