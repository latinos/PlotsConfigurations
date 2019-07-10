
#RAndKff  = {}

RAndKff['DYmva0p8'] = {
                      'RFile'   : 'rootFile/plots_BG_DY_NOHR_MVA080.root' ,
                      'KffFile' : 'rootFile/plots_BG_DY_NOHR_MVA080.root' ,             
                      'Regions' : { '2jee' : { 
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
 
#DYestim = {}

for iCut in optim:

  DYestim['hww2l2v_13TeV_2jee_'+iCut] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'rsyst'   : 0.05 , 
                                   'ksyst'   : 0.01 , 
                                   'njet'    : '2j' , 
                                   'flavour' : 'ee' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_2jee_'+iCut ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','VgS'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_2jdf_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS'],
                                   'NPname'  : 'DYeenorm2j' , 
                                   'AccNum'  : 'hww2l2v_13TeV_2jee_HAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_2jee_AccDen/events/histo_DY',
                                   'asyst'   : 0.01 , 
                                  } 
  
  DYestim['hww2l2v_13TeV_2jmm_'+iCut] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'rsyst'   : 0.02 , 
                                   'ksyst'   : 0.03 , 
                                   'njet'    : '2j'    ,
                                   'flavour' : 'mm' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_2jmm_'+iCut ,
                                   'SFinDa'  : 'DATA' ,
                                   'SFinMC'  : ['VZ','Vg','VgS'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_2jdf_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS'],
                                   'NPname'  : 'DYmmnorm2j' ,
                                   'AccNum'  : 'hww2l2v_13TeV_2jmm_HAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_2jmm_AccDen/events/histo_DY',
                                   'asyst'   : 0.01 , 
                                  } 
  
  DYestim['hww2l2v_13TeV_WW_2jee_'+iCut] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'njet'    : '2j'    ,
                                   'flavour' : 'ee' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_2jee_'+iCut ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','VgS'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_2jdf_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS'],
                                   'NPname'  : 'DYeenorm2j' ,
                                   'AccNum'  : 'hww2l2v_13TeV_WW_2jee_WWAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_2jee_AccDen/events/histo_DY',
                                   'asyst'   : 0.01 , 
                                     }
  
  DYestim['hww2l2v_13TeV_WW_2jmm_'+iCut] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'njet'    : '2j'    ,
                                   'flavour' : 'mm' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_2jmm_'+iCut ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','VgS'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_2jdf_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS'],
                                   'NPname'  : 'DYmmnorm2j' ,
                                   'AccNum'  : 'hww2l2v_13TeV_WW_2jmm_WWAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_2jmm_AccDen/events/histo_DY',
                                   'asyst'   : 0.01 , 
                                     }
