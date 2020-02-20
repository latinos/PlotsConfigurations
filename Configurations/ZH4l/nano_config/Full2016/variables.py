# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow


variables['class0'] = {
     'name': 'hww_ZH_newBDTnew(Entry$,0)',
     'range' : ([-0.50,-0.25,-0.15,0.,0.15,0.25,0.35,0.50,0.75],),
     'xaxis' : 'MVA discriminant ZH',
     'fold' : 3,
     'linesToAdd' : ['.L /afs/cern.ch/work/k/kaura/NewLatino_v2/CMSSW_10_2_5/src/PlotsConfigurations/Configurations/ZH4l/nano_config/Full2016/BDT/new_macros/init_var/hww_ZH_newBDTnew.C+']   
}  #change the path of macro


variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }
variables['pt1']  = {   'name': 'Lepton_pt[0]',            #   variable name    
                        'range' : (50,0.,500),    #   variable range
                        'xaxis' : 'lept1_p_{T} [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['pt4']  = {   'name': 'Lepton_pt[3]',            #   variable name    
                       'range' : (30,0.,200),    #   variable range
                       'xaxis' : 'lept4_p_{T} [GeV]',  #   x axis name
                        'fold' : 0
                       }

variables['z0DeltaR_zh4l']  = {   'name': 'z0DeltaR_zh4l',            #   variable name    
                        'range' : (12,0,6),    #   variable range
                        'xaxis' : 'z0DeltaR [GeV]',  #   x axis name
                       'fold' : 0
                     }

variables['z1DeltaR_zh4l']  = {   'name': 'z1DeltaR_zh4l',            #   variable name    
                        'range' : (12,0,6),    #   variable range
                        'xaxis' : 'XDeltaR [GeV]',  #   x axis name
                       'fold' : 0
                     }

variables['z0Mass_zh4l']  = {   'name': 'z0Mass_zh4l',            #   variable name    
                        'range' : (30,50,140),    #   variable range
                        'xaxis' : 'z0Mass [GeV]',  #   x axis name
                       'fold' : 0
                     }

variables['z1Mass_zh4l']  = {   'name': 'z1Mass_zh4l',            #   variable name    
                        'range' : (25,0,250),    #   variable range
                        'xaxis' : 'XMass [GeV]',  #   x axis name
                       'fold' : 0
                     }

variables['mllll_zh4l']  = {   'name': 'mllll_zh4l',            #   variable name    
                        'range' : (60,0,600),    #   variable range
                        'xaxis' : 'mllll [GeV]',  #   x axis name
                       'fold' : 0
                     }

variables['z1Mt_zh4l']  = {   'name': 'z1Mt_zh4l',            #   variable name    
                        'range' : (5,0,150),    #   variable range
                        'xaxis' : 'H_Mt [GeV]',  #   x axis name
                       'fold' : 0
                     }

variables['PuppiMET_pt']  = {   'name': 'PuppiMET_pt',            #   variable name    
                        'range' : (50,0,250),    #   variable range
                        'xaxis' : 'PuppiMET_pt[GeV]',  #   x axis name
                       'fold' : 0
                     }

variables['z1DeltaPhi_zh4l']  = {   'name': 'z1DeltaPhi_zh4l',            #   variable name    
                        'range' : (14,-3.5,3.5),    #   variable range
                        'xaxis' : 'XDeltaPhi [GeV]',  #   x axis name
                       'fold' : 0
                     }

variables['lep1Mt_zh4l']  = {   'name': 'lep1Mt_zh4l',            #   variable name    
                        'range' : (30,0,550),    #   variable range
                        'xaxis' : 'lep1Mt [GeV]',  #   x axis name
                       'fold' : 0
                     }

variables['lep2Mt_zh4l']  = {   'name': 'lep2Mt_zh4l',            #   variable name    
                        'range' : (30,0,350),    #   variable range
                        'xaxis' : 'lep2Mt [GeV]',  #   x axis name
                       'fold' : 0
                     }


