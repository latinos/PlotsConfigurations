
#RAndKff  = {}

RAndKff['DYmva0p8'] = {
                      'RFile'   : 'rootFile/plots_BG_DY_NOHR_MVA080.root' ,
                      'KffFile' : 'rootFile/plots_BG_DY_NOHR_MVA080.root' ,             
                      'Regions' : { '1jee' : { 
                                               'kNum' : '1j_ee_in/events/histo_DY' ,
                                               'kDen' : '1j_uu_in/events/histo_DY' ,
                                               'RNum' : '1j_ee_out/events/histo_DY' , 
                                               'RDen' : '1j_ee_in/events/histo_DY' , 
                                             } ,
                                    '1jmm' : { 
                                               'kNum' : '1j_uu_in/events/histo_DY' ,
                                               'kDen' : '1j_ee_in/events/histo_DY' ,
                                               'RNum' : '1j_uu_out/events/histo_DY' , 
                                               'RDen' : '1j_uu_in/events/histo_DY' , 
                                             } ,
                                   } , 
                     }
 
#DYestim = {}

for iCut in optim:

  DYestim['hww2l2v_13TeV_1jee_'+iCut] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'rsyst'   : 0.10 , 
                                   'ksyst'   : 0.01 , 
                                   'njet'    : '1j' , 
                                   'flavour' : 'ee' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_1jee_'+iCut ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','VgS'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_1jdf_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS'],
                                   'NPname'  : 'DYeenorm1j' , 
                                   'AccNum'  : 'hww2l2v_13TeV_1jee_HAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_1jee_AccDen/events/histo_DY',
                                   'asyst'   : 0.07 , 
                                  } 
  
  DYestim['hww2l2v_13TeV_1jmm_'+iCut] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'rsyst'   : 0.10 , 
                                   'ksyst'   : 0.04 , 
                                   'njet'    : '1j'    ,
                                   'flavour' : 'mm' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_1jmm_'+iCut ,
                                   'SFinDa'  : 'DATA' ,
                                   'SFinMC'  : ['VZ','Vg','VgS'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_1jdf_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS'],
                                   'NPname'  : 'DYmmnorm1j' ,
                                   'AccNum'  : 'hww2l2v_13TeV_1jmm_HAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_1jmm_AccDen/events/histo_DY',
                                   'asyst'   : 0.04 , 
                                  } 
  
  DYestim['hww2l2v_13TeV_WW_1jee_'+iCut] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'njet'    : '1j'    ,
                                   'flavour' : 'ee' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_1jee_'+iCut ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','VgS'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_1jdf_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS'],
                                   'NPname'  : 'DYeenorm1j' ,
                                   'AccNum'  : 'hww2l2v_13TeV_WW_1jee_WWAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_1jee_AccDen/events/histo_DY',
                                   'asyst'   : 0.05 , 
                                     }
  
  DYestim['hww2l2v_13TeV_WW_1jmm_'+iCut] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'njet'    : '1j'    ,
                                   'flavour' : 'mm' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_1jmm_'+iCut ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','VgS'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_1jdf_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS'],
                                   'NPname'  : 'DYmmnorm1j' ,
                                   'AccNum'  : 'hww2l2v_13TeV_WW_1jmm_WWAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_1jmm_AccDen/events/histo_DY',
                                   'asyst'   : 0.02 , 
                                     }
