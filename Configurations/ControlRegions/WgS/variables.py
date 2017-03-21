# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
#variables['events']  = {   'name': '1',      
#                        'range' : (1,0,2),  
#                        'xaxis' : 'events', 
#                         'fold' : 3
#                        }
#    
variables['mll']  = {   'name': 'mll',            #   variable name    
                        'range' : (120,0,120),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 1
                       }

                        
variables['ptll']  = {   'name': 'ptll',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'pt_{ll} [GeV]',  #   x axis name
                         'fold' : 3
                        }
#variables['ptllVSmllMinimi']  = {   'name': '\
#    ptll:TMath::Min (TMath::Min( mll+ (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*1000 , mllOneThree + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[2] > 0 )*1000 ), mllTwoThree + (std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2] > 0 )*1000) \
#                        ',
#                        'range' : (3,0,12, 10,0,100),    #   variable range
#			'xaxis' : 'pt_{ll} : m_{ll} from #gamma^{*}',  #   x axis name
#                         'fold' : 3
#                        }


variables['pfMet']  = {   'name': 'metPfType1',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'pfmet [GeV]',  #   x axis name
                         'fold' : 3
                        }

#variables['pfMetVSmllMinimi']  = {   'name': '\
#    metPfType1:TMath::Min (TMath::Min( mll+ (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*1000 , mllOneThree + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[2] > 0 )*1000 ), mllTwoThree + (std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2] > 0 )*1000) \
#                        ',
#                        'range' : (3,0,12, 70,0,70),    #   variable range
#			'xaxis' : 'pfMET : m_{ll} from #gamma^{*}',  #   x axis name
#                         'fold' : 3
#                        }
##
variables['drll']  = {   'name': 'drll',            #   variable name    
                        'range' : (40,0,4),    #   variable range
                        'xaxis' : 'DR_{ll}',  #   x axis name
                         'fold' : 3
                        }
variables['drllOneThree']  = {   'name': 'drllOneThree',            #   variable name    
                        'range' : (10,0,1),    #   variable range
                        'xaxis' : '#Delta R_{ll} 2nd3rd',  #   x axis name
                         'fold' : 0
                        }
variables['drllTwoThree']  = {   'name': 'drllTwoThree',            #   variable name    
                        'range' : (10,0,1),    #   variable range
                        'xaxis' : '#Delta R_{ll} 2nd3rd',  #   x axis name
                         'fold' : 0
                        }
#variables['drllVSmllMinimi']  = {   'name': '\
#    drll:TMath::Min (TMath::Min( mll+ (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*1000 , mllOneThree + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[2] > 0 )*1000 ), mllTwoThree + (std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2] > 0 )*1000) \
#                        ',
#                        'range' : (3,0,12, 20,0,2),    #   variable range
#			'xaxis' : '#Delta R_{ll} : m_{ll} from #gamma^{*}',  #   x axis name
#                         'fold' : 0
#                        }

#                        

variables['mth']  = {   'name': 'mth',            #   variable name    
                        'range' : (100,0,200),    #   variable range
                        'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
                        'fold' : 3
                        }
#
#variables['mthVSmllMinimi']  = {   'name': '\
#    mth:TMath::Min (TMath::Min( mll+ (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*1000 , mllOneThree + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[2] > 0 )*1000 ), mllTwoThree + (std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2] > 0 )*1000) \
#                        ',
#                        'range' : (3,0,12, 10,0,70),    #   variable range
#			'xaxis' : 'mth : m_{ll} from #gamma^{*}',  #   x axis name
#                         'fold' : 0
#                        }

 
 
variables['mllThird']  = {   'name': 'mllThird',            #   variable name    
                        'range' : (80,0,120),    #   variable range
                        'xaxis' : 'm_{ll} 3rd [GeV]',  #   x axis name
                         'fold' : 0
                        }


variables['mllOneThree']  = {   'name': 'mllOneThree',            #   variable name    
                        'range' : (80,0,120),    #   variable range
                        'xaxis' : 'm_{ll} 1st3rd [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['mllTwoThree']  = {   'name': 'mllTwoThree',            #   variable name    
                        'range' : (80,0,120),    #   variable range
                        'xaxis' : 'm_{ll} 2nd3rd [GeV]',  #   x axis name
                         'fold' : 0
                        }

#
#variables['drllTwoThreeVSmllMinimi']  = {   'name': '\
#    drllTwoThree:TMath::Min (TMath::Min( mll+ (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*1000 , mllOneThree + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[2] > 0 )*1000 ), mllTwoThree + (std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2] > 0 )*1000) \
#                        ',
#                        'range' : (3,0,12, 10,0,1),    #   variable range
#			'xaxis' : '#Delta R_{ll} 2nd3rd : m_{ll} from #gamma^{*}',  #   x axis name
#                         'fold' : 0
#                        }

#

#variables['mllMinimi']  = {   'name': '\
#    TMath::Min (TMath::Min( mll+ (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*1000 , mllOneThree + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[2] > 0 )*1000 ), mllTwoThree + (std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2] > 0 )*1000) \
#                        ',
#                        'range' : (60,0,120),    #   variable range
#                        'xaxis' : 'm_{ll} from #gamma^{*} [GeV]',  #   x axis name
#                         'fold' : 0
#                        }


variables['mllMinimi']  = {   'name': '\
    TMath::Min( mll+ (mll<0)*100000 + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*100000 , mllThird + (mllThird < 0)*100000) \
                        ',
                        'range' : (60,0,120),    #   variable range
                        'xaxis' : 'm_{ll} from #gamma^{*} [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['mllMinimi_New']  = {   'name': '\
                         mllWgSt \
                        ',
                        'range' : (60,0,120),    #   variable range
                        'xaxis' : 'm_{ll} from #gamma^{*} [GeV]',  #   x axis name
                         'fold' : 0
                        }


variables['mllMinimiLowM']  = {   'name': '\
    TMath::Min( mll+ (mll<0)*100000 + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*100000 , mllThird + (mllThird < 0)*100000) \
                        ',
                        'range' : (20,0,10),    #   variable range
                        'xaxis' : 'm_{ll} from #gamma^{*} [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['mllMinimiLLowM']  = {   'name': '\
    TMath::Min( mll+ (mll<0)*100000 + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*100000 , mllThird + (mllThird < 0)*100000) \
                        ',
                        'range' : (100,0,5),    #   variable range
                        'xaxis' : 'm_{ll} from #gamma^{*} [GeV]',  #   x axis name
                         'fold' : 0
                        }
# default mll -9999
#variables['mllMinimiLowM']  = {   'name': '\
#    TMath::Min (TMath::Min( mll+ (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*1000 , mllOneThree + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[2] > 0 )*1000 ), mllTwoThree + (std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2] > 0 )*1000) \
#                        ',
#                        'range' : (20,0,10),    #   variable range
#                        'xaxis' : 'm_{ll} from #gamma^{*} [GeV]',  #   x axis name
#                         'fold' : 0
#                        }
##
##
##
variables['mllTwoThreeLowMass']  = {   'name': 'mllTwoThree',            #   variable name    
                        'range' : (20,0,10),    #   variable range
                        'xaxis' : 'm_{ll} 2nd3rd [GeV]',  #   x axis name
                         'fold' : 0
                        }

##
#variables['mllSpecialMin']  = {   'name': '\
#                      min( min(  mllTwoThree * (std_vector_lepton_isTightLepton[0]==1 && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) +  + 1000 * !(std_vector_lepton_isTightLepton[0]==1 && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) \
#                               , mllOneThree * (std_vector_lepton_isTightLepton[1]==1 && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) +  + 1000 * !(std_vector_lepton_isTightLepton[1]==1 && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) \
#                             ) , mll         * (std_vector_lepton_isTightLepton[2]==1 && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) +  + 1000 * !(std_vector_lepton_isTightLepton[2]==1 && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) \
#                        )',
#                        'range' : (40,0,10),    #   variable range
#                        'xaxis' : 'min m_{ll} from #gamma [GeV]',  #   x axis name
#                         'fold' : 2
#                        }
##
##variables['mllSpecialLowMass']  = {   'name': '\
##                          mllTwoThree * (std_vector_lepton_isTightLepton[0]==1 && std_vector_lepton_isTightLepton[1]!=1  && std_vector_lepton_isTightLepton[2]!=1  && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) \
##                        + mllOneThree * (std_vector_lepton_isTightLepton[1]==1 && std_vector_lepton_isTightLepton[2]!=1  && std_vector_lepton_isTightLepton[0]!=1  && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) \
##                        + mll         * (std_vector_lepton_isTightLepton[2]==1 && std_vector_lepton_isTightLepton[0]!=1  && std_vector_lepton_isTightLepton[1]!=1  && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) \
##                        ',
##                        'range' : (10,0,10),    #   variable range
##                        'xaxis' : 'm_{ll} from #gamma [GeV]',  #   x axis name
##                         'fold' : 2
##                        }
##
##
##
##
##variables['mllSpecial']  = {   'name': '\
##                          mllTwoThree * (std_vector_lepton_isTightLepton[0]==1 && std_vector_lepton_isTightLepton[1]!=1  && std_vector_lepton_isTightLepton[2]!=1  && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) \
##                        + mllOneThree * (std_vector_lepton_isTightLepton[1]==1 && std_vector_lepton_isTightLepton[2]!=1  && std_vector_lepton_isTightLepton[0]!=1  && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) \
##                        + mll         * (std_vector_lepton_isTightLepton[2]==1 && std_vector_lepton_isTightLepton[0]!=1  && std_vector_lepton_isTightLepton[1]!=1  && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) \
##                        ',
##                        'range' : (40,0,100),    #   variable range
##                        'xaxis' : 'm_{ll} from #gamma [GeV]',  #   x axis name
##                         'fold' : 2
##                        }
##
##
##
##
##
##variables['mllSpecialMin']  = {   'name': '\
##                      min( min(  mllTwoThree * (std_vector_lepton_isTightLepton[0]==1 && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) +  + 1000 * !(std_vector_lepton_isTightLepton[0]==1 && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) \
##                               , mllOneThree * (std_vector_lepton_isTightLepton[1]==1 && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) +  + 1000 * !(std_vector_lepton_isTightLepton[1]==1 && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) \
##                             ) , mll         * (std_vector_lepton_isTightLepton[2]==1 && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) +  + 1000 * !(std_vector_lepton_isTightLepton[2]==1 && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) \
##                        )',
##                        'range' : (40,0,10),    #   variable range
##                        'xaxis' : 'min m_{ll} from #gamma [GeV]',  #   x axis name
##                         'fold' : 2
##                        }
##
##
##
##
##
##variables['drllSpecialMin']  = {   'name': '\
##                      min( min(  drllTwoThree * (std_vector_lepton_isTightLepton[0]==1 && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) +  + 1000 * !(std_vector_lepton_isTightLepton[0]==1 && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) \
##                               , drllOneThree * (std_vector_lepton_isTightLepton[1]==1 && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) +  + 1000 * !(std_vector_lepton_isTightLepton[1]==1 && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) \
##                             ) , drll         * (std_vector_lepton_isTightLepton[2]==1 && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) +  + 1000 * !(std_vector_lepton_isTightLepton[2]==1 && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) \
##                        )',
##                        'range' : (40,0,2),    #   variable range
##                        'xaxis' : 'min #Delta R_{ll} from #gamma [GeV]',  #   x axis name
##                         'fold' : 2
##                        }
##
##
##
##variables['drllSpecialLow']  = {   'name': '\
##                          drllTwoThree * (std_vector_lepton_isTightLepton[0]==1 && std_vector_lepton_isTightLepton[1]!=1  && std_vector_lepton_isTightLepton[2]!=1  && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) \
##                        + drllOneThree * (std_vector_lepton_isTightLepton[1]==1 && std_vector_lepton_isTightLepton[2]!=1  && std_vector_lepton_isTightLepton[0]!=1  && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) \
##                        + drll         * (std_vector_lepton_isTightLepton[2]==1 && std_vector_lepton_isTightLepton[0]!=1  && std_vector_lepton_isTightLepton[1]!=1  && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) \
##                        ',
##                        'range' : (10,0,1),    #   variable range
##                        'xaxis' : '#Delta r_{ll} from #gamma',  #   x axis name
##                         'fold' : 2
##                        }
##
##
##
##
##variables['drllSpecial']  = {   'name': '\
##                          drllTwoThree * (std_vector_lepton_isTightLepton[0]==1 && std_vector_lepton_isTightLepton[1]!=1  && std_vector_lepton_isTightLepton[2]!=1  && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) \
##                        + drllOneThree * (std_vector_lepton_isTightLepton[1]==1 && std_vector_lepton_isTightLepton[2]!=1  && std_vector_lepton_isTightLepton[0]!=1  && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) \
##                        + drll         * (std_vector_lepton_isTightLepton[2]==1 && std_vector_lepton_isTightLepton[0]!=1  && std_vector_lepton_isTightLepton[1]!=1  && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) \
##                        ',
##                        'range' : (100,0,10),    #   variable range
##                        'xaxis' : '#Delta r_{ll} from #gamma',  #   x axis name
##                         'fold' : 2
##                        }
##
##
##
##
##
##variables['drllSpecialNoIdLow']  = {   'name': '\
##                          drllTwoThree * (std_vector_lepton_isTightLepton[0]==1   && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) \
##                        + drllOneThree * (std_vector_lepton_isTightLepton[1]==1   && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) \
##                        + drll         * (std_vector_lepton_isTightLepton[2]==1   && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) \
##                        ',
##                        'range' : (10,0,1),    #   variable range
##                        'xaxis' : '#Delta r_{ll} from #gamma',  #   x axis name
##                         'fold' : 2
##                        }
##
##
##
##
##variables['drllSpecialNoId']  = {   'name': '\
##                          drllTwoThree * (std_vector_lepton_isTightLepton[0]==1   && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) \
##                        + drllOneThree * (std_vector_lepton_isTightLepton[1]==1   && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) \
##                        + drll         * (std_vector_lepton_isTightLepton[2]==1   && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) \
##                        ',
##                        'range' : (100,0,10),    #   variable range
##                        'xaxis' : '#Delta r_{ll} from #gamma',  #   x axis name
##                         'fold' : 2
##                        }
##
##
##
##
##
##
##
##
##
###variables['mllVSmth'] = {   'name': 'mll:mth',            #   variable name    
##                        #'range' : (10,0,200, 5,10,110),            #   variable range
##                        #'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
##                        #'fold' : 3
##                        #}
##
##
###variables['mllVSmth'] = {   'name': 'mll:mth',            #   variable name    
##                        #'range' : (7,60,200, 5,10,110),            #   variable range
##                        #'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
##                        #'fold' : 3 , 
##                        ## do weighted plot too
##                        #'doWeight' : 1,
##                        #'binX'     : 7,
##                        #'binY'     : 5
##                        ##
##                        #}
##
##
variables['mtw1']  = {   'name': 'mtw1',      
                        'range' : (50,0,100),  
                        'xaxis' : 'mtw1 [GeV]',   
                         'fold' : 3
                        }

#variables['mtw1VSmllMinimi']  = {   'name': '\
#    mtw1:TMath::Min (TMath::Min( mll+ (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*1000 , mllOneThree + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[2] > 0 )*1000 ), mllTwoThree + (std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2] > 0 )*1000) \
#                        ',
#                        'range' : (3,0,12, 70,0,70),    #   variable range
#			'xaxis' : 'mtw1 : m_{ll} from #gamma^{*}',  #   x axis name
#                         'fold' : 3
#                        }
##
##                        
##variables['njet']  = {   'name': 'njet',      
##                        'range' : (4,0,4),  
##                        'xaxis' : 'njet',   
##                         'fold' : 3
##                        }
##
##                        
##
##
##
variables['mpmet']  = {   'name': 'mpmet',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'mpmet [GeV]',  #   x axis name
                         'fold' : 3
                        }
 

#variables['mpmetVSmllMinimi']  = {   'name': '\
#    mpmet:TMath::Min (TMath::Min( mll+ (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*1000 , mllOneThree + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[2] > 0 )*1000 ), mllTwoThree + (std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2] > 0 )*1000) \
#                        ',
#                        'range' : (3,0,12, 70,0,70),    #   variable range
#			'xaxis' : 'mpmet : m_{ll} from #gamma^{*}',  #   x axis name
#                         'fold' : 3
#                        }
#
##
##
##
variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
                        'range' : (45,0,90),   
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 0                         
                        }
#
#variables['pt1VSmllMinimi'] = {   'name': '\
#    std_vector_lepton_pt[0]:TMath::Min (TMath::Min( mll+ (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*1000 , mllOneThree + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[2] > 0 )*1000 ), mllTwoThree + (std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2] > 0 )*1000)',
#                        'range' : (3,0,12, 10,8,200),            #   variable range
#			'xaxis' : 'p_{T}^{1} : m_{ll} from #gamma^{*}',      #   x axis name
#                        'fold' : 0
#                        }
variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',     
                        'range' : (30,0,60),   
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 0                         
                        }
#variables['pt2VSmllMinimi'] = {   'name': '\
#    std_vector_lepton_pt[1]:TMath::Min (TMath::Min( mll+ (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*1000 , mllOneThree + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[2] > 0 )*1000 ), mllTwoThree + (std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2] > 0 )*1000) ',
#                        'range' : (3,0,12, 10,8,200),            #   variable range
#			'xaxis' : 'p_{T}^{2} : m_{ll} from #gamma^{*}',      #   x axis name
#                        'fold' : 0
#                        }


variables['pt3']  = {   'name': 'std_vector_lepton_pt[2]',     
                        'range' : (30,0,60),   
                        'xaxis' : 'p_{T} 3rd lep',
                        'fold'  : 0                         
                        }

#variables['pt3VSmllMinimi'] = {   'name': '\
#    std_vector_lepton_pt[2]:TMath::Min (TMath::Min( mll+ (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*1000 , mllOneThree + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[2] > 0 )*1000 ), mllTwoThree + (std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2] > 0 )*1000)',
#                        'range' : (3,0,12, 10,8,200),            #   variable range
#			'xaxis' : 'p_{T}^{3} : m_{ll} from #gamma^{*}',      #   x axis name
#                        'fold' : 3
#                        }
