
#RAndKff  = {}

RAndKff['DYmva0p8'] = {
                      'RFile'   : '../DNN/rootFile/plots_BG_DY_NOHR_MVA080.root' ,
                      'KffFile' : '../DNN/rootFile/plots_BG_DY_NOHR_MVA080.root' ,             
                      'Regions' : { '2jVHee' : { 
                                               'kNum' : '2j_VH_ee_in/events/histo_DY' ,
                                               'kDen' : '2j_VH_uu_in/events/histo_DY' ,
                                               'RNum' : '2j_VH_ee_out/events/histo_DY' , 
                                               'RDen' : '2j_VH_ee_in/events/histo_DY' , 
                                             } ,
                                    '2jVHmm' : { 
                                               'kNum' : '2j_VH_uu_in/events/histo_DY' ,
                                               'kDen' : '2j_VH_ee_in/events/histo_DY' ,
                                               'RNum' : '2j_VH_uu_out/events/histo_DY' , 
                                               'RDen' : '2j_VH_uu_in/events/histo_DY' , 
                                             } ,
                                   } , 
                     }
 
#DYestim = {}

for iCut in optim:

  DYestim['hww2l2v_13TeV_2jee_vh_'+iCut] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'rsyst'   : 0.03 , 
                                   'ksyst'   : 0.02 , 
                                   'njet'    : '2jVH' , 
                                   'flavour' : 'ee' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_2jee_vh_'+iCut ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_2jdf_vh_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'NPname'  : 'DYeenorm2j' , 
                                   'AccNum'  : 'hww2l2v_13TeV_2jee_vh_HAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_2jee_vh_AccDen/events/histo_DY',
                                   'asyst'   : 0.06 , 
                                  } 
  
  DYestim['hww2l2v_13TeV_2jmm_vh_'+iCut] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'rsyst'   : 0.06 , 
                                   'ksyst'   : 0.06 , 
                                   'njet'    : '2jVH'    ,
                                   'flavour' : 'mm' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_2jmm_vh_'+iCut ,
                                   'SFinDa'  : 'DATA' ,
                                   'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_2jdf_vh_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'NPname'  : 'DYmmnorm2j' ,
                                   'AccNum'  : 'hww2l2v_13TeV_2jmm_vh_HAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_2jmm_vh_AccDen/events/histo_DY',
                                   'asyst'   : 0.06 , 
                                  } 
  
  DYestim['hww2l2v_13TeV_WW_2jee_vh_'+iCut] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'njet'    : '2jVH'    ,
                                   'flavour' : 'ee' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_2jee_vh_'+iCut ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_2jdf_vh_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'NPname'  : 'DYeenorm2j' ,
                                   'AccNum'  : 'hww2l2v_13TeV_WW_2jee_vh_WWAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_2jee_vh_AccDen/events/histo_DY',
                                   'asyst'   : 0.01 , 
                                     }
  
  DYestim['hww2l2v_13TeV_WW_2jmm_vh_'+iCut] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'njet'    : '2jVH'    ,
                                   'flavour' : 'mm' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_2jmm_vh_'+iCut ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_2jdf_vh_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'NPname'  : 'DYmmnorm2j' ,
                                   'AccNum'  : 'hww2l2v_13TeV_WW_2jmm_vh_WWAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_2jmm_vh_AccDen/events/histo_DY',
                                   'asyst'   : 0.02 , 
                                     }
