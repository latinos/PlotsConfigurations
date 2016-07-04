
samples['VZ']  = {    'name': [
                          'latino_WZ.root', 
                          #'latino_WZTo3LNu.root', 
                          #'latino_ZZ.root', # ---> replaced by inclusive samples
                          'latino_ZZTo2L2Nu.root',
                          #'latino_ZZTo2L2Q.root'
                          'latino_ZZTo2L2Q__part0.root',
                          'latino_ZZTo2L2Q__part1.root',
                          'latino_ZZTo2L2Q__part3.root',
                          
                          #'latino_ZZTo4L.root'
                         ], 
                      'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      #'weights': ['1'] ,           
                      #'isData': ['0'],                            
                  }



samples['VVV'] = {    'name': [
                          'latino_WZZ.root', 
                          'latino_ZZZ.root',
                          'latino_WWW.root',
                          'latino_WWZ.root',
                          ],      
                      'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      #'isData': ['0'],                            
                  }

