
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

#RAndKff['DYmva0p8top'] = {
#                      'RFile'   : '../DNN/rootFile/plots_BG_DY_NOHR_btag_0j.root' ,
#                      'KffFile' : '../DNN/rootFile/plots_BG_DY_NOHR_MVA080_0j.root' ,
#                      'Regions' : { '0jee' : {
#                                               'kNum' : '0j_ee_in/events/histo_DY' ,
#                                               'kDen' : '0j_uu_in/events/histo_DY' ,
#                                               'RNum' : '0j_ee_out/events/histo_DY' ,
#                                               'RDen' : '0j_ee_in/events/histo_DY' ,
#                                             } ,
#                                    '0jmm' : {
#                                               'kNum' : '0j_uu_in/events/histo_DY' ,
#                                               'kDen' : '0j_ee_in/events/histo_DY' ,
#                                               'RNum' : '0j_uu_out/events/histo_DY' ,
#                                               'RDen' : '0j_uu_in/events/histo_DY' ,
#                                             } ,
#                                   } ,
#                     }


#DYestim = {}
DYestim['hww2l2v_13TeV_2016_0jee_pt2ge20'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.10 ,
                                 'ksyst'   : 0.01 ,
                                 'njet'    : '0j' ,
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_2016_DYin_0jee' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_2016_DYin_0jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYeenorm0j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_2016_0jee_HAccNum_pt2ge20/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_2016_0jee_AccDen/events/histo_DY',
                                 'asyst'   : 0.05 ,
                                }

DYestim['hww2l2v_13TeV_2016_0jee_pt2lt20'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.10 , 
                                 'ksyst'   : 0.01 , 
                                 'njet'    : '0j' , 
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_2016_DYin_0jee' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_2016_DYin_0jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYeenorm0j' , 
                                 'AccNum'  : 'hww2l2v_13TeV_2016_0jee_HAccNum_pt2lt20/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_2016_0jee_AccDen/events/histo_DY',
                                 'asyst'   : 0.05 , 
                                } 

DYestim['hww2l2v_13TeV_2016_0jmm_pt2ge20'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.20 , 
                                 'ksyst'   : 0.01 , 
                                 'njet'    : '0j'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_2016_DYin_0jmm' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_2016_DYin_0jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYmmnorm0j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_2016_0jmm_HAccNum_pt2ge20/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_2016_0jmm_AccDen/events/histo_DY',
                                 'asyst'   : 0.01 , 
                                } 

DYestim['hww2l2v_13TeV_2016_0jmm_pt2lt20'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.20 ,
                                 'ksyst'   : 0.01 ,
                                 'njet'    : '0j'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_2016_DYin_0jmm' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_2016_DYin_0jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYmmnorm0j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_2016_0jmm_HAccNum_pt2lt20/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_2016_0jmm_AccDen/events/histo_DY',
                                 'asyst'   : 0.01 ,
                                }


DYestim['hww2l2v_13TeV_2016_WW_0jee'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'njet'    : '0j'    ,
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_2016_DYin_0jee' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_2016_DYin_0jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYeenorm0j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_2016_WW_0jee_WWAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_2016_0jee_AccDen/events/histo_DY',
                                 'asyst'   : 0.01 , 
                                   }

DYestim['hww2l2v_13TeV_2016_WW_0jmm'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'njet'    : '0j'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_2016_DYin_0jmm' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_2016_DYin_0jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYmmnorm0j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_2016_WW_0jmm_WWAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_2016_0jmm_AccDen/events/histo_DY',
                                 'asyst'   : 0.03 , 
                                   }

#DYestim['hww2l2v_13TeV_2016_top_0jee'] = {
#                                 'rinout'  : 'DYmva0p8top' ,
#                                 'njet'    : '0j'    ,
#                                 'flavour' : 'ee' ,
#                                 'DYProc'  : 'DY' ,
#                                 'SFin'    : 'hww2l2v_13TeV_2016_DYin_btag_0jee' ,
#                                 'SFinDa'  : 'DATA',
#                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
#                                 'DFin'    : 'hww2l2v_13TeV_2016_DYin_btag_0jdf' ,
#                                 'DFinDa'  : 'DATA' ,
#                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
#                                 'NPname'  : 'DYeenorm0j' ,
#                                 'asyst'   : 0.01 ,
#                                   }
#
#DYestim['hww2l2v_13TeV_2016_top_0jmm'] = {
#                                 'rinout'  : 'DYmva0p8top' ,
#                                 'njet'    : '0j'    ,
#                                 'flavour' : 'mm' ,
#                                 'DYProc'  : 'DY' ,
#                                 'SFin'    : 'hww2l2v_13TeV_2016_DYin_btag_0jmm' ,
#                                 'SFinDa'  : 'DATA',
#                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
#                                 'DFin'    : 'hww2l2v_13TeV_2016_DYin_btag_0jdf' ,
#                                 'DFinDa'  : 'DATA' ,
#                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
#                                 'NPname'  : 'DYmmnorm0j' ,
#                                 'asyst'   : 0.01 ,
#                                   }
