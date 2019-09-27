
#RAndKff  = {}

RAndKff['DYmva0p8'] = {
                      'RFile'   : '../DNN/rootFile/plots_BG_DY_NOHR_MVA080.root' ,
                      'KffFile' : '../DNN/rootFile/plots_BG_DY_NOHR_MVA080.root' ,             
                      'Regions' : { '2jVBFee' : { 
                                               'kNum' : '2j_VBF_ee_in/events/histo_DY' ,
                                               'kDen' : '2j_VBF_uu_in/events/histo_DY' ,
                                               'RNum' : '2j_VBF_ee_out/events/histo_DY' , 
                                               'RDen' : '2j_VBF_ee_in/events/histo_DY' , 
                                             } ,
                                    '2jVBFmm' : { 
                                               'kNum' : '2j_VBF_uu_in/events/histo_DY' ,
                                               'kDen' : '2j_VBF_ee_in/events/histo_DY' ,
                                               'RNum' : '2j_VBF_uu_out/events/histo_DY' , 
                                               'RDen' : '2j_VBF_uu_in/events/histo_DY' , 
                                             } ,
                                   } , 
                     }
 
RAndKff['DYmva0p8top'] = {
                      'RFile'   : '../DNN/rootFile/plots_BG_DY_NOHR_btag.root' ,
                      'KffFile' : '../DNN/rootFile/plots_BG_DY_NOHR_MVA080.root' ,
                      'Regions' : { '2jVBFee' : {
                                               'kNum' : '2j_VBF_ee_in/events/histo_DY' ,
                                               'kDen' : '2j_VBF_uu_in/events/histo_DY' ,
                                               'RNum' : '2j_VBF_ee_out/events/histo_DY' ,       
                                               'RDen' : '2j_VBF_ee_in/events/histo_DY' ,       
                                             } ,
                                    '2jVBFmm' : { 
                                               'kNum' : '2j_VBF_uu_in/events/histo_DY' ,
                                               'kDen' : '2j_VBF_ee_in/events/histo_DY' ,
                                               'RNum' : '2j_VBF_uu_out/events/histo_DY' ,
                                               'RDen' : '2j_VBF_uu_in/events/histo_DY' ,
                                             } ,
                                   } , 
                     }


#DYestim = {}

for iCut in optim:

  DYestim['hww2l2v_13TeV_2jee_vbf_'+iCut] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'rsyst'   : 0.03 , 
                                   'ksyst'   : 0.10 , 
                                   'njet'    : '2jVBF' , 
                                   'flavour' : 'ee' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_2jee_vbf_'+iCut ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_2jdf_vbf_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'NPname'  : 'DYeenorm2jVBF' , 
                                   'AccNum'  : 'hww2l2v_13TeV_2jee_vbf_HAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_2jee_vbf_AccDen/events/histo_DY',
                                   'asyst'   : 0.10 , 
                                  } 
  
  DYestim['hww2l2v_13TeV_2jmm_vbf_'+iCut] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'rsyst'   : 0.09 , 
                                   'ksyst'   : 0.20 , 
                                   'njet'    : '2jVBF'    ,
                                   'flavour' : 'mm' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_2jmm_vbf_'+iCut ,
                                   'SFinDa'  : 'DATA' ,
                                   'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_2jdf_vbf_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'NPname'  : 'DYmmnorm2jVBF' ,
                                   'AccNum'  : 'hww2l2v_13TeV_2jmm_vbf_HAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_2jmm_vbf_AccDen/events/histo_DY',
                                   'asyst'   : 0.10 , 
                                  } 
  
  DYestim['hww2l2v_13TeV_WW_2jee_vbf_'+iCut] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'njet'    : '2jVBF'    ,
                                   'flavour' : 'ee' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_2jee_vbf_'+iCut ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_2jdf_vbf_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'NPname'  : 'DYeenorm2jVBF' ,
                                   'AccNum'  : 'hww2l2v_13TeV_WW_2jee_vbf_WWAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_2jee_vbf_AccDen/events/histo_DY',
                                   'asyst'   : 0.06 , 
                                     }
  
  DYestim['hww2l2v_13TeV_WW_2jmm_vbf_'+iCut] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'njet'    : '2jVBF'    ,
                                   'flavour' : 'mm' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_2jmm_vbf_'+iCut ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_2jdf_vbf_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'NPname'  : 'DYmmnorm2jVBF' ,
                                   'AccNum'  : 'hww2l2v_13TeV_WW_2jmm_vbf_WWAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_2jmm_vbf_AccDen/events/histo_DY',
                                   'asyst'   : 0.06 , 
                                     }
  
  DYestim['hww2l2v_13TeV_top_2jee_vbf_'+iCut] = {
                                   'rinout'  : 'DYmva0p8top' ,
                                   'njet'    : '2jVBF'    ,
                                   'flavour' : 'ee' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_btag_2jee_vbf_'+iCut ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_btag_2jdf_vbf_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'NPname'  : 'DYeenorm2jVBF' ,
                                   'asyst'   : 0.03 ,
                                     }
  
  DYestim['hww2l2v_13TeV_top_2jmm_vbf_'+iCut] = {
                                   'rinout'  : 'DYmva0p8top' ,
                                   'njet'    : '2jVBF'    ,
                                   'flavour' : 'mm' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_btag_2jmm_vbf_'+iCut ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_btag_2jdf_vbf_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                   'NPname'  : 'DYmmnorm2jVBF' ,
                                   'asyst'   : 0.03 ,
                                     }
