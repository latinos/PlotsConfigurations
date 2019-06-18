
#RAndKff  = {}

RAndKff['DYmva0p8'] = {
                      'RFile'   : 'rootFile/plots_BG_DY_NOHR_MVA080.root' ,
                      'KffFile' : 'rootFile/plots_BG_DY_NOHR_MVA060.root' ,             
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
                                   } , 
                     }
 
RAndKff['DYmva0p8top'] = {
                      'RFile'   : 'rootFile/plots_BG_DY_NOHR_btag.root' ,
                      'KffFile' : 'rootFile/plots_BG_DY_NOHR_MVA060.root' ,
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


DYestim['hww2l2v_13TeV_0jee_pt2lt20'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.04 , 
                                 'ksyst'   : 0.01 , 
                                 'njet'    : '0j' , 
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_0jee' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_0jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                 'NPname'  : 'hww_DYeenorm0j' , 
                                 'AccNum'  : 'hww2l2v_13TeV_0jee_HAccNum_pt2lt20/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_0jee_AccDen/events/histo_DY',
                                 'asyst'   : 0.06 , 
                                } 

DYestim['hww2l2v_13TeV_0jmm_pt2lt20'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.03 , 
                                 'ksyst'   : 0.02 , 
                                 'njet'    : '0j'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_0jmm' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_0jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                 'NPname'  : 'hww_DYmmnorm0j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_0jmm_HAccNum_pt2lt20/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_0jmm_AccDen/events/histo_DY',
                                 'asyst'   : 0.02 , 
                                } 

#DYestim['hww2l2v_13TeV_1jee_pt2lt20'] = {
#                                 'rinout'  : 'DYmva0p8' ,
#                                 'rsyst'   : 0.02 , 
#                                 'ksyst'   : 0.01 , 
#                                 'njet'    : '1j'    ,
#                                 'flavour' : 'ee' ,
#                                 'DYProc'  : 'DY' ,
#                                 'SFin'    : 'hww2l2v_13TeV_DYin_1jee' ,
#                                 'SFinDa'  : 'DATA' ,
#                                 'SFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
#                                 'DFin'    : 'hww2l2v_13TeV_DYin_1jdf' ,
#                                 'DFinDa'  : 'DATA' ,
#                                 'DFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
#                                 'NPname'  : 'DYeenorm1j' ,
#                                 'AccNum'  : 'hww2l2v_13TeV_1jee_HAccNum_pt2lt20/events/histo_DY',
#                                 'AccDen'  : 'hww2l2v_13TeV_1jee_AccDen/events/histo_DY',
#                                 'asyst'   : 0.10 , 
#                                } 

#DYestim['hww2l2v_13TeV_1jmm_pt2lt20'] = {
#                                 'rinout'  : 'DYmva0p8' ,
#                                 'rsyst'   : 0.08 , 
#                                 'ksyst'   : 0.01 , 
#                                 'njet'    : '1j'    ,
#                                 'flavour' : 'mm' ,
#                                 'DYProc'  : 'DY' ,
#                                 'SFin'    : 'hww2l2v_13TeV_DYin_1jmm' ,
#                                 'SFinDa'  : 'DATA' ,
#                                 'SFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
#                                 'DFin'    : 'hww2l2v_13TeV_DYin_1jdf' ,
#                                 'DFinDa'  : 'DATA' ,
#                                 'DFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
#                                 'NPname'  : 'DYmmnorm1j' ,
#                                 'AccNum'  : 'hww2l2v_13TeV_1jmm_HAccNum_pt2lt20/events/histo_DY',
#                                 'AccDen'  : 'hww2l2v_13TeV_1jmm_AccDen/events/histo_DY',
#                                 'asyst'   : 0.06 , 
#                                } 

DYestim['hww2l2v_13TeV_1jee'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.02 ,
                                 'ksyst'   : 0.01 ,
                                 'njet'    : '1j'    ,
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_1jee' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_1jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                 'NPname'  : 'hww_DYeenorm1j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_1jee_HAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_1jee_AccDen/events/histo_DY',
                                 'asyst'   : 0.10 ,
                                }

DYestim['hww2l2v_13TeV_1jmm'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.08 ,
                                 'ksyst'   : 0.01 ,
                                 'njet'    : '1j'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_1jmm' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_1jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                 'NPname'  : 'hww_DYmmnorm1j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_1jmm_HAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_1jmm_AccDen/events/histo_DY',
                                 'asyst'   : 0.06 ,
                                }


# Higgd high pt2


DYestim['hww2l2v_13TeV_0jee_pt2ge20'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.04 , 
                                 'ksyst'   : 0.01 , 
                                 'njet'    : '0j' , 
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_0jee' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_0jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                 'NPname'  : 'hww_DYeenorm0j' , 
                                 'AccNum'  : 'hww2l2v_13TeV_0jee_HAccNum_pt2ge20/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_0jee_AccDen/events/histo_DY',
                                 'asyst'   : 0.06 , 
                                } 

DYestim['hww2l2v_13TeV_0jmm_pt2ge20'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.03 , 
                                 'ksyst'   : 0.02 , 
                                 'njet'    : '0j'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_0jmm' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_0jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                 'NPname'  : 'hww_DYmmnorm0j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_0jmm_HAccNum_pt2ge20/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_0jmm_AccDen/events/histo_DY',
                                 'asyst'   : 0.02 , 
                                } 

#DYestim['hww2l2v_13TeV_1jee_pt2ge20'] = {
#                                 'rinout'  : 'DYmva0p8' ,
#                                 'rsyst'   : 0.02 , 
#                                 'ksyst'   : 0.01 , 
#                                 'njet'    : '1j'    ,
#                                 'flavour' : 'ee' ,
#                                 'DYProc'  : 'DY' ,
#                                 'SFin'    : 'hww2l2v_13TeV_DYin_1jee' ,
#                                 'SFinDa'  : 'DATA' ,
#                                 'SFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
#                                 'DFin'    : 'hww2l2v_13TeV_DYin_1jdf' ,
#                                 'DFinDa'  : 'DATA' ,
#                                 'DFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
#                                 'NPname'  : 'DYeenorm1j' ,
#                                 'AccNum'  : 'hww2l2v_13TeV_1jee_HAccNum_pt2ge20/events/histo_DY',
#                                 'AccDen'  : 'hww2l2v_13TeV_1jee_AccDen/events/histo_DY',
#                                 'asyst'   : 0.10 , 
#                                } 

#DYestim['hww2l2v_13TeV_1jmm_pt2ge20'] = {
#                                 'rinout'  : 'DYmva0p8' ,
#                                 'rsyst'   : 0.08 , 
#                                 'ksyst'   : 0.01 , 
#                                 'njet'    : '1j'    ,
#                                 'flavour' : 'mm' ,
#                                 'DYProc'  : 'DY' ,
#                                 'SFin'    : 'hww2l2v_13TeV_DYin_1jmm' ,
#                                 'SFinDa'  : 'DATA' ,
#                                 'SFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
#                                 'DFin'    : 'hww2l2v_13TeV_DYin_1jdf' ,
#                                 'DFinDa'  : 'DATA' ,
#                                 'DFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
#                                 'NPname'  : 'DYmmnorm1j' ,
#                                 'AccNum'  : 'hww2l2v_13TeV_1jmm_HAccNum_pt2ge20/events/histo_DY',
#                                 'AccDen'  : 'hww2l2v_13TeV_1jmm_AccDen/events/histo_DY',
#                                 'asyst'   : 0.06 , 
#                                } 

# WW

DYestim['hww2l2v_13TeV_WW_0jee'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.04 ,
                                 'ksyst'   : 0.01 ,
                                 'njet'    : '0j'    ,
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_0jee' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_0jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                 'NPname'  : 'hww_DYeenorm0j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_WW_0jee_WWAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_0jee_AccDen/events/histo_DY',
                                 'asyst'   : 0.03 , 
                                   }

DYestim['hww2l2v_13TeV_WW_0jmm'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.03 ,
                                 'ksyst'   : 0.02 ,
                                 'njet'    : '0j'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_0jmm' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_0jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                 'NPname'  : 'hww_DYmmnorm0j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_WW_0jmm_WWAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_0jmm_AccDen/events/histo_DY',
                                 'asyst'   : 0.01 , 
                                   }

DYestim['hww2l2v_13TeV_WW_1jee'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.02 ,
                                 'ksyst'   : 0.01 ,
                                 'njet'    : '1j'    ,
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_1jee' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_1jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                 'NPname'  : 'hww_DYeenorm1j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_WW_1jee_WWAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_1jee_AccDen/events/histo_DY',
                                 'asyst'   : 0.04 , 
                                   }

DYestim['hww2l2v_13TeV_WW_1jmm'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.08 ,
                                 'ksyst'   : 0.01 ,
                                 'njet'    : '1j'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_1jmm' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_1jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                 'NPname'  : 'hww_DYmmnorm1j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_WW_1jmm_WWAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_1jmm_AccDen/events/histo_DY',
                                 'asyst'   : 0.02 ,
                                   }

DYestim['hww2l2v_13TeV_top_0jee'] = {
                                 'rinout'  : 'DYmva0p8top' ,
                                 'rsyst'   : 0.08 ,
                                 'ksyst'   : 0.01 ,
                                 'njet'    : '0j'    ,
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_btag_0jee' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_btag_0jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                 'NPname'  : 'hww_DYeenorm0j' ,
                                   }

DYestim['hww2l2v_13TeV_top_0jmm'] = {
                                 'rinout'  : 'DYmva0p8top' ,
                                 'rsyst'   : 0.04 ,
                                 'ksyst'   : 0.02 ,
                                 'njet'    : '0j'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_btag_0jmm' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_btag_0jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','WZgS_L','WZgS_H'],
                                 'NPname'  : 'hww_DYmmnorm0j' ,
                                   }
