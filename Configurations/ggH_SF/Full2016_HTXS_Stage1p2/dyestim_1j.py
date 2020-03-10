
#RAndKff  = {}
RAndKff['DYmva0p8'] = {
                      'RFile'   : 'rootFile/plots_BG_DY_NOHR_MVA080_1j.root' ,
                      'KffFile' : 'rootFile/plots_BG_DY_NOHR_MVA080_1j.root' ,
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

RAndKff['DYmva0p8_pth'] = {
                      'RFile'   : 'rootFile/plots_BG_DY_NOHR_MVA080_pth.root' ,
                      'KffFile' : 'rootFile/plots_BG_DY_NOHR_MVA080_pth.root' ,
                      'Regions' : { 'pthee' : {
                                               'kNum' : 'pth_ee_in/events/histo_DY' ,
                                               'kDen' : 'pth_uu_in/events/histo_DY' ,
                                               'RNum' : 'pth_ee_out/events/histo_DY' ,
                                               'RDen' : 'pth_ee_in/events/histo_DY' ,
                                             } ,
                                    'pthmm' : {
                                               'kNum' : 'pth_uu_in/events/histo_DY' ,
                                               'kDen' : 'pth_ee_in/events/histo_DY' ,
                                               'RNum' : 'pth_uu_out/events/histo_DY' ,
                                               'RDen' : 'pth_uu_in/events/histo_DY' ,
                                             } ,
                                   } ,
                     }


#DYestim = {}

#For datacards: hww2l2v_13TeV_sf1j_ee_pth0_60, hww2l2v_13TeV_sf1j_ee_pth60_120, hww2l2v_13TeV_sf1j_ee_pth120_200, hww2l2v_13TeV_sf1j_mm_pth0_60, hww2l2v_13TeV_sf1j_mm_pth60_120, hww2l2v_13TeV_sf1j_mm_pth120_200, hww2l2v_13TeV_WW_1j_ee, hww2l2v_13TeV_WW_1j_mm, hww2l2v_13TeV_WW_pth_ee, hww2l2v_13TeV_WW_pth_mm, hww2l2v_13TeV_top_1j_ee, hww2l2v_13TeV_top_1j_mm, hww2l2v_13TeV_top_pth_ee, hww2l2v_13TeV_top_pth_mm

# hww2l2v_13TeV_sf1j_ee_pth0_60                     
# hww2l2v_13TeV_HAccNum_sf1j_mm_pth120_200     
# hww2l2v_13TeV_WW_pth_mm                      
# hww2l2v_13TeV_top_1j_mm
# hww2l2v_13TeV_HAccNum_sf1j_ee_pth120_200     
# hww2l2v_13TeV_AccDen_1j_ee                   
# hww2l2v_13TeV_DYin_1j_df                     
# hww2l2v_13TeV_DYin_pth_df                    
# hww2l2v_13TeV_AccDen_pth_ee                  
# hww2l2v_13TeV_sf_mm_pthGT200                 
# hww2l2v_13TeV_HAccNum_sf1j_ee_pth60_120      
# hww2l2v_13TeV_sf1j_mm_pth0_60                
# hww2l2v_13TeV_DYin_1j_mm                     
# hww2l2v_13TeV_HAccNum_sf_mm_pthGT200         
# hww2l2v_13TeV_sf1j_mm_pth120_200             
# hww2l2v_13TeV_AccDen_pth_mm                  
# hww2l2v_13TeV_DYin_pth_mm                    
# hww2l2v_13TeV_wwAcc_pth_ee                   
# hww2l2v_13TeV_sf_ee_pthGT200                 
# hww2l2v_13TeV_HAccNum_sf1j_mm_pth60_120      
# hww2l2v_13TeV_WW_1j_ee                       
# hww2l2v_13TeV_wwAcc_pth_mm                   
# hww2l2v_13TeV_DYin_pth_ee                    
# hww2l2v_13TeV_HAccNum_sf1j_mm_pth0_60        
# hww2l2v_13TeV_sf1j_mm_pth60_120              
# hww2l2v_13TeV_WW_pth_ee                      
# hww2l2v_13TeV_WW_1j_mm                       
# hww2l2v_13TeV_wwAcc_1j_mm                    
# hww2l2v_13TeV_top_pth_mm
# hww2l2v_13TeV_HAccNum_sf_ee_pthGT200         
# hww2l2v_13TeV_HAccNum_sf1j_ee_pth0_60        
# hww2l2v_13TeV_sf1j_ee_pth60_120              
# hww2l2v_13TeV_sf1j_ee_pth120_200             
# hww2l2v_13TeV_AccDen_1j_mm                   
# hww2l2v_13TeV_DYin_1j_ee                     
# hww2l2v_13TeV_wwAcc_1j_ee                    
# hww2l2v_13TeV_top_1j_ee
# hww2l2v_13TeV_top_pth_ee

DYestim['hww2l2v_13TeV_sf1j_ee_pth0_60'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.10 , 
                                 'ksyst'   : 0.01 , 
                                 'njet'    : '1j'    ,
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_1j_ee' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_1j_df' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYeenorm1j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_HAccNum_sf1j_ee_pth0_60/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_AccDen_1j_ee/events/histo_DY',
                                 'asyst'   : 0.04 , 
                                }

DYestim['hww2l2v_13TeV_sf1j_ee_pth60_120'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.10 ,
                                 'ksyst'   : 0.01 ,
                                 'njet'    : '1j'    ,
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_1j_ee' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_1j_df' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYeenorm1j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_HAccNum_sf1j_ee_pth60_120/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_AccDen_1j_ee/events/histo_DY',
                                 'asyst'   : 0.04 ,
                                }

DYestim['hww2l2v_13TeV_sf1j_ee_pth120_200'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.10 ,
                                 'ksyst'   : 0.01 ,
                                 'njet'    : '1j'    ,
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_1j_ee' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_1j_df' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYeenorm1j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_HAccNum_sf1j_ee_pth120_200/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_AccDen_1j_ee/events/histo_DY',
                                 'asyst'   : 0.04 ,
                                }

DYestim['hww2l2v_13TeV_sf1j_mm_pth0_60'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.09 , 
                                 'ksyst'   : 0.01 , 
                                 'njet'    : '1j'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_1j_mm' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_1j_df' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYmmnorm1j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_HAccNum_sf1j_mm_pth0_60/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_AccDen_1j_mm/events/histo_DY',
                                 'asyst'   : 0.02 , 
                                }

DYestim['hww2l2v_13TeV_sf1j_mm_pth60_120'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.09 ,
                                 'ksyst'   : 0.01 ,
                                 'njet'    : '1j'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_1j_mm' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_1j_df' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYmmnorm1j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_HAccNum_sf1j_mm_pth60_120/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_AccDen_1j_mm/events/histo_DY',
                                 'asyst'   : 0.02 ,
                                }

DYestim['hww2l2v_13TeV_sf1j_mm_pth120_200'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.09 ,
                                 'ksyst'   : 0.01 ,
                                 'njet'    : '1j'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_1j_mm' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_1j_df' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYmmnorm1j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_HAccNum_sf1j_mm_pth120_200/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_AccDen_1j_mm/events/histo_DY',
                                 'asyst'   : 0.02 ,
                                } 

DYestim['hww2l2v_13TeV_WW_1j_ee'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'njet'    : '1j'    ,
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_1j_ee' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_1j_df' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYeenorm1j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_wwAcc_1j_ee/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_AccDen_1j_ee/events/histo_DY',
                                 'asyst'   : 0.01 , 
                                   }

DYestim['hww2l2v_13TeV_WW_1j_mm'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'njet'    : '1j'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_1j_mm' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_1j_df' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYmmnorm1j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_wwAcc_1j_mm/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_AccDen_1j_mm/events/histo_DY',
                                 'asyst'   : 0.01 ,
                                   }

DYestim['hww2l2v_13TeV_sf_ee_pthGT200'] = {
                                 'rinout'  : 'DYmva0p8_pth' ,
                                 'rsyst'   : 0.10 ,
                                 'ksyst'   : 0.01 ,
                                 'njet'    : 'pth'    ,
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_1j_ee' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_1j_df' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYeenorm1j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_HAccNum_sf_ee_pthGT200/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_AccDen_pth_ee/events/histo_DY',
                                 'asyst'   : 0.04 ,
                                }

DYestim['hww2l2v_13TeV_sf_mm_pthGT200'] = {
                                 'rinout'  : 'DYmva0p8_pth' ,
                                 'rsyst'   : 0.09 ,
                                 'ksyst'   : 0.01 ,
                                 'njet'    : 'pth'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_1j_mm' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_1j_df' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYmmnorm1j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_HAccNum_sf_mm_pthGT200/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_AccDen_pth_mm/events/histo_DY',
                                 'asyst'   : 0.02 ,
                                }

DYestim['hww2l2v_13TeV_WW_pth_ee'] = {
                                 'rinout'  : 'DYmva0p8_pth' ,
                                 'njet'    : 'pth'    ,
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_pth_ee' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_pth_df' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYeenorm1j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_wwAcc_pth_ee/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_AccDen_pth_ee/events/histo_DY',
                                 'asyst'   : 0.01 ,
                                   }

DYestim['hww2l2v_13TeV_WW_pth_mm'] = {
                                 'rinout'  : 'DYmva0p8_pth' ,
                                 'njet'    : 'pth'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_pth_mm' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_pth_df' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYmmnorm1j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_wwAcc_pth_mm/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_AccDen_pth_mm/events/histo_DY',
                                 'asyst'   : 0.01 ,
                                   }

