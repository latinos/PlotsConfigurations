# variables

#variables = {}
 
variables['dymva_dnn'] = {  'name' : '(hww_DYmvaDNN_0j(Entry$,0) * zeroJet)+(hww_DYmvaDNN_1j(Entry$,0) * oneJet)+(hww_DYmvaDNN_2j(Entry$,0) * 2jggH)+( hww_DYmvaDNN_VBF(Entry$,0) * 2jVBF)',
                           'range' : ([0,0.5,0.6,0.8,0.9,0.95,1.001],),
                           'xaxis' : 'DYMVA_{DNN}',
                            'fold' : 3,
                      'linesToAdd' : ['.L /afs/cern.ch/user/d/ddicroce/work/Latinos/CMSSW_11_0_0_pre7/src/PlotsConfigurations/Configurations/ggH_SF/Full2016_nAODv5/hww_DYmvaDNN_0j.C+', '.L /afs/cern.ch/user/d/ddicroce/work/Latinos/CMSSW_11_0_0_pre7/src/PlotsConfigurations/Configurations/ggH_SF/Full2016_nAODv5/hww_DYmvaDNN_1j.C+', '.L /afs/cern.ch/user/d/ddicroce/work/Latinos/CMSSW_11_0_0_pre7/src/PlotsConfigurations/Configurations/ggH_SF/Full2016_nAODv5/hww_DYmvaDNN_2j.C+', '.L /afs/cern.ch/user/d/ddicroce/work/Latinos/CMSSW_11_0_0_pre7/src/PlotsConfigurations/Configurations/ggH_SF/Full2016_nAODv5/hww_DYmvaDNN_VBF.C+']
                          }
