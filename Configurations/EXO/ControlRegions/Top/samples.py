# samples

#samples = {}

samples['DY']  = {    'name': [ 
 
        'latino_DYJetsToLL_M-50-LO-ext1_0000__part0.root', 
        'latino_DYJetsToLL_M-50-LO-ext1_0000__part1.root', 
        'latino_DYJetsToLL_M-50-LO-ext1_0000__part2.root', 
        'latino_DYJetsToLL_M-50-LO-ext1_0000__part3.root', 
        'latino_DYJetsToLL_M-50-LO-ext1_0000__part4.root', 
        'latino_DYJetsToLL_M-50-LO-ext1_0001__part0.root', 
        'latino_DYJetsToLL_M-50-LO-ext1_0001__part1.root', 
        'latino_DYJetsToLL_M-50-LO-ext1_0001__part2.root', 
        'latino_DYJetsToLL_M-50-LO-ext1_0001__part3.root', 
        'latino_DYJetsToLL_M-50-LO-ext1_0001__part4.root', 
        'latino_DYJetsToLL_M-50-LO-ext1_0002__part0.root', 
        'latino_DYJetsToLL_M-50-LO-ext1_0002__part1.root', 
        'latino_DYJetsToLL_M-50-LO-ext1_0002__part2.root', 
        'latino_DYJetsToLL_M-50-LO-ext1_0002__part3.root', 
        'latino_DYJetsToLL_M-50-LO-ext1_0002__part4.root', 
        'latino_DYJetsToLL_M-50-LO-ext1_0003__part0.root', 
        'latino_DYJetsToLL_M-50-LO-ext1_0003__part1.root', 
        'latino_DYJetsToLL_M-50-LO-ext1_0003__part2.root', 
        'latino_DYJetsToLL_M-50-LO-ext1_0003__part3.root', 
        'latino_DYJetsToLL_M-50-LO-ext1_0003__part4.root', 
        'latino_DYJetsToLL_M-50-LO-ext1_0004__part0.root', 
        'latino_DYJetsToLL_M-50-LO-ext1_0004__part1.root', 
        'latino_DYJetsToLL_M-50-LO-ext1_0004__part2.root', 
        'latino_DYJetsToLL_M-50-LO-ext1_0004__part3.root', 
# 
#        'latino_DYJetsToLL_M-50_HT-100to200_ext1.root', 
        'latino_DYJetsToLL_M-50_HT-200to400_ext1.root', 
        'latino_DYJetsToLL_M-50_HT-600toInf_ext1.root', 
                            ], 
                      'weight' : 'metFilter*puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*((8.61313e-01+gen_ptll*4.46807e-03-1.52324e-05*gen_ptll*gen_ptll)*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-11.)/5.51582)))*(gen_ptll<140)+1.141996*(gen_ptll>=140))', 
                      'weights' :  [ 
                                    '0.124397720812*( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 200) || ( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 600) && (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) > 400) ) )', 
                                    '0.124397720812*( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 200) || ( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 600) && (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) > 400) ) )', 
                                    '0.124397720812*( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 200) || ( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 600) && (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) > 400) ) )', 
                                    '0.124397720812*( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 200) || ( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 600) && (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) > 400) ) )', 
                                    '0.124397720812*( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 200) || ( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 600) && (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) > 400) ) )', 
                                    '0.124397720812*( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 200) || ( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 600) && (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) > 400) ) )', 
                                    '0.124397720812*( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 200) || ( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 600) && (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) > 400) ) )', 
                                    '0.124397720812*( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 200) || ( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 600) && (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) > 400) ) )', 
                                    '0.124397720812*( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 200) || ( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 600) && (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) > 400) ) )', 
                                    '0.124397720812*( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 200) || ( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 600) && (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) > 400) ) )', 
                                    '0.124397720812*( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 200) || ( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 600) && (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) > 400) ) )', 
                                    '0.124397720812*( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 200) || ( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 600) && (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) > 400) ) )', 
                                    '0.124397720812*( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 200) || ( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 600) && (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) > 400) ) )', 
                                    '0.124397720812*( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 200) || ( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 600) && (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) > 400) ) )', 
                                    '0.124397720812*( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 200) || ( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 600) && (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) > 400) ) )', 
                                    '0.124397720812*( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 200) || ( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 600) && (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) > 400) ) )', 
                                    '0.124397720812*( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 200) || ( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 600) && (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) > 400) ) )',
                                    '0.124397720812*( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 200) || ( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 600) && (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) > 400) ) )',
                                    '0.124397720812*( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 200) || ( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 600) && (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) > 400) ) )',
                                    '0.124397720812*( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 200) || ( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 600) && (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) > 400) ) )',
                                    '0.124397720812*( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 200) || ( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 600) && (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) > 400) ) )',
                                    '0.124397720812*( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 200) || ( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 600) && (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) > 400) ) )',
                                    '0.124397720812*( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 200) || ( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 600) && (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) > 400) ) )',
                                    '0.124397720812*( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 200) || ( (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 600) && (std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) > 400) ) )',
                                    #
                                    #'baseW',
                                    '0.00616295119575',
                                    'baseW',
                                    ]

                   }

# data driven
samples['Fake']  = {    'name': [
                      #
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/23JunFake/latino_DD_Run2016B_PromptReco_DoubleEG.root',
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/23JunFake/latino_DD_Run2016B_PromptReco_MuonEG.root',
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/23JunFake/latino_DD_Run2016B_PromptReco_SingleMuon.root',
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/23JunFake/latino_DD_Run2016B_PromptReco_DoubleMuon.root',
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/23JunFake/latino_DD_Run2016B_PromptReco_SingleElectron.root',
                       #             
                       #'../../../../../../../../../../eos/user/j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2016B_PromptReco_DoubleEG.root',
                       #'../../../../../../../../../../eos/user/j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2016B_PromptReco_MuonEG.root',
                       #'../../../../../../../../../../eos/user/j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2016B_PromptReco_SingleMuon.root',
                       #'../../../../../../../../../../eos/user/j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2016B_PromptReco_DoubleMuon.root',
                       #'../../../../../../../../../../eos/user/j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2016B_PromptReco_SingleElectron.root',
                       #
                       #
                       #
                       '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_MuonEG.root',
                       '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_SingleElectron.root',
                       '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_DoubleEG.root',
                       '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_DoubleMuon.root',
                       '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_SingleMuon.root',
                       #
                       '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_MuonEG.root',
                       '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_SingleElectron.root',
                       '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_DoubleEG.root',
                       '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_DoubleMuon.root',
                       '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_SingleMuon.root',
                       #
                       '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_MuonEG.root',
                       '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_SingleElectron.root',
                       '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_DoubleEG.root',
                       '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_DoubleMuon.root',
                       '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_SingleMuon.root',
                       #
                       '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016C_PromptReco_MuonEG.root',
                       '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016C_PromptReco_SingleElectron.root',
                       '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016C_PromptReco_DoubleEG.root',
                       '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016C_PromptReco_DoubleMuon.root',
                       '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016C_PromptReco_SingleMuon.root',
                       #
                      #
                       ],
                      'weight' : 'trigger*(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
                      'isData': ['all'],
                  }

             
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
                       'weight' : 'puW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',    #   weight/cut 
                       'weights' :  [
                          '0.00437119916948',
                          '0.00437119916948',
                          '0.00437119916948',
                          '0.00437119916948',
                          '0.00437119916948',
                          '0.00437119916948',
                          '0.00437119916948',
                          '0.00437119916948',
                          '0.00437119916948',
                          '0.00437119916948',
#
                          'baseW',
                          'baseW',
#                   
                       ]
                      }






samples['WW']  = {    'name': [
                                  'latino_WWTo2L2Nu.root'
                                ],
                      'weight' : 'nllW*puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                      'weights': ['0.00619058124769'] ,
                  }


samples['ggWW']  = {    'name': ['latino_GluGluWWTo2L2Nu_MCFM.root'],
                      'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',         
                      #'weights': ['abs(nllW)'] ,           
                      #'weights': ['1.000'] ,           
                      'isData': ['0'],
                  }



# during tree production: 1.4 k-factor has been applied to both samples
# ggWW sample: k = 1.4 +/- 15%
# ggWW interference: k = 1.87 +/- 25%



#samples['Vg']  = {    'name': ['latino_Wg_AMCNLOFXFX.root'],      
                      #'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)\
                                  #* !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
                                 ##*(!(Gen_ZGstar_MomStatus==44 && Gen_ZGstar_MomId==22))',
                      #'weights': ['1'] ,           
                      ##'isData': ['0'],                            
                  #}


samples['Vg']  = {    'name': ['latino_Wg_MADGRAPHMLM.root'],
                      'weight' : 'puW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)\
                                  * !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
                                 #*(!(Gen_ZGstar_MomStatus==44 && Gen_ZGstar_MomId==22))',
                      'weights': ['0.0684952181745'] ,
                      #'isData': ['0'],                            
                  }


samples['VgS']  = {    'name': [
                             'latino_WgStarLNuEE.root',
                             'latino_WgStarLNuMuMu.root'
                             ],
                      'weight' : '1.4*puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',
                      'weights': ['1','1'] ,
                  }


# 
# Wg* scale factor is
#
# 1.98 +/- 0.54    in mumumu
# 2.0  +/- 0.5     in emumu
#
#





samples['VZ']  = {    'name': [
                          #'latino_WZ.root', 
                          'latino_WZTo3LNu.root', 
                          #'latino_ZZ.root', # ---> replaced by inclusive samples
                          'latino_ZZTo2L2Nu.root',   # ----> FIXME to be restored
                          #'latino_ZZTo2L2Q.root'
                          'latino_WZTo2L2Q__part0.root',
                          'latino_WZTo2L2Q__part1.root',
                          'latino_WZTo2L2Q__part10.root',
                          'latino_WZTo2L2Q__part11.root',
                          'latino_WZTo2L2Q__part12.root',
                          'latino_WZTo2L2Q__part13.root',
                          'latino_WZTo2L2Q__part14.root',
                          'latino_WZTo2L2Q__part15.root',
                          'latino_WZTo2L2Q__part16.root',
                          'latino_WZTo2L2Q__part17.root',
                          'latino_WZTo2L2Q__part18.root',
                          'latino_WZTo2L2Q__part19.root',
                          'latino_WZTo2L2Q__part2.root',
                          'latino_WZTo2L2Q__part20.root',
                          'latino_WZTo2L2Q__part21.root',
                          'latino_WZTo2L2Q__part22.root',
                          'latino_WZTo2L2Q__part23.root',
                          'latino_WZTo2L2Q__part24.root',
                          'latino_WZTo2L2Q__part25.root',
                          'latino_WZTo2L2Q__part26.root',
                          'latino_WZTo2L2Q__part27.root',
                          'latino_WZTo2L2Q__part28.root',
                          'latino_WZTo2L2Q__part29.root',
                          'latino_WZTo2L2Q__part3.root',
                          'latino_WZTo2L2Q__part30.root',
                          'latino_WZTo2L2Q__part31.root',
                          'latino_WZTo2L2Q__part32.root',
                          'latino_WZTo2L2Q__part33.root',
                          'latino_WZTo2L2Q__part34.root',
                          'latino_WZTo2L2Q__part35.root',
                          'latino_WZTo2L2Q__part36.root',
                          'latino_WZTo2L2Q__part37.root',
                          'latino_WZTo2L2Q__part38.root',
                          'latino_WZTo2L2Q__part39.root',
                          'latino_WZTo2L2Q__part4.root',
                          'latino_WZTo2L2Q__part40.root',
                          'latino_WZTo2L2Q__part41.root',
                          'latino_WZTo2L2Q__part42.root',
                          'latino_WZTo2L2Q__part5.root',
                          'latino_WZTo2L2Q__part6.root',
                          'latino_WZTo2L2Q__part7.root',
                          'latino_WZTo2L2Q__part8.root',
                          'latino_WZTo2L2Q__part9.root',                          
                          #
                          'latino_ZZTo2L2Q__part0.root',
                          'latino_ZZTo2L2Q__part1.root',
                          'latino_ZZTo2L2Q__part2.root',
                          'latino_ZZTo2L2Q__part3.root',
                          #
                          #'latino_ZZTo4L.root'
                         ], 
                      'weight' : 'puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      'weights': [
                          '0.002214825',
                          #
                          '6.28902765388e-05',
                          #
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',                          
                          #
                          '0.000329080664109',
                          '0.000329080664109',
                          '0.000329080664109',
                          '0.000329080664109',
                          #
                        '',
                        ] ,           
                      #'isData': ['0'],                            
                  }



samples['VVV'] = {    'name': [
                          'latino_WZZ.root',
                          'latino_ZZZ.root',
                          'latino_WWW.root',
                          'latino_WWZ.root',
                          ],
                      'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',
                      #'isData': ['0'],                            
                  }


#samples['H_htt']  = {      'name': ['latino_GluGluHToTauTau_M125.root',
#                                    'latino_VBFHToTauTau_M125.root'
#                                    #'latino_HWminusJ_HToTauTau_M125.root',
#                                    #'latino_HWplusJ_HToTauTau_M125.root',
#                                    #'latino_HZJ_HToTauTau_M125.root'
#                                    ],      
#                           'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',         
#                           'weights': ['1', '1']
#                                       #, 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)' ]            
#                  }
#
#
#
## HWW 
#
#samples['ggH_hww']  = {    'name': [
#                               'latino_GluGluHToWWTo2L2NuPowheg_M125.root'
#                               ],      
#                           'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
#                  }
#
#samples['qqH_hww']  = {    'name': [
#                               #'latino_VBFHToWWTo2L2Nu_M125.root'
#                               'latino_VBFHToWWTo2L2Nu_alternative_M125.root'
#                               ],      
#                           'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
#                  }
#
#samples['ggZH_hww']  = {    'name': [
#                               'latino_ggZH_HToWW_M120.root',   # ---> FIXME: to be replaced with 125!
#                               ],      
#                           'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
#                  }
#
#
#samples['WH_hww']  = {    'name': [
#                             'latino_HWminusJ_HToWW_M125.root',
#                             'latino_HWplusJ_HToWW_M125.root'
#                             ],      
#                           'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
#                  }
#
#samples['ZH_hww']  = {    'name': ['latino_HZJ_HToWW_M125.root'],      
#                           'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
#                  }



###########################################
###########################################
###########################################


samples['DATA']  = {   'name': [
                                '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_MuonEG.root',
                                '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_SingleElectron.root',
                                '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_DoubleEG.root',
                                '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_DoubleMuon.root',
                                '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_SingleMuon.root',
                                #
                                '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_MuonEG.root',
                                '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_SingleElectron.root',
                                '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_DoubleEG.root',
                                '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_DoubleMuon.root',
                                '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_SingleMuon.root',
                                #
                                '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_MuonEG.root',
                                '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_SingleElectron.root',
                                '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_DoubleEG.root',
                                '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_DoubleMuon.root',
                                '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_SingleMuon.root',
                                #
                                '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016C_PromptReco_MuonEG.root',
                                '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016C_PromptReco_SingleElectron.root',
                                '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016C_PromptReco_DoubleEG.root',
                                '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016C_PromptReco_DoubleMuon.root',
                                '../../../../../../../../../../eos2/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016C_PromptReco_SingleMuon.root',

                                ] ,
                       'weight' : 'trigger',
                       #'weight' : '1',
                       #'weight' : 'std_vector_trigger[1]',
                       'isData': ['all'],
                  }




