# samples

#samples = {}


#samples['VZ']  = {    'name': [
#                          #'latino_WZ.root', 
#                          'latino_WZTo3LNu.root', 
#                          #'latino_ZZ.root', # ---> replaced by exclusive samples
#                          'latino_ZZTo2L2Nu.root',   # 
#                          #'latino_ZZTo2L2Q.root'
#                          'latino_WZTo2L2Q__part0.root',
#                          'latino_WZTo2L2Q__part1.root',
#                          'latino_WZTo2L2Q__part10.root',
#                          'latino_WZTo2L2Q__part11.root',
#                          'latino_WZTo2L2Q__part12.root',
#                          'latino_WZTo2L2Q__part13.root',
#                          'latino_WZTo2L2Q__part14.root',
#                          'latino_WZTo2L2Q__part15.root',
#                          'latino_WZTo2L2Q__part16.root',
#                          'latino_WZTo2L2Q__part17.root',
#                          'latino_WZTo2L2Q__part18.root',
#                          'latino_WZTo2L2Q__part19.root',
#                          'latino_WZTo2L2Q__part2.root',
#                          'latino_WZTo2L2Q__part20.root',
#                          'latino_WZTo2L2Q__part21.root',
#                          'latino_WZTo2L2Q__part22.root',
#                          'latino_WZTo2L2Q__part23.root',
#                          'latino_WZTo2L2Q__part24.root',
#                          'latino_WZTo2L2Q__part25.root',
#                          'latino_WZTo2L2Q__part26.root',
#                          'latino_WZTo2L2Q__part27.root',
#                          'latino_WZTo2L2Q__part28.root',
#                          'latino_WZTo2L2Q__part29.root',
#                          'latino_WZTo2L2Q__part3.root',
#                          'latino_WZTo2L2Q__part30.root',
#                          'latino_WZTo2L2Q__part31.root',
#                          'latino_WZTo2L2Q__part32.root',
#                          'latino_WZTo2L2Q__part33.root',
#                          'latino_WZTo2L2Q__part34.root',
#                          'latino_WZTo2L2Q__part35.root',
#                          'latino_WZTo2L2Q__part36.root',
#                          'latino_WZTo2L2Q__part37.root',
#                          'latino_WZTo2L2Q__part38.root',
#                          'latino_WZTo2L2Q__part39.root',
#                          'latino_WZTo2L2Q__part4.root',
#                          'latino_WZTo2L2Q__part40.root',
#                          'latino_WZTo2L2Q__part41.root',
#                          'latino_WZTo2L2Q__part42.root',
#                          'latino_WZTo2L2Q__part5.root',
#                          'latino_WZTo2L2Q__part6.root',
#                          'latino_WZTo2L2Q__part7.root',
#                          'latino_WZTo2L2Q__part8.root',
#                          'latino_WZTo2L2Q__part9.root',                          
#                          #
#                          'latino_ZZTo2L2Q__part0.root',
#                          'latino_ZZTo2L2Q__part1.root',
#                          'latino_ZZTo2L2Q__part2.root',
#                          'latino_ZZTo2L2Q__part3.root',
#                          #
#                          #'latino_ZZTo4L.root'
#                         ], 
#                      'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
#                      #'weights': [
#                          #'0.002214825',
#                          ##
#                          #'6.28902765388e-05',
#                          ##
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',
#                          #'0.000359426036128',                          
#                          ##
#                          #'0.000329080664109',
#                          #'0.000329080664109',
#                          #'0.000329080664109',
#                          #'0.000329080664109',
#                          ##
#                        #'',
#                        #] ,           
#                      #'isData': ['0'],                            
#                  }
#

samples['WZ3L']  = {    'name': [
                          #'latino_WZ.root', 
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo3LNu.root', 
                         ], 
                      'weight' : 'puW*baseW*GEN_weight_SM/abs(GEN_weight_SM)',          
                      #'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      #'isData': ['0'],                            
                  }

samples['WZ3Lmllmin01']  = {    'name': [
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo3LNu_mllmin01.root', 
                         ], 
                      'weight' : 'puW*baseW*GEN_weight_SM/abs(GEN_weight_SM)',          
                      #'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      #'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      #'isData': ['0'],                            
                  }


samples['ZZ']  = {    'name': [
                          #'latino_ZZ.root', # ---> replaced by exclusive samples
                          'latino_ZZTo2L2Nu.root',   # 
                          #'latino_ZZTo2L2Q.root'
                          'latino_ZZTo2L2Q__part0.root',
                          'latino_ZZTo2L2Q__part1.root',
                          'latino_ZZTo2L2Q__part2.root',
                          'latino_ZZTo2L2Q__part3.root',
                          #
                          #'latino_ZZTo4L.root'
                         ], 
                      'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      #'isData': ['0'],                            
                  }



