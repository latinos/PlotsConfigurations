
variables['Events']  = {   'name': '1',     
                           'range' : (1,0,1),   
                           'xaxis' : '1',
                           'fold'  : 3
                        }

variables['pt1']  = {   'name': 'Lepton_pt[0]',     
                        'range' : (40,20,350),   
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 3
                        }


variables['eta1']  = {  'name': 'Lepton_eta[0]',     
                        'range' : (40,-3,3),   
                        'xaxis' : '#eta 1st lep',
                        'fold'  : 3                         
                        }


variables['Puppimet']  = {
                        'name': 'PuppiMET_pt',
                        'range' : (40,0,300),
                        'xaxis' : 'puppimet [GeV]',
                        'fold'  : 3
                        }

variables['mtw1']  = {
                        'name': 'mtw1',
                        'range' : (40,0,300),
                        'xaxis' : 'mtw1 [GeV]',
                        'fold'  : 3
                        }

variables['Whad_mass']  = {
                        'name': 'Whad_mass',
                        'range' : (40,0,300),
                        'xaxis' : 'Whad_mass [GeV]',
                        'fold'  : 3
                        }

variables['Whad_pt']  = {
                        'name': 'Whad_pt',
                        'range' : (40,0,300),
                        'xaxis' : 'Whad_pt [GeV]',
                        'fold'  : 3
                        }


variables['lmet_pt']  = {
                        'name': 'Wlep_pt_Puppi',
                        'range' : (40,0,600),
                        'xaxis' : 'lepMET P_{T} [GeV]',
                        'fold'  : 3
                        }


variables['lmet_mt']  = {
                        'name': 'Wlep_mt',
                        'range' : (40,0,2000),
                        'xaxis' : 'mt_{lepMET} [GeV]',
                        'fold'  : 3
                        }


variables['lepMETjj_mt']  = {
                        'name': 'Hlnjj_mt',
                        'range' : (40,0,400),
                        'xaxis' : 'lepMETjj m_{T} [GeV]',
                        'fold'  : 3
                        }


variables['lepMETjj_mass']  = {
                        'name': 'Hlnjj_mass',
                        'range' : (40,0,2000),
                        'xaxis' : 'm_{lepMETjj} [GeV]',
                        'fold'  : 3
                        }


variables['WptOvHak4M']  = {
                        'name': 'WptOvHak4M',
                        'range' : (40,0,3),
                        'xaxis' : 'WptOvHak4M',
                        'fold'  : 3
                        }

variables['WptOvHak4M_puppi']  = {
                        'name': 'min(Wlep_pt_Puppi, Whad_pt)/Hlnjj_mass',
                        'range' : (40,0,3),
                        'xaxis' : 'WptOvHak4M_puppi',
                        'fold'  : 3
                        }





