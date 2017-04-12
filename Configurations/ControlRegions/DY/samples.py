# samples

#samples = {}

#samples['DY']  = {    'name': [
                             #'latino_DYJetsToLL_M-10to50.root',
                             #'latino_DYJetsToLL_M-50_0000__part0.root',
                             #'latino_DYJetsToLL_M-50_0000__part1.root',
                             #'latino_DYJetsToLL_M-50_0000__part2.root',
                             #'latino_DYJetsToLL_M-50_0000__part3.root',
                             #'latino_DYJetsToLL_M-50_0000__part4.root',
                             #'latino_DYJetsToLL_M-50_0001__part0.root',
                             #'latino_DYJetsToLL_M-50_0001__part1.root',
                             #'latino_DYJetsToLL_M-50_0001__part2.root',
                             #'latino_DYJetsToLL_M-50_0001__part3.root',
                             #'latino_DYJetsToLL_M-50_0001__part4.root',
                             #'latino_DYJetsToLL_M-50_0002__part0.root',
                            #],    
                      #'weight' : 'baseW*puW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',  
                   #}




samples['DY']  = {    'name': [
                            'latino_DYJetsToLL_M-10to50.root',
                             'latino_DYJetsToLL_M-50_0000__part0.root',
                             'latino_DYJetsToLL_M-50_0000__part1.root',
                             'latino_DYJetsToLL_M-50_0000__part2.root',
                             'latino_DYJetsToLL_M-50_0000__part3.root',
                             'latino_DYJetsToLL_M-50_0000__part4.root',
                             'latino_DYJetsToLL_M-50_0001__part0.root',
                             'latino_DYJetsToLL_M-50_0001__part1.root',
                             'latino_DYJetsToLL_M-50_0001__part2.root',
                             'latino_DYJetsToLL_M-50_0001__part3.root',
                             'latino_DYJetsToLL_M-50_0001__part4.root',
                             'latino_DYJetsToLL_M-50_0002__part0.root',
                            ],    
                      'weight' : 'puW*baseW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',  
                    }


#samples['DY']  = {    'name': [
                             #'latino_DYJetsToLL_M-10to50.root',
                             #'latino_DYJetsToLL_M-50_0000__part0.root',
                             #'latino_DYJetsToLL_M-50_0000__part1.root',
                             #'latino_DYJetsToLL_M-50_0000__part2.root',
                             #'latino_DYJetsToLL_M-50_0000__part3.root',
                             #'latino_DYJetsToLL_M-50_0000__part4.root',
                             #'latino_DYJetsToLL_M-50_0001__part0.root',
                             #'latino_DYJetsToLL_M-50_0001__part1.root',
                             #'latino_DYJetsToLL_M-50_0001__part2.root',
                             #'latino_DYJetsToLL_M-50_0001__part3.root',
                             #'latino_DYJetsToLL_M-50_0001__part4.root',
                             #'latino_DYJetsToLL_M-50_0002__part0.root',
                            #],    
                      #'weight' : 'baseW*bPogSF*puW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*((abs(std_vector_lepton_flavour[0]) == 11 ) + (abs(std_vector_lepton_flavour[0]) == 13 ) * (0.992739 + 0.00152678 * std_vector_lepton_eta[0] + 0.00402821 * std_vector_lepton_eta[0]*std_vector_lepton_eta[0] -0.000557167 * std_vector_lepton_eta[0]*std_vector_lepton_eta[0]*std_vector_lepton_eta[0] - 0.00133539 *std_vector_lepton_eta[0]*std_vector_lepton_eta[0]*std_vector_lepton_eta[0]*std_vector_lepton_eta[0])) * ((abs(std_vector_lepton_flavour[1]) == 11 ) + (abs(std_vector_lepton_flavour[1]) == 13 ) * (0.992739 + 0.00152678 * std_vector_lepton_eta[1] + 0.00402821 * std_vector_lepton_eta[1]*std_vector_lepton_eta[1] -0.000557167 * std_vector_lepton_eta[1]*std_vector_lepton_eta[1]*std_vector_lepton_eta[1] - 0.00133539 *std_vector_lepton_eta[1]*std_vector_lepton_eta[1]*std_vector_lepton_eta[1]*std_vector_lepton_eta[1]))*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',  
                   #}


#((abs(std_vector_lepton_flavour[0]) == 11 ) + (abs(std_vector_lepton_flavour[0]) == 13 ) * (0.992739 + 0.00152678 * std_vector_lepton_eta[0] + 0.00402821 * std_vector_lepton_eta[0]*std_vector_lepton_eta[0] -0.000557167 * std_vector_lepton_eta[0]*std_vector_lepton_eta[0]*std_vector_lepton_eta[0] - 0.00133539 *std_vector_lepton_eta[0]*std_vector_lepton_eta[0]*std_vector_lepton_eta[0]*std_vector_lepton_eta[0])) * ((abs(std_vector_lepton_flavour[1]) == 11 ) + (abs(std_vector_lepton_flavour[1]) == 13 ) * (0.992739 + 0.00152678 * std_vector_lepton_eta[1] + 0.00402821 * std_vector_lepton_eta[1]*std_vector_lepton_eta[1] -0.000557167 * std_vector_lepton_eta[1]*std_vector_lepton_eta[1]*std_vector_lepton_eta[1] - 0.00133539 *std_vector_lepton_eta[1]*std_vector_lepton_eta[1]*std_vector_lepton_eta[1]*std_vector_lepton_eta[1]))



#(0.992739 + 0.00152678 * x + 0.00402821 * x*x -0.000557167 * x*x*x - 0.00133539 *x*x*x*x)




#samples['DYnoReco']  = {    'name': [
                             #'latino_DYJetsToLL_M-10to50.root',
                             #'latino_DYJetsToLL_M-50_0000__part0.root',
                             #'latino_DYJetsToLL_M-50_0000__part1.root',
                             #'latino_DYJetsToLL_M-50_0000__part2.root',
                             #'latino_DYJetsToLL_M-50_0000__part3.root',
                             #'latino_DYJetsToLL_M-50_0000__part4.root',
                             #'latino_DYJetsToLL_M-50_0001__part0.root',
                             #'latino_DYJetsToLL_M-50_0001__part1.root',
                             #'latino_DYJetsToLL_M-50_0001__part2.root',
                             #'latino_DYJetsToLL_M-50_0001__part3.root',
                             #'latino_DYJetsToLL_M-50_0001__part4.root',
                             #'latino_DYJetsToLL_M-50_0002__part0.root',
                            #],    
                      #'weight' : 'baseW*puW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',  
                   #}


#


   #1  p0           9.90333e-01   5.16802e-03   6.00471e-07  -8.73384e-03
   #2  p1           1.37945e-02   8.10203e-04   3.73980e-08  -2.17735e-01
   #3  p2          -7.49473e-04   4.15919e-05   1.63622e-09  -1.91880e+00
   #4  p3          -6.22583e-05   1.76467e-06   6.51196e-11  -4.03466e+01
   #5  p4           2.13429e-06   4.52563e-08   2.50664e-12  -1.95770e+03
    # TF1 f("f", "(9.90333e-01+x*1.37945e-02+x*x*(-7.49473e-04)+x*x*x*(-6.22583e-05)+x*x*x*x*(2.13429e-06))", 0, 50)
    
            
#samples['DY1vtxFix']  = {    'name': [
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-10to50ext3.root',
                            ##
                            ##'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            ##'latino_DYJetsToLL_M-10to50.root',
                            #'latino_DYJetsToLL_M-50_0000__part0.root',
                            #'latino_DYJetsToLL_M-50_0000__part1.root',
                            #'latino_DYJetsToLL_M-50_0000__part2.root',
                            #'latino_DYJetsToLL_M-50_0000__part3.root',
                            #'latino_DYJetsToLL_M-50_0000__part4.root',
                            ##'latino_DYJetsToLL_M-50_0001__part0.root',
                            ##'latino_DYJetsToLL_M-50_0001__part1.root',
                            ##'latino_DYJetsToLL_M-50_0001__part2.root',
                            ##'latino_DYJetsToLL_M-50_0001__part3.root',
                            ##'latino_DYJetsToLL_M-50_0001__part4.root',
                            ##'latino_DYJetsToLL_M-50_0002__part0.root',
                            #],    
                      #'weight' : 'baseW*(9.90333e-01+nvtx*1.37945e-02+nvtx*nvtx*(-7.49473e-04)+nvtx*nvtx*nvtx*(-6.22583e-05)+nvtx*nvtx*nvtx*nvtx*(2.13429e-06)) * (1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW63mb*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
                      ##'weights' :  [
                        ###'0.829752445221',
                        ###
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',                        
                        ##]
                   #}



#samples['DY2vtxFix']  = {    'name': [
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-10to50ext3.root',
                            ##
                            ##'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-50_0000__part0.root',
                            ##'latino_DYJetsToLL_M-50_0000__part1.root',
                            ##'latino_DYJetsToLL_M-50_0000__part2.root',
                            ##'latino_DYJetsToLL_M-50_0000__part3.root',
                            ##'latino_DYJetsToLL_M-50_0000__part4.root',
                            #'latino_DYJetsToLL_M-50_0001__part0.root',
                            #'latino_DYJetsToLL_M-50_0001__part1.root',
                            #'latino_DYJetsToLL_M-50_0001__part2.root',
                            #'latino_DYJetsToLL_M-50_0001__part3.root',
                            #'latino_DYJetsToLL_M-50_0001__part4.root',
                            ##'latino_DYJetsToLL_M-50_0002__part0.root',
                            #],    
                      #'weight' : 'baseW*(9.90333e-01+nvtx*1.37945e-02+nvtx*nvtx*(-7.49473e-04)+nvtx*nvtx*nvtx*(-6.22583e-05)+nvtx*nvtx*nvtx*nvtx*(2.13429e-06)) * (1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW63mb*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
                      ##'weights' :  [
                        ###'0.829752445221',
                        ###
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',                        
                        ##]
                   #}


#samples['DY1']  = {    'name': [
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-10to50ext3.root',
                            ##
                            ##'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            ##'latino_DYJetsToLL_M-10to50.root',
                            #'latino_DYJetsToLL_M-50_0000__part0.root',
                            #'latino_DYJetsToLL_M-50_0000__part1.root',
                            #'latino_DYJetsToLL_M-50_0000__part2.root',
                            #'latino_DYJetsToLL_M-50_0000__part3.root',
                            #'latino_DYJetsToLL_M-50_0000__part4.root',
                            ##'latino_DYJetsToLL_M-50_0001__part0.root',
                            ##'latino_DYJetsToLL_M-50_0001__part1.root',
                            ##'latino_DYJetsToLL_M-50_0001__part2.root',
                            ##'latino_DYJetsToLL_M-50_0001__part3.root',
                            ##'latino_DYJetsToLL_M-50_0001__part4.root',
                            ##'latino_DYJetsToLL_M-50_0002__part0.root',
                            #],    
                      #'weight' : 'baseW*(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW63mb*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
                      ##'weights' :  [
                        ###'0.829752445221',
                        ###
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',                        
                        ##]
                   #}



#samples['DY2']  = {    'name': [
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-10to50ext3.root',
                            ##
                            ##'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-50_0000__part0.root',
                            ##'latino_DYJetsToLL_M-50_0000__part1.root',
                            ##'latino_DYJetsToLL_M-50_0000__part2.root',
                            ##'latino_DYJetsToLL_M-50_0000__part3.root',
                            ##'latino_DYJetsToLL_M-50_0000__part4.root',
                            #'latino_DYJetsToLL_M-50_0001__part0.root',
                            #'latino_DYJetsToLL_M-50_0001__part1.root',
                            #'latino_DYJetsToLL_M-50_0001__part2.root',
                            #'latino_DYJetsToLL_M-50_0001__part3.root',
                            #'latino_DYJetsToLL_M-50_0001__part4.root',
                            ##'latino_DYJetsToLL_M-50_0002__part0.root',
                            #],    
                      #'weight' : 'baseW*(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW63mb*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
                      ##'weights' :  [
                        ###'0.829752445221',
                        ###
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',                        
                        ##]
                   #}



#samples['DY1reco']  = {    'name': [
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-10to50ext3.root',
                            ##
                            ##'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            ##'latino_DYJetsToLL_M-10to50.root',
                            #'latino_DYJetsToLL_M-50_0000__part0.root',
                            #'latino_DYJetsToLL_M-50_0000__part1.root',
                            #'latino_DYJetsToLL_M-50_0000__part2.root',
                            #'latino_DYJetsToLL_M-50_0000__part3.root',
                            #'latino_DYJetsToLL_M-50_0000__part4.root',
                            ##'latino_DYJetsToLL_M-50_0001__part0.root',
                            ##'latino_DYJetsToLL_M-50_0001__part1.root',
                            ##'latino_DYJetsToLL_M-50_0001__part2.root',
                            ##'latino_DYJetsToLL_M-50_0001__part3.root',
                            ##'latino_DYJetsToLL_M-50_0001__part4.root',
                            ##'latino_DYJetsToLL_M-50_0002__part0.root',
                            #],    
                      #'weight' : 'baseW*(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW63mb*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
                      ##'weights' :  [
                        ###'0.829752445221',
                        ###
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',                        
                        ##]
                   #}



#samples['DY2reco']  = {    'name': [
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-10to50ext3.root',
                            ##
                            ##'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-50_0000__part0.root',
                            ##'latino_DYJetsToLL_M-50_0000__part1.root',
                            ##'latino_DYJetsToLL_M-50_0000__part2.root',
                            ##'latino_DYJetsToLL_M-50_0000__part3.root',
                            ##'latino_DYJetsToLL_M-50_0000__part4.root',
                            #'latino_DYJetsToLL_M-50_0001__part0.root',
                            #'latino_DYJetsToLL_M-50_0001__part1.root',
                            #'latino_DYJetsToLL_M-50_0001__part2.root',
                            #'latino_DYJetsToLL_M-50_0001__part3.root',
                            #'latino_DYJetsToLL_M-50_0001__part4.root',
                            ##'latino_DYJetsToLL_M-50_0002__part0.root',
                            #],    
                      #'weight' : 'baseW*(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW63mb*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
                      ##'weights' :  [
                        ###'0.829752445221',
                        ###
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',                        
                        ##]
                   #}
            




#samples['DY1reco']  = {    'name': [
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-10to50ext3.root',
                            ##
                            ##'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            ##'latino_DYJetsToLL_M-10to50.root',
                            #'latino_DYJetsToLL_M-50_0000__part0.root',
                            #'latino_DYJetsToLL_M-50_0000__part1.root',
                            #'latino_DYJetsToLL_M-50_0000__part2.root',
                            #'latino_DYJetsToLL_M-50_0000__part3.root',
                            #'latino_DYJetsToLL_M-50_0000__part4.root',
                            ##'latino_DYJetsToLL_M-50_0001__part0.root',
                            ##'latino_DYJetsToLL_M-50_0001__part1.root',
                            ##'latino_DYJetsToLL_M-50_0001__part2.root',
                            ##'latino_DYJetsToLL_M-50_0001__part3.root',
                            ##'latino_DYJetsToLL_M-50_0001__part4.root',
                            ##'latino_DYJetsToLL_M-50_0002__part0.root',
                            #],    
                      #'weight' : 'baseW*(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW63mb*effTrigW*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)  \
                        #* ((abs(std_vector_lepton_flavour[0]) == 13) * std_vector_lepton_idisoW[0] + (   \
#(abs(std_vector_lepton_flavour[0]) == 11)   *    \
#(   \
#(  std_vector_lepton_eta[0]>       -2.500       &&     std_vector_lepton_eta[0]<      -2.000    &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *     0.970027               +  \
#(  std_vector_lepton_eta[0]>       -2.000       &&     std_vector_lepton_eta[0]<      -1.566    &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *     0.918956               +  \
#(  std_vector_lepton_eta[0]>       -1.566       &&     std_vector_lepton_eta[0]<      -1.444    &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *     0.965015               +  \
#(  std_vector_lepton_eta[0]>       -1.444       &&     std_vector_lepton_eta[0]<      -0.800    &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *     0.973890               +  \
#(  std_vector_lepton_eta[0]>       -0.800       &&     std_vector_lepton_eta[0]<      0.000     &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *     0.979167               +  \
#(  std_vector_lepton_eta[0]>       0.000        &&     std_vector_lepton_eta[0]<      0.800     &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *     0.980494               +  \
#(  std_vector_lepton_eta[0]>       0.800        &&     std_vector_lepton_eta[0]<      1.444     &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *     0.989542               +  \
#(  std_vector_lepton_eta[0]>       1.444        &&     std_vector_lepton_eta[0]<      1.566     &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *     0.938144               +  \
#(  std_vector_lepton_eta[0]>       1.566        &&     std_vector_lepton_eta[0]<      2.000     &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *     0.938859               +  \
#(  std_vector_lepton_eta[0]>       2.000        &&     std_vector_lepton_eta[0]<      2.500     &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *     0.970628               +  \
#(  std_vector_lepton_eta[0]>       -2.500       &&     std_vector_lepton_eta[0]<      -2.000    &&      std_vector_lepton_pt[0]>    30.000                                       )   *     0.977612               +  \
#(  std_vector_lepton_eta[0]>       -2.000       &&     std_vector_lepton_eta[0]<      -1.566    &&      std_vector_lepton_pt[0]>    30.000                                       )   *     0.946782               +  \
#(  std_vector_lepton_eta[0]>       -1.566       &&     std_vector_lepton_eta[0]<      -1.444    &&      std_vector_lepton_pt[0]>    30.000                                       )   *     0.975643               +  \
#(  std_vector_lepton_eta[0]>       -1.444       &&     std_vector_lepton_eta[0]<      -0.800    &&      std_vector_lepton_pt[0]>    30.000                                       )   *     0.976658               +  \
#(  std_vector_lepton_eta[0]>       -0.800       &&     std_vector_lepton_eta[0]<      0.000     &&      std_vector_lepton_pt[0]>    30.000                                       )   *     0.975550               +  \
#(  std_vector_lepton_eta[0]>       0.000        &&     std_vector_lepton_eta[0]<      0.800     &&      std_vector_lepton_pt[0]>    30.000                                       )   *     0.985240               +  \
#(  std_vector_lepton_eta[0]>       0.800        &&     std_vector_lepton_eta[0]<      1.444     &&      std_vector_lepton_pt[0]>    30.000                                       )   *     0.975430               +  \
#(  std_vector_lepton_eta[0]>       1.444        &&     std_vector_lepton_eta[0]<      1.566     &&      std_vector_lepton_pt[0]>    30.000                                       )   *     0.987738               +  \
#(  std_vector_lepton_eta[0]>       1.566        &&     std_vector_lepton_eta[0]<      2.000     &&      std_vector_lepton_pt[0]>    30.000                                       )   *     0.956950               +  \
#(  std_vector_lepton_eta[0]>       2.000        &&     std_vector_lepton_eta[0]<      2.500     &&      std_vector_lepton_pt[0]>    30.000                                       )   *     0.972256                  \
#)))\
#* ((abs(std_vector_lepton_flavour[1]) == 13) * std_vector_lepton_idisoW[1] + (   \
#(abs(std_vector_lepton_flavour[1]) == 11)   *    \
#(   \
#(  std_vector_lepton_eta[1]>       -2.500       &&     std_vector_lepton_eta[1]<      -2.000    &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.970027   +  \
#(  std_vector_lepton_eta[1]>       -2.000       &&     std_vector_lepton_eta[1]<      -1.566    &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.918956   +  \
#(  std_vector_lepton_eta[1]>       -1.566       &&     std_vector_lepton_eta[1]<      -1.444    &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.965015   +  \
#(  std_vector_lepton_eta[1]>       -1.444       &&     std_vector_lepton_eta[1]<      -0.800    &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.973890   +  \
#(  std_vector_lepton_eta[1]>       -0.800       &&     std_vector_lepton_eta[1]<      0.000     &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.979167   +  \
#(  std_vector_lepton_eta[1]>       0.000        &&     std_vector_lepton_eta[1]<      0.800     &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.980494   +  \
#(  std_vector_lepton_eta[1]>       0.800        &&     std_vector_lepton_eta[1]<      1.444     &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.989542   +  \
#(  std_vector_lepton_eta[1]>       1.444        &&     std_vector_lepton_eta[1]<      1.566     &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.938144   +  \
#(  std_vector_lepton_eta[1]>       1.566        &&     std_vector_lepton_eta[1]<      2.000     &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.938859   +  \
#(  std_vector_lepton_eta[1]>       2.000        &&     std_vector_lepton_eta[1]<      2.500     &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.970628   +  \
#(  std_vector_lepton_eta[1]>       -2.500       &&     std_vector_lepton_eta[1]<      -2.000    &&      std_vector_lepton_pt[1]>    30.000                                       )   *   0.977612   +  \
#(  std_vector_lepton_eta[1]>       -2.000       &&     std_vector_lepton_eta[1]<      -1.566    &&      std_vector_lepton_pt[1]>    30.000                                       )   *   0.946782   +  \
#(  std_vector_lepton_eta[1]>       -1.566       &&     std_vector_lepton_eta[1]<      -1.444    &&      std_vector_lepton_pt[1]>    30.000                                       )   *   0.975643   +  \
#(  std_vector_lepton_eta[1]>       -1.444       &&     std_vector_lepton_eta[1]<      -0.800    &&      std_vector_lepton_pt[1]>    30.000                                       )   *   0.976658   +  \
#(  std_vector_lepton_eta[1]>       -0.800       &&     std_vector_lepton_eta[1]<      0.000     &&      std_vector_lepton_pt[1]>    30.000                                       )   *   0.975550   +  \
#(  std_vector_lepton_eta[1]>       0.000        &&     std_vector_lepton_eta[1]<      0.800     &&      std_vector_lepton_pt[1]>    30.000                                       )   *   0.985240   +  \
#(  std_vector_lepton_eta[1]>       0.800        &&     std_vector_lepton_eta[1]<      1.444     &&      std_vector_lepton_pt[1]>    30.000                                       )   *   0.975430   +  \
#(  std_vector_lepton_eta[1]>       1.444        &&     std_vector_lepton_eta[1]<      1.566     &&      std_vector_lepton_pt[1]>    30.000                                       )   *   0.987738   +  \
#(  std_vector_lepton_eta[1]>       1.566        &&     std_vector_lepton_eta[1]<      2.000     &&      std_vector_lepton_pt[1]>    30.000                                       )   *   0.956950   +  \
#(  std_vector_lepton_eta[1]>       2.000        &&     std_vector_lepton_eta[1]<      2.500     &&      std_vector_lepton_pt[1]>    30.000                                       )   *   0.972256      \
#)))', 
                      ##'weights' :  [
                        ###'0.829752445221',
                        ###
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',                        
                        ##]
                   #}



#samples['DY2reco']  = {    'name': [
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-10to50ext3.root',
                            ##
                            ##'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-50_0000__part0.root',
                            ##'latino_DYJetsToLL_M-50_0000__part1.root',
                            ##'latino_DYJetsToLL_M-50_0000__part2.root',
                            ##'latino_DYJetsToLL_M-50_0000__part3.root',
                            ##'latino_DYJetsToLL_M-50_0000__part4.root',
                            #'latino_DYJetsToLL_M-50_0001__part0.root',
                            #'latino_DYJetsToLL_M-50_0001__part1.root',
                            #'latino_DYJetsToLL_M-50_0001__part2.root',
                            #'latino_DYJetsToLL_M-50_0001__part3.root',
                            #'latino_DYJetsToLL_M-50_0001__part4.root',
                            ##'latino_DYJetsToLL_M-50_0002__part0.root',
                            #],    
                      #'weight' : 'baseW*(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW63mb*effTrigW*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)  \
                        #* ((abs(std_vector_lepton_flavour[0]) == 13) * std_vector_lepton_idisoW[0] + (   \
#(abs(std_vector_lepton_flavour[0]) == 11)   *    \
#(   \
#(  std_vector_lepton_eta[0]>       -2.500       &&     std_vector_lepton_eta[0]<      -2.000    &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *     0.970027               +  \
#(  std_vector_lepton_eta[0]>       -2.000       &&     std_vector_lepton_eta[0]<      -1.566    &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *     0.918956               +  \
#(  std_vector_lepton_eta[0]>       -1.566       &&     std_vector_lepton_eta[0]<      -1.444    &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *     0.965015               +  \
#(  std_vector_lepton_eta[0]>       -1.444       &&     std_vector_lepton_eta[0]<      -0.800    &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *     0.973890               +  \
#(  std_vector_lepton_eta[0]>       -0.800       &&     std_vector_lepton_eta[0]<      0.000     &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *     0.979167               +  \
#(  std_vector_lepton_eta[0]>       0.000        &&     std_vector_lepton_eta[0]<      0.800     &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *     0.980494               +  \
#(  std_vector_lepton_eta[0]>       0.800        &&     std_vector_lepton_eta[0]<      1.444     &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *     0.989542               +  \
#(  std_vector_lepton_eta[0]>       1.444        &&     std_vector_lepton_eta[0]<      1.566     &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *     0.938144               +  \
#(  std_vector_lepton_eta[0]>       1.566        &&     std_vector_lepton_eta[0]<      2.000     &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *     0.938859               +  \
#(  std_vector_lepton_eta[0]>       2.000        &&     std_vector_lepton_eta[0]<      2.500     &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *     0.970628               +  \
#(  std_vector_lepton_eta[0]>       -2.500       &&     std_vector_lepton_eta[0]<      -2.000    &&      std_vector_lepton_pt[0]>    30.000                                       )   *     0.977612               +  \
#(  std_vector_lepton_eta[0]>       -2.000       &&     std_vector_lepton_eta[0]<      -1.566    &&      std_vector_lepton_pt[0]>    30.000                                       )   *     0.946782               +  \
#(  std_vector_lepton_eta[0]>       -1.566       &&     std_vector_lepton_eta[0]<      -1.444    &&      std_vector_lepton_pt[0]>    30.000                                       )   *     0.975643               +  \
#(  std_vector_lepton_eta[0]>       -1.444       &&     std_vector_lepton_eta[0]<      -0.800    &&      std_vector_lepton_pt[0]>    30.000                                       )   *     0.976658               +  \
#(  std_vector_lepton_eta[0]>       -0.800       &&     std_vector_lepton_eta[0]<      0.000     &&      std_vector_lepton_pt[0]>    30.000                                       )   *     0.975550               +  \
#(  std_vector_lepton_eta[0]>       0.000        &&     std_vector_lepton_eta[0]<      0.800     &&      std_vector_lepton_pt[0]>    30.000                                       )   *     0.985240               +  \
#(  std_vector_lepton_eta[0]>       0.800        &&     std_vector_lepton_eta[0]<      1.444     &&      std_vector_lepton_pt[0]>    30.000                                       )   *     0.975430               +  \
#(  std_vector_lepton_eta[0]>       1.444        &&     std_vector_lepton_eta[0]<      1.566     &&      std_vector_lepton_pt[0]>    30.000                                       )   *     0.987738               +  \
#(  std_vector_lepton_eta[0]>       1.566        &&     std_vector_lepton_eta[0]<      2.000     &&      std_vector_lepton_pt[0]>    30.000                                       )   *     0.956950               +  \
#(  std_vector_lepton_eta[0]>       2.000        &&     std_vector_lepton_eta[0]<      2.500     &&      std_vector_lepton_pt[0]>    30.000                                       )   *     0.972256                  \
#)))\
#* ((abs(std_vector_lepton_flavour[1]) == 13) * std_vector_lepton_idisoW[1] + (   \
#(abs(std_vector_lepton_flavour[1]) == 11)   *    \
#(   \
#(  std_vector_lepton_eta[1]>       -2.500       &&     std_vector_lepton_eta[1]<      -2.000    &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.970027   +  \
#(  std_vector_lepton_eta[1]>       -2.000       &&     std_vector_lepton_eta[1]<      -1.566    &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.918956   +  \
#(  std_vector_lepton_eta[1]>       -1.566       &&     std_vector_lepton_eta[1]<      -1.444    &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.965015   +  \
#(  std_vector_lepton_eta[1]>       -1.444       &&     std_vector_lepton_eta[1]<      -0.800    &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.973890   +  \
#(  std_vector_lepton_eta[1]>       -0.800       &&     std_vector_lepton_eta[1]<      0.000     &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.979167   +  \
#(  std_vector_lepton_eta[1]>       0.000        &&     std_vector_lepton_eta[1]<      0.800     &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.980494   +  \
#(  std_vector_lepton_eta[1]>       0.800        &&     std_vector_lepton_eta[1]<      1.444     &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.989542   +  \
#(  std_vector_lepton_eta[1]>       1.444        &&     std_vector_lepton_eta[1]<      1.566     &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.938144   +  \
#(  std_vector_lepton_eta[1]>       1.566        &&     std_vector_lepton_eta[1]<      2.000     &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.938859   +  \
#(  std_vector_lepton_eta[1]>       2.000        &&     std_vector_lepton_eta[1]<      2.500     &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.970628   +  \
#(  std_vector_lepton_eta[1]>       -2.500       &&     std_vector_lepton_eta[1]<      -2.000    &&      std_vector_lepton_pt[1]>    30.000                                       )   *   0.977612   +  \
#(  std_vector_lepton_eta[1]>       -2.000       &&     std_vector_lepton_eta[1]<      -1.566    &&      std_vector_lepton_pt[1]>    30.000                                       )   *   0.946782   +  \
#(  std_vector_lepton_eta[1]>       -1.566       &&     std_vector_lepton_eta[1]<      -1.444    &&      std_vector_lepton_pt[1]>    30.000                                       )   *   0.975643   +  \
#(  std_vector_lepton_eta[1]>       -1.444       &&     std_vector_lepton_eta[1]<      -0.800    &&      std_vector_lepton_pt[1]>    30.000                                       )   *   0.976658   +  \
#(  std_vector_lepton_eta[1]>       -0.800       &&     std_vector_lepton_eta[1]<      0.000     &&      std_vector_lepton_pt[1]>    30.000                                       )   *   0.975550   +  \
#(  std_vector_lepton_eta[1]>       0.000        &&     std_vector_lepton_eta[1]<      0.800     &&      std_vector_lepton_pt[1]>    30.000                                       )   *   0.985240   +  \
#(  std_vector_lepton_eta[1]>       0.800        &&     std_vector_lepton_eta[1]<      1.444     &&      std_vector_lepton_pt[1]>    30.000                                       )   *   0.975430   +  \
#(  std_vector_lepton_eta[1]>       1.444        &&     std_vector_lepton_eta[1]<      1.566     &&      std_vector_lepton_pt[1]>    30.000                                       )   *   0.987738   +  \
#(  std_vector_lepton_eta[1]>       1.566        &&     std_vector_lepton_eta[1]<      2.000     &&      std_vector_lepton_pt[1]>    30.000                                       )   *   0.956950   +  \
#(  std_vector_lepton_eta[1]>       2.000        &&     std_vector_lepton_eta[1]<      2.500     &&      std_vector_lepton_pt[1]>    30.000                                       )   *   0.972256      \
#)))',  
                      ##'weights' :  [
                        ###'0.829752445221',
                        ###
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',                        
                        ##]
                   #}
            
            
            
            
            
            
            
            
            
   
#samples['DYlocal']  = {    'name': [
                           ## 'latino_DYJetsToLL_M-50_0000__part0_newidiso.root',
                            ##'latino_DYJetsToLL_M-50_0000__part0.root',
                            #'latino_DYJetsToLL_M-50_0000__part0_newidiso_withRECO_v1.root',
                            ##'../../../../../../../../../latino_DYJetsToLL_M-50_0000__part0_newidiso_CUTMZ.root',
                            #],    
                      #'weight' : 'baseW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*puW63mb*effTrigW*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]', 
                      #}



      
   
#samples['DYlocalNoPTZ']  = {    'name': [
                            #'../../../../../../../../../latino_DYJetsToLL_M-50_0000__part0_newidiso.root',
                            ##'../../../../../../../../../latino_DYJetsToLL_M-50_0000__part0_newidiso_CUTMZ.root',
                            #],    
                      #'weight' : 'baseW*puW63mb*effTrigW*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]', 
                      #}





#samples['DYlocal']  = {    'name': [
                            #'../../../../../../../../../latino_DYJetsToLL_M-50_0000__part0_newidiso.root',
                            #],    
                      #'weight' : 'baseW*(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW63mb*effTrigW*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]', 
                      #}



         
            
            
            
            

#samples['DY1reco']  = {    'name': [
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-10to50ext3.root',
                            ##
                            ##'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            ##'latino_DYJetsToLL_M-10to50.root',
                            #'latino_DYJetsToLL_M-50_0000__part0.root',
                            #'latino_DYJetsToLL_M-50_0000__part1.root',
                            #'latino_DYJetsToLL_M-50_0000__part2.root',
                            #'latino_DYJetsToLL_M-50_0000__part3.root',
                            #'latino_DYJetsToLL_M-50_0000__part4.root',
                            ##'latino_DYJetsToLL_M-50_0001__part0.root',
                            ##'latino_DYJetsToLL_M-50_0001__part1.root',
                            ##'latino_DYJetsToLL_M-50_0001__part2.root',
                            ##'latino_DYJetsToLL_M-50_0001__part3.root',
                            ##'latino_DYJetsToLL_M-50_0001__part4.root',
                            ##'latino_DYJetsToLL_M-50_0002__part0.root',
                            #],    
                      #'weight' : 'baseW*(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW63mb*effTrigW*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM) \
                        #* ((abs(std_vector_lepton_flavour[0]) == 13) * std_vector_lepton_idisoW[0] + (   \
#(abs(std_vector_lepton_flavour[0]) == 11)   *    \
#(   \
#(  std_vector_lepton_eta[0]>       -2.500       &&     std_vector_lepton_eta[0]<      -2.000    &&      std_vector_lepton_pt[0]>    10.000 &&  std_vector_lepton_pt[0]<  20.000  )   *   0.564  /  0.611  +  \
#(  std_vector_lepton_eta[0]>       -2.000       &&     std_vector_lepton_eta[0]<      -1.566    &&      std_vector_lepton_pt[0]>    10.000 &&  std_vector_lepton_pt[0]<  20.000  )   *   0.543  /  0.615  +  \
#(  std_vector_lepton_eta[0]>       -1.566       &&     std_vector_lepton_eta[0]<      -1.444    &&      std_vector_lepton_pt[0]>    10.000 &&  std_vector_lepton_pt[0]<  20.000  )   *   0.588  /  0.589  +  \
#(  std_vector_lepton_eta[0]>       -1.444       &&     std_vector_lepton_eta[0]<      -0.800    &&      std_vector_lepton_pt[0]>    10.000 &&  std_vector_lepton_pt[0]<  20.000  )   *   0.674  /  0.702  +  \
#(  std_vector_lepton_eta[0]>       -0.800       &&     std_vector_lepton_eta[0]<      0.000     &&      std_vector_lepton_pt[0]>    10.000 &&  std_vector_lepton_pt[0]<  20.000  )   *   0.696  /  0.699  +  \
#(  std_vector_lepton_eta[0]>       0.000        &&     std_vector_lepton_eta[0]<      0.800     &&      std_vector_lepton_pt[0]>    10.000 &&  std_vector_lepton_pt[0]<  20.000  )   *   0.697  /  0.696  +  \
#(  std_vector_lepton_eta[0]>       0.800        &&     std_vector_lepton_eta[0]<      1.444     &&      std_vector_lepton_pt[0]>    10.000 &&  std_vector_lepton_pt[0]<  20.000  )   *   0.682  /  0.706  +  \
#(  std_vector_lepton_eta[0]>       1.444        &&     std_vector_lepton_eta[0]<      1.566     &&      std_vector_lepton_pt[0]>    10.000 &&  std_vector_lepton_pt[0]<  20.000  )   *   0.557  /  0.579  +  \
#(  std_vector_lepton_eta[0]>       1.566        &&     std_vector_lepton_eta[0]<      2.000     &&      std_vector_lepton_pt[0]>    10.000 &&  std_vector_lepton_pt[0]<  20.000  )   *   0.550  /  0.607  +  \
#(  std_vector_lepton_eta[0]>       2.000        &&     std_vector_lepton_eta[0]<      2.500     &&      std_vector_lepton_pt[0]>    10.000 &&  std_vector_lepton_pt[0]<  20.000  )   *   0.586  /  0.627  +  \
#(  std_vector_lepton_eta[0]>       -2.500       &&     std_vector_lepton_eta[0]<      -2.000    &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *   0.712  /  0.734  +  \
#(  std_vector_lepton_eta[0]>       -2.000       &&     std_vector_lepton_eta[0]<      -1.566    &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *   0.669  /  0.728  +  \
#(  std_vector_lepton_eta[0]>       -1.566       &&     std_vector_lepton_eta[0]<      -1.444    &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *   0.662  /  0.686  +  \
#(  std_vector_lepton_eta[0]>       -1.444       &&     std_vector_lepton_eta[0]<      -0.800    &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *   0.746  /  0.766  +  \
#(  std_vector_lepton_eta[0]>       -0.800       &&     std_vector_lepton_eta[0]<      0.000     &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *   0.752  /  0.768  +  \
#(  std_vector_lepton_eta[0]>       0.000        &&     std_vector_lepton_eta[0]<      0.800     &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *   0.754  /  0.769  +  \
#(  std_vector_lepton_eta[0]>       0.800        &&     std_vector_lepton_eta[0]<      1.444     &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *   0.757  /  0.765  +  \
#(  std_vector_lepton_eta[0]>       1.444        &&     std_vector_lepton_eta[0]<      1.566     &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *   0.637  /  0.679  +  \
#(  std_vector_lepton_eta[0]>       1.566        &&     std_vector_lepton_eta[0]<      2.000     &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *   0.691  /  0.736  +  \
#(  std_vector_lepton_eta[0]>       2.000        &&     std_vector_lepton_eta[0]<      2.500     &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *   0.727  /  0.749  +  \
#(  std_vector_lepton_eta[0]>       -2.500       &&     std_vector_lepton_eta[0]<      -2.000    &&      std_vector_lepton_pt[0]>    30.000 &&  std_vector_lepton_pt[0]<  40.000  )   *   0.786  /  0.804  +  \
#(  std_vector_lepton_eta[0]>       -2.000       &&     std_vector_lepton_eta[0]<      -1.566    &&      std_vector_lepton_pt[0]>    30.000 &&  std_vector_lepton_pt[0]<  40.000  )   *   0.765  /  0.808  +  \
#(  std_vector_lepton_eta[0]>       -1.566       &&     std_vector_lepton_eta[0]<      -1.444    &&      std_vector_lepton_pt[0]>    30.000 &&  std_vector_lepton_pt[0]<  40.000  )   *   0.721  /  0.739  +  \
#(  std_vector_lepton_eta[0]>       -1.444       &&     std_vector_lepton_eta[0]<      -0.800    &&      std_vector_lepton_pt[0]>    30.000 &&  std_vector_lepton_pt[0]<  40.000  )   *   0.795  /  0.814  +  \
#(  std_vector_lepton_eta[0]>       -0.800       &&     std_vector_lepton_eta[0]<      0.000     &&      std_vector_lepton_pt[0]>    30.000 &&  std_vector_lepton_pt[0]<  40.000  )   *   0.798  /  0.818  +  \
#(  std_vector_lepton_eta[0]>       0.000        &&     std_vector_lepton_eta[0]<      0.800     &&      std_vector_lepton_pt[0]>    30.000 &&  std_vector_lepton_pt[0]<  40.000  )   *   0.801  /  0.813  +  \
#(  std_vector_lepton_eta[0]>       0.800        &&     std_vector_lepton_eta[0]<      1.444     &&      std_vector_lepton_pt[0]>    30.000 &&  std_vector_lepton_pt[0]<  40.000  )   *   0.794  /  0.814  +  \
#(  std_vector_lepton_eta[0]>       1.444        &&     std_vector_lepton_eta[0]<      1.566     &&      std_vector_lepton_pt[0]>    30.000 &&  std_vector_lepton_pt[0]<  40.000  )   *   0.725  /  0.734  +  \
#(  std_vector_lepton_eta[0]>       1.566        &&     std_vector_lepton_eta[0]<      2.000     &&      std_vector_lepton_pt[0]>    30.000 &&  std_vector_lepton_pt[0]<  40.000  )   *   0.778  /  0.813  +  \
#(  std_vector_lepton_eta[0]>       2.000        &&     std_vector_lepton_eta[0]<      2.500     &&      std_vector_lepton_pt[0]>    30.000 &&  std_vector_lepton_pt[0]<  40.000  )   *   0.806  /  0.829  +  \
#(  std_vector_lepton_eta[0]>      -2.500        &&     std_vector_lepton_eta[0]<     -2.000     &&      std_vector_lepton_pt[0]>   40.000  &&  std_vector_lepton_pt[0]< 50.000   )   *   0.831  /  0.844  +  \
#(  std_vector_lepton_eta[0]>      -2.000        &&     std_vector_lepton_eta[0]<     -1.566     &&      std_vector_lepton_pt[0]>   40.000  &&  std_vector_lepton_pt[0]< 50.000   )   *   0.831  /  0.852  +  \
#(  std_vector_lepton_eta[0]>      -1.566        &&     std_vector_lepton_eta[0]<     -1.444     &&      std_vector_lepton_pt[0]>   40.000  &&  std_vector_lepton_pt[0]< 50.000   )   *   0.779  /  0.801  +  \
#(  std_vector_lepton_eta[0]>      -1.444        &&     std_vector_lepton_eta[0]<     -0.800     &&      std_vector_lepton_pt[0]>   40.000  &&  std_vector_lepton_pt[0]< 50.000   )   *   0.833  /  0.851  +  \
#(  std_vector_lepton_eta[0]>      -0.800        &&     std_vector_lepton_eta[0]<     0.000      &&      std_vector_lepton_pt[0]>   40.000  &&  std_vector_lepton_pt[0]< 50.000   )   *   0.836  /  0.857  +  \
#(  std_vector_lepton_eta[0]>      0.000         &&     std_vector_lepton_eta[0]<     0.800      &&      std_vector_lepton_pt[0]>   40.000  &&  std_vector_lepton_pt[0]< 50.000   )   *   0.841  /  0.851  +  \
#(  std_vector_lepton_eta[0]>      0.800         &&     std_vector_lepton_eta[0]<     1.444      &&      std_vector_lepton_pt[0]>   40.000  &&  std_vector_lepton_pt[0]< 50.000   )   *   0.835  /  0.853  +  \
#(  std_vector_lepton_eta[0]>      1.444         &&     std_vector_lepton_eta[0]<     1.566      &&      std_vector_lepton_pt[0]>   40.000  &&  std_vector_lepton_pt[0]< 50.000   )   *   0.788  /  0.803  +  \
#(  std_vector_lepton_eta[0]>      1.566         &&     std_vector_lepton_eta[0]<     2.000      &&      std_vector_lepton_pt[0]>   40.000  &&  std_vector_lepton_pt[0]< 50.000   )   *   0.835  /  0.854  +  \
#(  std_vector_lepton_eta[0]>      2.000         &&     std_vector_lepton_eta[0]<     2.500      &&      std_vector_lepton_pt[0]>   40.000  &&  std_vector_lepton_pt[0]< 50.000   )   *   0.848  /  0.855  +  \
#(  std_vector_lepton_eta[0]>      -2.500        &&     std_vector_lepton_eta[0]<     -2.000     &&      std_vector_lepton_pt[0]>   50.000                                        )   *   0.859  /  0.880  +  \
#(  std_vector_lepton_eta[0]>      -2.000        &&     std_vector_lepton_eta[0]<     -1.566     &&      std_vector_lepton_pt[0]>   50.000                                        )   *   0.865  /  0.878  +  \
#(  std_vector_lepton_eta[0]>      -1.566        &&     std_vector_lepton_eta[0]<     -1.444     &&      std_vector_lepton_pt[0]>   50.000                                        )   *   0.810  /  0.840  +  \
#(  std_vector_lepton_eta[0]>      -1.444        &&     std_vector_lepton_eta[0]<     -0.800     &&      std_vector_lepton_pt[0]>   50.000                                        )   *   0.866  /  0.879  +  \
#(  std_vector_lepton_eta[0]>      -0.800        &&     std_vector_lepton_eta[0]<     0.000      &&      std_vector_lepton_pt[0]>   50.000                                        )   *   0.868  /  0.886  +  \
#(  std_vector_lepton_eta[0]>      0.000         &&     std_vector_lepton_eta[0]<     0.800      &&      std_vector_lepton_pt[0]>   50.000                                        )   *   0.869  /  0.882  +  \
#(  std_vector_lepton_eta[0]>      0.800         &&     std_vector_lepton_eta[0]<     1.444      &&      std_vector_lepton_pt[0]>   50.000                                        )   *   0.864  /  0.880  +  \
#(  std_vector_lepton_eta[0]>      1.444         &&     std_vector_lepton_eta[0]<     1.566      &&      std_vector_lepton_pt[0]>   50.000                                        )   *   0.829  /  0.835  +  \
#(  std_vector_lepton_eta[0]>      1.566         &&     std_vector_lepton_eta[0]<     2.000      &&      std_vector_lepton_pt[0]>   50.000                                        )   *   0.876  /  0.874  +  \
#(  std_vector_lepton_eta[0]>      2.000         &&     std_vector_lepton_eta[0]<     2.500      &&      std_vector_lepton_pt[0]>   50.000                                        )   *   0.877  /  0.873    \
#)))\
#* ((abs(std_vector_lepton_flavour[1]) == 13) * std_vector_lepton_idisoW[1] + (   \
#(abs(std_vector_lepton_flavour[1]) == 11)   *    \
#(   \
#(  std_vector_lepton_eta[1]>       -2.500       &&     std_vector_lepton_eta[1]<      -2.000    &&      std_vector_lepton_pt[1]>    10.000 &&  std_vector_lepton_pt[1]<  20.000  )   *   0.564  /  0.611  +  \
#(  std_vector_lepton_eta[1]>       -2.000       &&     std_vector_lepton_eta[1]<      -1.566    &&      std_vector_lepton_pt[1]>    10.000 &&  std_vector_lepton_pt[1]<  20.000  )   *   0.543  /  0.615  +  \
#(  std_vector_lepton_eta[1]>       -1.566       &&     std_vector_lepton_eta[1]<      -1.444    &&      std_vector_lepton_pt[1]>    10.000 &&  std_vector_lepton_pt[1]<  20.000  )   *   0.588  /  0.589  +  \
#(  std_vector_lepton_eta[1]>       -1.444       &&     std_vector_lepton_eta[1]<      -0.800    &&      std_vector_lepton_pt[1]>    10.000 &&  std_vector_lepton_pt[1]<  20.000  )   *   0.674  /  0.702  +  \
#(  std_vector_lepton_eta[1]>       -0.800       &&     std_vector_lepton_eta[1]<      0.000     &&      std_vector_lepton_pt[1]>    10.000 &&  std_vector_lepton_pt[1]<  20.000  )   *   0.696  /  0.699  +  \
#(  std_vector_lepton_eta[1]>       0.000        &&     std_vector_lepton_eta[1]<      0.800     &&      std_vector_lepton_pt[1]>    10.000 &&  std_vector_lepton_pt[1]<  20.000  )   *   0.697  /  0.696  +  \
#(  std_vector_lepton_eta[1]>       0.800        &&     std_vector_lepton_eta[1]<      1.444     &&      std_vector_lepton_pt[1]>    10.000 &&  std_vector_lepton_pt[1]<  20.000  )   *   0.682  /  0.706  +  \
#(  std_vector_lepton_eta[1]>       1.444        &&     std_vector_lepton_eta[1]<      1.566     &&      std_vector_lepton_pt[1]>    10.000 &&  std_vector_lepton_pt[1]<  20.000  )   *   0.557  /  0.579  +  \
#(  std_vector_lepton_eta[1]>       1.566        &&     std_vector_lepton_eta[1]<      2.000     &&      std_vector_lepton_pt[1]>    10.000 &&  std_vector_lepton_pt[1]<  20.000  )   *   0.550  /  0.607  +  \
#(  std_vector_lepton_eta[1]>       2.000        &&     std_vector_lepton_eta[1]<      2.500     &&      std_vector_lepton_pt[1]>    10.000 &&  std_vector_lepton_pt[1]<  20.000  )   *   0.586  /  0.627  +  \
#(  std_vector_lepton_eta[1]>       -2.500       &&     std_vector_lepton_eta[1]<      -2.000    &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.712  /  0.734  +  \
#(  std_vector_lepton_eta[1]>       -2.000       &&     std_vector_lepton_eta[1]<      -1.566    &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.669  /  0.728  +  \
#(  std_vector_lepton_eta[1]>       -1.566       &&     std_vector_lepton_eta[1]<      -1.444    &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.662  /  0.686  +  \
#(  std_vector_lepton_eta[1]>       -1.444       &&     std_vector_lepton_eta[1]<      -0.800    &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.746  /  0.766  +  \
#(  std_vector_lepton_eta[1]>       -0.800       &&     std_vector_lepton_eta[1]<      0.000     &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.752  /  0.768  +  \
#(  std_vector_lepton_eta[1]>       0.000        &&     std_vector_lepton_eta[1]<      0.800     &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.754  /  0.769  +  \
#(  std_vector_lepton_eta[1]>       0.800        &&     std_vector_lepton_eta[1]<      1.444     &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.757  /  0.765  +  \
#(  std_vector_lepton_eta[1]>       1.444        &&     std_vector_lepton_eta[1]<      1.566     &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.637  /  0.679  +  \
#(  std_vector_lepton_eta[1]>       1.566        &&     std_vector_lepton_eta[1]<      2.000     &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.691  /  0.736  +  \
#(  std_vector_lepton_eta[1]>       2.000        &&     std_vector_lepton_eta[1]<      2.500     &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.727  /  0.749  +  \
#(  std_vector_lepton_eta[1]>       -2.500       &&     std_vector_lepton_eta[1]<      -2.000    &&      std_vector_lepton_pt[1]>    30.000 &&  std_vector_lepton_pt[1]<  40.000  )   *   0.786  /  0.804  +  \
#(  std_vector_lepton_eta[1]>       -2.000       &&     std_vector_lepton_eta[1]<      -1.566    &&      std_vector_lepton_pt[1]>    30.000 &&  std_vector_lepton_pt[1]<  40.000  )   *   0.765  /  0.808  +  \
#(  std_vector_lepton_eta[1]>       -1.566       &&     std_vector_lepton_eta[1]<      -1.444    &&      std_vector_lepton_pt[1]>    30.000 &&  std_vector_lepton_pt[1]<  40.000  )   *   0.721  /  0.739  +  \
#(  std_vector_lepton_eta[1]>       -1.444       &&     std_vector_lepton_eta[1]<      -0.800    &&      std_vector_lepton_pt[1]>    30.000 &&  std_vector_lepton_pt[1]<  40.000  )   *   0.795  /  0.814  +  \
#(  std_vector_lepton_eta[1]>       -0.800       &&     std_vector_lepton_eta[1]<      0.000     &&      std_vector_lepton_pt[1]>    30.000 &&  std_vector_lepton_pt[1]<  40.000  )   *   0.798  /  0.818  +  \
#(  std_vector_lepton_eta[1]>       0.000        &&     std_vector_lepton_eta[1]<      0.800     &&      std_vector_lepton_pt[1]>    30.000 &&  std_vector_lepton_pt[1]<  40.000  )   *   0.801  /  0.813  +  \
#(  std_vector_lepton_eta[1]>       0.800        &&     std_vector_lepton_eta[1]<      1.444     &&      std_vector_lepton_pt[1]>    30.000 &&  std_vector_lepton_pt[1]<  40.000  )   *   0.794  /  0.814  +  \
#(  std_vector_lepton_eta[1]>       1.444        &&     std_vector_lepton_eta[1]<      1.566     &&      std_vector_lepton_pt[1]>    30.000 &&  std_vector_lepton_pt[1]<  40.000  )   *   0.725  /  0.734  +  \
#(  std_vector_lepton_eta[1]>       1.566        &&     std_vector_lepton_eta[1]<      2.000     &&      std_vector_lepton_pt[1]>    30.000 &&  std_vector_lepton_pt[1]<  40.000  )   *   0.778  /  0.813  +  \
#(  std_vector_lepton_eta[1]>       2.000        &&     std_vector_lepton_eta[1]<      2.500     &&      std_vector_lepton_pt[1]>    30.000 &&  std_vector_lepton_pt[1]<  40.000  )   *   0.806  /  0.829  +  \
#(  std_vector_lepton_eta[1]>      -2.500        &&     std_vector_lepton_eta[1]<     -2.000     &&      std_vector_lepton_pt[1]>   40.000  &&  std_vector_lepton_pt[1]< 50.000   )   *   0.831  /  0.844  +  \
#(  std_vector_lepton_eta[1]>      -2.000        &&     std_vector_lepton_eta[1]<     -1.566     &&      std_vector_lepton_pt[1]>   40.000  &&  std_vector_lepton_pt[1]< 50.000   )   *   0.831  /  0.852  +  \
#(  std_vector_lepton_eta[1]>      -1.566        &&     std_vector_lepton_eta[1]<     -1.444     &&      std_vector_lepton_pt[1]>   40.000  &&  std_vector_lepton_pt[1]< 50.000   )   *   0.779  /  0.801  +  \
#(  std_vector_lepton_eta[1]>      -1.444        &&     std_vector_lepton_eta[1]<     -0.800     &&      std_vector_lepton_pt[1]>   40.000  &&  std_vector_lepton_pt[1]< 50.000   )   *   0.833  /  0.851  +  \
#(  std_vector_lepton_eta[1]>      -0.800        &&     std_vector_lepton_eta[1]<     0.000      &&      std_vector_lepton_pt[1]>   40.000  &&  std_vector_lepton_pt[1]< 50.000   )   *   0.836  /  0.857  +  \
#(  std_vector_lepton_eta[1]>      0.000         &&     std_vector_lepton_eta[1]<     0.800      &&      std_vector_lepton_pt[1]>   40.000  &&  std_vector_lepton_pt[1]< 50.000   )   *   0.841  /  0.851  +  \
#(  std_vector_lepton_eta[1]>      0.800         &&     std_vector_lepton_eta[1]<     1.444      &&      std_vector_lepton_pt[1]>   40.000  &&  std_vector_lepton_pt[1]< 50.000   )   *   0.835  /  0.853  +  \
#(  std_vector_lepton_eta[1]>      1.444         &&     std_vector_lepton_eta[1]<     1.566      &&      std_vector_lepton_pt[1]>   40.000  &&  std_vector_lepton_pt[1]< 50.000   )   *   0.788  /  0.803  +  \
#(  std_vector_lepton_eta[1]>      1.566         &&     std_vector_lepton_eta[1]<     2.000      &&      std_vector_lepton_pt[1]>   40.000  &&  std_vector_lepton_pt[1]< 50.000   )   *   0.835  /  0.854  +  \
#(  std_vector_lepton_eta[1]>      2.000         &&     std_vector_lepton_eta[1]<     2.500      &&      std_vector_lepton_pt[1]>   40.000  &&  std_vector_lepton_pt[1]< 50.000   )   *   0.848  /  0.855  +  \
#(  std_vector_lepton_eta[1]>      -2.500        &&     std_vector_lepton_eta[1]<     -2.000     &&      std_vector_lepton_pt[1]>   50.000                                        )   *   0.859  /  0.880  +  \
#(  std_vector_lepton_eta[1]>      -2.000        &&     std_vector_lepton_eta[1]<     -1.566     &&      std_vector_lepton_pt[1]>   50.000                                        )   *   0.865  /  0.878  +  \
#(  std_vector_lepton_eta[1]>      -1.566        &&     std_vector_lepton_eta[1]<     -1.444     &&      std_vector_lepton_pt[1]>   50.000                                        )   *   0.810  /  0.840  +  \
#(  std_vector_lepton_eta[1]>      -1.444        &&     std_vector_lepton_eta[1]<     -0.800     &&      std_vector_lepton_pt[1]>   50.000                                        )   *   0.866  /  0.879  +  \
#(  std_vector_lepton_eta[1]>      -0.800        &&     std_vector_lepton_eta[1]<     0.000      &&      std_vector_lepton_pt[1]>   50.000                                        )   *   0.868  /  0.886  +  \
#(  std_vector_lepton_eta[1]>      0.000         &&     std_vector_lepton_eta[1]<     0.800      &&      std_vector_lepton_pt[1]>   50.000                                        )   *   0.869  /  0.882  +  \
#(  std_vector_lepton_eta[1]>      0.800         &&     std_vector_lepton_eta[1]<     1.444      &&      std_vector_lepton_pt[1]>   50.000                                        )   *   0.864  /  0.880  +  \
#(  std_vector_lepton_eta[1]>      1.444         &&     std_vector_lepton_eta[1]<     1.566      &&      std_vector_lepton_pt[1]>   50.000                                        )   *   0.829  /  0.835  +  \
#(  std_vector_lepton_eta[1]>      1.566         &&     std_vector_lepton_eta[1]<     2.000      &&      std_vector_lepton_pt[1]>   50.000                                        )   *   0.876  /  0.874  +  \
#(  std_vector_lepton_eta[1]>      2.000         &&     std_vector_lepton_eta[1]<     2.500      &&      std_vector_lepton_pt[1]>   50.000                                        )   *   0.877  /  0.873    \
#)))',  
                      ##'weights' :  [
                        ###'0.829752445221',
                        ###
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',                        
                        ##]
                   #}



#samples['DY2reco']  = {    'name': [
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-10to50ext3.root',
                            ##
                            ##'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-50_0000__part0.root',
                            ##'latino_DYJetsToLL_M-50_0000__part1.root',
                            ##'latino_DYJetsToLL_M-50_0000__part2.root',
                            ##'latino_DYJetsToLL_M-50_0000__part3.root',
                            ##'latino_DYJetsToLL_M-50_0000__part4.root',
                            #'latino_DYJetsToLL_M-50_0001__part0.root',
                            #'latino_DYJetsToLL_M-50_0001__part1.root',
                            #'latino_DYJetsToLL_M-50_0001__part2.root',
                            #'latino_DYJetsToLL_M-50_0001__part3.root',
                            #'latino_DYJetsToLL_M-50_0001__part4.root',
                            ##'latino_DYJetsToLL_M-50_0002__part0.root',
                            #],    
                      #'weight' : 'baseW*(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW63mb*effTrigW*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)  \
                        #* ((abs(std_vector_lepton_flavour[0]) == 13) * std_vector_lepton_idisoW[0] + (   \
#(abs(std_vector_lepton_flavour[0]) == 11)   *    \
#(   \
#(  std_vector_lepton_eta[0]>       -2.500       &&     std_vector_lepton_eta[0]<      -2.000    &&      std_vector_lepton_pt[0]>    10.000 &&  std_vector_lepton_pt[0]<  20.000  )   *   0.564  /  0.611  +  \
#(  std_vector_lepton_eta[0]>       -2.000       &&     std_vector_lepton_eta[0]<      -1.566    &&      std_vector_lepton_pt[0]>    10.000 &&  std_vector_lepton_pt[0]<  20.000  )   *   0.543  /  0.615  +  \
#(  std_vector_lepton_eta[0]>       -1.566       &&     std_vector_lepton_eta[0]<      -1.444    &&      std_vector_lepton_pt[0]>    10.000 &&  std_vector_lepton_pt[0]<  20.000  )   *   0.588  /  0.589  +  \
#(  std_vector_lepton_eta[0]>       -1.444       &&     std_vector_lepton_eta[0]<      -0.800    &&      std_vector_lepton_pt[0]>    10.000 &&  std_vector_lepton_pt[0]<  20.000  )   *   0.674  /  0.702  +  \
#(  std_vector_lepton_eta[0]>       -0.800       &&     std_vector_lepton_eta[0]<      0.000     &&      std_vector_lepton_pt[0]>    10.000 &&  std_vector_lepton_pt[0]<  20.000  )   *   0.696  /  0.699  +  \
#(  std_vector_lepton_eta[0]>       0.000        &&     std_vector_lepton_eta[0]<      0.800     &&      std_vector_lepton_pt[0]>    10.000 &&  std_vector_lepton_pt[0]<  20.000  )   *   0.697  /  0.696  +  \
#(  std_vector_lepton_eta[0]>       0.800        &&     std_vector_lepton_eta[0]<      1.444     &&      std_vector_lepton_pt[0]>    10.000 &&  std_vector_lepton_pt[0]<  20.000  )   *   0.682  /  0.706  +  \
#(  std_vector_lepton_eta[0]>       1.444        &&     std_vector_lepton_eta[0]<      1.566     &&      std_vector_lepton_pt[0]>    10.000 &&  std_vector_lepton_pt[0]<  20.000  )   *   0.557  /  0.579  +  \
#(  std_vector_lepton_eta[0]>       1.566        &&     std_vector_lepton_eta[0]<      2.000     &&      std_vector_lepton_pt[0]>    10.000 &&  std_vector_lepton_pt[0]<  20.000  )   *   0.550  /  0.607  +  \
#(  std_vector_lepton_eta[0]>       2.000        &&     std_vector_lepton_eta[0]<      2.500     &&      std_vector_lepton_pt[0]>    10.000 &&  std_vector_lepton_pt[0]<  20.000  )   *   0.586  /  0.627  +  \
#(  std_vector_lepton_eta[0]>       -2.500       &&     std_vector_lepton_eta[0]<      -2.000    &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *   0.712  /  0.734  +  \
#(  std_vector_lepton_eta[0]>       -2.000       &&     std_vector_lepton_eta[0]<      -1.566    &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *   0.669  /  0.728  +  \
#(  std_vector_lepton_eta[0]>       -1.566       &&     std_vector_lepton_eta[0]<      -1.444    &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *   0.662  /  0.686  +  \
#(  std_vector_lepton_eta[0]>       -1.444       &&     std_vector_lepton_eta[0]<      -0.800    &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *   0.746  /  0.766  +  \
#(  std_vector_lepton_eta[0]>       -0.800       &&     std_vector_lepton_eta[0]<      0.000     &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *   0.752  /  0.768  +  \
#(  std_vector_lepton_eta[0]>       0.000        &&     std_vector_lepton_eta[0]<      0.800     &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *   0.754  /  0.769  +  \
#(  std_vector_lepton_eta[0]>       0.800        &&     std_vector_lepton_eta[0]<      1.444     &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *   0.757  /  0.765  +  \
#(  std_vector_lepton_eta[0]>       1.444        &&     std_vector_lepton_eta[0]<      1.566     &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *   0.637  /  0.679  +  \
#(  std_vector_lepton_eta[0]>       1.566        &&     std_vector_lepton_eta[0]<      2.000     &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *   0.691  /  0.736  +  \
#(  std_vector_lepton_eta[0]>       2.000        &&     std_vector_lepton_eta[0]<      2.500     &&      std_vector_lepton_pt[0]>    20.000 &&  std_vector_lepton_pt[0]<  30.000  )   *   0.727  /  0.749  +  \
#(  std_vector_lepton_eta[0]>       -2.500       &&     std_vector_lepton_eta[0]<      -2.000    &&      std_vector_lepton_pt[0]>    30.000 &&  std_vector_lepton_pt[0]<  40.000  )   *   0.786  /  0.804  +  \
#(  std_vector_lepton_eta[0]>       -2.000       &&     std_vector_lepton_eta[0]<      -1.566    &&      std_vector_lepton_pt[0]>    30.000 &&  std_vector_lepton_pt[0]<  40.000  )   *   0.765  /  0.808  +  \
#(  std_vector_lepton_eta[0]>       -1.566       &&     std_vector_lepton_eta[0]<      -1.444    &&      std_vector_lepton_pt[0]>    30.000 &&  std_vector_lepton_pt[0]<  40.000  )   *   0.721  /  0.739  +  \
#(  std_vector_lepton_eta[0]>       -1.444       &&     std_vector_lepton_eta[0]<      -0.800    &&      std_vector_lepton_pt[0]>    30.000 &&  std_vector_lepton_pt[0]<  40.000  )   *   0.795  /  0.814  +  \
#(  std_vector_lepton_eta[0]>       -0.800       &&     std_vector_lepton_eta[0]<      0.000     &&      std_vector_lepton_pt[0]>    30.000 &&  std_vector_lepton_pt[0]<  40.000  )   *   0.798  /  0.818  +  \
#(  std_vector_lepton_eta[0]>       0.000        &&     std_vector_lepton_eta[0]<      0.800     &&      std_vector_lepton_pt[0]>    30.000 &&  std_vector_lepton_pt[0]<  40.000  )   *   0.801  /  0.813  +  \
#(  std_vector_lepton_eta[0]>       0.800        &&     std_vector_lepton_eta[0]<      1.444     &&      std_vector_lepton_pt[0]>    30.000 &&  std_vector_lepton_pt[0]<  40.000  )   *   0.794  /  0.814  +  \
#(  std_vector_lepton_eta[0]>       1.444        &&     std_vector_lepton_eta[0]<      1.566     &&      std_vector_lepton_pt[0]>    30.000 &&  std_vector_lepton_pt[0]<  40.000  )   *   0.725  /  0.734  +  \
#(  std_vector_lepton_eta[0]>       1.566        &&     std_vector_lepton_eta[0]<      2.000     &&      std_vector_lepton_pt[0]>    30.000 &&  std_vector_lepton_pt[0]<  40.000  )   *   0.778  /  0.813  +  \
#(  std_vector_lepton_eta[0]>       2.000        &&     std_vector_lepton_eta[0]<      2.500     &&      std_vector_lepton_pt[0]>    30.000 &&  std_vector_lepton_pt[0]<  40.000  )   *   0.806  /  0.829  +  \
#(  std_vector_lepton_eta[0]>      -2.500        &&     std_vector_lepton_eta[0]<     -2.000     &&      std_vector_lepton_pt[0]>   40.000  &&  std_vector_lepton_pt[0]< 50.000   )   *   0.831  /  0.844  +  \
#(  std_vector_lepton_eta[0]>      -2.000        &&     std_vector_lepton_eta[0]<     -1.566     &&      std_vector_lepton_pt[0]>   40.000  &&  std_vector_lepton_pt[0]< 50.000   )   *   0.831  /  0.852  +  \
#(  std_vector_lepton_eta[0]>      -1.566        &&     std_vector_lepton_eta[0]<     -1.444     &&      std_vector_lepton_pt[0]>   40.000  &&  std_vector_lepton_pt[0]< 50.000   )   *   0.779  /  0.801  +  \
#(  std_vector_lepton_eta[0]>      -1.444        &&     std_vector_lepton_eta[0]<     -0.800     &&      std_vector_lepton_pt[0]>   40.000  &&  std_vector_lepton_pt[0]< 50.000   )   *   0.833  /  0.851  +  \
#(  std_vector_lepton_eta[0]>      -0.800        &&     std_vector_lepton_eta[0]<     0.000      &&      std_vector_lepton_pt[0]>   40.000  &&  std_vector_lepton_pt[0]< 50.000   )   *   0.836  /  0.857  +  \
#(  std_vector_lepton_eta[0]>      0.000         &&     std_vector_lepton_eta[0]<     0.800      &&      std_vector_lepton_pt[0]>   40.000  &&  std_vector_lepton_pt[0]< 50.000   )   *   0.841  /  0.851  +  \
#(  std_vector_lepton_eta[0]>      0.800         &&     std_vector_lepton_eta[0]<     1.444      &&      std_vector_lepton_pt[0]>   40.000  &&  std_vector_lepton_pt[0]< 50.000   )   *   0.835  /  0.853  +  \
#(  std_vector_lepton_eta[0]>      1.444         &&     std_vector_lepton_eta[0]<     1.566      &&      std_vector_lepton_pt[0]>   40.000  &&  std_vector_lepton_pt[0]< 50.000   )   *   0.788  /  0.803  +  \
#(  std_vector_lepton_eta[0]>      1.566         &&     std_vector_lepton_eta[0]<     2.000      &&      std_vector_lepton_pt[0]>   40.000  &&  std_vector_lepton_pt[0]< 50.000   )   *   0.835  /  0.854  +  \
#(  std_vector_lepton_eta[0]>      2.000         &&     std_vector_lepton_eta[0]<     2.500      &&      std_vector_lepton_pt[0]>   40.000  &&  std_vector_lepton_pt[0]< 50.000   )   *   0.848  /  0.855  +  \
#(  std_vector_lepton_eta[0]>      -2.500        &&     std_vector_lepton_eta[0]<     -2.000     &&      std_vector_lepton_pt[0]>   50.000                                        )   *   0.859  /  0.880  +  \
#(  std_vector_lepton_eta[0]>      -2.000        &&     std_vector_lepton_eta[0]<     -1.566     &&      std_vector_lepton_pt[0]>   50.000                                        )   *   0.865  /  0.878  +  \
#(  std_vector_lepton_eta[0]>      -1.566        &&     std_vector_lepton_eta[0]<     -1.444     &&      std_vector_lepton_pt[0]>   50.000                                        )   *   0.810  /  0.840  +  \
#(  std_vector_lepton_eta[0]>      -1.444        &&     std_vector_lepton_eta[0]<     -0.800     &&      std_vector_lepton_pt[0]>   50.000                                        )   *   0.866  /  0.879  +  \
#(  std_vector_lepton_eta[0]>      -0.800        &&     std_vector_lepton_eta[0]<     0.000      &&      std_vector_lepton_pt[0]>   50.000                                        )   *   0.868  /  0.886  +  \
#(  std_vector_lepton_eta[0]>      0.000         &&     std_vector_lepton_eta[0]<     0.800      &&      std_vector_lepton_pt[0]>   50.000                                        )   *   0.869  /  0.882  +  \
#(  std_vector_lepton_eta[0]>      0.800         &&     std_vector_lepton_eta[0]<     1.444      &&      std_vector_lepton_pt[0]>   50.000                                        )   *   0.864  /  0.880  +  \
#(  std_vector_lepton_eta[0]>      1.444         &&     std_vector_lepton_eta[0]<     1.566      &&      std_vector_lepton_pt[0]>   50.000                                        )   *   0.829  /  0.835  +  \
#(  std_vector_lepton_eta[0]>      1.566         &&     std_vector_lepton_eta[0]<     2.000      &&      std_vector_lepton_pt[0]>   50.000                                        )   *   0.876  /  0.874  +  \
#(  std_vector_lepton_eta[0]>      2.000         &&     std_vector_lepton_eta[0]<     2.500      &&      std_vector_lepton_pt[0]>   50.000                                        )   *   0.877  /  0.873    \
#)))\
#* ((abs(std_vector_lepton_flavour[1]) == 13) * std_vector_lepton_idisoW[1] + (   \
#(abs(std_vector_lepton_flavour[1]) == 11)   *    \
#(   \
#(  std_vector_lepton_eta[1]>       -2.500       &&     std_vector_lepton_eta[1]<      -2.000    &&      std_vector_lepton_pt[1]>    10.000 &&  std_vector_lepton_pt[1]<  20.000  )   *   0.564  /  0.611  +  \
#(  std_vector_lepton_eta[1]>       -2.000       &&     std_vector_lepton_eta[1]<      -1.566    &&      std_vector_lepton_pt[1]>    10.000 &&  std_vector_lepton_pt[1]<  20.000  )   *   0.543  /  0.615  +  \
#(  std_vector_lepton_eta[1]>       -1.566       &&     std_vector_lepton_eta[1]<      -1.444    &&      std_vector_lepton_pt[1]>    10.000 &&  std_vector_lepton_pt[1]<  20.000  )   *   0.588  /  0.589  +  \
#(  std_vector_lepton_eta[1]>       -1.444       &&     std_vector_lepton_eta[1]<      -0.800    &&      std_vector_lepton_pt[1]>    10.000 &&  std_vector_lepton_pt[1]<  20.000  )   *   0.674  /  0.702  +  \
#(  std_vector_lepton_eta[1]>       -0.800       &&     std_vector_lepton_eta[1]<      0.000     &&      std_vector_lepton_pt[1]>    10.000 &&  std_vector_lepton_pt[1]<  20.000  )   *   0.696  /  0.699  +  \
#(  std_vector_lepton_eta[1]>       0.000        &&     std_vector_lepton_eta[1]<      0.800     &&      std_vector_lepton_pt[1]>    10.000 &&  std_vector_lepton_pt[1]<  20.000  )   *   0.697  /  0.696  +  \
#(  std_vector_lepton_eta[1]>       0.800        &&     std_vector_lepton_eta[1]<      1.444     &&      std_vector_lepton_pt[1]>    10.000 &&  std_vector_lepton_pt[1]<  20.000  )   *   0.682  /  0.706  +  \
#(  std_vector_lepton_eta[1]>       1.444        &&     std_vector_lepton_eta[1]<      1.566     &&      std_vector_lepton_pt[1]>    10.000 &&  std_vector_lepton_pt[1]<  20.000  )   *   0.557  /  0.579  +  \
#(  std_vector_lepton_eta[1]>       1.566        &&     std_vector_lepton_eta[1]<      2.000     &&      std_vector_lepton_pt[1]>    10.000 &&  std_vector_lepton_pt[1]<  20.000  )   *   0.550  /  0.607  +  \
#(  std_vector_lepton_eta[1]>       2.000        &&     std_vector_lepton_eta[1]<      2.500     &&      std_vector_lepton_pt[1]>    10.000 &&  std_vector_lepton_pt[1]<  20.000  )   *   0.586  /  0.627  +  \
#(  std_vector_lepton_eta[1]>       -2.500       &&     std_vector_lepton_eta[1]<      -2.000    &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.712  /  0.734  +  \
#(  std_vector_lepton_eta[1]>       -2.000       &&     std_vector_lepton_eta[1]<      -1.566    &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.669  /  0.728  +  \
#(  std_vector_lepton_eta[1]>       -1.566       &&     std_vector_lepton_eta[1]<      -1.444    &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.662  /  0.686  +  \
#(  std_vector_lepton_eta[1]>       -1.444       &&     std_vector_lepton_eta[1]<      -0.800    &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.746  /  0.766  +  \
#(  std_vector_lepton_eta[1]>       -0.800       &&     std_vector_lepton_eta[1]<      0.000     &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.752  /  0.768  +  \
#(  std_vector_lepton_eta[1]>       0.000        &&     std_vector_lepton_eta[1]<      0.800     &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.754  /  0.769  +  \
#(  std_vector_lepton_eta[1]>       0.800        &&     std_vector_lepton_eta[1]<      1.444     &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.757  /  0.765  +  \
#(  std_vector_lepton_eta[1]>       1.444        &&     std_vector_lepton_eta[1]<      1.566     &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.637  /  0.679  +  \
#(  std_vector_lepton_eta[1]>       1.566        &&     std_vector_lepton_eta[1]<      2.000     &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.691  /  0.736  +  \
#(  std_vector_lepton_eta[1]>       2.000        &&     std_vector_lepton_eta[1]<      2.500     &&      std_vector_lepton_pt[1]>    20.000 &&  std_vector_lepton_pt[1]<  30.000  )   *   0.727  /  0.749  +  \
#(  std_vector_lepton_eta[1]>       -2.500       &&     std_vector_lepton_eta[1]<      -2.000    &&      std_vector_lepton_pt[1]>    30.000 &&  std_vector_lepton_pt[1]<  40.000  )   *   0.786  /  0.804  +  \
#(  std_vector_lepton_eta[1]>       -2.000       &&     std_vector_lepton_eta[1]<      -1.566    &&      std_vector_lepton_pt[1]>    30.000 &&  std_vector_lepton_pt[1]<  40.000  )   *   0.765  /  0.808  +  \
#(  std_vector_lepton_eta[1]>       -1.566       &&     std_vector_lepton_eta[1]<      -1.444    &&      std_vector_lepton_pt[1]>    30.000 &&  std_vector_lepton_pt[1]<  40.000  )   *   0.721  /  0.739  +  \
#(  std_vector_lepton_eta[1]>       -1.444       &&     std_vector_lepton_eta[1]<      -0.800    &&      std_vector_lepton_pt[1]>    30.000 &&  std_vector_lepton_pt[1]<  40.000  )   *   0.795  /  0.814  +  \
#(  std_vector_lepton_eta[1]>       -0.800       &&     std_vector_lepton_eta[1]<      0.000     &&      std_vector_lepton_pt[1]>    30.000 &&  std_vector_lepton_pt[1]<  40.000  )   *   0.798  /  0.818  +  \
#(  std_vector_lepton_eta[1]>       0.000        &&     std_vector_lepton_eta[1]<      0.800     &&      std_vector_lepton_pt[1]>    30.000 &&  std_vector_lepton_pt[1]<  40.000  )   *   0.801  /  0.813  +  \
#(  std_vector_lepton_eta[1]>       0.800        &&     std_vector_lepton_eta[1]<      1.444     &&      std_vector_lepton_pt[1]>    30.000 &&  std_vector_lepton_pt[1]<  40.000  )   *   0.794  /  0.814  +  \
#(  std_vector_lepton_eta[1]>       1.444        &&     std_vector_lepton_eta[1]<      1.566     &&      std_vector_lepton_pt[1]>    30.000 &&  std_vector_lepton_pt[1]<  40.000  )   *   0.725  /  0.734  +  \
#(  std_vector_lepton_eta[1]>       1.566        &&     std_vector_lepton_eta[1]<      2.000     &&      std_vector_lepton_pt[1]>    30.000 &&  std_vector_lepton_pt[1]<  40.000  )   *   0.778  /  0.813  +  \
#(  std_vector_lepton_eta[1]>       2.000        &&     std_vector_lepton_eta[1]<      2.500     &&      std_vector_lepton_pt[1]>    30.000 &&  std_vector_lepton_pt[1]<  40.000  )   *   0.806  /  0.829  +  \
#(  std_vector_lepton_eta[1]>      -2.500        &&     std_vector_lepton_eta[1]<     -2.000     &&      std_vector_lepton_pt[1]>   40.000  &&  std_vector_lepton_pt[1]< 50.000   )   *   0.831  /  0.844  +  \
#(  std_vector_lepton_eta[1]>      -2.000        &&     std_vector_lepton_eta[1]<     -1.566     &&      std_vector_lepton_pt[1]>   40.000  &&  std_vector_lepton_pt[1]< 50.000   )   *   0.831  /  0.852  +  \
#(  std_vector_lepton_eta[1]>      -1.566        &&     std_vector_lepton_eta[1]<     -1.444     &&      std_vector_lepton_pt[1]>   40.000  &&  std_vector_lepton_pt[1]< 50.000   )   *   0.779  /  0.801  +  \
#(  std_vector_lepton_eta[1]>      -1.444        &&     std_vector_lepton_eta[1]<     -0.800     &&      std_vector_lepton_pt[1]>   40.000  &&  std_vector_lepton_pt[1]< 50.000   )   *   0.833  /  0.851  +  \
#(  std_vector_lepton_eta[1]>      -0.800        &&     std_vector_lepton_eta[1]<     0.000      &&      std_vector_lepton_pt[1]>   40.000  &&  std_vector_lepton_pt[1]< 50.000   )   *   0.836  /  0.857  +  \
#(  std_vector_lepton_eta[1]>      0.000         &&     std_vector_lepton_eta[1]<     0.800      &&      std_vector_lepton_pt[1]>   40.000  &&  std_vector_lepton_pt[1]< 50.000   )   *   0.841  /  0.851  +  \
#(  std_vector_lepton_eta[1]>      0.800         &&     std_vector_lepton_eta[1]<     1.444      &&      std_vector_lepton_pt[1]>   40.000  &&  std_vector_lepton_pt[1]< 50.000   )   *   0.835  /  0.853  +  \
#(  std_vector_lepton_eta[1]>      1.444         &&     std_vector_lepton_eta[1]<     1.566      &&      std_vector_lepton_pt[1]>   40.000  &&  std_vector_lepton_pt[1]< 50.000   )   *   0.788  /  0.803  +  \
#(  std_vector_lepton_eta[1]>      1.566         &&     std_vector_lepton_eta[1]<     2.000      &&      std_vector_lepton_pt[1]>   40.000  &&  std_vector_lepton_pt[1]< 50.000   )   *   0.835  /  0.854  +  \
#(  std_vector_lepton_eta[1]>      2.000         &&     std_vector_lepton_eta[1]<     2.500      &&      std_vector_lepton_pt[1]>   40.000  &&  std_vector_lepton_pt[1]< 50.000   )   *   0.848  /  0.855  +  \
#(  std_vector_lepton_eta[1]>      -2.500        &&     std_vector_lepton_eta[1]<     -2.000     &&      std_vector_lepton_pt[1]>   50.000                                        )   *   0.859  /  0.880  +  \
#(  std_vector_lepton_eta[1]>      -2.000        &&     std_vector_lepton_eta[1]<     -1.566     &&      std_vector_lepton_pt[1]>   50.000                                        )   *   0.865  /  0.878  +  \
#(  std_vector_lepton_eta[1]>      -1.566        &&     std_vector_lepton_eta[1]<     -1.444     &&      std_vector_lepton_pt[1]>   50.000                                        )   *   0.810  /  0.840  +  \
#(  std_vector_lepton_eta[1]>      -1.444        &&     std_vector_lepton_eta[1]<     -0.800     &&      std_vector_lepton_pt[1]>   50.000                                        )   *   0.866  /  0.879  +  \
#(  std_vector_lepton_eta[1]>      -0.800        &&     std_vector_lepton_eta[1]<     0.000      &&      std_vector_lepton_pt[1]>   50.000                                        )   *   0.868  /  0.886  +  \
#(  std_vector_lepton_eta[1]>      0.000         &&     std_vector_lepton_eta[1]<     0.800      &&      std_vector_lepton_pt[1]>   50.000                                        )   *   0.869  /  0.882  +  \
#(  std_vector_lepton_eta[1]>      0.800         &&     std_vector_lepton_eta[1]<     1.444      &&      std_vector_lepton_pt[1]>   50.000                                        )   *   0.864  /  0.880  +  \
#(  std_vector_lepton_eta[1]>      1.444         &&     std_vector_lepton_eta[1]<     1.566      &&      std_vector_lepton_pt[1]>   50.000                                        )   *   0.829  /  0.835  +  \
#(  std_vector_lepton_eta[1]>      1.566         &&     std_vector_lepton_eta[1]<     2.000      &&      std_vector_lepton_pt[1]>   50.000                                        )   *   0.876  /  0.874  +  \
#(  std_vector_lepton_eta[1]>      2.000         &&     std_vector_lepton_eta[1]<     2.500      &&      std_vector_lepton_pt[1]>   50.000                                        )   *   0.877  /  0.873    \
#)))',  
                      ##'weights' :  [
                        ###'0.829752445221',
                        ###
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ###'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',                        
                        ##]
                   #}
            
            
                        
            
            
                      
#samples['DY1']  = {    'name': [
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-10to50ext3.root',
                            ##
                            ##'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            ##'latino_DYJetsToLL_M-10to50.root',
                            #'latino_DYJetsToLL_M-50_0000__part0.root',
                            #'latino_DYJetsToLL_M-50_0000__part1.root',
                            #'latino_DYJetsToLL_M-50_0000__part2.root',
                            #'latino_DYJetsToLL_M-50_0000__part3.root',
                            #'latino_DYJetsToLL_M-50_0000__part4.root',
                            ##'latino_DYJetsToLL_M-50_0001__part0.root',
                            ##'latino_DYJetsToLL_M-50_0001__part1.root',
                            ##'latino_DYJetsToLL_M-50_0001__part2.root',
                            ##'latino_DYJetsToLL_M-50_0001__part3.root',
                            ##'latino_DYJetsToLL_M-50_0001__part4.root',
                            ##'latino_DYJetsToLL_M-50_0002__part0.root',
                            #],    
                      #'weight' : '(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW63mb*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
                      #'weights' :  [
                        ##'0.829752445221',
                        ##
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',                        
                        #]
                   #}



#samples['DY2']  = {    'name': [
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-10to50ext3.root',
                            ##
                            ##'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-50_0000__part0.root',
                            ##'latino_DYJetsToLL_M-50_0000__part1.root',
                            ##'latino_DYJetsToLL_M-50_0000__part2.root',
                            ##'latino_DYJetsToLL_M-50_0000__part3.root',
                            ##'latino_DYJetsToLL_M-50_0000__part4.root',
                            #'latino_DYJetsToLL_M-50_0001__part0.root',
                            #'latino_DYJetsToLL_M-50_0001__part1.root',
                            #'latino_DYJetsToLL_M-50_0001__part2.root',
                            #'latino_DYJetsToLL_M-50_0001__part3.root',
                            #'latino_DYJetsToLL_M-50_0001__part4.root',
                            #'latino_DYJetsToLL_M-50_0002__part0.root',
                            #],    
                      #'weight' : '(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW63mb*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
                      #'weights' :  [
                        ##'0.829752445221',
                        ##
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',                        
                        #]
                   #}


#samples['DY1']  = {    'name': [
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-10to50ext3.root',
                            ##
                            ##'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            ##'latino_DYJetsToLL_M-10to50.root',
                            #'latino_DYJetsToLL_M-50_0000__part0.root',
                            #'latino_DYJetsToLL_M-50_0000__part1.root',
                            #'latino_DYJetsToLL_M-50_0000__part2.root',
                            #'latino_DYJetsToLL_M-50_0000__part3.root',
                            #'latino_DYJetsToLL_M-50_0000__part4.root',
                            ##'latino_DYJetsToLL_M-50_0001__part0.root',
                            ##'latino_DYJetsToLL_M-50_0001__part1.root',
                            ##'latino_DYJetsToLL_M-50_0001__part2.root',
                            ##'latino_DYJetsToLL_M-50_0001__part3.root',
                            ##'latino_DYJetsToLL_M-50_0001__part4.root',
                            ##'latino_DYJetsToLL_M-50_0002__part0.root',
                            #],    
                      ##'weight' : '(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW63mb*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
                      #'weight' : 'puW63mb*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*bPogSF*effTrigW*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]\
                        #* ((abs(std_vector_lepton_flavour[0]) == 13) * std_vector_lepton_idisoW[0] + (   \
                           #(abs(std_vector_lepton_flavour[0]) == 11)   *    \
                           #(  std_vector_lepton_eta[0]>   -2.500    &&     std_vector_lepton_eta[0]<      -2.000   &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.935    +      \
                           #(  std_vector_lepton_eta[0]>   -2.000    &&     std_vector_lepton_eta[0]<      -1.566   &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.885    +      \
                           #(  std_vector_lepton_eta[0]>   -1.566    &&     std_vector_lepton_eta[0]<      -1.444   &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.983    +      \
                           #(  std_vector_lepton_eta[0]>   -1.444    &&     std_vector_lepton_eta[0]<      -0.800   &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.960    +      \
                           #(  std_vector_lepton_eta[0]>   -0.800    &&     std_vector_lepton_eta[0]<      0.000    &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  1.016    +      \
                           #(  std_vector_lepton_eta[0]>   0.000     &&     std_vector_lepton_eta[0]<      0.800    &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  1.003    +      \
                           #(  std_vector_lepton_eta[0]>   0.800     &&     std_vector_lepton_eta[0]<      1.444    &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.963    +      \
                           #(  std_vector_lepton_eta[0]>   1.444     &&     std_vector_lepton_eta[0]<      1.566    &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.918    +      \
                           #(  std_vector_lepton_eta[0]>   1.566     &&     std_vector_lepton_eta[0]<      2.000    &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.916    +      \
                           #(  std_vector_lepton_eta[0]>   2.000     &&     std_vector_lepton_eta[0]<      2.500    &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.946    +      \
                           #(  std_vector_lepton_eta[0]>   -2.500    &&     std_vector_lepton_eta[0]<      -2.000   &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.970    +      \
                           #(  std_vector_lepton_eta[0]>   -2.000    &&     std_vector_lepton_eta[0]<      -1.566   &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.921    +      \
                           #(  std_vector_lepton_eta[0]>   -1.566    &&     std_vector_lepton_eta[0]<      -1.444   &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.963    +      \
                           #(  std_vector_lepton_eta[0]>   -1.444    &&     std_vector_lepton_eta[0]<      -0.800   &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.978    +      \
                           #(  std_vector_lepton_eta[0]>   -0.800    &&     std_vector_lepton_eta[0]<      0.000    &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.983    +      \
                           #(  std_vector_lepton_eta[0]>   0.000     &&     std_vector_lepton_eta[0]<      0.800    &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.986    +      \
                           #(  std_vector_lepton_eta[0]>   0.800     &&     std_vector_lepton_eta[0]<      1.444    &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.993    +      \
                           #(  std_vector_lepton_eta[0]>   1.444     &&     std_vector_lepton_eta[0]<      1.566    &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.933    +      \
                           #(  std_vector_lepton_eta[0]>   1.566     &&     std_vector_lepton_eta[0]<      2.000    &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.938    +      \
                           #(  std_vector_lepton_eta[0]>   2.000     &&     std_vector_lepton_eta[0]<      2.500    &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.971    +      \
                           #(  std_vector_lepton_eta[0]>   -2.500    &&     std_vector_lepton_eta[0]<      -2.000   &&      std_vector_lepton_pt[0]>    30.000      )   *  0.978    +      \
                           #(  std_vector_lepton_eta[0]>   -2.000    &&     std_vector_lepton_eta[0]<      -1.566   &&      std_vector_lepton_pt[0]>    30.000      )   *  0.947    +      \
                           #(  std_vector_lepton_eta[0]>   -1.566    &&     std_vector_lepton_eta[0]<      -1.444   &&      std_vector_lepton_pt[0]>    30.000      )   *  0.978    +      \
                           #(  std_vector_lepton_eta[0]>   -1.444    &&     std_vector_lepton_eta[0]<      -0.800   &&      std_vector_lepton_pt[0]>    30.000      )   *  0.977    +      \
                           #(  std_vector_lepton_eta[0]>   -0.800    &&     std_vector_lepton_eta[0]<      0.000    &&      std_vector_lepton_pt[0]>    30.000      )   *  0.974    +      \
                           #(  std_vector_lepton_eta[0]>   0.000     &&     std_vector_lepton_eta[0]<      0.800    &&      std_vector_lepton_pt[0]>    30.000      )   *  0.985    +      \
                           #(  std_vector_lepton_eta[0]>   0.800     &&     std_vector_lepton_eta[0]<      1.444    &&      std_vector_lepton_pt[0]>    30.000      )   *  0.977    +      \
                           #(  std_vector_lepton_eta[0]>   1.444     &&     std_vector_lepton_eta[0]<      1.566    &&      std_vector_lepton_pt[0]>    30.000      )   *  0.984    +      \
                           #(  std_vector_lepton_eta[0]>   1.566     &&     std_vector_lepton_eta[0]<      2.000    &&      std_vector_lepton_pt[0]>    30.000      )   *  0.958    +      \
                           #(  std_vector_lepton_eta[0]>   2.000     &&     std_vector_lepton_eta[0]<      2.500    &&      std_vector_lepton_pt[0]>    30.000      )   *  0.973          \
                           #))    \
                           #* ((abs(std_vector_lepton_flavour[1]) == 13) * std_vector_lepton_idisoW[1] + (   \
                           #(abs(std_vector_lepton_flavour[1]) == 11)   *    \
                           #(  std_vector_lepton_eta[1]>   -2.500    &&     std_vector_lepton_eta[1]<      -2.000   &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.935    +      \
                           #(  std_vector_lepton_eta[1]>   -2.000    &&     std_vector_lepton_eta[1]<      -1.566   &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.885    +      \
                           #(  std_vector_lepton_eta[1]>   -1.566    &&     std_vector_lepton_eta[1]<      -1.444   &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.983    +      \
                           #(  std_vector_lepton_eta[1]>   -1.444    &&     std_vector_lepton_eta[1]<      -0.800   &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.960    +      \
                           #(  std_vector_lepton_eta[1]>   -0.800    &&     std_vector_lepton_eta[1]<      0.000    &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  1.016    +      \
                           #(  std_vector_lepton_eta[1]>   0.000     &&     std_vector_lepton_eta[1]<      0.800    &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  1.003    +      \
                           #(  std_vector_lepton_eta[1]>   0.800     &&     std_vector_lepton_eta[1]<      1.444    &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.963    +      \
                           #(  std_vector_lepton_eta[1]>   1.444     &&     std_vector_lepton_eta[1]<      1.566    &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.918    +      \
                           #(  std_vector_lepton_eta[1]>   1.566     &&     std_vector_lepton_eta[1]<      2.000    &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.916    +      \
                           #(  std_vector_lepton_eta[1]>   2.000     &&     std_vector_lepton_eta[1]<      2.500    &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.946    +      \
                           #(  std_vector_lepton_eta[1]>   -2.500    &&     std_vector_lepton_eta[1]<      -2.000   &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.970    +      \
                           #(  std_vector_lepton_eta[1]>   -2.000    &&     std_vector_lepton_eta[1]<      -1.566   &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.921    +      \
                           #(  std_vector_lepton_eta[1]>   -1.566    &&     std_vector_lepton_eta[1]<      -1.444   &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.963    +      \
                           #(  std_vector_lepton_eta[1]>   -1.444    &&     std_vector_lepton_eta[1]<      -0.800   &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.978    +      \
                           #(  std_vector_lepton_eta[1]>   -0.800    &&     std_vector_lepton_eta[1]<      0.000    &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.983    +      \
                           #(  std_vector_lepton_eta[1]>   0.000     &&     std_vector_lepton_eta[1]<      0.800    &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.986    +      \
                           #(  std_vector_lepton_eta[1]>   0.800     &&     std_vector_lepton_eta[1]<      1.444    &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.993    +      \
                           #(  std_vector_lepton_eta[1]>   1.444     &&     std_vector_lepton_eta[1]<      1.566    &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.933    +      \
                           #(  std_vector_lepton_eta[1]>   1.566     &&     std_vector_lepton_eta[1]<      2.000    &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.938    +      \
                           #(  std_vector_lepton_eta[1]>   2.000     &&     std_vector_lepton_eta[1]<      2.500    &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.971    +      \
                           #(  std_vector_lepton_eta[1]>   -2.500    &&     std_vector_lepton_eta[1]<      -2.000   &&      std_vector_lepton_pt[1]>    30.000      )   *  0.978    +      \
                           #(  std_vector_lepton_eta[1]>   -2.000    &&     std_vector_lepton_eta[1]<      -1.566   &&      std_vector_lepton_pt[1]>    30.000      )   *  0.947    +      \
                           #(  std_vector_lepton_eta[1]>   -1.566    &&     std_vector_lepton_eta[1]<      -1.444   &&      std_vector_lepton_pt[1]>    30.000      )   *  0.978    +      \
                           #(  std_vector_lepton_eta[1]>   -1.444    &&     std_vector_lepton_eta[1]<      -0.800   &&      std_vector_lepton_pt[1]>    30.000      )   *  0.977    +      \
                           #(  std_vector_lepton_eta[1]>   -0.800    &&     std_vector_lepton_eta[1]<      0.000    &&      std_vector_lepton_pt[1]>    30.000      )   *  0.974    +      \
                           #(  std_vector_lepton_eta[1]>   0.000     &&     std_vector_lepton_eta[1]<      0.800    &&      std_vector_lepton_pt[1]>    30.000      )   *  0.985    +      \
                           #(  std_vector_lepton_eta[1]>   0.800     &&     std_vector_lepton_eta[1]<      1.444    &&      std_vector_lepton_pt[1]>    30.000      )   *  0.977    +      \
                           #(  std_vector_lepton_eta[1]>   1.444     &&     std_vector_lepton_eta[1]<      1.566    &&      std_vector_lepton_pt[1]>    30.000      )   *  0.984    +      \
                           #(  std_vector_lepton_eta[1]>   1.566     &&     std_vector_lepton_eta[1]<      2.000    &&      std_vector_lepton_pt[1]>    30.000      )   *  0.958    +      \
                           #(  std_vector_lepton_eta[1]>   2.000     &&     std_vector_lepton_eta[1]<      2.500    &&      std_vector_lepton_pt[1]>    30.000      )   *  0.973          \
                           #))    \
                       #',  
                      #'weights' :  [
                        ##'0.829752445221',
                        ##
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',                        
                        #]
                   #}



#samples['DY2']  = {    'name': [
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-10to50ext3.root',
                            ##
                            ##'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-50_0000__part0.root',
                            ##'latino_DYJetsToLL_M-50_0000__part1.root',
                            ##'latino_DYJetsToLL_M-50_0000__part2.root',
                            ##'latino_DYJetsToLL_M-50_0000__part3.root',
                            ##'latino_DYJetsToLL_M-50_0000__part4.root',
                            #'latino_DYJetsToLL_M-50_0001__part0.root',
                            #'latino_DYJetsToLL_M-50_0001__part1.root',
                            #'latino_DYJetsToLL_M-50_0001__part2.root',
                            #'latino_DYJetsToLL_M-50_0001__part3.root',
                            #'latino_DYJetsToLL_M-50_0001__part4.root',
                            #'latino_DYJetsToLL_M-50_0002__part0.root',
                            #],    
                      ##'weight' : '(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW63mb*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
                      #'weight' : 'puW63mb*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*bPogSF*effTrigW*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]\
                        #* ((abs(std_vector_lepton_flavour[0]) == 13) * std_vector_lepton_idisoW[0] + (   \
                           #(abs(std_vector_lepton_flavour[0]) == 11)   *    \
                           #(  std_vector_lepton_eta[0]>   -2.500    &&     std_vector_lepton_eta[0]<      -2.000   &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.935    +      \
                           #(  std_vector_lepton_eta[0]>   -2.000    &&     std_vector_lepton_eta[0]<      -1.566   &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.885    +      \
                           #(  std_vector_lepton_eta[0]>   -1.566    &&     std_vector_lepton_eta[0]<      -1.444   &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.983    +      \
                           #(  std_vector_lepton_eta[0]>   -1.444    &&     std_vector_lepton_eta[0]<      -0.800   &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.960    +      \
                           #(  std_vector_lepton_eta[0]>   -0.800    &&     std_vector_lepton_eta[0]<      0.000    &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  1.016    +      \
                           #(  std_vector_lepton_eta[0]>   0.000     &&     std_vector_lepton_eta[0]<      0.800    &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  1.003    +      \
                           #(  std_vector_lepton_eta[0]>   0.800     &&     std_vector_lepton_eta[0]<      1.444    &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.963    +      \
                           #(  std_vector_lepton_eta[0]>   1.444     &&     std_vector_lepton_eta[0]<      1.566    &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.918    +      \
                           #(  std_vector_lepton_eta[0]>   1.566     &&     std_vector_lepton_eta[0]<      2.000    &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.916    +      \
                           #(  std_vector_lepton_eta[0]>   2.000     &&     std_vector_lepton_eta[0]<      2.500    &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.946    +      \
                           #(  std_vector_lepton_eta[0]>   -2.500    &&     std_vector_lepton_eta[0]<      -2.000   &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.970    +      \
                           #(  std_vector_lepton_eta[0]>   -2.000    &&     std_vector_lepton_eta[0]<      -1.566   &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.921    +      \
                           #(  std_vector_lepton_eta[0]>   -1.566    &&     std_vector_lepton_eta[0]<      -1.444   &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.963    +      \
                           #(  std_vector_lepton_eta[0]>   -1.444    &&     std_vector_lepton_eta[0]<      -0.800   &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.978    +      \
                           #(  std_vector_lepton_eta[0]>   -0.800    &&     std_vector_lepton_eta[0]<      0.000    &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.983    +      \
                           #(  std_vector_lepton_eta[0]>   0.000     &&     std_vector_lepton_eta[0]<      0.800    &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.986    +      \
                           #(  std_vector_lepton_eta[0]>   0.800     &&     std_vector_lepton_eta[0]<      1.444    &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.993    +      \
                           #(  std_vector_lepton_eta[0]>   1.444     &&     std_vector_lepton_eta[0]<      1.566    &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.933    +      \
                           #(  std_vector_lepton_eta[0]>   1.566     &&     std_vector_lepton_eta[0]<      2.000    &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.938    +      \
                           #(  std_vector_lepton_eta[0]>   2.000     &&     std_vector_lepton_eta[0]<      2.500    &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.971    +      \
                           #(  std_vector_lepton_eta[0]>   -2.500    &&     std_vector_lepton_eta[0]<      -2.000   &&      std_vector_lepton_pt[0]>    30.000        )   *  0.978    +      \
                           #(  std_vector_lepton_eta[0]>   -2.000    &&     std_vector_lepton_eta[0]<      -1.566   &&      std_vector_lepton_pt[0]>    30.000        )   *  0.947    +      \
                           #(  std_vector_lepton_eta[0]>   -1.566    &&     std_vector_lepton_eta[0]<      -1.444   &&      std_vector_lepton_pt[0]>    30.000        )   *  0.978    +      \
                           #(  std_vector_lepton_eta[0]>   -1.444    &&     std_vector_lepton_eta[0]<      -0.800   &&      std_vector_lepton_pt[0]>    30.000        )   *  0.977    +      \
                           #(  std_vector_lepton_eta[0]>   -0.800    &&     std_vector_lepton_eta[0]<      0.000    &&      std_vector_lepton_pt[0]>    30.000        )   *  0.974    +      \
                           #(  std_vector_lepton_eta[0]>   0.000     &&     std_vector_lepton_eta[0]<      0.800    &&      std_vector_lepton_pt[0]>    30.000        )   *  0.985    +      \
                           #(  std_vector_lepton_eta[0]>   0.800     &&     std_vector_lepton_eta[0]<      1.444    &&      std_vector_lepton_pt[0]>    30.000        )   *  0.977    +      \
                           #(  std_vector_lepton_eta[0]>   1.444     &&     std_vector_lepton_eta[0]<      1.566    &&      std_vector_lepton_pt[0]>    30.000        )   *  0.984    +      \
                           #(  std_vector_lepton_eta[0]>   1.566     &&     std_vector_lepton_eta[0]<      2.000    &&      std_vector_lepton_pt[0]>    30.000        )   *  0.958    +      \
                           #(  std_vector_lepton_eta[0]>   2.000     &&     std_vector_lepton_eta[0]<      2.500    &&      std_vector_lepton_pt[0]>    30.000        )   *  0.973          \
                           #))    \
                           #* ((abs(std_vector_lepton_flavour[1]) == 13) * std_vector_lepton_idisoW[1] + (   \
                           #(abs(std_vector_lepton_flavour[1]) == 11)   *    \
                           #(  std_vector_lepton_eta[1]>   -2.500    &&     std_vector_lepton_eta[1]<      -2.000   &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.935    +      \
                           #(  std_vector_lepton_eta[1]>   -2.000    &&     std_vector_lepton_eta[1]<      -1.566   &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.885    +      \
                           #(  std_vector_lepton_eta[1]>   -1.566    &&     std_vector_lepton_eta[1]<      -1.444   &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.983    +      \
                           #(  std_vector_lepton_eta[1]>   -1.444    &&     std_vector_lepton_eta[1]<      -0.800   &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.960    +      \
                           #(  std_vector_lepton_eta[1]>   -0.800    &&     std_vector_lepton_eta[1]<      0.000    &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  1.016    +      \
                           #(  std_vector_lepton_eta[1]>   0.000     &&     std_vector_lepton_eta[1]<      0.800    &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  1.003    +      \
                           #(  std_vector_lepton_eta[1]>   0.800     &&     std_vector_lepton_eta[1]<      1.444    &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.963    +      \
                           #(  std_vector_lepton_eta[1]>   1.444     &&     std_vector_lepton_eta[1]<      1.566    &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.918    +      \
                           #(  std_vector_lepton_eta[1]>   1.566     &&     std_vector_lepton_eta[1]<      2.000    &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.916    +      \
                           #(  std_vector_lepton_eta[1]>   2.000     &&     std_vector_lepton_eta[1]<      2.500    &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.946    +      \
                           #(  std_vector_lepton_eta[1]>   -2.500    &&     std_vector_lepton_eta[1]<      -2.000   &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.970    +      \
                           #(  std_vector_lepton_eta[1]>   -2.000    &&     std_vector_lepton_eta[1]<      -1.566   &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.921    +      \
                           #(  std_vector_lepton_eta[1]>   -1.566    &&     std_vector_lepton_eta[1]<      -1.444   &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.963    +      \
                           #(  std_vector_lepton_eta[1]>   -1.444    &&     std_vector_lepton_eta[1]<      -0.800   &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.978    +      \
                           #(  std_vector_lepton_eta[1]>   -0.800    &&     std_vector_lepton_eta[1]<      0.000    &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.983    +      \
                           #(  std_vector_lepton_eta[1]>   0.000     &&     std_vector_lepton_eta[1]<      0.800    &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.986    +      \
                           #(  std_vector_lepton_eta[1]>   0.800     &&     std_vector_lepton_eta[1]<      1.444    &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.993    +      \
                           #(  std_vector_lepton_eta[1]>   1.444     &&     std_vector_lepton_eta[1]<      1.566    &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.933    +      \
                           #(  std_vector_lepton_eta[1]>   1.566     &&     std_vector_lepton_eta[1]<      2.000    &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.938    +      \
                           #(  std_vector_lepton_eta[1]>   2.000     &&     std_vector_lepton_eta[1]<      2.500    &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.971    +      \
                           #(  std_vector_lepton_eta[1]>   -2.500    &&     std_vector_lepton_eta[1]<      -2.000   &&      std_vector_lepton_pt[1]>    30.000       )   *  0.978    +      \
                           #(  std_vector_lepton_eta[1]>   -2.000    &&     std_vector_lepton_eta[1]<      -1.566   &&      std_vector_lepton_pt[1]>    30.000       )   *  0.947    +      \
                           #(  std_vector_lepton_eta[1]>   -1.566    &&     std_vector_lepton_eta[1]<      -1.444   &&      std_vector_lepton_pt[1]>    30.000       )   *  0.978    +      \
                           #(  std_vector_lepton_eta[1]>   -1.444    &&     std_vector_lepton_eta[1]<      -0.800   &&      std_vector_lepton_pt[1]>    30.000       )   *  0.977    +      \
                           #(  std_vector_lepton_eta[1]>   -0.800    &&     std_vector_lepton_eta[1]<      0.000    &&      std_vector_lepton_pt[1]>    30.000       )   *  0.974    +      \
                           #(  std_vector_lepton_eta[1]>   0.000     &&     std_vector_lepton_eta[1]<      0.800    &&      std_vector_lepton_pt[1]>    30.000       )   *  0.985    +      \
                           #(  std_vector_lepton_eta[1]>   0.800     &&     std_vector_lepton_eta[1]<      1.444    &&      std_vector_lepton_pt[1]>    30.000       )   *  0.977    +      \
                           #(  std_vector_lepton_eta[1]>   1.444     &&     std_vector_lepton_eta[1]<      1.566    &&      std_vector_lepton_pt[1]>    30.000       )   *  0.984    +      \
                           #(  std_vector_lepton_eta[1]>   1.566     &&     std_vector_lepton_eta[1]<      2.000    &&      std_vector_lepton_pt[1]>    30.000       )   *  0.958    +      \
                           #(  std_vector_lepton_eta[1]>   2.000     &&     std_vector_lepton_eta[1]<      2.500    &&      std_vector_lepton_pt[1]>    30.000       )   *  0.973         \
                           #))    \
                       #',  
                      #'weights' :  [
                        ##'0.829752445221',
                        ##
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',                        
                        #]
                   #}
                      
 

#samples['DY1']  = {    'name': [
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-10to50ext3.root',
                            ##
                            ##'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            ##'latino_DYJetsToLL_M-10to50.root',
                            #'latino_DYJetsToLL_M-50_0000__part0.root',
                            #'latino_DYJetsToLL_M-50_0000__part1.root',
                            #'latino_DYJetsToLL_M-50_0000__part2.root',
                            #'latino_DYJetsToLL_M-50_0000__part3.root',
                            #'latino_DYJetsToLL_M-50_0000__part4.root',
                            ##'latino_DYJetsToLL_M-50_0001__part0.root',
                            ##'latino_DYJetsToLL_M-50_0001__part1.root',
                            ##'latino_DYJetsToLL_M-50_0001__part2.root',
                            ##'latino_DYJetsToLL_M-50_0001__part3.root',
                            ##'latino_DYJetsToLL_M-50_0001__part4.root',
                            ##'latino_DYJetsToLL_M-50_0002__part0.root',
                            #],    
                      ##'weight' : '(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW63mb*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
                      #'weight' : 'puW63mb*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*bPogSF*effTrigW*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]\
                        #* ((abs(std_vector_lepton_flavour[0]) == 13) * std_vector_lepton_idisoW[0] + (   \
                           #(abs(std_vector_lepton_flavour[0]) == 11)   *    \
                           #(  std_vector_lepton_eta[0]>   -2.500    &&     std_vector_lepton_eta[0]<      -2.000   &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.935    +      \
                           #(  std_vector_lepton_eta[0]>   -2.000    &&     std_vector_lepton_eta[0]<      -1.566   &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.885    +      \
                           #(  std_vector_lepton_eta[0]>   -1.566    &&     std_vector_lepton_eta[0]<      -1.444   &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.983    +      \
                           #(  std_vector_lepton_eta[0]>   -1.444    &&     std_vector_lepton_eta[0]<      -0.800   &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.960    +      \
                           #(  std_vector_lepton_eta[0]>   -0.800    &&     std_vector_lepton_eta[0]<      0.000    &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  1.016    +      \
                           #(  std_vector_lepton_eta[0]>   0.000     &&     std_vector_lepton_eta[0]<      0.800    &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  1.003    +      \
                           #(  std_vector_lepton_eta[0]>   0.800     &&     std_vector_lepton_eta[0]<      1.444    &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.963    +      \
                           #(  std_vector_lepton_eta[0]>   1.444     &&     std_vector_lepton_eta[0]<      1.566    &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.918    +      \
                           #(  std_vector_lepton_eta[0]>   1.566     &&     std_vector_lepton_eta[0]<      2.000    &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.916    +      \
                           #(  std_vector_lepton_eta[0]>   2.000     &&     std_vector_lepton_eta[0]<      2.500    &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.946    +      \
                           #(  std_vector_lepton_eta[0]>   -2.500    &&     std_vector_lepton_eta[0]<      -2.000   &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.970    +      \
                           #(  std_vector_lepton_eta[0]>   -2.000    &&     std_vector_lepton_eta[0]<      -1.566   &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.921    +      \
                           #(  std_vector_lepton_eta[0]>   -1.566    &&     std_vector_lepton_eta[0]<      -1.444   &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.963    +      \
                           #(  std_vector_lepton_eta[0]>   -1.444    &&     std_vector_lepton_eta[0]<      -0.800   &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.978    +      \
                           #(  std_vector_lepton_eta[0]>   -0.800    &&     std_vector_lepton_eta[0]<      0.000    &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.983    +      \
                           #(  std_vector_lepton_eta[0]>   0.000     &&     std_vector_lepton_eta[0]<      0.800    &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.986    +      \
                           #(  std_vector_lepton_eta[0]>   0.800     &&     std_vector_lepton_eta[0]<      1.444    &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.993    +      \
                           #(  std_vector_lepton_eta[0]>   1.444     &&     std_vector_lepton_eta[0]<      1.566    &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.933    +      \
                           #(  std_vector_lepton_eta[0]>   1.566     &&     std_vector_lepton_eta[0]<      2.000    &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.938    +      \
                           #(  std_vector_lepton_eta[0]>   2.000     &&     std_vector_lepton_eta[0]<      2.500    &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.971    +      \
                           #(  std_vector_lepton_eta[0]>   -2.500    &&     std_vector_lepton_eta[0]<      -2.000   &&      std_vector_lepton_pt[0]>    30.000    &&     std_vector_lepton_pt[0]<      40.000     )   *  0.978    +      \
                           #(  std_vector_lepton_eta[0]>   -2.000    &&     std_vector_lepton_eta[0]<      -1.566   &&      std_vector_lepton_pt[0]>    30.000    &&     std_vector_lepton_pt[0]<      40.000     )   *  0.947    +      \
                           #(  std_vector_lepton_eta[0]>   -1.566    &&     std_vector_lepton_eta[0]<      -1.444   &&      std_vector_lepton_pt[0]>    30.000    &&     std_vector_lepton_pt[0]<      40.000     )   *  0.978    +      \
                           #(  std_vector_lepton_eta[0]>   -1.444    &&     std_vector_lepton_eta[0]<      -0.800   &&      std_vector_lepton_pt[0]>    30.000    &&     std_vector_lepton_pt[0]<      40.000     )   *  0.977    +      \
                           #(  std_vector_lepton_eta[0]>   -0.800    &&     std_vector_lepton_eta[0]<      0.000    &&      std_vector_lepton_pt[0]>    30.000    &&     std_vector_lepton_pt[0]<      40.000     )   *  0.974    +      \
                           #(  std_vector_lepton_eta[0]>   0.000     &&     std_vector_lepton_eta[0]<      0.800    &&      std_vector_lepton_pt[0]>    30.000    &&     std_vector_lepton_pt[0]<      40.000     )   *  0.985    +      \
                           #(  std_vector_lepton_eta[0]>   0.800     &&     std_vector_lepton_eta[0]<      1.444    &&      std_vector_lepton_pt[0]>    30.000    &&     std_vector_lepton_pt[0]<      40.000     )   *  0.977    +      \
                           #(  std_vector_lepton_eta[0]>   1.444     &&     std_vector_lepton_eta[0]<      1.566    &&      std_vector_lepton_pt[0]>    30.000    &&     std_vector_lepton_pt[0]<      40.000     )   *  0.984    +      \
                           #(  std_vector_lepton_eta[0]>   1.566     &&     std_vector_lepton_eta[0]<      2.000    &&      std_vector_lepton_pt[0]>    30.000    &&     std_vector_lepton_pt[0]<      40.000     )   *  0.958    +      \
                           #(  std_vector_lepton_eta[0]>   2.000     &&     std_vector_lepton_eta[0]<      2.500    &&      std_vector_lepton_pt[0]>    30.000    &&     std_vector_lepton_pt[0]<      40.000     )   *  0.973    +      \
                           #(  std_vector_lepton_eta[0]>   -2.500    &&     std_vector_lepton_eta[0]<      -2.000   &&      std_vector_lepton_pt[0]>    40.000    &&     std_vector_lepton_pt[0]<      50.000     )   *  0.985    +      \
                           #(  std_vector_lepton_eta[0]>   -2.000    &&     std_vector_lepton_eta[0]<      -1.566   &&      std_vector_lepton_pt[0]>    40.000    &&     std_vector_lepton_pt[0]<      50.000     )   *  0.975    +      \
                           #(  std_vector_lepton_eta[0]>   -1.566    &&     std_vector_lepton_eta[0]<      -1.444   &&      std_vector_lepton_pt[0]>    40.000    &&     std_vector_lepton_pt[0]<      50.000     )   *  0.976    +      \
                           #(  std_vector_lepton_eta[0]>   -1.444    &&     std_vector_lepton_eta[0]<      -0.800   &&      std_vector_lepton_pt[0]>    40.000    &&     std_vector_lepton_pt[0]<      50.000     )   *  0.979    +      \
                           #(  std_vector_lepton_eta[0]>   -0.800    &&     std_vector_lepton_eta[0]<      0.000    &&      std_vector_lepton_pt[0]>    40.000    &&     std_vector_lepton_pt[0]<      50.000     )   *  0.974    +      \
                           #(  std_vector_lepton_eta[0]>   0.000     &&     std_vector_lepton_eta[0]<      0.800    &&      std_vector_lepton_pt[0]>    40.000    &&     std_vector_lepton_pt[0]<      50.000     )   *  0.989    +      \
                           #(  std_vector_lepton_eta[0]>   0.800     &&     std_vector_lepton_eta[0]<      1.444    &&      std_vector_lepton_pt[0]>    40.000    &&     std_vector_lepton_pt[0]<      50.000     )   *  0.979    +      \
                           #(  std_vector_lepton_eta[0]>   1.444     &&     std_vector_lepton_eta[0]<      1.566    &&      std_vector_lepton_pt[0]>    40.000    &&     std_vector_lepton_pt[0]<      50.000     )   *  0.985    +      \
                           #(  std_vector_lepton_eta[0]>   1.566     &&     std_vector_lepton_eta[0]<      2.000    &&      std_vector_lepton_pt[0]>    40.000    &&     std_vector_lepton_pt[0]<      50.000     )   *  0.977    +      \
                           #(  std_vector_lepton_eta[0]>   2.000     &&     std_vector_lepton_eta[0]<      2.500    &&      std_vector_lepton_pt[0]>    40.000    &&     std_vector_lepton_pt[0]<      50.000     )   *  0.992    +      \
                           #(  std_vector_lepton_eta[0]>   -2.500    &&     std_vector_lepton_eta[0]<      -2.000   &&      std_vector_lepton_pt[0]>    50.000        )   *   0.981      +      \
                           #(  std_vector_lepton_eta[0]>   -2.000    &&     std_vector_lepton_eta[0]<      -1.566   &&      std_vector_lepton_pt[0]>    50.000        )   *   0.985      +      \
                           #(  std_vector_lepton_eta[0]>   -1.566    &&     std_vector_lepton_eta[0]<      -1.444   &&      std_vector_lepton_pt[0]>    50.000        )   *   0.977      +      \
                           #(  std_vector_lepton_eta[0]>   -1.444    &&     std_vector_lepton_eta[0]<      -0.800   &&      std_vector_lepton_pt[0]>    50.000        )   *   0.986      +      \
                           #(  std_vector_lepton_eta[0]>   -0.800    &&     std_vector_lepton_eta[0]<      0.000    &&      std_vector_lepton_pt[0]>    50.000        )   *   0.980      +      \
                           #(  std_vector_lepton_eta[0]>   0.000     &&     std_vector_lepton_eta[0]<      0.800    &&      std_vector_lepton_pt[0]>    50.000        )   *   0.985      +      \
                           #(  std_vector_lepton_eta[0]>   0.800     &&     std_vector_lepton_eta[0]<      1.444    &&      std_vector_lepton_pt[0]>    50.000        )   *   0.981      +      \
                           #(  std_vector_lepton_eta[0]>   1.444     &&     std_vector_lepton_eta[0]<      1.566    &&      std_vector_lepton_pt[0]>    50.000        )   *   0.992      +      \
                           #(  std_vector_lepton_eta[0]>   1.566     &&     std_vector_lepton_eta[0]<      2.000    &&      std_vector_lepton_pt[0]>    50.000        )   *   1.007      +      \
                           #(  std_vector_lepton_eta[0]>   2.000     &&     std_vector_lepton_eta[0]<      2.500    &&      std_vector_lepton_pt[0]>    50.000        )   *   1.007      +      \
                           #(  std_vector_lepton_eta[0]>   2.000     &&     std_vector_lepton_eta[0]<      2.500    &&      std_vector_lepton_pt[0]>    50.000        )   *   1.007            \
                           #))    \
                           #* ((abs(std_vector_lepton_flavour[1]) == 13) * std_vector_lepton_idisoW[1] + (   \
                           #(abs(std_vector_lepton_flavour[1]) == 11)   *    \
                           #(  std_vector_lepton_eta[1]>   -2.500    &&     std_vector_lepton_eta[1]<      -2.000   &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.935    +      \
                           #(  std_vector_lepton_eta[1]>   -2.000    &&     std_vector_lepton_eta[1]<      -1.566   &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.885    +      \
                           #(  std_vector_lepton_eta[1]>   -1.566    &&     std_vector_lepton_eta[1]<      -1.444   &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.983    +      \
                           #(  std_vector_lepton_eta[1]>   -1.444    &&     std_vector_lepton_eta[1]<      -0.800   &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.960    +      \
                           #(  std_vector_lepton_eta[1]>   -0.800    &&     std_vector_lepton_eta[1]<      0.000    &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  1.016    +      \
                           #(  std_vector_lepton_eta[1]>   0.000     &&     std_vector_lepton_eta[1]<      0.800    &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  1.003    +      \
                           #(  std_vector_lepton_eta[1]>   0.800     &&     std_vector_lepton_eta[1]<      1.444    &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.963    +      \
                           #(  std_vector_lepton_eta[1]>   1.444     &&     std_vector_lepton_eta[1]<      1.566    &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.918    +      \
                           #(  std_vector_lepton_eta[1]>   1.566     &&     std_vector_lepton_eta[1]<      2.000    &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.916    +      \
                           #(  std_vector_lepton_eta[1]>   2.000     &&     std_vector_lepton_eta[1]<      2.500    &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.946    +      \
                           #(  std_vector_lepton_eta[1]>   -2.500    &&     std_vector_lepton_eta[1]<      -2.000   &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.970    +      \
                           #(  std_vector_lepton_eta[1]>   -2.000    &&     std_vector_lepton_eta[1]<      -1.566   &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.921    +      \
                           #(  std_vector_lepton_eta[1]>   -1.566    &&     std_vector_lepton_eta[1]<      -1.444   &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.963    +      \
                           #(  std_vector_lepton_eta[1]>   -1.444    &&     std_vector_lepton_eta[1]<      -0.800   &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.978    +      \
                           #(  std_vector_lepton_eta[1]>   -0.800    &&     std_vector_lepton_eta[1]<      0.000    &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.983    +      \
                           #(  std_vector_lepton_eta[1]>   0.000     &&     std_vector_lepton_eta[1]<      0.800    &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.986    +      \
                           #(  std_vector_lepton_eta[1]>   0.800     &&     std_vector_lepton_eta[1]<      1.444    &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.993    +      \
                           #(  std_vector_lepton_eta[1]>   1.444     &&     std_vector_lepton_eta[1]<      1.566    &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.933    +      \
                           #(  std_vector_lepton_eta[1]>   1.566     &&     std_vector_lepton_eta[1]<      2.000    &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.938    +      \
                           #(  std_vector_lepton_eta[1]>   2.000     &&     std_vector_lepton_eta[1]<      2.500    &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.971    +      \
                           #(  std_vector_lepton_eta[1]>   -2.500    &&     std_vector_lepton_eta[1]<      -2.000   &&      std_vector_lepton_pt[1]>    30.000    &&     std_vector_lepton_pt[1]<      40.000     )   *  0.978    +      \
                           #(  std_vector_lepton_eta[1]>   -2.000    &&     std_vector_lepton_eta[1]<      -1.566   &&      std_vector_lepton_pt[1]>    30.000    &&     std_vector_lepton_pt[1]<      40.000     )   *  0.947    +      \
                           #(  std_vector_lepton_eta[1]>   -1.566    &&     std_vector_lepton_eta[1]<      -1.444   &&      std_vector_lepton_pt[1]>    30.000    &&     std_vector_lepton_pt[1]<      40.000     )   *  0.978    +      \
                           #(  std_vector_lepton_eta[1]>   -1.444    &&     std_vector_lepton_eta[1]<      -0.800   &&      std_vector_lepton_pt[1]>    30.000    &&     std_vector_lepton_pt[1]<      40.000     )   *  0.977    +      \
                           #(  std_vector_lepton_eta[1]>   -0.800    &&     std_vector_lepton_eta[1]<      0.000    &&      std_vector_lepton_pt[1]>    30.000    &&     std_vector_lepton_pt[1]<      40.000     )   *  0.974    +      \
                           #(  std_vector_lepton_eta[1]>   0.000     &&     std_vector_lepton_eta[1]<      0.800    &&      std_vector_lepton_pt[1]>    30.000    &&     std_vector_lepton_pt[1]<      40.000     )   *  0.985    +      \
                           #(  std_vector_lepton_eta[1]>   0.800     &&     std_vector_lepton_eta[1]<      1.444    &&      std_vector_lepton_pt[1]>    30.000    &&     std_vector_lepton_pt[1]<      40.000     )   *  0.977    +      \
                           #(  std_vector_lepton_eta[1]>   1.444     &&     std_vector_lepton_eta[1]<      1.566    &&      std_vector_lepton_pt[1]>    30.000    &&     std_vector_lepton_pt[1]<      40.000     )   *  0.984    +      \
                           #(  std_vector_lepton_eta[1]>   1.566     &&     std_vector_lepton_eta[1]<      2.000    &&      std_vector_lepton_pt[1]>    30.000    &&     std_vector_lepton_pt[1]<      40.000     )   *  0.958    +      \
                           #(  std_vector_lepton_eta[1]>   2.000     &&     std_vector_lepton_eta[1]<      2.500    &&      std_vector_lepton_pt[1]>    30.000    &&     std_vector_lepton_pt[1]<      40.000     )   *  0.973    +      \
                           #(  std_vector_lepton_eta[1]>   -2.500    &&     std_vector_lepton_eta[1]<      -2.000   &&      std_vector_lepton_pt[1]>    40.000    &&     std_vector_lepton_pt[1]<      50.000     )   *  0.985    +      \
                           #(  std_vector_lepton_eta[1]>   -2.000    &&     std_vector_lepton_eta[1]<      -1.566   &&      std_vector_lepton_pt[1]>    40.000    &&     std_vector_lepton_pt[1]<      50.000     )   *  0.975    +      \
                           #(  std_vector_lepton_eta[1]>   -1.566    &&     std_vector_lepton_eta[1]<      -1.444   &&      std_vector_lepton_pt[1]>    40.000    &&     std_vector_lepton_pt[1]<      50.000     )   *  0.976    +      \
                           #(  std_vector_lepton_eta[1]>   -1.444    &&     std_vector_lepton_eta[1]<      -0.800   &&      std_vector_lepton_pt[1]>    40.000    &&     std_vector_lepton_pt[1]<      50.000     )   *  0.979    +      \
                           #(  std_vector_lepton_eta[1]>   -0.800    &&     std_vector_lepton_eta[1]<      0.000    &&      std_vector_lepton_pt[1]>    40.000    &&     std_vector_lepton_pt[1]<      50.000     )   *  0.974    +      \
                           #(  std_vector_lepton_eta[1]>   0.000     &&     std_vector_lepton_eta[1]<      0.800    &&      std_vector_lepton_pt[1]>    40.000    &&     std_vector_lepton_pt[1]<      50.000     )   *  0.989    +      \
                           #(  std_vector_lepton_eta[1]>   0.800     &&     std_vector_lepton_eta[1]<      1.444    &&      std_vector_lepton_pt[1]>    40.000    &&     std_vector_lepton_pt[1]<      50.000     )   *  0.979    +      \
                           #(  std_vector_lepton_eta[1]>   1.444     &&     std_vector_lepton_eta[1]<      1.566    &&      std_vector_lepton_pt[1]>    40.000    &&     std_vector_lepton_pt[1]<      50.000     )   *  0.985    +      \
                           #(  std_vector_lepton_eta[1]>   1.566     &&     std_vector_lepton_eta[1]<      2.000    &&      std_vector_lepton_pt[1]>    40.000    &&     std_vector_lepton_pt[1]<      50.000     )   *  0.977    +      \
                           #(  std_vector_lepton_eta[1]>   2.000     &&     std_vector_lepton_eta[1]<      2.500    &&      std_vector_lepton_pt[1]>    40.000    &&     std_vector_lepton_pt[1]<      50.000     )   *  0.992    +      \
                           #(  std_vector_lepton_eta[1]>   -2.500    &&     std_vector_lepton_eta[1]<      -2.000   &&      std_vector_lepton_pt[1]>    50.000        )   *   0.981      +      \
                           #(  std_vector_lepton_eta[1]>   -2.000    &&     std_vector_lepton_eta[1]<      -1.566   &&      std_vector_lepton_pt[1]>    50.000        )   *   0.985      +      \
                           #(  std_vector_lepton_eta[1]>   -1.566    &&     std_vector_lepton_eta[1]<      -1.444   &&      std_vector_lepton_pt[1]>    50.000        )   *   0.977      +      \
                           #(  std_vector_lepton_eta[1]>   -1.444    &&     std_vector_lepton_eta[1]<      -0.800   &&      std_vector_lepton_pt[1]>    50.000        )   *   0.986      +      \
                           #(  std_vector_lepton_eta[1]>   -0.800    &&     std_vector_lepton_eta[1]<      0.000    &&      std_vector_lepton_pt[1]>    50.000        )   *   0.980      +      \
                           #(  std_vector_lepton_eta[1]>   0.000     &&     std_vector_lepton_eta[1]<      0.800    &&      std_vector_lepton_pt[1]>    50.000        )   *   0.985      +      \
                           #(  std_vector_lepton_eta[1]>   0.800     &&     std_vector_lepton_eta[1]<      1.444    &&      std_vector_lepton_pt[1]>    50.000        )   *   0.981      +      \
                           #(  std_vector_lepton_eta[1]>   1.444     &&     std_vector_lepton_eta[1]<      1.566    &&      std_vector_lepton_pt[1]>    50.000        )   *   0.992      +      \
                           #(  std_vector_lepton_eta[1]>   1.566     &&     std_vector_lepton_eta[1]<      2.000    &&      std_vector_lepton_pt[1]>    50.000        )   *   1.007      +      \
                           #(  std_vector_lepton_eta[1]>   2.000     &&     std_vector_lepton_eta[1]<      2.500    &&      std_vector_lepton_pt[1]>    50.000        )   *   1.007      +      \
                           #(  std_vector_lepton_eta[1]>   2.000     &&     std_vector_lepton_eta[1]<      2.500    &&      std_vector_lepton_pt[1]>    50.000        )   *   1.007            \
                           #))    \
                       #',  
                      #'weights' :  [
                        ##'0.829752445221',
                        ##
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',                        
                        #]
                   #}



#samples['DY2']  = {    'name': [
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-10to50ext3.root',
                            ##
                            ##'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-50_0000__part0.root',
                            ##'latino_DYJetsToLL_M-50_0000__part1.root',
                            ##'latino_DYJetsToLL_M-50_0000__part2.root',
                            ##'latino_DYJetsToLL_M-50_0000__part3.root',
                            ##'latino_DYJetsToLL_M-50_0000__part4.root',
                            #'latino_DYJetsToLL_M-50_0001__part0.root',
                            #'latino_DYJetsToLL_M-50_0001__part1.root',
                            #'latino_DYJetsToLL_M-50_0001__part2.root',
                            #'latino_DYJetsToLL_M-50_0001__part3.root',
                            #'latino_DYJetsToLL_M-50_0001__part4.root',
                            #'latino_DYJetsToLL_M-50_0002__part0.root',
                            #],    
                      ##'weight' : '(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW63mb*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
                      #'weight' : 'puW63mb*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*bPogSF*effTrigW*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]\
                        #* ((abs(std_vector_lepton_flavour[0]) == 13) * std_vector_lepton_idisoW[0] + (   \
                           #(abs(std_vector_lepton_flavour[0]) == 11)   *    \
                           #(  std_vector_lepton_eta[0]>   -2.500    &&     std_vector_lepton_eta[0]<      -2.000   &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.935    +      \
                           #(  std_vector_lepton_eta[0]>   -2.000    &&     std_vector_lepton_eta[0]<      -1.566   &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.885    +      \
                           #(  std_vector_lepton_eta[0]>   -1.566    &&     std_vector_lepton_eta[0]<      -1.444   &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.983    +      \
                           #(  std_vector_lepton_eta[0]>   -1.444    &&     std_vector_lepton_eta[0]<      -0.800   &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.960    +      \
                           #(  std_vector_lepton_eta[0]>   -0.800    &&     std_vector_lepton_eta[0]<      0.000    &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  1.016    +      \
                           #(  std_vector_lepton_eta[0]>   0.000     &&     std_vector_lepton_eta[0]<      0.800    &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  1.003    +      \
                           #(  std_vector_lepton_eta[0]>   0.800     &&     std_vector_lepton_eta[0]<      1.444    &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.963    +      \
                           #(  std_vector_lepton_eta[0]>   1.444     &&     std_vector_lepton_eta[0]<      1.566    &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.918    +      \
                           #(  std_vector_lepton_eta[0]>   1.566     &&     std_vector_lepton_eta[0]<      2.000    &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.916    +      \
                           #(  std_vector_lepton_eta[0]>   2.000     &&     std_vector_lepton_eta[0]<      2.500    &&      std_vector_lepton_pt[0]>    10.000    &&     std_vector_lepton_pt[0]<      20.000     )   *  0.946    +      \
                           #(  std_vector_lepton_eta[0]>   -2.500    &&     std_vector_lepton_eta[0]<      -2.000   &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.970    +      \
                           #(  std_vector_lepton_eta[0]>   -2.000    &&     std_vector_lepton_eta[0]<      -1.566   &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.921    +      \
                           #(  std_vector_lepton_eta[0]>   -1.566    &&     std_vector_lepton_eta[0]<      -1.444   &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.963    +      \
                           #(  std_vector_lepton_eta[0]>   -1.444    &&     std_vector_lepton_eta[0]<      -0.800   &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.978    +      \
                           #(  std_vector_lepton_eta[0]>   -0.800    &&     std_vector_lepton_eta[0]<      0.000    &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.983    +      \
                           #(  std_vector_lepton_eta[0]>   0.000     &&     std_vector_lepton_eta[0]<      0.800    &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.986    +      \
                           #(  std_vector_lepton_eta[0]>   0.800     &&     std_vector_lepton_eta[0]<      1.444    &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.993    +      \
                           #(  std_vector_lepton_eta[0]>   1.444     &&     std_vector_lepton_eta[0]<      1.566    &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.933    +      \
                           #(  std_vector_lepton_eta[0]>   1.566     &&     std_vector_lepton_eta[0]<      2.000    &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.938    +      \
                           #(  std_vector_lepton_eta[0]>   2.000     &&     std_vector_lepton_eta[0]<      2.500    &&      std_vector_lepton_pt[0]>    20.000    &&     std_vector_lepton_pt[0]<      30.000     )   *  0.971    +      \
                           #(  std_vector_lepton_eta[0]>   -2.500    &&     std_vector_lepton_eta[0]<      -2.000   &&      std_vector_lepton_pt[0]>    30.000    &&     std_vector_lepton_pt[0]<      40.000     )   *  0.978    +      \
                           #(  std_vector_lepton_eta[0]>   -2.000    &&     std_vector_lepton_eta[0]<      -1.566   &&      std_vector_lepton_pt[0]>    30.000    &&     std_vector_lepton_pt[0]<      40.000     )   *  0.947    +      \
                           #(  std_vector_lepton_eta[0]>   -1.566    &&     std_vector_lepton_eta[0]<      -1.444   &&      std_vector_lepton_pt[0]>    30.000    &&     std_vector_lepton_pt[0]<      40.000     )   *  0.978    +      \
                           #(  std_vector_lepton_eta[0]>   -1.444    &&     std_vector_lepton_eta[0]<      -0.800   &&      std_vector_lepton_pt[0]>    30.000    &&     std_vector_lepton_pt[0]<      40.000     )   *  0.977    +      \
                           #(  std_vector_lepton_eta[0]>   -0.800    &&     std_vector_lepton_eta[0]<      0.000    &&      std_vector_lepton_pt[0]>    30.000    &&     std_vector_lepton_pt[0]<      40.000     )   *  0.974    +      \
                           #(  std_vector_lepton_eta[0]>   0.000     &&     std_vector_lepton_eta[0]<      0.800    &&      std_vector_lepton_pt[0]>    30.000    &&     std_vector_lepton_pt[0]<      40.000     )   *  0.985    +      \
                           #(  std_vector_lepton_eta[0]>   0.800     &&     std_vector_lepton_eta[0]<      1.444    &&      std_vector_lepton_pt[0]>    30.000    &&     std_vector_lepton_pt[0]<      40.000     )   *  0.977    +      \
                           #(  std_vector_lepton_eta[0]>   1.444     &&     std_vector_lepton_eta[0]<      1.566    &&      std_vector_lepton_pt[0]>    30.000    &&     std_vector_lepton_pt[0]<      40.000     )   *  0.984    +      \
                           #(  std_vector_lepton_eta[0]>   1.566     &&     std_vector_lepton_eta[0]<      2.000    &&      std_vector_lepton_pt[0]>    30.000    &&     std_vector_lepton_pt[0]<      40.000     )   *  0.958    +      \
                           #(  std_vector_lepton_eta[0]>   2.000     &&     std_vector_lepton_eta[0]<      2.500    &&      std_vector_lepton_pt[0]>    30.000    &&     std_vector_lepton_pt[0]<      40.000     )   *  0.973    +      \
                           #(  std_vector_lepton_eta[0]>   -2.500    &&     std_vector_lepton_eta[0]<      -2.000   &&      std_vector_lepton_pt[0]>    40.000    &&     std_vector_lepton_pt[0]<      50.000     )   *  0.985    +      \
                           #(  std_vector_lepton_eta[0]>   -2.000    &&     std_vector_lepton_eta[0]<      -1.566   &&      std_vector_lepton_pt[0]>    40.000    &&     std_vector_lepton_pt[0]<      50.000     )   *  0.975    +      \
                           #(  std_vector_lepton_eta[0]>   -1.566    &&     std_vector_lepton_eta[0]<      -1.444   &&      std_vector_lepton_pt[0]>    40.000    &&     std_vector_lepton_pt[0]<      50.000     )   *  0.976    +      \
                           #(  std_vector_lepton_eta[0]>   -1.444    &&     std_vector_lepton_eta[0]<      -0.800   &&      std_vector_lepton_pt[0]>    40.000    &&     std_vector_lepton_pt[0]<      50.000     )   *  0.979    +      \
                           #(  std_vector_lepton_eta[0]>   -0.800    &&     std_vector_lepton_eta[0]<      0.000    &&      std_vector_lepton_pt[0]>    40.000    &&     std_vector_lepton_pt[0]<      50.000     )   *  0.974    +      \
                           #(  std_vector_lepton_eta[0]>   0.000     &&     std_vector_lepton_eta[0]<      0.800    &&      std_vector_lepton_pt[0]>    40.000    &&     std_vector_lepton_pt[0]<      50.000     )   *  0.989    +      \
                           #(  std_vector_lepton_eta[0]>   0.800     &&     std_vector_lepton_eta[0]<      1.444    &&      std_vector_lepton_pt[0]>    40.000    &&     std_vector_lepton_pt[0]<      50.000     )   *  0.979    +      \
                           #(  std_vector_lepton_eta[0]>   1.444     &&     std_vector_lepton_eta[0]<      1.566    &&      std_vector_lepton_pt[0]>    40.000    &&     std_vector_lepton_pt[0]<      50.000     )   *  0.985    +      \
                           #(  std_vector_lepton_eta[0]>   1.566     &&     std_vector_lepton_eta[0]<      2.000    &&      std_vector_lepton_pt[0]>    40.000    &&     std_vector_lepton_pt[0]<      50.000     )   *  0.977    +      \
                           #(  std_vector_lepton_eta[0]>   2.000     &&     std_vector_lepton_eta[0]<      2.500    &&      std_vector_lepton_pt[0]>    40.000    &&     std_vector_lepton_pt[0]<      50.000     )   *  0.992    +      \
                           #(  std_vector_lepton_eta[0]>   -2.500    &&     std_vector_lepton_eta[0]<      -2.000   &&      std_vector_lepton_pt[0]>    50.000        )   *   0.981      +      \
                           #(  std_vector_lepton_eta[0]>   -2.000    &&     std_vector_lepton_eta[0]<      -1.566   &&      std_vector_lepton_pt[0]>    50.000        )   *   0.985      +      \
                           #(  std_vector_lepton_eta[0]>   -1.566    &&     std_vector_lepton_eta[0]<      -1.444   &&      std_vector_lepton_pt[0]>    50.000        )   *   0.977      +      \
                           #(  std_vector_lepton_eta[0]>   -1.444    &&     std_vector_lepton_eta[0]<      -0.800   &&      std_vector_lepton_pt[0]>    50.000        )   *   0.986      +      \
                           #(  std_vector_lepton_eta[0]>   -0.800    &&     std_vector_lepton_eta[0]<      0.000    &&      std_vector_lepton_pt[0]>    50.000        )   *   0.980      +      \
                           #(  std_vector_lepton_eta[0]>   0.000     &&     std_vector_lepton_eta[0]<      0.800    &&      std_vector_lepton_pt[0]>    50.000        )   *   0.985      +      \
                           #(  std_vector_lepton_eta[0]>   0.800     &&     std_vector_lepton_eta[0]<      1.444    &&      std_vector_lepton_pt[0]>    50.000        )   *   0.981      +      \
                           #(  std_vector_lepton_eta[0]>   1.444     &&     std_vector_lepton_eta[0]<      1.566    &&      std_vector_lepton_pt[0]>    50.000        )   *   0.992      +      \
                           #(  std_vector_lepton_eta[0]>   1.566     &&     std_vector_lepton_eta[0]<      2.000    &&      std_vector_lepton_pt[0]>    50.000        )   *   1.007      +      \
                           #(  std_vector_lepton_eta[0]>   2.000     &&     std_vector_lepton_eta[0]<      2.500    &&      std_vector_lepton_pt[0]>    50.000        )   *   1.007      +      \
                           #(  std_vector_lepton_eta[0]>   2.000     &&     std_vector_lepton_eta[0]<      2.500    &&      std_vector_lepton_pt[0]>    50.000        )   *   1.007            \
                           #))    \
                           #* ((abs(std_vector_lepton_flavour[1]) == 13) * std_vector_lepton_idisoW[1] + (   \
                           #(abs(std_vector_lepton_flavour[1]) == 11)   *    \
                           #(  std_vector_lepton_eta[1]>   -2.500    &&     std_vector_lepton_eta[1]<      -2.000   &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.935    +      \
                           #(  std_vector_lepton_eta[1]>   -2.000    &&     std_vector_lepton_eta[1]<      -1.566   &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.885    +      \
                           #(  std_vector_lepton_eta[1]>   -1.566    &&     std_vector_lepton_eta[1]<      -1.444   &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.983    +      \
                           #(  std_vector_lepton_eta[1]>   -1.444    &&     std_vector_lepton_eta[1]<      -0.800   &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.960    +      \
                           #(  std_vector_lepton_eta[1]>   -0.800    &&     std_vector_lepton_eta[1]<      0.000    &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  1.016    +      \
                           #(  std_vector_lepton_eta[1]>   0.000     &&     std_vector_lepton_eta[1]<      0.800    &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  1.003    +      \
                           #(  std_vector_lepton_eta[1]>   0.800     &&     std_vector_lepton_eta[1]<      1.444    &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.963    +      \
                           #(  std_vector_lepton_eta[1]>   1.444     &&     std_vector_lepton_eta[1]<      1.566    &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.918    +      \
                           #(  std_vector_lepton_eta[1]>   1.566     &&     std_vector_lepton_eta[1]<      2.000    &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.916    +      \
                           #(  std_vector_lepton_eta[1]>   2.000     &&     std_vector_lepton_eta[1]<      2.500    &&      std_vector_lepton_pt[1]>    10.000    &&     std_vector_lepton_pt[1]<      20.000     )   *  0.946    +      \
                           #(  std_vector_lepton_eta[1]>   -2.500    &&     std_vector_lepton_eta[1]<      -2.000   &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.970    +      \
                           #(  std_vector_lepton_eta[1]>   -2.000    &&     std_vector_lepton_eta[1]<      -1.566   &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.921    +      \
                           #(  std_vector_lepton_eta[1]>   -1.566    &&     std_vector_lepton_eta[1]<      -1.444   &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.963    +      \
                           #(  std_vector_lepton_eta[1]>   -1.444    &&     std_vector_lepton_eta[1]<      -0.800   &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.978    +      \
                           #(  std_vector_lepton_eta[1]>   -0.800    &&     std_vector_lepton_eta[1]<      0.000    &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.983    +      \
                           #(  std_vector_lepton_eta[1]>   0.000     &&     std_vector_lepton_eta[1]<      0.800    &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.986    +      \
                           #(  std_vector_lepton_eta[1]>   0.800     &&     std_vector_lepton_eta[1]<      1.444    &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.993    +      \
                           #(  std_vector_lepton_eta[1]>   1.444     &&     std_vector_lepton_eta[1]<      1.566    &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.933    +      \
                           #(  std_vector_lepton_eta[1]>   1.566     &&     std_vector_lepton_eta[1]<      2.000    &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.938    +      \
                           #(  std_vector_lepton_eta[1]>   2.000     &&     std_vector_lepton_eta[1]<      2.500    &&      std_vector_lepton_pt[1]>    20.000    &&     std_vector_lepton_pt[1]<      30.000     )   *  0.971    +      \
                           #(  std_vector_lepton_eta[1]>   -2.500    &&     std_vector_lepton_eta[1]<      -2.000   &&      std_vector_lepton_pt[1]>    30.000    &&     std_vector_lepton_pt[1]<      40.000     )   *  0.978    +      \
                           #(  std_vector_lepton_eta[1]>   -2.000    &&     std_vector_lepton_eta[1]<      -1.566   &&      std_vector_lepton_pt[1]>    30.000    &&     std_vector_lepton_pt[1]<      40.000     )   *  0.947    +      \
                           #(  std_vector_lepton_eta[1]>   -1.566    &&     std_vector_lepton_eta[1]<      -1.444   &&      std_vector_lepton_pt[1]>    30.000    &&     std_vector_lepton_pt[1]<      40.000     )   *  0.978    +      \
                           #(  std_vector_lepton_eta[1]>   -1.444    &&     std_vector_lepton_eta[1]<      -0.800   &&      std_vector_lepton_pt[1]>    30.000    &&     std_vector_lepton_pt[1]<      40.000     )   *  0.977    +      \
                           #(  std_vector_lepton_eta[1]>   -0.800    &&     std_vector_lepton_eta[1]<      0.000    &&      std_vector_lepton_pt[1]>    30.000    &&     std_vector_lepton_pt[1]<      40.000     )   *  0.974    +      \
                           #(  std_vector_lepton_eta[1]>   0.000     &&     std_vector_lepton_eta[1]<      0.800    &&      std_vector_lepton_pt[1]>    30.000    &&     std_vector_lepton_pt[1]<      40.000     )   *  0.985    +      \
                           #(  std_vector_lepton_eta[1]>   0.800     &&     std_vector_lepton_eta[1]<      1.444    &&      std_vector_lepton_pt[1]>    30.000    &&     std_vector_lepton_pt[1]<      40.000     )   *  0.977    +      \
                           #(  std_vector_lepton_eta[1]>   1.444     &&     std_vector_lepton_eta[1]<      1.566    &&      std_vector_lepton_pt[1]>    30.000    &&     std_vector_lepton_pt[1]<      40.000     )   *  0.984    +      \
                           #(  std_vector_lepton_eta[1]>   1.566     &&     std_vector_lepton_eta[1]<      2.000    &&      std_vector_lepton_pt[1]>    30.000    &&     std_vector_lepton_pt[1]<      40.000     )   *  0.958    +      \
                           #(  std_vector_lepton_eta[1]>   2.000     &&     std_vector_lepton_eta[1]<      2.500    &&      std_vector_lepton_pt[1]>    30.000    &&     std_vector_lepton_pt[1]<      40.000     )   *  0.973    +      \
                           #(  std_vector_lepton_eta[1]>   -2.500    &&     std_vector_lepton_eta[1]<      -2.000   &&      std_vector_lepton_pt[1]>    40.000    &&     std_vector_lepton_pt[1]<      50.000     )   *  0.985    +      \
                           #(  std_vector_lepton_eta[1]>   -2.000    &&     std_vector_lepton_eta[1]<      -1.566   &&      std_vector_lepton_pt[1]>    40.000    &&     std_vector_lepton_pt[1]<      50.000     )   *  0.975    +      \
                           #(  std_vector_lepton_eta[1]>   -1.566    &&     std_vector_lepton_eta[1]<      -1.444   &&      std_vector_lepton_pt[1]>    40.000    &&     std_vector_lepton_pt[1]<      50.000     )   *  0.976    +      \
                           #(  std_vector_lepton_eta[1]>   -1.444    &&     std_vector_lepton_eta[1]<      -0.800   &&      std_vector_lepton_pt[1]>    40.000    &&     std_vector_lepton_pt[1]<      50.000     )   *  0.979    +      \
                           #(  std_vector_lepton_eta[1]>   -0.800    &&     std_vector_lepton_eta[1]<      0.000    &&      std_vector_lepton_pt[1]>    40.000    &&     std_vector_lepton_pt[1]<      50.000     )   *  0.974    +      \
                           #(  std_vector_lepton_eta[1]>   0.000     &&     std_vector_lepton_eta[1]<      0.800    &&      std_vector_lepton_pt[1]>    40.000    &&     std_vector_lepton_pt[1]<      50.000     )   *  0.989    +      \
                           #(  std_vector_lepton_eta[1]>   0.800     &&     std_vector_lepton_eta[1]<      1.444    &&      std_vector_lepton_pt[1]>    40.000    &&     std_vector_lepton_pt[1]<      50.000     )   *  0.979    +      \
                           #(  std_vector_lepton_eta[1]>   1.444     &&     std_vector_lepton_eta[1]<      1.566    &&      std_vector_lepton_pt[1]>    40.000    &&     std_vector_lepton_pt[1]<      50.000     )   *  0.985    +      \
                           #(  std_vector_lepton_eta[1]>   1.566     &&     std_vector_lepton_eta[1]<      2.000    &&      std_vector_lepton_pt[1]>    40.000    &&     std_vector_lepton_pt[1]<      50.000     )   *  0.977    +      \
                           #(  std_vector_lepton_eta[1]>   2.000     &&     std_vector_lepton_eta[1]<      2.500    &&      std_vector_lepton_pt[1]>    40.000    &&     std_vector_lepton_pt[1]<      50.000     )   *  0.992    +      \
                           #(  std_vector_lepton_eta[1]>   -2.500    &&     std_vector_lepton_eta[1]<      -2.000   &&      std_vector_lepton_pt[1]>    50.000        )   *   0.981      +      \
                           #(  std_vector_lepton_eta[1]>   -2.000    &&     std_vector_lepton_eta[1]<      -1.566   &&      std_vector_lepton_pt[1]>    50.000        )   *   0.985      +      \
                           #(  std_vector_lepton_eta[1]>   -1.566    &&     std_vector_lepton_eta[1]<      -1.444   &&      std_vector_lepton_pt[1]>    50.000        )   *   0.977      +      \
                           #(  std_vector_lepton_eta[1]>   -1.444    &&     std_vector_lepton_eta[1]<      -0.800   &&      std_vector_lepton_pt[1]>    50.000        )   *   0.986      +      \
                           #(  std_vector_lepton_eta[1]>   -0.800    &&     std_vector_lepton_eta[1]<      0.000    &&      std_vector_lepton_pt[1]>    50.000        )   *   0.980      +      \
                           #(  std_vector_lepton_eta[1]>   0.000     &&     std_vector_lepton_eta[1]<      0.800    &&      std_vector_lepton_pt[1]>    50.000        )   *   0.985      +      \
                           #(  std_vector_lepton_eta[1]>   0.800     &&     std_vector_lepton_eta[1]<      1.444    &&      std_vector_lepton_pt[1]>    50.000        )   *   0.981      +      \
                           #(  std_vector_lepton_eta[1]>   1.444     &&     std_vector_lepton_eta[1]<      1.566    &&      std_vector_lepton_pt[1]>    50.000        )   *   0.992      +      \
                           #(  std_vector_lepton_eta[1]>   1.566     &&     std_vector_lepton_eta[1]<      2.000    &&      std_vector_lepton_pt[1]>    50.000        )   *   1.007      +      \
                           #(  std_vector_lepton_eta[1]>   2.000     &&     std_vector_lepton_eta[1]<      2.500    &&      std_vector_lepton_pt[1]>    50.000        )   *   1.007      +      \
                           #(  std_vector_lepton_eta[1]>   2.000     &&     std_vector_lepton_eta[1]<      2.500    &&      std_vector_lepton_pt[1]>    50.000        )   *   1.007            \
                           #))    \
                       #',  
                      #'weights' :  [
                        ##'0.829752445221',
                        ##
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',                        
                        #]
                   #}
                      
                      
                      
#samples['DY1']  = {    'name': [
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-10to50ext3.root',
                            ##
                            ##'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            ##'latino_DYJetsToLL_M-10to50.root',
                            #'latino_DYJetsToLL_M-50_0000__part0.root',
                            #'latino_DYJetsToLL_M-50_0000__part1.root',
                            #'latino_DYJetsToLL_M-50_0000__part2.root',
                            #'latino_DYJetsToLL_M-50_0000__part3.root',
                            #'latino_DYJetsToLL_M-50_0000__part4.root',
                            ##'latino_DYJetsToLL_M-50_0001__part0.root',
                            ##'latino_DYJetsToLL_M-50_0001__part1.root',
                            ##'latino_DYJetsToLL_M-50_0001__part2.root',
                            ##'latino_DYJetsToLL_M-50_0001__part3.root',
                            ##'latino_DYJetsToLL_M-50_0001__part4.root',
                            ##'latino_DYJetsToLL_M-50_0002__part0.root',
                            #],    
                      ##'weight' : '(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW63mb*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
                      #'weight' : 'puW63mb*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]\
                        #*((abs(std_vector_lepton_flavour[0]) == 13) + (   \
                        #(abs(std_vector_lepton_flavour[0]) == 11)   *    \
                        #(  std_vector_lepton_eta[0]>   -2.500     &&     std_vector_lepton_eta[0]<       -2.450        )   *  1.29369       +      \
                        #(  std_vector_lepton_eta[0]>   -2.450     &&     std_vector_lepton_eta[0]<       -2.400        )   *  1.08625       +      \
                        #(  std_vector_lepton_eta[0]>   -2.400     &&     std_vector_lepton_eta[0]<       -2.300        )   *  1.00852       +      \
                        #(  std_vector_lepton_eta[0]>   -2.300     &&     std_vector_lepton_eta[0]<       -2.200        )   *  1.01047       +      \
                        #(  std_vector_lepton_eta[0]>   -2.200     &&     std_vector_lepton_eta[0]<       -2.000        )   *  1.00519       +      \
                        #(  std_vector_lepton_eta[0]>   -2.000     &&     std_vector_lepton_eta[0]<       -1.800        )   *  0.997932      +      \
                        #(  std_vector_lepton_eta[0]>   -1.800     &&     std_vector_lepton_eta[0]<       -1.630        )   *  0.991701      +      \
                        #(  std_vector_lepton_eta[0]>   -1.630     &&     std_vector_lepton_eta[0]<       -1.566        )   *  0.986486      +      \
                        #(  std_vector_lepton_eta[0]>   -1.566     &&     std_vector_lepton_eta[0]<       -1.444        )   *  0.961582      +      \
                        #(  std_vector_lepton_eta[0]>   -1.444     &&     std_vector_lepton_eta[0]<       -1.200        )   *  0.986667      +      \
                        #(  std_vector_lepton_eta[0]>   -1.200     &&     std_vector_lepton_eta[0]<       -1.000        )   *  0.977505      +      \
                        #(  std_vector_lepton_eta[0]>   -1.000     &&     std_vector_lepton_eta[0]<       -0.600        )   *  0.969388      +      \
                        #(  std_vector_lepton_eta[0]>   -0.600     &&     std_vector_lepton_eta[0]<       -0.400        )   *  0.966361      +      \
                        #(  std_vector_lepton_eta[0]>   -0.400     &&     std_vector_lepton_eta[0]<       -0.200        )   *  0.963303      +      \
                        #(  std_vector_lepton_eta[0]>   -0.200     &&     std_vector_lepton_eta[0]<       +0.000        )   *  0.960000      +      \
                        #(  std_vector_lepton_eta[0]>   +0.000     &&     std_vector_lepton_eta[0]<       +0.200        )   *  0.966189      +      \
                        #(  std_vector_lepton_eta[0]>   +0.200     &&     std_vector_lepton_eta[0]<       +0.400        )   *  0.979633      +      \
                        #(  std_vector_lepton_eta[0]>   +0.400     &&     std_vector_lepton_eta[0]<       +0.600        )   *  0.976578      +      \
                        #(  std_vector_lepton_eta[0]>   +0.600     &&     std_vector_lepton_eta[0]<       +1.000        )   *  0.980652      +      \
                        #(  std_vector_lepton_eta[0]>   +1.000     &&     std_vector_lepton_eta[0]<       +1.200        )   *  0.986735      +      \
                        #(  std_vector_lepton_eta[0]>   +1.200     &&     std_vector_lepton_eta[0]<       +1.444        )   *  0.986680      +      \
                        #(  std_vector_lepton_eta[0]>   +1.444     &&     std_vector_lepton_eta[0]<       +1.566        )   *  0.970721      +      \
                        #(  std_vector_lepton_eta[0]>   +1.566     &&     std_vector_lepton_eta[0]<       +1.630        )   *  0.989669      +      \
                        #(  std_vector_lepton_eta[0]>   +1.630     &&     std_vector_lepton_eta[0]<       +1.800        )   *  0.995872      +      \
                        #(  std_vector_lepton_eta[0]>   +1.800     &&     std_vector_lepton_eta[0]<       +2.000        )   *  0.989733      +      \
                        #(  std_vector_lepton_eta[0]>   +2.000     &&     std_vector_lepton_eta[0]<       +2.200        )   *  0.994861      +      \
                        #(  std_vector_lepton_eta[0]>   +2.200     &&     std_vector_lepton_eta[0]<       +2.300        )   *  0.992769      +      \
                        #(  std_vector_lepton_eta[0]>   +2.300     &&     std_vector_lepton_eta[0]<       +2.400        )   *  0.966632      +      \
                        #(  std_vector_lepton_eta[0]>   +2.400     &&     std_vector_lepton_eta[0]<       +2.450        )   *  0.906141      +      \
                        #(  std_vector_lepton_eta[0]>   +2.450     &&     std_vector_lepton_eta[0]<       +2.500        )   *  0.853587             \
                        #))   \
                        #*((abs(std_vector_lepton_flavour[1]) == 13) + (   \
                        #(abs(std_vector_lepton_flavour[1]) == 11)   *    \
                        #(  std_vector_lepton_eta[1]>   -2.500     &&     std_vector_lepton_eta[1]<       -2.450        )   *  1.29369       +      \
                        #(  std_vector_lepton_eta[1]>   -2.450     &&     std_vector_lepton_eta[1]<       -2.400        )   *  1.08625       +      \
                        #(  std_vector_lepton_eta[1]>   -2.400     &&     std_vector_lepton_eta[1]<       -2.300        )   *  1.00852       +      \
                        #(  std_vector_lepton_eta[1]>   -2.300     &&     std_vector_lepton_eta[1]<       -2.200        )   *  1.01047       +      \
                        #(  std_vector_lepton_eta[1]>   -2.200     &&     std_vector_lepton_eta[1]<       -2.000        )   *  1.00519       +      \
                        #(  std_vector_lepton_eta[1]>   -2.000     &&     std_vector_lepton_eta[1]<       -1.800        )   *  0.997932      +      \
                        #(  std_vector_lepton_eta[1]>   -1.800     &&     std_vector_lepton_eta[1]<       -1.630        )   *  0.991701      +      \
                        #(  std_vector_lepton_eta[1]>   -1.630     &&     std_vector_lepton_eta[1]<       -1.566        )   *  0.986486      +      \
                        #(  std_vector_lepton_eta[1]>   -1.566     &&     std_vector_lepton_eta[1]<       -1.444        )   *  0.961582      +      \
                        #(  std_vector_lepton_eta[1]>   -1.444     &&     std_vector_lepton_eta[1]<       -1.200        )   *  0.986667      +      \
                        #(  std_vector_lepton_eta[1]>   -1.200     &&     std_vector_lepton_eta[1]<       -1.000        )   *  0.977505      +      \
                        #(  std_vector_lepton_eta[1]>   -1.000     &&     std_vector_lepton_eta[1]<       -0.600        )   *  0.969388      +      \
                        #(  std_vector_lepton_eta[1]>   -0.600     &&     std_vector_lepton_eta[1]<       -0.400        )   *  0.966361      +      \
                        #(  std_vector_lepton_eta[1]>   -0.400     &&     std_vector_lepton_eta[1]<       -0.200        )   *  0.963303      +      \
                        #(  std_vector_lepton_eta[1]>   -0.200     &&     std_vector_lepton_eta[1]<       +0.000        )   *  0.960000      +      \
                        #(  std_vector_lepton_eta[1]>   +0.000     &&     std_vector_lepton_eta[1]<       +0.200        )   *  0.966189      +      \
                        #(  std_vector_lepton_eta[1]>   +0.200     &&     std_vector_lepton_eta[1]<       +0.400        )   *  0.979633      +      \
                        #(  std_vector_lepton_eta[1]>   +0.400     &&     std_vector_lepton_eta[1]<       +0.600        )   *  0.976578      +      \
                        #(  std_vector_lepton_eta[1]>   +0.600     &&     std_vector_lepton_eta[1]<       +1.000        )   *  0.980652      +      \
                        #(  std_vector_lepton_eta[1]>   +1.000     &&     std_vector_lepton_eta[1]<       +1.200        )   *  0.986735      +      \
                        #(  std_vector_lepton_eta[1]>   +1.200     &&     std_vector_lepton_eta[1]<       +1.444        )   *  0.986680      +      \
                        #(  std_vector_lepton_eta[1]>   +1.444     &&     std_vector_lepton_eta[1]<       +1.566        )   *  0.970721      +      \
                        #(  std_vector_lepton_eta[1]>   +1.566     &&     std_vector_lepton_eta[1]<       +1.630        )   *  0.989669      +      \
                        #(  std_vector_lepton_eta[1]>   +1.630     &&     std_vector_lepton_eta[1]<       +1.800        )   *  0.995872      +      \
                        #(  std_vector_lepton_eta[1]>   +1.800     &&     std_vector_lepton_eta[1]<       +2.000        )   *  0.989733      +      \
                        #(  std_vector_lepton_eta[1]>   +2.000     &&     std_vector_lepton_eta[1]<       +2.200        )   *  0.994861      +      \
                        #(  std_vector_lepton_eta[1]>   +2.200     &&     std_vector_lepton_eta[1]<       +2.300        )   *  0.992769      +      \
                        #(  std_vector_lepton_eta[1]>   +2.300     &&     std_vector_lepton_eta[1]<       +2.400        )   *  0.966632      +      \
                        #(  std_vector_lepton_eta[1]>   +2.400     &&     std_vector_lepton_eta[1]<       +2.450        )   *  0.906141      +      \
                        #(  std_vector_lepton_eta[1]>   +2.450     &&     std_vector_lepton_eta[1]<       +2.500        )   *  0.853587             \
                        #))  \
                       #',  
                      #'weights' :  [
                        ##'0.829752445221',
                        ##
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',                        
                        #]
                   #}



#samples['DY2']  = {    'name': [
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-10to50ext3.root',
                            ##
                            ##'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-50_0000__part0.root',
                            ##'latino_DYJetsToLL_M-50_0000__part1.root',
                            ##'latino_DYJetsToLL_M-50_0000__part2.root',
                            ##'latino_DYJetsToLL_M-50_0000__part3.root',
                            ##'latino_DYJetsToLL_M-50_0000__part4.root',
                            #'latino_DYJetsToLL_M-50_0001__part0.root',
                            #'latino_DYJetsToLL_M-50_0001__part1.root',
                            #'latino_DYJetsToLL_M-50_0001__part2.root',
                            #'latino_DYJetsToLL_M-50_0001__part3.root',
                            #'latino_DYJetsToLL_M-50_0001__part4.root',
                            #'latino_DYJetsToLL_M-50_0002__part0.root',
                            #],    
                      ##'weight' : '(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW63mb*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
                      #'weight' : 'puW63mb*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]\
                                                #*((abs(std_vector_lepton_flavour[0]) == 13) + (   \
                        #(abs(std_vector_lepton_flavour[0]) == 11)   *    \
                        #(  std_vector_lepton_eta[0]>   -2.500     &&     std_vector_lepton_eta[0]<       -2.450        )   *  1.29369       +      \
                        #(  std_vector_lepton_eta[0]>   -2.450     &&     std_vector_lepton_eta[0]<       -2.400        )   *  1.08625       +      \
                        #(  std_vector_lepton_eta[0]>   -2.400     &&     std_vector_lepton_eta[0]<       -2.300        )   *  1.00852       +      \
                        #(  std_vector_lepton_eta[0]>   -2.300     &&     std_vector_lepton_eta[0]<       -2.200        )   *  1.01047       +      \
                        #(  std_vector_lepton_eta[0]>   -2.200     &&     std_vector_lepton_eta[0]<       -2.000        )   *  1.00519       +      \
                        #(  std_vector_lepton_eta[0]>   -2.000     &&     std_vector_lepton_eta[0]<       -1.800        )   *  0.997932      +      \
                        #(  std_vector_lepton_eta[0]>   -1.800     &&     std_vector_lepton_eta[0]<       -1.630        )   *  0.991701      +      \
                        #(  std_vector_lepton_eta[0]>   -1.630     &&     std_vector_lepton_eta[0]<       -1.566        )   *  0.986486      +      \
                        #(  std_vector_lepton_eta[0]>   -1.566     &&     std_vector_lepton_eta[0]<       -1.444        )   *  0.961582      +      \
                        #(  std_vector_lepton_eta[0]>   -1.444     &&     std_vector_lepton_eta[0]<       -1.200        )   *  0.986667      +      \
                        #(  std_vector_lepton_eta[0]>   -1.200     &&     std_vector_lepton_eta[0]<       -1.000        )   *  0.977505      +      \
                        #(  std_vector_lepton_eta[0]>   -1.000     &&     std_vector_lepton_eta[0]<       -0.600        )   *  0.969388      +      \
                        #(  std_vector_lepton_eta[0]>   -0.600     &&     std_vector_lepton_eta[0]<       -0.400        )   *  0.966361      +      \
                        #(  std_vector_lepton_eta[0]>   -0.400     &&     std_vector_lepton_eta[0]<       -0.200        )   *  0.963303      +      \
                        #(  std_vector_lepton_eta[0]>   -0.200     &&     std_vector_lepton_eta[0]<       +0.000        )   *  0.960000      +      \
                        #(  std_vector_lepton_eta[0]>   +0.000     &&     std_vector_lepton_eta[0]<       +0.200        )   *  0.966189      +      \
                        #(  std_vector_lepton_eta[0]>   +0.200     &&     std_vector_lepton_eta[0]<       +0.400        )   *  0.979633      +      \
                        #(  std_vector_lepton_eta[0]>   +0.400     &&     std_vector_lepton_eta[0]<       +0.600        )   *  0.976578      +      \
                        #(  std_vector_lepton_eta[0]>   +0.600     &&     std_vector_lepton_eta[0]<       +1.000        )   *  0.980652      +      \
                        #(  std_vector_lepton_eta[0]>   +1.000     &&     std_vector_lepton_eta[0]<       +1.200        )   *  0.986735      +      \
                        #(  std_vector_lepton_eta[0]>   +1.200     &&     std_vector_lepton_eta[0]<       +1.444        )   *  0.986680      +      \
                        #(  std_vector_lepton_eta[0]>   +1.444     &&     std_vector_lepton_eta[0]<       +1.566        )   *  0.970721      +      \
                        #(  std_vector_lepton_eta[0]>   +1.566     &&     std_vector_lepton_eta[0]<       +1.630        )   *  0.989669      +      \
                        #(  std_vector_lepton_eta[0]>   +1.630     &&     std_vector_lepton_eta[0]<       +1.800        )   *  0.995872      +      \
                        #(  std_vector_lepton_eta[0]>   +1.800     &&     std_vector_lepton_eta[0]<       +2.000        )   *  0.989733      +      \
                        #(  std_vector_lepton_eta[0]>   +2.000     &&     std_vector_lepton_eta[0]<       +2.200        )   *  0.994861      +      \
                        #(  std_vector_lepton_eta[0]>   +2.200     &&     std_vector_lepton_eta[0]<       +2.300        )   *  0.992769      +      \
                        #(  std_vector_lepton_eta[0]>   +2.300     &&     std_vector_lepton_eta[0]<       +2.400        )   *  0.966632      +      \
                        #(  std_vector_lepton_eta[0]>   +2.400     &&     std_vector_lepton_eta[0]<       +2.450        )   *  0.906141      +      \
                        #(  std_vector_lepton_eta[0]>   +2.450     &&     std_vector_lepton_eta[0]<       +2.500        )   *  0.853587             \
                        #))   \
                        #*((abs(std_vector_lepton_flavour[1]) == 13) + (   \
                        #(abs(std_vector_lepton_flavour[1]) == 11)   *    \
                        #(  std_vector_lepton_eta[1]>   -2.500     &&     std_vector_lepton_eta[1]<       -2.450        )   *  1.29369       +      \
                        #(  std_vector_lepton_eta[1]>   -2.450     &&     std_vector_lepton_eta[1]<       -2.400        )   *  1.08625       +      \
                        #(  std_vector_lepton_eta[1]>   -2.400     &&     std_vector_lepton_eta[1]<       -2.300        )   *  1.00852       +      \
                        #(  std_vector_lepton_eta[1]>   -2.300     &&     std_vector_lepton_eta[1]<       -2.200        )   *  1.01047       +      \
                        #(  std_vector_lepton_eta[1]>   -2.200     &&     std_vector_lepton_eta[1]<       -2.000        )   *  1.00519       +      \
                        #(  std_vector_lepton_eta[1]>   -2.000     &&     std_vector_lepton_eta[1]<       -1.800        )   *  0.997932      +      \
                        #(  std_vector_lepton_eta[1]>   -1.800     &&     std_vector_lepton_eta[1]<       -1.630        )   *  0.991701      +      \
                        #(  std_vector_lepton_eta[1]>   -1.630     &&     std_vector_lepton_eta[1]<       -1.566        )   *  0.986486      +      \
                        #(  std_vector_lepton_eta[1]>   -1.566     &&     std_vector_lepton_eta[1]<       -1.444        )   *  0.961582      +      \
                        #(  std_vector_lepton_eta[1]>   -1.444     &&     std_vector_lepton_eta[1]<       -1.200        )   *  0.986667      +      \
                        #(  std_vector_lepton_eta[1]>   -1.200     &&     std_vector_lepton_eta[1]<       -1.000        )   *  0.977505      +      \
                        #(  std_vector_lepton_eta[1]>   -1.000     &&     std_vector_lepton_eta[1]<       -0.600        )   *  0.969388      +      \
                        #(  std_vector_lepton_eta[1]>   -0.600     &&     std_vector_lepton_eta[1]<       -0.400        )   *  0.966361      +      \
                        #(  std_vector_lepton_eta[1]>   -0.400     &&     std_vector_lepton_eta[1]<       -0.200        )   *  0.963303      +      \
                        #(  std_vector_lepton_eta[1]>   -0.200     &&     std_vector_lepton_eta[1]<       +0.000        )   *  0.960000      +      \
                        #(  std_vector_lepton_eta[1]>   +0.000     &&     std_vector_lepton_eta[1]<       +0.200        )   *  0.966189      +      \
                        #(  std_vector_lepton_eta[1]>   +0.200     &&     std_vector_lepton_eta[1]<       +0.400        )   *  0.979633      +      \
                        #(  std_vector_lepton_eta[1]>   +0.400     &&     std_vector_lepton_eta[1]<       +0.600        )   *  0.976578      +      \
                        #(  std_vector_lepton_eta[1]>   +0.600     &&     std_vector_lepton_eta[1]<       +1.000        )   *  0.980652      +      \
                        #(  std_vector_lepton_eta[1]>   +1.000     &&     std_vector_lepton_eta[1]<       +1.200        )   *  0.986735      +      \
                        #(  std_vector_lepton_eta[1]>   +1.200     &&     std_vector_lepton_eta[1]<       +1.444        )   *  0.986680      +      \
                        #(  std_vector_lepton_eta[1]>   +1.444     &&     std_vector_lepton_eta[1]<       +1.566        )   *  0.970721      +      \
                        #(  std_vector_lepton_eta[1]>   +1.566     &&     std_vector_lepton_eta[1]<       +1.630        )   *  0.989669      +      \
                        #(  std_vector_lepton_eta[1]>   +1.630     &&     std_vector_lepton_eta[1]<       +1.800        )   *  0.995872      +      \
                        #(  std_vector_lepton_eta[1]>   +1.800     &&     std_vector_lepton_eta[1]<       +2.000        )   *  0.989733      +      \
                        #(  std_vector_lepton_eta[1]>   +2.000     &&     std_vector_lepton_eta[1]<       +2.200        )   *  0.994861      +      \
                        #(  std_vector_lepton_eta[1]>   +2.200     &&     std_vector_lepton_eta[1]<       +2.300        )   *  0.992769      +      \
                        #(  std_vector_lepton_eta[1]>   +2.300     &&     std_vector_lepton_eta[1]<       +2.400        )   *  0.966632      +      \
                        #(  std_vector_lepton_eta[1]>   +2.400     &&     std_vector_lepton_eta[1]<       +2.450        )   *  0.906141      +      \
                        #(  std_vector_lepton_eta[1]>   +2.450     &&     std_vector_lepton_eta[1]<       +2.500        )   *  0.853587             \
                        #))  \
                       #',  
                      #'weights' :  [
                        ##'0.829752445221',
                        ##
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        ##'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',                        
                        #]
                   #}

#samples['DYpow']  = {    'name': [
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-10to50ext3.root',
                            ##
                            ##'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            ##'latino_DYJetsToLL_M-10to50.root',
                            #'latino_DYJetsToEE_Pow_0000__part0.root',
                            #'latino_DYJetsToEE_Pow_0000__part1.root',
                            #'latino_DYJetsToEE_Pow_0000__part2.root',
                            #'latino_DYJetsToEE_Pow_0000__part3.root',
                            #'latino_DYJetsToEE_Pow_0001__part0.root',
                            #'latino_DYJetsToEE_Pow_0001__part1.root',
                            #'latino_DYJetsToEE_Pow_0001__part2.root',
                            #],    
                      ##'weight' : '(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW63mb*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
                      #'weight' : 'baseW*puW63mb*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',  
                   #}






## data driven
#samples['Fake']  = {    'name': [
                      ##
                       ##'../../../../../../../eos/user/a/amassiro/HWW2015/23JunFake/latino_DD_Run2016B_PromptReco_DoubleEG.root',
                       ##'../../../../../../../eos/user/a/amassiro/HWW2015/23JunFake/latino_DD_Run2016B_PromptReco_MuonEG.root',
                       ##'../../../../../../../eos/user/a/amassiro/HWW2015/23JunFake/latino_DD_Run2016B_PromptReco_SingleMuon.root',
                       ##'../../../../../../../eos/user/a/amassiro/HWW2015/23JunFake/latino_DD_Run2016B_PromptReco_DoubleMuon.root',
                       ##'../../../../../../../eos/user/a/amassiro/HWW2015/23JunFake/latino_DD_Run2016B_PromptReco_SingleElectron.root',
                       ##             
                       ##'../../../../../../../../../../eos/user/j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2016B_PromptReco_DoubleEG.root',
                       ##'../../../../../../../../../../eos/user/j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2016B_PromptReco_MuonEG.root',
                       ##'../../../../../../../../../../eos/user/j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2016B_PromptReco_SingleMuon.root',
                       ##'../../../../../../../../../../eos/user/j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2016B_PromptReco_DoubleMuon.root',
                       ##'../../../../../../../../../../eos/user/j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2016B_PromptReco_SingleElectron.root',
                       ##
                       ##
                       ##
                       ##'../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/05Jul2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_DoubleEG.root', 
                       ##'../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/05Jul2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_MuonEG.root',   
                       ##'../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/05Jul2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_SingleMuon.root',
                       ##'../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/05Jul2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_DoubleMuon.root', 
                       ##'../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/05Jul2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_SingleElectron.root',
                       ##                       
                       ##'../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/21Jun2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_DoubleEG.root',  
                       ##'../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/21Jun2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_MuonEG.root',    
                       ##'../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/21Jun2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_SingleMuon.root',
                       ##'../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/21Jun2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_DoubleMuon.root', 
                       ##'../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/21Jun2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_SingleElectron.root',
                       ##
                       ##
                       #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_MuonEG.root', 
                       #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_SingleElectron.root', 
                       #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_DoubleEG.root', 
                       #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_DoubleMuon.root', 
                       #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_SingleMuon.root', 
                       ##
                       #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_MuonEG.root', 
                       #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_SingleElectron.root', 
                       #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_DoubleEG.root', 
                       #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_DoubleMuon.root', 
                       #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_SingleMuon.root', 
                       ##
                       #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_MuonEG.root', 
                       #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_SingleElectron.root', 
                       #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_DoubleEG.root', 
                       #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_DoubleMuon.root', 
                       #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_SingleMuon.root', 
                       ##
                       #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016C_PromptReco_MuonEG.root', 
                       #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016C_PromptReco_SingleElectron.root', 
                       #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016C_PromptReco_DoubleEG.root', 
                       #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016C_PromptReco_DoubleMuon.root', 
                       #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016C_PromptReco_SingleMuon.root', 
                       ##
                       ##               
                       #],     
                      ##'weight' : 'trigger*(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
                      ##'weight' : '2.6/0.8*trigger*(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
                      ##'weight' : '4.0/0.8*trigger*(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
                      #'weight' : 'trigger*(0.8*fakeW2l0j*(njet==0)+0.8*fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
                      #'isData': ['all'],                             
                  #}




samples['top'] = {   'name': [
                           #'latino_TTJets.root',
                           'latino_TTTo2L2Nu_ext1__part0.root',
                           'latino_TTTo2L2Nu_ext1__part1.root',
                           'latino_TTTo2L2Nu_ext1__part2.root',
                           'latino_TTTo2L2Nu_ext1__part3.root',
                           'latino_TTTo2L2Nu_ext1__part4.root',
                           'latino_TTTo2L2Nu_ext1__part5.root',
                           'latino_TTTo2L2Nu_ext1__part6.root',
                           'latino_TTTo2L2Nu_ext1__part7.root',
                           'latino_TTTo2L2Nu_ext1__part8.root',
                           'latino_TTTo2L2Nu_ext1__part9.root',
                           #
                           'latino_ST_tW_antitop.root',
                           'latino_ST_tW_top.root'
                          ],          
                       'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',    #   weight/cut 
                      }


             
samples['WW']  = {    'name': [
                                  'latino_WWTo2L2Nu.root'
                                ],      
                      'weight' : 'nllW*puW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                      'weights': ['0.00619058124769'] ,           
                  }



#samples['ggWW']  = {    'name': ['latino_GluGluWWTo2L2Nu_MCFM.root'],      
                      #'weight' : 'puW63mb*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                      ##'weights': ['abs(nllW)'] ,           
                      ##'weights': ['1.000'] ,           
                      #'isData': ['0'],                            
                  #}



## during tree production: 1.4 k-factor has been applied to both samples
## ggWW sample: k = 1.4 +/- 15%
## ggWW interference: k = 1.87 +/- 25%



#samples['Vg']  = {    'name': ['latino_Wg_MADGRAPHMLM.root'],      
                      #'weight' : 'puW63mb*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)\
                                  #* !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
                                 ##*(!(Gen_ZGstar_MomStatus==44 && Gen_ZGstar_MomId==22))',
                      #'weights': ['0.0684952181745'] ,           
                      ##'isData': ['0'],                            
                  #}



#samples['VgS']  = {    'name': [
                             #'latino_WgStarLNuEE.root', 
                             #'latino_WgStarLNuMuMu.root'
                             #],      
                      #'weight' : '1.4*puW63mb*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',
                      #'weights': ['1','1'] ,           
                  #}

## 
## Wg* scale factor is
##
## X.X  +/- X.X     in mumumu
## 1.4  +/- 0.4     in emumu
##
##





#samples['VZ']  = {    'name': [
                          ##'latino_WZ.root', 
                          #'latino_WZTo3LNu.root', 
                          ##'latino_ZZ.root', # ---> replaced by exclusive samples
                          #'latino_ZZTo2L2Nu.root',   # 
                          ##'latino_ZZTo2L2Q.root'
                          #'latino_WZTo2L2Q__part0.root',
                          #'latino_WZTo2L2Q__part1.root',
                          #'latino_WZTo2L2Q__part10.root',
                          #'latino_WZTo2L2Q__part11.root',
                          #'latino_WZTo2L2Q__part12.root',
                          #'latino_WZTo2L2Q__part13.root',
                          #'latino_WZTo2L2Q__part14.root',
                          #'latino_WZTo2L2Q__part15.root',
                          #'latino_WZTo2L2Q__part16.root',
                          #'latino_WZTo2L2Q__part17.root',
                          #'latino_WZTo2L2Q__part18.root',
                          #'latino_WZTo2L2Q__part19.root',
                          #'latino_WZTo2L2Q__part2.root',
                          #'latino_WZTo2L2Q__part20.root',
                          #'latino_WZTo2L2Q__part21.root',
                          #'latino_WZTo2L2Q__part22.root',
                          #'latino_WZTo2L2Q__part23.root',
                          #'latino_WZTo2L2Q__part24.root',
                          #'latino_WZTo2L2Q__part25.root',
                          #'latino_WZTo2L2Q__part26.root',
                          #'latino_WZTo2L2Q__part27.root',
                          #'latino_WZTo2L2Q__part28.root',
                          #'latino_WZTo2L2Q__part29.root',
                          #'latino_WZTo2L2Q__part3.root',
                          #'latino_WZTo2L2Q__part30.root',
                          #'latino_WZTo2L2Q__part31.root',
                          #'latino_WZTo2L2Q__part32.root',
                          #'latino_WZTo2L2Q__part33.root',
                          #'latino_WZTo2L2Q__part34.root',
                          #'latino_WZTo2L2Q__part35.root',
                          #'latino_WZTo2L2Q__part36.root',
                          #'latino_WZTo2L2Q__part37.root',
                          #'latino_WZTo2L2Q__part38.root',
                          #'latino_WZTo2L2Q__part39.root',
                          #'latino_WZTo2L2Q__part4.root',
                          #'latino_WZTo2L2Q__part40.root',
                          #'latino_WZTo2L2Q__part41.root',
                          #'latino_WZTo2L2Q__part42.root',
                          #'latino_WZTo2L2Q__part5.root',
                          #'latino_WZTo2L2Q__part6.root',
                          #'latino_WZTo2L2Q__part7.root',
                          #'latino_WZTo2L2Q__part8.root',
                          #'latino_WZTo2L2Q__part9.root',                          
                          ##
                          #'latino_ZZTo2L2Q__part0.root',
                          #'latino_ZZTo2L2Q__part1.root',
                          #'latino_ZZTo2L2Q__part2.root',
                          #'latino_ZZTo2L2Q__part3.root',
                          ##
                          ##'latino_ZZTo4L.root'
                         #], 
                      #'weight' : 'puW63mb*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      #'weights': [
                          #'0.002214825',
                          ##
                          #'6.28902765388e-05',
                          ##
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',
                          #'0.000359426036128',                          
                          ##
                          #'0.000329080664109',
                          #'0.000329080664109',
                          #'0.000329080664109',
                          #'0.000329080664109',
                          ##
                        #'',
                        #] ,           
                      ##'isData': ['0'],                            
                  #}



#samples['VVV'] = {    'name': [
                          #'latino_WZZ.root', 
                          #'latino_ZZZ.root',
                          #'latino_WWW.root',
                          #'latino_WWZ.root',
                          #],      
                      #'weight' : 'puW63mb*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      ##'isData': ['0'],                            
                  #}


## Htautau
#samples['H_htt']  = {      'name': ['latino_GluGluHToTauTau_M125.root',
                                    #'latino_VBFHToTauTau_M125.root'
                                    ##'latino_HWminusJ_HToTauTau_M125.root',
                                    ##'latino_HWplusJ_HToTauTau_M125.root',
                                    ##'latino_HZJ_HToTauTau_M125.root'
                                    #],      
                           #'weight' : 'puW63mb*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',         
                           #'weights': ['1', '1']
                                       ##, 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)' ]            
                  #}



## HWW 

#samples['ggH_hww']  = {    'name': [
                               #'latino_GluGluHToWWTo2L2NuPowheg_M125.root'
                               #],      
                           #'weight' : 'puW63mb*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                  #}

#samples['qqH_hww']  = {    'name': [
                               ##'latino_VBFHToWWTo2L2Nu_M125.root'
                               #'latino_VBFHToWWTo2L2Nu_alternative_M125.root'
                               #],      
                           #'weight' : 'puW63mb*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                  #}

#samples['ggZH_hww']  = {    'name': [
                               #'latino_ggZH_HToWW_M125.root',
                               #],      
                           #'weight' : 'puW63mb*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                  #}


#samples['WH_hww']  = {    'name': [
                             #'latino_HWminusJ_HToWW_M125.root',
                             #'latino_HWplusJ_HToWW_M125.root'
                             #],      
                           #'weight' : 'puW63mb*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                  #}

#samples['ZH_hww']  = {    'name': ['latino_HZJ_HToWW_M125.root'],      
                           #'weight' : 'puW63mb*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                  #}



###########################################
###########################################
###########################################


#samples['DATA']  = {   'name': [
                                ###
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_MuonEG.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleElectron.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleEG.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleMuon.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleMuon.root', 
                                ###           
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_MuonEG.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleElectron.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleEG.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleMuon.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleMuon.root', 
                                ###         
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_MuonEG.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleElectron.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleEG.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleMuon.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleMuon.root', 
                                ###         
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_MuonEG.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleElectron.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleEG.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleMuon.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleMuon.root', 
                                ###
                                ###            
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_MuonEG.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleElectron.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleEG.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleMuon.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleMuon.root', 
                                ###            
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_MuonEG.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleElectron.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleEG.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleMuon.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleMuon.root', 
                                ###            
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_MuonEG.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_SingleElectron.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_DoubleEG.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_DoubleMuon.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_SingleMuon.root', 
                                ###            
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_MuonEG.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_SingleElectron.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_DoubleEG.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_DoubleMuon.root', 
                                ##'eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_SingleMuon.root', 
                                ###
                                ###
                                   ##'std_vector_trigger[8]  || std_vector_trigger[6]',           MuEG
                                   ##'std_vector_trigger[13] || std_vector_trigger[11]',          DoubleMu
                                   ##'std_vector_trigger[42] || std_vector_trigger[43]',          SingleMu
                                   ##'std_vector_trigger[46]',                                    DoubleEle
                                   ##'std_vector_trigger[0] || std_vector_trigger[56]',          SingleEle
                                ##
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_MuonEG.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleMuon.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleMuon.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleEG.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleElectron.root', 
                                ##../../../../../../../../../../           
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_MuonEG.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleMuon.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleMuon.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleEG.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleElectron.root', 
                                ##../../../../../../../../../../         
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_MuonEG.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleMuon.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleMuon.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleEG.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleElectron.root', 
                                ##../../../../../../../../../../         
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_MuonEG.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleMuon.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleMuon.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleEG.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleElectron.root', 
                                ##../../../../../../../../../../
                                ##../../../../../../../../../../            
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_MuonEG.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleMuon.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleMuon.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleEG.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleElectron.root', 
                                ##../../../../../../../../../../            
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_MuonEG.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleMuon.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleMuon.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleEG.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleElectron.root', 
                                ##../../../../../../../../../../            
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_MuonEG.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_DoubleMuon.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_SingleMuon.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_DoubleEG.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_SingleElectron.root', 
                                ##../../../../../../../../../../            
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_MuonEG.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_DoubleMuon.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_SingleMuon.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_DoubleEG.root', 
                                #'../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_SingleElectron.root', 
                                ##
                                ##
                                #] ,     
                       ##'weight' : 'trigger',
                       #'weight' : '1',
                       ##'weight' : 'std_vector_trigger[1]',
                       #'weights' : [
                                   ##
                                   ##                             "HLT_Ele27_eta2p1_WPLoose_Gsf_v*",                                    # 0
                                   ##'',                          "HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_v*",                 # 8
                                   ##'',                          "HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_v*",                  # 6
                                   ##'',                          "HLT_Ele45_WPLoose_Gsf_v*",                                           # 56
                                   ##'',                          "HLT_IsoTkMu22_v*",                                                   # 42
                                   ##'',                          "HLT_IsoMu22_v*",                                                     # 43
                                   ##'',                          "HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v*",                       # 46
                                   ##'',                          "HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_v*",                              # 13
                                   ##'',                          "HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_v*",                                # 11
                                   ##'',
                                   ##'std_vector_trigger[8]  || std_vector_trigger[6]',           MuEG
                                   ##'std_vector_trigger[13] || std_vector_trigger[11]',          DoubleMu
                                   ##'std_vector_trigger[42] || std_vector_trigger[43]',          SingleMu
                                   ##'std_vector_trigger[46]',                                    DoubleEle
                                   ##'std_vector_trigger[0] || std_vector_trigger[56]',          SingleEle
                                   ##'',
                                   ##  if(pdType == MuEG) { return ( passesMuEGData_ );
                                   ##  } else if(pdType == DoubleMuon) { return ( !passesMuEGData_ && passesDoubleMuData_ );
                                   ##  } else if(pdType == SingleMuon) { return ( !passesMuEGData_ && !passesDoubleMuData_ && passesSingleMuData_ );
                                   ##  } else if(pdType == DoubleEG  ) { return ( !passesMuEGData_ && !passesDoubleMuData_ && !passesSingleMuData_ && passesDoubleElData_ );
                                   ##  } else if(pdType == SingleElectron) { return ( !passesMuEGData_ && !passesDoubleMuData_ && !passesSingleMuData_ && !passesDoubleElData_ && passesSingleElData_ );
                                   ##  } else if(pdType == AllEmbed) { return ( passesMuEGData_ || passesDoubleMuData_ || passesSingleMuData_ || passesDoubleElData_ || passesSingleElData_ );
                                   ##
                                   ##'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   ##'!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   ##'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   ##'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   ##'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   ##
                                   #'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   ##
                                   #'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   ##
                                   #'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   ##
                                   #'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   ##
                                   #'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   ##
                                   #'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   ##
                                   #'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   ##
                                   #'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   
                                    #],
                       #'isData': ['all'],                            
                  #}








samples['DATA']  = {   'name': [
                               #
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/21Jun2016_v2_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_MuonEG.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/21Jun2016_v2_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleMuon.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/21Jun2016_v2_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleMuon.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/21Jun2016_v2_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleEG.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/21Jun2016_v2_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleElectron.root', 
              #../../../../../../../../../           
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/05Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_MuonEG.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/05Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleMuon.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/05Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleMuon.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/05Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleEG.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/05Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleElectron.root', 
              #../../../../../../../../../         
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/08Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_MuonEG.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/08Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleMuon.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/08Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleMuon.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/08Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleEG.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/08Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleElectron.root', 
              #../../../../../../../../../         
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/08Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_MuonEG.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/08Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleMuon.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/08Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleMuon.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/08Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleEG.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/08Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleElectron.root', 
              #../../../../../../../../../
              #../../../../../../../../../            
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro//11Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_MuonEG.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro//11Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleMuon.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro//11Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleMuon.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro//11Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleEG.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro//11Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleElectron.root', 
              #../../../../../../../../../            
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro//15Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_MuonEG.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro//15Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleMuon.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro//15Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleMuon.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro//15Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleEG.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro//15Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleElectron.root', 
              #../../../../../../../../../            
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/15Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_MuonEG.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/15Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_DoubleMuon.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/15Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_SingleMuon.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/15Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_DoubleEG.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/15Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_SingleElectron.root', 
              #../../../../../../../../../            
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro//26Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_MuonEG.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro//26Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_DoubleMuon.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro//26Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_SingleMuon.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro//26Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_DoubleEG.root', 
              '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro//26Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_SingleElectron.root', 
           
                                #
                                ] ,     
                       #'weight' : 'trigger',
                       'weight' : '1',
                       #'weight' : 'std_vector_trigger[1]',
                       'weights' : [
                                   #
                                   #                             "HLT_Ele27_eta2p1_WPLoose_Gsf_v*",                                    # 0
                                   #'',                          "HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_v*",                 # 8
                                   #'',                          "HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_v*",                  # 6
                                   #'',                          "HLT_Ele45_WPLoose_Gsf_v*",                                           # 56
                                   #'',                          "HLT_IsoTkMu22_v*",                                                   # 42
                                   #'',                          "HLT_IsoMu22_v*",                                                     # 43
                                   #'',                          "HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v*",                       # 46
                                   #'',                          "HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_v*",                              # 13
                                   #'',                          "HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_v*",                                # 11
                                   #'',
                                   #'std_vector_trigger[8]  || std_vector_trigger[6]',           MuEG
                                   #'std_vector_trigger[13] || std_vector_trigger[11]',          DoubleMu
                                   #'std_vector_trigger[42] || std_vector_trigger[43]',          SingleMu
                                   #'std_vector_trigger[46]',                                    DoubleEle
                                   #'std_vector_trigger[0] || std_vector_trigger[56]',          SingleEle
                                   #'',
                                   #  if(pdType == MuEG) { return ( passesMuEGData_ );
                                   #  } else if(pdType == DoubleMuon) { return ( !passesMuEGData_ && passesDoubleMuData_ );
                                   #  } else if(pdType == SingleMuon) { return ( !passesMuEGData_ && !passesDoubleMuData_ && passesSingleMuData_ );
                                   #  } else if(pdType == DoubleEG  ) { return ( !passesMuEGData_ && !passesDoubleMuData_ && !passesSingleMuData_ && passesDoubleElData_ );
                                   #  } else if(pdType == SingleElectron) { return ( !passesMuEGData_ && !passesDoubleMuData_ && !passesSingleMuData_ && !passesDoubleElData_ && passesSingleElData_ );
                                   #  } else if(pdType == AllEmbed) { return ( passesMuEGData_ || passesDoubleMuData_ || passesSingleMuData_ || passesDoubleElData_ || passesSingleElData_ );
                                   #
                                   #'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   #
                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   #
                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   #
                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   #
                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   #
                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   #
                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   #
                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   #
                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   
                                    ],
                       'isData': ['all'],                            
                  }


