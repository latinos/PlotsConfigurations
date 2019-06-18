
#RAndKff  = {}

RAndKff['DYmva0p8'] = {
                      'RFile'   : 'rootFile/plots_BG_DY_NOHR_MVA090.root' ,
                      'KffFile' : 'rootFile/plots_BG_DY_NOHR_MVA080.root' ,             
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
                                    '1jee' : { 
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
                                    '2jee' : {
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
 
RAndKff['DYmva0p8top'] = {
                      'RFile'   : 'rootFile/plots_BG_DY_NOHR_btag.root' ,
                      'KffFile' : 'rootFile/plots_BG_DY_NOHR_MVA080.root' ,
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


DYestim['hww2l2v_13TeV_0jee'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.06 , 
                                 'ksyst'   : 0.01 , 
                                 'njet'    : '0j' , 
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_0jee' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','VgS'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_0jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS'],
                                 'NPname'  : 'DYeenorm0j' , 
                                 'AccNum'  : 'hww2l2v_13TeV_0jee_HAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_0jee_AccDen/events/histo_DY',
                                 'asyst'   : 0.04 , 
                                } 

DYestim['hww2l2v_13TeV_0jmm'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.06 , 
                                 'ksyst'   : 0.02 , 
                                 'njet'    : '0j'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_0jmm' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','VgS'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_0jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS'],
                                 'NPname'  : 'DYmmnorm0j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_0jmm_HAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_0jmm_AccDen/events/histo_DY',
                                 'asyst'   : 0.02 , 
                                } 

DYestim['hww2l2v_13TeV_1jee'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.09 , 
                                 'ksyst'   : 0.02 , 
                                 'njet'    : '1j'    ,
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_1jee' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','VgS'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_1jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS'],
                                 'NPname'  : 'DYeenorm1j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_1jee_HAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_1jee_AccDen/events/histo_DY',
                                 'asyst'   : 0.03 , 
                                } 

DYestim['hww2l2v_13TeV_1jmm'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.10 , 
                                 'ksyst'   : 0.04 , 
                                 'njet'    : '1j'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_1jmm' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','VgS'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_1jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS'],
                                 'NPname'  : 'DYmmnorm1j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_1jmm_HAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_1jmm_AccDen/events/histo_DY',
                                 'asyst'   : 0.03 , 
                                } 

DYestim['hww2l2v_13TeV_2jee'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.04 ,
                                 'ksyst'   : 0.01 ,
                                 'njet'    : '2j'    ,
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_2jee' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','VgS'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_2jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS'],
                                 'NPname'  : 'DYeenorm2j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_2jee_HAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_2jee_AccDen/events/histo_DY',
                                 'asyst'   : 0.04 ,
                                }

DYestim['hww2l2v_13TeV_2jmm'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.10 ,
                                 'ksyst'   : 0.01 ,
                                 'njet'    : '2j'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_2jmm' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','VgS'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_2jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS'],
                                 'NPname'  : 'DYmmnorm2j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_2jmm_HAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_2jmm_AccDen/events/histo_DY',
                                 'asyst'   : 0.04 ,
                                }

DYestim['hww2l2v_13TeV_WW_0jee'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'njet'    : '0j'    ,
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_0jee' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','VgS'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_0jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS'],
                                 'NPname'  : 'DYeenorm0j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_WW_0jee_WWAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_0jee_AccDen/events/histo_DY',
                                 'asyst'   : 0.01 , 
                                   }

DYestim['hww2l2v_13TeV_WW_0jmm'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'njet'    : '0j'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_0jmm' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','VgS'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_0jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS'],
                                 'NPname'  : 'DYmmnorm0j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_WW_0jmm_WWAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_0jmm_AccDen/events/histo_DY',
                                 'asyst'   : 0.01 , 
                                   }

DYestim['hww2l2v_13TeV_WW_1jee'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'njet'    : '1j'    ,
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_1jee' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','VgS'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_1jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS'],
                                 'NPname'  : 'DYeenorm1j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_WW_1jee_WWAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_1jee_AccDen/events/histo_DY',
                                 'asyst'   : 0.01 , 
                                   }

DYestim['hww2l2v_13TeV_WW_1jmm'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'njet'    : '1j'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_1jmm' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','VgS'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_1jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS'],
                                 'NPname'  : 'DYmmnorm1j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_WW_1jmm_WWAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_1jmm_AccDen/events/histo_DY',
                                 'asyst'   : 0.01 ,
                                   }

DYestim['hww2l2v_13TeV_WW_2jee'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'njet'    : '2j'    ,
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_2jee' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','VgS'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_2jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS'],
                                 'NPname'  : 'DYeenorm2j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_WW_2jee_WWAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_2jee_AccDen/events/histo_DY',
                                 'asyst'   : 0.01 ,
                                   }

DYestim['hww2l2v_13TeV_WW_2jmm'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'njet'    : '2j'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_2jmm' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','VgS'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_2jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS'],
                                 'NPname'  : 'DYmmnorm2j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_WW_2jmm_WWAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_2jmm_AccDen/events/histo_DY',
                                 'asyst'   : 0.02 ,
                                   }

DYestim['hww2l2v_13TeV_top_0jee'] = {
                                 'rinout'  : 'DYmva0p8top' ,
                                 'njet'    : '0j'    ,
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_btag_0jee' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','VgS'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_btag_0jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS'],
                                 'NPname'  : 'DYeenorm0j' ,
                                 'asyst'   : 0.07 ,
                                   }

DYestim['hww2l2v_13TeV_top_0jmm'] = {
                                 'rinout'  : 'DYmva0p8top' ,
                                 'njet'    : '0j'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_btag_0jmm' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','VgS'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_btag_0jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS'],
                                 'NPname'  : 'DYmmnorm0j' ,
                                 'asyst'   : 0.06 ,
                                   }
