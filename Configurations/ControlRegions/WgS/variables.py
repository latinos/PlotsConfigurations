# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }
    
variables['mll']  = {   'name': 'mll',            #   variable name    
                        'range' : (80,0,120),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 1
                        }
                        

variables['drll']  = {   'name': 'drll',            #   variable name    
                        'range' : (20,0,2),    #   variable range
                        'xaxis' : 'DR_{ll}',  #   x axis name
                         'fold' : 3
                        }
                        

#variables['mth']  = {   'name': 'mth',            #   variable name    
                        #'range' : (20,0,400),    #   variable range
                        #'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
                        #'fold' : 3
                        #}


 
 
variables['mllThird']  = {   'name': 'mllThird',            #   variable name    
                        'range' : (80,0,120),    #   variable range
                        'xaxis' : 'm_{ll} 3rd [GeV]',  #   x axis name
                         'fold' : 1
                        }


variables['mllOneThree']  = {   'name': 'mllOneThree',            #   variable name    
                        'range' : (80,0,120),    #   variable range
                        'xaxis' : 'm_{ll} 1st3rd [GeV]',  #   x axis name
                         'fold' : 1
                        }

variables['mllTwoThree']  = {   'name': 'mllTwoThree',            #   variable name    
                        'range' : (80,0,120),    #   variable range
                        'xaxis' : 'm_{ll} 2nd3rd [GeV]',  #   x axis name
                         'fold' : 1
                        }


variables['drllTwoThree']  = {   'name': 'drllTwoThree',            #   variable name    
                        'range' : (10,0,1),    #   variable range
                        'xaxis' : '#Delta R_{ll} 2nd3rd',  #   x axis name
                         'fold' : 3
                        }




variables['mllTwoThreeLowMass']  = {   'name': 'mllTwoThree',            #   variable name    
                        'range' : (10,0,10),    #   variable range
                        'xaxis' : 'm_{ll} 2nd3rd [GeV]',  #   x axis name
                         'fold' : 1
                        }


variables['mllSpecialLowMass']  = {   'name': '\
                          mllTwoThree * (std_vector_lepton_isTightLepton[0]==1 && std_vector_lepton_isTightLepton[1]!=1  && std_vector_lepton_isTightLepton[2]!=1  && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) \
                        + mllOneThree * (std_vector_lepton_isTightLepton[1]==1 && std_vector_lepton_isTightLepton[2]!=1  && std_vector_lepton_isTightLepton[0]!=1  && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) \
                        + mll         * (std_vector_lepton_isTightLepton[2]==1 && std_vector_lepton_isTightLepton[0]!=1  && std_vector_lepton_isTightLepton[1]!=1  && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) \
                        ',
                        'range' : (10,0,10),    #   variable range
                        'xaxis' : 'm_{ll} from #gamma [GeV]',  #   x axis name
                         'fold' : 2
                        }




variables['mllSpecial']  = {   'name': '\
                          mllTwoThree * (std_vector_lepton_isTightLepton[0]==1 && std_vector_lepton_isTightLepton[1]!=1  && std_vector_lepton_isTightLepton[2]!=1  && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) \
                        + mllOneThree * (std_vector_lepton_isTightLepton[1]==1 && std_vector_lepton_isTightLepton[2]!=1  && std_vector_lepton_isTightLepton[0]!=1  && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) \
                        + mll         * (std_vector_lepton_isTightLepton[2]==1 && std_vector_lepton_isTightLepton[0]!=1  && std_vector_lepton_isTightLepton[1]!=1  && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) \
                        ',
                        'range' : (40,0,100),    #   variable range
                        'xaxis' : 'm_{ll} from #gamma [GeV]',  #   x axis name
                         'fold' : 2
                        }





variables['mllSpecialMin']  = {   'name': '\
                      min( min(  mllTwoThree * (std_vector_lepton_isTightLepton[0]==1 && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) +  + 1000 * !(std_vector_lepton_isTightLepton[0]==1 && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) \
                               , mllOneThree * (std_vector_lepton_isTightLepton[1]==1 && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) +  + 1000 * !(std_vector_lepton_isTightLepton[1]==1 && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) \
                             ) , mll         * (std_vector_lepton_isTightLepton[2]==1 && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) +  + 1000 * !(std_vector_lepton_isTightLepton[2]==1 && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) \
                        )',
                        'range' : (40,0,10),    #   variable range
                        'xaxis' : 'min m_{ll} from #gamma [GeV]',  #   x axis name
                         'fold' : 2
                        }





variables['drllSpecialMin']  = {   'name': '\
                      min( min(  drllTwoThree * (std_vector_lepton_isTightLepton[0]==1 && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) +  + 1000 * !(std_vector_lepton_isTightLepton[0]==1 && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) \
                               , drllOneThree * (std_vector_lepton_isTightLepton[1]==1 && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) +  + 1000 * !(std_vector_lepton_isTightLepton[1]==1 && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) \
                             ) , drll         * (std_vector_lepton_isTightLepton[2]==1 && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) +  + 1000 * !(std_vector_lepton_isTightLepton[2]==1 && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) \
                        )',
                        'range' : (40,0,2),    #   variable range
                        'xaxis' : 'min #Delta R_{ll} from #gamma [GeV]',  #   x axis name
                         'fold' : 2
                        }



variables['drllSpecialLow']  = {   'name': '\
                          drllTwoThree * (std_vector_lepton_isTightLepton[0]==1 && std_vector_lepton_isTightLepton[1]!=1  && std_vector_lepton_isTightLepton[2]!=1  && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) \
                        + drllOneThree * (std_vector_lepton_isTightLepton[1]==1 && std_vector_lepton_isTightLepton[2]!=1  && std_vector_lepton_isTightLepton[0]!=1  && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) \
                        + drll         * (std_vector_lepton_isTightLepton[2]==1 && std_vector_lepton_isTightLepton[0]!=1  && std_vector_lepton_isTightLepton[1]!=1  && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) \
                        ',
                        'range' : (10,0,1),    #   variable range
                        'xaxis' : '#Delta r_{ll} from #gamma',  #   x axis name
                         'fold' : 2
                        }




variables['drllSpecial']  = {   'name': '\
                          drllTwoThree * (std_vector_lepton_isTightLepton[0]==1 && std_vector_lepton_isTightLepton[1]!=1  && std_vector_lepton_isTightLepton[2]!=1  && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) \
                        + drllOneThree * (std_vector_lepton_isTightLepton[1]==1 && std_vector_lepton_isTightLepton[2]!=1  && std_vector_lepton_isTightLepton[0]!=1  && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) \
                        + drll         * (std_vector_lepton_isTightLepton[2]==1 && std_vector_lepton_isTightLepton[0]!=1  && std_vector_lepton_isTightLepton[1]!=1  && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) \
                        ',
                        'range' : (100,0,10),    #   variable range
                        'xaxis' : '#Delta r_{ll} from #gamma',  #   x axis name
                         'fold' : 2
                        }





variables['drllSpecialNoIdLow']  = {   'name': '\
                          drllTwoThree * (std_vector_lepton_isTightLepton[0]==1   && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) \
                        + drllOneThree * (std_vector_lepton_isTightLepton[1]==1   && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) \
                        + drll         * (std_vector_lepton_isTightLepton[2]==1   && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) \
                        ',
                        'range' : (10,0,1),    #   variable range
                        'xaxis' : '#Delta r_{ll} from #gamma',  #   x axis name
                         'fold' : 2
                        }




variables['drllSpecialNoId']  = {   'name': '\
                          drllTwoThree * (std_vector_lepton_isTightLepton[0]==1   && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) \
                        + drllOneThree * (std_vector_lepton_isTightLepton[1]==1   && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) \
                        + drll         * (std_vector_lepton_isTightLepton[2]==1   && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) \
                        ',
                        'range' : (100,0,10),    #   variable range
                        'xaxis' : '#Delta r_{ll} from #gamma',  #   x axis name
                         'fold' : 2
                        }






#variables['mllVSmth'] = {   'name': 'mll:mth',            #   variable name    
                        #'range' : (10,0,200, 5,10,110),            #   variable range
                        #'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                        #'fold' : 3
                        #}


#variables['mllVSmth'] = {   'name': 'mll:mth',            #   variable name    
                        #'range' : (7,60,200, 5,10,110),            #   variable range
                        #'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                        #'fold' : 3 , 
                        ## do weighted plot too
                        #'doWeight' : 1,
                        #'binX'     : 7,
                        #'binY'     : 5
                        ##
                        #}


variables['mtw1']  = {   'name': 'mtw1',      
                        'range' : (10,0,100),  
                        'xaxis' : 'mtw1 [GeV]',   
                         'fold' : 3
                        }


                        
variables['njet']  = {   'name': 'njet',      
                        'range' : (4,0,4),  
                        'xaxis' : 'njet',   
                         'fold' : 3
                        }

                        
variables['ptll']  = {   'name': 'ptll',            #   variable name    
                        'range' : (10,0,100),    #   variable range
                        'xaxis' : 'pt_{ll} [GeV]',  #   x axis name
                         'fold' : 3
                        }

variables['met']  = {   'name': 'metPfType1',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'pfmet [GeV]',  #   x axis name
                         'fold' : 0
                        }



variables['mpmet']  = {   'name': 'mpmet',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'mpmet [GeV]',  #   x axis name
                         'fold' : 0
                        }




variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
                        'range' : (10,0,100),   
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 3                         
                        }

variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',     
                        'range' : (10,0,100),   
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 3                         
                        }

variables['pt3']  = {   'name': 'std_vector_lepton_pt[2]',     
                        'range' : (20,0,40),   
                        'xaxis' : 'p_{T} 3rd lep',
                        'fold'  : 3                         
                        }
