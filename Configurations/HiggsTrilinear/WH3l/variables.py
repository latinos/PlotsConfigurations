# variables

#variables = {}
    
#'fold' : # 1 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
#variables['events']  = {   'name': '1',      
                        #'range' : (1,1,2),  
                        #'xaxis' : 'events', 
                         #'fold' : 3
                        #}

#variables['pt1']  = {   'name': 'std_vector_lepton_pt[1]',            #   variable name    
                        #'range' : (11,1.,211),    #   variable range
                        #'xaxis' : 'lept1_p_{T} [GeV]',  #   x axis name
                         #'fold' : 1
                        #}
    
#variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',            #   variable name    
                        #'range' : (11,1.,211),    #   variable range
                        #'xaxis' : 'lept2_p_{T} [GeV]',  #   x axis name
                         #'fold' : 1
                        #}

#variables['pt3']  = {   'name': 'std_vector_lepton_pt[2]',            #   variable name    
                        #'range' : (7,1.,111),    #   variable range
                        #'xaxis' : 'lept3_p_{T} [GeV]',  #   x axis name
                         #'fold' : 1
                        #}

#variables['eta1']  = {   'name': 'std_vector_lepton_eta[1]',            #   variable name    
                        #'range' : (11,-2.5,2.5),    #   variable range
                        #'xaxis' : 'lept1_eta',  #   x axis name
                         #'fold' : 1
                        #}

#variables['eta2']  = {   'name': 'std_vector_lepton_eta[1]',            #   variable name    
                        #'range' : (11,-2.5,2.5),    #   variable range
                        #'xaxis' : 'lept2_eta',  #   x axis name
                         #'fold' : 1
                        #}

#variables['eta3']  = {   'name': 'std_vector_lepton_eta[2]',            #   variable name    
                        #'range' : (11,-2.5,2.5),    #   variable range
                        #'xaxis' : 'lept3_eta',  #   x axis name
                         #'fold' : 1
                        #}

#variables['phi1']  = {   'name': 'std_vector_lepton_phi[1]',            #   variable name    
                        #'range' : (15,-3.15,3.15),    #   variable range
                        #'xaxis' : 'lept1_phi',  #   x axis name
                         #'fold' : 1
                        #}

#variables['phi2']  = {   'name': 'std_vector_lepton_phi[1]',            #   variable name    
                        #'range' : (15,-3.15,3.15),    #   variable range
                        #'xaxis' : 'lept2_phi',  #   x axis name
                         #'fold' : 1
                        #}

#variables['phi3']  = {   'name': 'std_vector_lepton_phi[2]',            #   variable name    
                        #'range' : (11,-3.15,3.15),    #   variable range
                        #'xaxis' : 'lept3_phi',  #   x axis name
                         #'fold' : 1
                        #}

#variables['zveto_3l']  = {   'name': 'zveto_3l',            #   variable name    
                        #'range' : (21,1,111),    #   variable range
                        #'xaxis' : 'm_{ll} - M_{Z} [GeV]',  #   x axis name
                         #'fold' : 1
                        #}

#variables['drllmin3l']  = {   'name': 'drllmin3l',            #   variable name    
##                         'range' : ([1.,1.75, 1.5, 2.1, 2.5, 4.1],),    #   variable range
##                        'range' : (5,1,5),    #   variable range
                         #'range' : ([1.,1.75,1.1,1.25,1.5,1.75,2.5,4.1],),    #   variable range
                         #'xaxis' : 'min #Delta R_{ll}',  #   x axis name
                         #'fold' : 1
                        #}

#variables['drllmin3l_sssf']  = {   'name': 'drllmin3l',            #   variable name    
         ##               'range' : (3,1,4),    #   variable range
                         #'range' : ([1.,1.1,1.25,1.5,1.75,2.1,2.5,4.1],),    #   variable range
                        #'xaxis' : 'min #Delta R_{ll}',  #   x axis name
                         #'fold' : 1
                        #}

#variables['mllmin3l']  = {   'name': 'mllmin3l',            #   variable name    
                       #'range' : (11,11,111),    #   variable range
                        #'xaxis' : 'min m_{ll} [GeV]',  #   x axis name
                         #'fold' : 1
                        #}


#variables['mlll']  = {   'name': 'mlll',            #   variable name    
                        #'range' : (51,1.,511),    #   variable range
                        #'xaxis' : 'm_{lll} [GeV]',  #   x axis name
                        #'fold' : 1
                        #}
 


##variables['mllVSdrll'] = {   'name': 'mllmin3l:drllmin3l',            #   variable name    
##                        'range' : (6,1.,4., 11,11,111),            #   variable range
##                        'xaxis' : 'min #Delta R_{ll} :  min m_{ll}',      #   x axis name
##                        'fold' : 3 ,
##                        # do weighted plot too
##                        'doWeight' : 1,
##                        'binX'     : 6,
##                        'binY'     : 11
##                        #
##                        }
##
#                       
#variables['nvtx']  = {   'name': 'nvtx',      
#                        'range' : (41,1,41),  
#                        'xaxis' : 'nvtx', 
#                         'fold' : 3
#                        }
#variables['lead_jetPT'] = {  'name': 'std_vector_jet_pt[1]',     #  variable name
                        #'range' : (11,1,41),    #   variable range
                        #'xaxis' : 'Leading Jet PT [GeV]',  #   x axis name
                       #'fold' : 1
                    #}

#variables['met']  = {   'name': 'metPfType1',            #   variable name    
                        #'range' : (11,1,211),    #   variable range
                        #'xaxis' : 'pfmet [GeV]',  #   x axis name
                       #'fold' : 1
                    #}

#variables['mtwww']  = {   'name': 'mtwww',            #   variable name    
                        #'range' : (21,1,511),    #   variable range
                        #'xaxis' : 'mT_WWW [GeV]',  #   x axis name
                       #'fold' : 1
                     #}


#variables['minmtw_wh3l']  = {   'name': 'minmtw_wh3l',            #   variable name    
                        #'range' : (21,1,211),    #   variable range
                        #'xaxis' : 'min mT_W [GeV]',  #   x axis name
                       #'fold' : 1
                     #}

#variables['ptlll']  = {   'name': 'ptlll',            #   variable name    
                        #'range' : (21,1,511),    #   variable range
                        #'xaxis' : 'pT_lll [GeV]',  #   x axis name
                        #'fold' : 1
                     #}


#variables['pt12']  = {   'name': 'pt12(std_vector_lepton_pt[0],std_vector_lepton_eta[0],std_vector_lepton_phi[0],std_vector_lepton_pt[1],std_vector_lepton_eta[1],std_vector_lepton_phi[1])',            #   variable name    
                        #'range' : (21,1,511),    #   variable range
                        #'xaxis' : 'pT_12 [GeV]',  #   x axis name
                       #'fold' : 1, 
                       #'linesToAdd' : ['.L /afs/cern.ch/user/a/amassiro/work/Latinos/Framework/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/HiggsTrilinear/WH3l/scripts/newVariables.C+']
                     #}



#variables['ptbest']  = {   'name': 'ptbest(std_vector_lepton_pt[0],std_vector_lepton_eta[0],std_vector_lepton_phi[0],std_vector_lepton_flavour[0],std_vector_lepton_pt[1],std_vector_lepton_eta[1],std_vector_lepton_phi[1],std_vector_lepton_flavour[1],std_vector_lepton_pt[2],std_vector_lepton_eta[2],std_vector_lepton_phi[2],std_vector_lepton_flavour[2])',            #   variable name    
#variables['ptbest']  = {   'name': 'ptbest(std_vector_lepton_pt[0],std_vector_lepton_eta[0],std_vector_lepton_phi[0],std_vector_lepton_flavour[0],std_vector_lepton_pt[1],std_vector_lepton_eta[1],std_vector_lepton_phi[1],std_vector_lepton_flavour[1],std_vector_lepton_pt[1])',            #   variable name    

variables['ptbest']  = {   'name': '((std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0)*(std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]>0)*(pt12(std_vector_lepton_pt[1],std_vector_lepton_eta[1],std_vector_lepton_phi[1],std_vector_lepton_pt[2],std_vector_lepton_eta[2],std_vector_lepton_phi[2])) +   \
 (std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0)*(std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0)*(pt12(std_vector_lepton_pt[0],std_vector_lepton_eta[0],std_vector_lepton_phi[0],std_vector_lepton_pt[2],std_vector_lepton_eta[2],std_vector_lepton_phi[2])) +   \
 (std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]>0)*( \
    ((pt12(std_vector_lepton_pt[1],std_vector_lepton_eta[1],std_vector_lepton_phi[1],std_vector_lepton_pt[2],std_vector_lepton_eta[2],std_vector_lepton_phi[2])) > (pt12(std_vector_lepton_pt[0],std_vector_lepton_eta[0],std_vector_lepton_phi[0],std_vector_lepton_pt[2],std_vector_lepton_eta[2],std_vector_lepton_phi[2]))) * (pt12(std_vector_lepton_pt[1],std_vector_lepton_eta[1],std_vector_lepton_phi[1],std_vector_lepton_pt[2],std_vector_lepton_eta[2],std_vector_lepton_phi[2]))  + \
    ((pt12(std_vector_lepton_pt[1],std_vector_lepton_eta[1],std_vector_lepton_phi[1],std_vector_lepton_pt[2],std_vector_lepton_eta[2],std_vector_lepton_phi[2])) <= (pt12(std_vector_lepton_pt[0],std_vector_lepton_eta[0],std_vector_lepton_phi[0],std_vector_lepton_pt[2],std_vector_lepton_eta[2],std_vector_lepton_phi[2]))) * (pt12(std_vector_lepton_pt[0],std_vector_lepton_eta[0],std_vector_lepton_phi[0],std_vector_lepton_pt[2],std_vector_lepton_eta[2],std_vector_lepton_phi[2]))   \
    ))',            #   variable name    
                       'range' : (20,0,510),    #   variable range
                       'xaxis' : 'pTbest [GeV]',  #   x axis name
                       'fold' : 1, 
                       'linesToAdd' : ['.L /afs/cern.ch/user/a/amassiro/work/Latinos/Framework/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/HiggsTrilinear/WH3l/scripts/newVariables.C+']
                     }



#//   if (ch1 * ch2 > 0) {   // ---> A
#//     
#//     float pt23 = (l2+l3).Pt();
#//     float pt13 = (l1+l3).Pt();
#//     
#//     if (pt13 > pt23) return pt13;
#//     else return pt23;
#//     
#//   }
#//   else {
#//     // ---> B
#//     if (ch1 * ch3 > 0)     
#//       return (l2+l3).Pt();
#//     else 
#//       // ---> C
#//       return (l1+l3).Pt();
#//   }






variables['drllmin3l']  = {   'name': 'drllmin3l',            #   variable name    
#                         'range' : ([1.,1.75, 1.5, 2.1, 2.5, 4.1],),    #   variable range
#                        'range' : (5,1,5),    #   variable range
                         #'range' : ([1.,1.75,1.1,1.25,1.5,1.75,2.5,4.1],),    #   variable range
                         'range' : ([0.0, 1.0, 1.5, 2.0, 4.0],),    #   variable range
                         'xaxis' : 'min #Delta R_{ll}',  #   x axis name
                         'fold' : 1
                        }



#variables['ptbestOverpTH']  = {   'name': '((std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0)*(std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]>0)*(pt12(std_vector_lepton_pt[1],std_vector_lepton_eta[1],std_vector_lepton_phi[1],std_vector_lepton_pt[2],std_vector_lepton_eta[2],std_vector_lepton_phi[2])) +   \
 #(std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0)*(std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0)*(pt12(std_vector_lepton_pt[0],std_vector_lepton_eta[0],std_vector_lepton_phi[0],std_vector_lepton_pt[2],std_vector_lepton_eta[2],std_vector_lepton_phi[2])) +   \
 #(std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]>0)*( \
    #((pt12(std_vector_lepton_pt[1],std_vector_lepton_eta[1],std_vector_lepton_phi[1],std_vector_lepton_pt[2],std_vector_lepton_eta[2],std_vector_lepton_phi[2])) > (pt12(std_vector_lepton_pt[0],std_vector_lepton_eta[0],std_vector_lepton_phi[0],std_vector_lepton_pt[2],std_vector_lepton_eta[2],std_vector_lepton_phi[2]))) * (pt12(std_vector_lepton_pt[1],std_vector_lepton_eta[1],std_vector_lepton_phi[1],std_vector_lepton_pt[2],std_vector_lepton_eta[2],std_vector_lepton_phi[2]))  + \
    #((pt12(std_vector_lepton_pt[1],std_vector_lepton_eta[1],std_vector_lepton_phi[1],std_vector_lepton_pt[2],std_vector_lepton_eta[2],std_vector_lepton_phi[2])) <= (pt12(std_vector_lepton_pt[0],std_vector_lepton_eta[0],std_vector_lepton_phi[0],std_vector_lepton_pt[2],std_vector_lepton_eta[2],std_vector_lepton_phi[2]))) * (pt12(std_vector_lepton_pt[0],std_vector_lepton_eta[0],std_vector_lepton_phi[0],std_vector_lepton_pt[2],std_vector_lepton_eta[2],std_vector_lepton_phi[2]))   \
    #))/higgsLHEpt',            #   variable name    
                        #'range' : (100,0,2),    #   variable range
                        #'xaxis' : 'pTbest/ptH',  #   x axis name
                       #'fold' : 1, 
                       #'linesToAdd' : ['.L /afs/cern.ch/user/a/amassiro/work/Latinos/Framework/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/HiggsTrilinear/WH3l/scripts/newVariables.C+']
                     #}




variables['ptbestdrll']  = {   'name': '((std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0)*(std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]>0)*(pt12(std_vector_lepton_pt[1],std_vector_lepton_eta[1],std_vector_lepton_phi[1],std_vector_lepton_pt[2],std_vector_lepton_eta[2],std_vector_lepton_phi[2])) +   \
 (std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0)*(std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0)*(pt12(std_vector_lepton_pt[0],std_vector_lepton_eta[0],std_vector_lepton_phi[0],std_vector_lepton_pt[2],std_vector_lepton_eta[2],std_vector_lepton_phi[2])) +   \
 (std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]>0)*( \
    ((pt12(std_vector_lepton_pt[1],std_vector_lepton_eta[1],std_vector_lepton_phi[1],std_vector_lepton_pt[2],std_vector_lepton_eta[2],std_vector_lepton_phi[2])) > (pt12(std_vector_lepton_pt[0],std_vector_lepton_eta[0],std_vector_lepton_phi[0],std_vector_lepton_pt[2],std_vector_lepton_eta[2],std_vector_lepton_phi[2]))) * (pt12(std_vector_lepton_pt[1],std_vector_lepton_eta[1],std_vector_lepton_phi[1],std_vector_lepton_pt[2],std_vector_lepton_eta[2],std_vector_lepton_phi[2]))  + \
    ((pt12(std_vector_lepton_pt[1],std_vector_lepton_eta[1],std_vector_lepton_phi[1],std_vector_lepton_pt[2],std_vector_lepton_eta[2],std_vector_lepton_phi[2])) <= (pt12(std_vector_lepton_pt[0],std_vector_lepton_eta[0],std_vector_lepton_phi[0],std_vector_lepton_pt[2],std_vector_lepton_eta[2],std_vector_lepton_phi[2]))) * (pt12(std_vector_lepton_pt[0],std_vector_lepton_eta[0],std_vector_lepton_phi[0],std_vector_lepton_pt[2],std_vector_lepton_eta[2],std_vector_lepton_phi[2]))   \
    )):drllmin3l',            #   variable name    
                       'range' : ([0.0, 1.0, 1.5, 2.0, 4.0],[0,100,200],),    #   variable range
                       'xaxis' : 'ptbest:drll',  #   x axis name
                       'fold' : 1, 
                       'linesToAdd' : ['.L /afs/cern.ch/user/a/amassiro/work/Latinos/Framework/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/HiggsTrilinear/WH3l/scripts/newVariables.C+']
                     }





#variables['ptbest']  = {   'name': 'ptbest(std_vector_lepton_pt,std_vector_lepton_eta,std_vector_lepton_phi,std_vector_lepton_flavour)',            #   variable name    
                        #'range' : (21,0,511),    #   variable range
                        #'xaxis' : 'pTbest [GeV]',  #   x axis name
                       #'fold' : 1, 
                       #'linesToAdd' : ['.L /afs/cern.ch/user/a/amassiro/work/Latinos/Framework/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/HiggsTrilinear/WH3l/scripts/newVariables.C+']
                     #}




#variables['pTWWW']  = {   'name': 'pTWWW',            #   variable name    
                        #'range' : (21,1,511),    #   variable range
                        #'xaxis' : 'pT_WWW [GeV]',  #   x axis name
                       #'fold' : 1
                     #}

#variables['mindphi_lmet']  = {   'name': 'mindphi_lmet',            #   variable name    
                        #'range' : (11,1.,3.5),    #   variable range
                        #'xaxis' : 'min #Delta#Phi(l,MET)',  #   x axis name
                       #'fold' : 1
                     #}

#variables['dphilllmet']  = {   'name': 'dphilllmet',            #   variable name    
                        #'range' : (11,1.,3.5),    #   variable range
                        #'xaxis' : 'min #Delta#Phi(lll,MET)',  #   x axis name
                       #'fold' : 1
                   #}
