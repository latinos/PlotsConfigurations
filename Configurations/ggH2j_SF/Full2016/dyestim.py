
#RAndKff  = {}

RAndKff['DYmva0p8'] = {
                      'RFile'   : 'rootFile/plots_BG_DY_NOHR_MVA080.root' ,
                      'KffFile' : 'rootFile/plots_BG_DY_NOHR_MVA060.root' ,             
                      'Regions' : { 
                                    '2jee' : {
                                               'kNum' : '2j_ggH_ee_in/events/histo_DY' ,
                                               'kDen' : '2j_ggH_uu_in/events/histo_DY' ,
                                               'RNum' : '2j_ggH_ee_out/events/histo_DY' ,
                                               'RDen' : '2j_ggH_ee_in/events/histo_DY' ,
                                             } ,
                                    '2jmm' : {
                                               'kNum' : '2j_ggH_uu_in/events/histo_DY' ,
                                               'kDen' : '2j_ggH_ee_in/events/histo_DY' ,
                                               'RNum' : '2j_ggH_uu_out/events/histo_DY' ,
                                               'RDen' : '2j_ggH_uu_in/events/histo_DY' ,
                                             } ,
                                   } , 
                     }

#RAndKff['DYmva0p8top'] = {
#                      'RFile'   : 'rootFile/plots_BG_DY_NOHR_btag.root' ,
#                      'KffFile' : 'rootFile/plots_BG_DY_NOHR_MVA060.root' ,
#                      'Regions' : {
#                                    '2jee' : {
#                                               'kNum' : '2j_ggH_ee_in/events/histo_DY' ,
#                                               'kDen' : '2j_ggH_uu_in/events/histo_DY' ,
#                                               'RNum' : '2j_ggH_ee_out/events/histo_DY' ,
#                                               'RDen' : '2j_ggH_ee_in/events/histo_DY' ,
#                                             } ,
#                                    '2jmm' : {
#                                               'kNum' : '2j_ggH_uu_in/events/histo_DY' ,
#                                               'kDen' : '2j_ggH_ee_in/events/histo_DY' ,
#                                               'RNum' : '2j_ggH_uu_out/events/histo_DY' ,
#                                               'RDen' : '2j_ggH_uu_in/events/histo_DY' ,
#                                             } ,
#                                   } ,
#                     }

 
#DYestim = {}

  
DYestim['hww2l2v_13TeV_2jee'] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'rsyst'   : 0.05 ,
                                   'ksyst'   : 0.01 ,
                                   'njet'    : '2j' ,
                                   'flavour' : 'ee' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_2jee' ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_2jdf' ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                   'NPname'  : 'hww_DYeenorm2j' ,
                                   'AccNum'  : 'hww2l2v_13TeV_2jee_HAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_2jee_AccDen/events/histo_DY',
                                   'asyst'   : 0.06 ,
                                  }
 
DYestim['hww2l2v_13TeV_2jmm'] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'rsyst'   : 0.10 ,
                                   'ksyst'   : 0.05 ,
                                   'njet'    : '2j'    ,
                                   'flavour' : 'mm' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_2jmm' ,
                                   'SFinDa'  : 'DATA' ,
                                   'SFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_2jdf' ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                   'NPname'  : 'hww_DYmmnorm2j' ,
                                   'AccNum'  : 'hww2l2v_13TeV_2jmm_HAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_2jmm_AccDen/events/histo_DY',
                                   'asyst'   : 0.04 ,
                                  }

DYestim['hww2l2v_13TeV_2jee_vh2j'] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'rsyst'   : 0.05 ,
                                   'ksyst'   : 0.01 ,
                                   'njet'    : '2j' ,
                                   'flavour' : 'ee' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_2jee' ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_2jdf' ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                   'NPname'  : 'hww_DYeenorm2j' ,
                                   'AccNum'  : 'hww2l2v_13TeV_2jee_vh2j_HAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_2jee_AccDen/events/histo_DY',
                                   'asyst'   : 0.06 ,
                                  }

DYestim['hww2l2v_13TeV_2jmm_vh2j'] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'rsyst'   : 0.10 ,
                                   'ksyst'   : 0.05 ,
                                   'njet'    : '2j'    ,
                                   'flavour' : 'mm' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_2jmm' ,
                                   'SFinDa'  : 'DATA' ,
                                   'SFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_2jdf' ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                   'NPname'  : 'hww_DYmmnorm2j' ,
                                   'AccNum'  : 'hww2l2v_13TeV_2jmm_vh2j_HAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_2jmm_AccDen/events/histo_DY',
                                   'asyst'   : 0.04 ,
                                  }

DYestim['hww2l2v_13TeV_WW_2jee'] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'njet'    : '2j'    ,
                                   'flavour' : 'ee' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_2jee' ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_2jdf' ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                   'NPname'  : 'hww_DYeenorm2j' ,
                                   'AccNum'  : 'hww2l2v_13TeV_WW_2jee_WWAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_2jee_AccDen/events/histo_DY',
                                   'asyst'   : 0.03 ,
                                     }
 
DYestim['hww2l2v_13TeV_WW_2jmm'] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'njet'    : '2j'    ,
                                   'flavour' : 'mm' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_2jmm' ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_2jdf' ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                   'NPname'  : 'hww_DYmmnorm2j' ,
                                   'AccNum'  : 'hww2l2v_13TeV_WW_2jmm_WWAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_2jmm_AccDen/events/histo_DY',
                                   'asyst'   : 0.02 ,
                                     }

DYestim['hww2l2v_13TeV_WW_2jee_vh2j'] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'njet'    : '2j'    ,
                                   'flavour' : 'ee' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_2jee' ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_2jdf' ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                   'NPname'  : 'hww_DYeenorm2j' ,
                                   'AccNum'  : 'hww2l2v_13TeV_WW_2jee_vh2j_WWAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_2jee_AccDen/events/histo_DY',
                                   'asyst'   : 0.03 ,
                                     }

DYestim['hww2l2v_13TeV_WW_2jmm_vh2j'] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'njet'    : '2j'    ,
                                   'flavour' : 'mm' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_2jmm' ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_2jdf' ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                   'NPname'  : 'hww_DYmmnorm2j' ,
                                   'AccNum'  : 'hww2l2v_13TeV_WW_2jmm_vh2j_WWAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_2jmm_AccDen/events/histo_DY',
                                   'asyst'   : 0.02 ,
                                     }


#DYestim['hww2l2v_13TeV_top_2jee'] = {
#                                   'rinout'  : 'DYmva0p8top' ,
#                                   'njet'    : '2j'    ,
#                                   'flavour' : 'ee' ,
#                                   'DYProc'  : 'DY' ,
#                                   'SFin'    : 'hww2l2v_13TeV_DYin_btag_2jee' ,
#                                   'SFinDa'  : 'DATA',
#                                   'SFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
#                                   'DFin'    : 'hww2l2v_13TeV_DYin_btag_2jdf' ,
#                                   'DFinDa'  : 'DATA' ,
#                                   'DFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
#                                   'NPname'  : 'hww_DYeenorm2j' ,
#                                   'asyst'   : 0.08 ,
#                                     }
#
#DYestim['hww2l2v_13TeV_top_2jmm'] = {
#                                   'rinout'  : 'DYmva0p8top' ,
#                                   'njet'    : '2j'    ,
#                                   'flavour' : 'mm' ,
#                                   'DYProc'  : 'DY' ,
#                                   'SFin'    : 'hww2l2v_13TeV_DYin_btag_2jmm' ,
#                                   'SFinDa'  : 'DATA',
#                                   'SFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
#                                   'DFin'    : 'hww2l2v_13TeV_DYin_btag_2jdf' ,
#                                   'DFinDa'  : 'DATA' ,
#                                   'DFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
#                                   'NPname'  : 'hww_DYmmnorm2j' ,
#                                   'asyst'   : 0.04 ,
#                                     }

