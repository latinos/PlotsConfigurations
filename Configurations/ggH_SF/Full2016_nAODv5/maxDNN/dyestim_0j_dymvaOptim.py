
#RAndKff  = {}

RAndKff['DYmva0p8'] = {
                      'RFile'   : '../DNN/rootFile/plots_BG_DY_NOHR_MVA080_0j.root' ,
                      'KffFile' : '../DNN/rootFile/plots_BG_DY_NOHR_MVA080_0j.root' ,             
                      'Regions' : { '0jee' : { 
                                               'kNum' : '0j_ee_in/events/histo_DY' ,
                                               'kDen' : '0j_uu_in/events/histo_DY' ,
                                               'RNum' : '0j_ee_out/events/histo_DY' , 
                                               'RDen' : '0j_ee_in/events/histo_DY' , 
                                             } ,
                                    '0jmm' : { 
                                               'kNum' : '0j_uu_in/events/histo_DY' ,
                                               'kDen' : '0j_ee_in/events/histo_DY' ,
                                               'RNum' : '0j_uu_out/events/histo_DY' , 
                                               'RDen' : '0j_uu_in/events/histo_DY' , 
                                             } ,
                                   } , 
                     }
 
#DYestim = {}

for iCut in optim:

  DYestim['hww2l2v_13TeV_0jee_'+iCut] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'rsyst'   : 0.10 , 
                                   'ksyst'   : 0.01 , 
                                   'njet'    : '0j' , 
                                   'flavour' : 'ee' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_0jee_'+iCut ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_0jdf_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'NPname'  : 'DYeenorm0j' , 
                                   'AccNum'  : 'hww2l2v_13TeV_0jee_HAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_0jee_AccDen/events/histo_DY',
                                   'asyst'   : 0.05 , 
                                  } 
  
  DYestim['hww2l2v_13TeV_0jmm_'+iCut] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'rsyst'   : 0.20 , 
                                   'ksyst'   : 0.01 , 
                                   'njet'    : '0j'    ,
                                   'flavour' : 'mm' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_0jmm_'+iCut ,
                                   'SFinDa'  : 'DATA' ,
                                   'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_0jdf_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'NPname'  : 'DYmmnorm0j' ,
                                   'AccNum'  : 'hww2l2v_13TeV_0jmm_HAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_0jmm_AccDen/events/histo_DY',
                                   'asyst'   : 0.01 , 
                                  } 
  
  DYestim['hww2l2v_13TeV_WW_0jee_'+iCut] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'njet'    : '0j'    ,
                                   'flavour' : 'ee' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_0jee_'+iCut ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_0jdf_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'NPname'  : 'DYeenorm0j' ,
                                   'AccNum'  : 'hww2l2v_13TeV_WW_0jee_WWAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_0jee_AccDen/events/histo_DY',
                                   'asyst'   : 0.01 , 
                                     }
  
  DYestim['hww2l2v_13TeV_WW_0jmm_'+iCut] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'njet'    : '0j'    ,
                                   'flavour' : 'mm' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_0jmm_'+iCut ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_0jdf_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'NPname'  : 'DYmmnorm0j' ,
                                   'AccNum'  : 'hww2l2v_13TeV_WW_0jmm_WWAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_0jmm_AccDen/events/histo_DY',
                                   'asyst'   : 0.03 , 
                                     }
