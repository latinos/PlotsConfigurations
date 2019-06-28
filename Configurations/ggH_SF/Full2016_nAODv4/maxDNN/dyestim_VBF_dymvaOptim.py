
#RAndKff  = {}

RAndKff['DYmva0p8'] = {
                      'RFile'   : 'rootFile/plots_BG_DY_NOHR_MVA080.root' ,
                      'KffFile' : 'rootFile/plots_BG_DY_NOHR_MVA080.root' ,             
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
                      'RFile'   : 'rootFile/plots_BG_DY_NOHR_btag.root' ,
                      'KffFile' : 'rootFile/plots_BG_DY_NOHR_MVA080.root' ,
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
                                   'rsyst'   : 0.08 , 
                                   'ksyst'   : 0.01 , 
                                   'njet'    : '2jVBF' , 
                                   'flavour' : 'ee' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_2jee_vbf_'+iCut ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','VgS'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_2jdf_vbf_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS'],
                                   'NPname'  : 'DYeenorm2jVBF' , 
                                   'AccNum'  : 'hww2l2v_13TeV_2jee_vbf_HAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_2jee_vbf_AccDen/events/histo_DY',
                                   'asyst'   : 0.02 , 
                                  } 
  
  DYestim['hww2l2v_13TeV_2jmm_vbf_'+iCut] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'rsyst'   : 0.02 , 
                                   'ksyst'   : 0.03 , 
                                   'njet'    : '2jVBF'    ,
                                   'flavour' : 'mm' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_2jmm_vbf_'+iCut ,
                                   'SFinDa'  : 'DATA' ,
                                   'SFinMC'  : ['VZ','Vg','VgS'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_2jdf_vbf_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS'],
                                   'NPname'  : 'DYmmnorm2jVBF' ,
                                   'AccNum'  : 'hww2l2v_13TeV_2jmm_vbf_HAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_2jmm_vbf_AccDen/events/histo_DY',
                                   'asyst'   : 0.03 , 
                                  } 
  
  DYestim['hww2l2v_13TeV_WW_2jee_vbf_'+iCut] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'njet'    : '2jVBF'    ,
                                   'flavour' : 'ee' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_2jee_vbf_'+iCut ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','VgS'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_2jdf_vbf_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS'],
                                   'NPname'  : 'DYeenorm2jVBF' ,
                                   'AccNum'  : 'hww2l2v_13TeV_WW_2jee_vbf_WWAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_2jee_vbf_AccDen/events/histo_DY',
                                   'asyst'   : 0.03 , 
                                     }
  
  DYestim['hww2l2v_13TeV_WW_2jmm_vbf_'+iCut] = {
                                   'rinout'  : 'DYmva0p8' ,
                                   'njet'    : '2jVBF'    ,
                                   'flavour' : 'mm' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_2jmm_vbf_'+iCut ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','VgS'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_2jdf_vbf_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS'],
                                   'NPname'  : 'DYmmnorm2jVBF' ,
                                   'AccNum'  : 'hww2l2v_13TeV_WW_2jmm_vbf_WWAccNum/events/histo_DY',
                                   'AccDen'  : 'hww2l2v_13TeV_2jmm_vbf_AccDen/events/histo_DY',
                                   'asyst'   : 0.02 , 
                                     }
  
  DYestim['hww2l2v_13TeV_top_2jee_vbf_'+iCut] = {
                                   'rinout'  : 'DYmva0p8top' ,
                                   'njet'    : '2jVBF'    ,
                                   'flavour' : 'ee' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_btag_2jee_vbf_'+iCut ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','VgS'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_btag_2jdf_vbf_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS'],
                                   'NPname'  : 'DYeenorm2jVBF' ,
                                   'asyst'   : 0.05 ,
                                     }
  
  DYestim['hww2l2v_13TeV_top_2jmm_vbf_'+iCut] = {
                                   'rinout'  : 'DYmva0p8top' ,
                                   'njet'    : '2jVBF'    ,
                                   'flavour' : 'mm' ,
                                   'DYProc'  : 'DY' ,
                                   'SFin'    : 'hww2l2v_13TeV_DYin_btag_2jmm_vbf_'+iCut ,
                                   'SFinDa'  : 'DATA',
                                   'SFinMC'  : ['VZ','Vg','VgS'],
                                   'DFin'    : 'hww2l2v_13TeV_DYin_btag_2jdf_vbf_'+iCut ,
                                   'DFinDa'  : 'DATA' ,
                                   'DFinMC'  : ['VZ','Vg','VgS'],
                                   'NPname'  : 'DYmmnorm2jVBF' ,
                                   'asyst'   : 0.02 ,
                                     }
