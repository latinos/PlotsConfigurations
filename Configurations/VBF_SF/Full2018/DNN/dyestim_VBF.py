
#RAndKff  = {}
RAndKff['DYmva0p8'] = {
                      'RFile'   : 'rootFile/plots_BG_DY_NOHR_2018_MVA080_VBF.root' ,
                      'KffFile' : 'rootFile/plots_BG_DY_NOHR_2018_MVA080_VBF.root' ,
                      'Regions' : { '2jVBFee' : {
                                               'kNum' : 'VBF_ee_in/events/histo_DY' ,
                                               'kDen' : 'VBF_uu_in/events/histo_DY' ,
                                               'RNum' : 'VBF_ee_out/events/histo_DY' ,
                                               'RDen' : 'VBF_ee_in/events/histo_DY' ,
                                             } ,
                                    '2jVBFmm' : {
                                               'kNum' : 'VBF_uu_in/events/histo_DY' ,
                                               'kDen' : 'VBF_ee_in/events/histo_DY' ,
                                               'RNum' : 'VBF_uu_out/events/histo_DY' ,
                                               'RDen' : 'VBF_uu_in/events/histo_DY' ,
                                             } ,
                                   } ,
                     }

#RAndKff['DYmva0p8top'] = {
#                      'RFile'   : 'rootFile/plots_BG_DY_NOHR_2018_btag_VBF.root' ,
#                      'KffFile' : 'rootFile/plots_BG_DY_NOHR_2018_MVA080_VBF.root' ,
#                      'Regions' : { '2jVBFee' : {
#                                               'kNum' : 'VBF_ee_in/events/histo_DY' ,
#                                               'kDen' : 'VBF_uu_in/events/histo_DY' ,
#                                               'RNum' : '2j_VBF_ee_out/events/histo_DY' ,
#                                               'RDen' : '2j_VBF_ee_in/events/histo_DY' ,
#                                             } ,
#                                    '2jVBFmm' : {
#                                               'kNum' : 'VBF_uu_in/events/histo_DY' ,
#                                               'kDen' : 'VBF_ee_in/events/histo_DY' ,
#                                               'RNum' : '2j_VBF_uu_out/events/histo_DY' ,
#                                               'RDen' : '2j_VBF_uu_in/events/histo_DY' ,
#                                             } ,
#                                   } ,
#                     }
#

#DYestim = {}

DYestim['hww2l2v_13TeV_2018_2jee_vbf_lowmjj'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.01 ,
                                 'ksyst'   : 0.01 ,
                                 'njet'    : '2jVBF'    ,
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_2018_DYin_2jee_vbf' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_2018_DYin_2jdf_vbf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYeenorm2j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_2018_2jee_vbf_lowmjj_HAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_2018_2jee_vbf_AccDen/events/histo_DY',
                                 'asyst'   : 0.06 ,
                                }

DYestim['hww2l2v_13TeV_2018_2jee_vbf_highmjj'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.01 ,
                                 'ksyst'   : 0.01 ,
                                 'njet'    : '2jVBF'    ,
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_2018_DYin_2jee_vbf' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_2018_DYin_2jdf_vbf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYeenorm2j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_2018_2jee_vbf_highmjj_HAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_2018_2jee_vbf_AccDen/events/histo_DY',
                                 'asyst'   : 0.06 ,
                                }

DYestim['hww2l2v_13TeV_2018_2jmm_vbf_lowmjj'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.10 ,
                                 'ksyst'   : 0.01 ,
                                 'njet'    : '2jVBF'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_2018_DYin_2jmm_vbf' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_2018_DYin_2jdf_vbf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYmmnorm2j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_2018_2jmm_vbf_lowmjj_HAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_2018_2jmm_vbf_AccDen/events/histo_DY',
                                 'asyst'   : 0.01 ,
                                }

DYestim['hww2l2v_13TeV_2018_2jmm_vbf_highmjj'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'rsyst'   : 0.10 ,
                                 'ksyst'   : 0.01 ,
                                 'njet'    : '2jVBF'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_2018_DYin_2jmm_vbf' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_2018_DYin_2jdf_vbf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYmmnorm2j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_2018_2jmm_vbf_highmjj_HAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_2018_2jmm_vbf_AccDen/events/histo_DY',
                                 'asyst'   : 0.01 ,
                                }

DYestim['hww2l2v_13TeV_2018_WW_2jee_vbf'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'njet'    : '2jVBF'    ,
                                 'flavour' : 'ee' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_2018_DYin_2jee_vbf' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_2018_DYin_2jdf_vbf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYeenorm2j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_2018_WW_2jee_vbf_WWAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_2018_2jee_vbf_AccDen/events/histo_DY',
                                 'asyst'   : 0.09 ,
                                   }

DYestim['hww2l2v_13TeV_2018_WW_2jmm_vbf'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'njet'    : '2jVBF'    ,
                                 'flavour' : 'mm' ,
                                 'DYProc'  : 'DY' ,
                                 'SFin'    : 'hww2l2v_13TeV_2018_DYin_2jmm_vbf' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'DFin'    : 'hww2l2v_13TeV_2018_DYin_2jdf_vbf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
                                 'NPname'  : 'DYmmnorm2j' ,
                                 'AccNum'  : 'hww2l2v_13TeV_2018_WW_2jmm_vbf_WWAccNum/events/histo_DY',
                                 'AccDen'  : 'hww2l2v_13TeV_2018_2jmm_vbf_AccDen/events/histo_DY',
                                 'asyst'   : 0.03 ,
                                   }

#DYestim['hww2l2v_13TeV_2018_top_2jee_vbf'] = {
#                                 'rinout'  : 'DYmva0p8top' ,
#                                 'njet'    : '2jVBF'    ,
#                                 'flavour' : 'ee' ,
#                                 'DYProc'  : 'DY' ,
#                                 'SFin'    : 'hww2l2v_13TeV_2018_DYin_btag_2jee_vbf' ,
#                                 'SFinDa'  : 'DATA',
#                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
#                                 'DFin'    : 'hww2l2v_13TeV_2018_DYin_btag_2jdf_vbf' ,
#                                 'DFinDa'  : 'DATA' ,
#                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
#                                 'NPname'  : 'DYeenorm2j' ,
#                                 'asyst'   : 0.01 ,
#                                   }
#
#DYestim['hww2l2v_13TeV_2018_top_2jmm_vbf'] = {
#                                 'rinout'  : 'DYmva0p8top' ,
#                                 'njet'    : '2jVBF'    ,
#                                 'flavour' : 'mm' ,
#                                 'DYProc'  : 'DY' ,
#                                 'SFin'    : 'hww2l2v_13TeV_2018_DYin_btag_2jmm_vbf' ,
#                                 'SFinDa'  : 'DATA',
#                                 'SFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
#                                 'DFin'    : 'hww2l2v_13TeV_2018_DYin_btag_2jdf_vbf' ,
#                                 'DFinDa'  : 'DATA' ,
#                                 'DFinMC'  : ['VZ','Vg','VgS_L','VgS_H'],
#                                 'NPname'  : 'DYmmnorm2j' ,
#                                 'asyst'   : 0.06 ,
#                                   }
