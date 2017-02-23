
#RAndKff  = {}

RAndKff['DYmva0p8'] = {
                      'RFile'   : 'rootFile/plots_BG_DY_NOHR_MVA060.root' ,
                      'KffFile' : 'rootFile/plots_BG_DY_NOHR_MVA060.root' ,             
                     }
 


#DYestim = {}


DYestim['hww2l2v_13TeV_0jee'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'njet'    : '0j'    , 
                                 'flavour' : 'ee' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_0jee' ,
                                 'SFinDa'  : 'DATA',
                                 'SFinMC'  : ['VZ','Vg','VgS'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_0jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS'],
                                 'Hist'    : 'DY' ,
                                 'NPname'  : 'DYeenorm0j' , 
                                } 

DYestim['hww2l2v_13TeV_0jmm'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'njet'    : '0j'    ,
                                 'flavour' : 'mm' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_0jmm' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','VgS'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_0jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS'],
                                 'Hist'    : 'DY' ,
                                 'NPname'  : 'DYmmnorm0j' ,
                                } 

DYestim['hww2l2v_13TeV_1jee'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'njet'    : '1j'    ,
                                 'flavour' : 'ee' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_1jee' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','VgS'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_1jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS'],
                                 'Hist'    : 'DY' ,
                                 'NPname'  : 'DYeenorm1j' ,
                                } 

DYestim['hww2l2v_13TeV_1jmm'] = {
                                 'rinout'  : 'DYmva0p8' ,
                                 'njet'    : '1j'    ,
                                 'flavour' : 'mm' ,
                                 'SFin'    : 'hww2l2v_13TeV_DYin_1jmm' ,
                                 'SFinDa'  : 'DATA' ,
                                 'SFinMC'  : ['VZ','Vg','VgS'],
                                 'DFin'    : 'hww2l2v_13TeV_DYin_1jdf' ,
                                 'DFinDa'  : 'DATA' ,
                                 'DFinMC'  : ['VZ','Vg','VgS'],
                                 'Hist'    : 'DY' ,
                                 'NPname'  : 'DYmmnorm1j' ,
                                } 


