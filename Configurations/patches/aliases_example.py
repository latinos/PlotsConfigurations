configurations = '/path/to/PlotsConfigurations/Configurations'

#############################################
### Total SFs, i.e. ttHMVA+old lepton SFs ###
#############################################

aliases['ttHMVA_SF_2l'] = {'linesToAdd': ['.L %s/patches/compute_SF.C+' % configurations],
                           'class': 'compute_SF',
                           'args' : ('2017', 2, 'total_SF'),
                           'samples': mc
                          }

aliases['ttHMVA_SF_3l'] = {'linesToAdd': ['.L %s/patches/compute_SF.C+' % configurations],
                           'class': 'compute_SF',
                           'args' : ('2017', 3, 'total_SF'),
                           'samples': mc
                          }

aliases['ttHMVA_SF_4l'] = {'linesToAdd': ['.L %s/patches/compute_SF.C+' % configurations],
                           'class': 'compute_SF',
                           'args' : ('2017', 4, 'total_SF'),
                           'samples': mc
                          }

############################################################
### Up/Down variations for single leptons in order of Pt ###
############################################################

aliases['ttHMVA_SF_Up_0'] = {'linesToAdd': ['.L %s/patches/compute_SF.C+' % configurations],
                             'class': 'compute_SF',
                             'args' : ('2017', 4, 'single_SF_up', 0),
                             'samples': mc
                            }

aliases['ttHMVA_SF_Up_1'] = {'linesToAdd': ['.L %s/patches/compute_SF.C+' % configurations],
                             'class': 'compute_SF',
                             'args' : ('2017', 4, 'single_SF_up', 1),
                             'samples': mc
                            }

aliases['ttHMVA_SF_Up_2'] = {'linesToAdd': ['.L %s/patches/compute_SF.C+' % configurations],
                             'class': 'compute_SF',
                             'args' : ('2017', 4, 'single_SF_up', 2),
                             'samples': mc
                            }

aliases['ttHMVA_SF_Up_3'] = {'linesToAdd': ['.L %s/patches/compute_SF.C+' % configurations],
                             'class': 'compute_SF',
                             'args' : ('2017', 4, 'single_SF_up', 3),
                             'samples': mc
                            }

aliases['ttHMVA_SF_Down_0'] = {'linesToAdd': ['.L %s/patches/compute_SF.C+' % configurations],
                               'class': 'compute_SF',
                               'args' : ('2017', 4, 'single_SF_down', 0),
                               'samples': mc
                              }

aliases['ttHMVA_SF_Down_1'] = {'linesToAdd': ['.L %s/patches/compute_SF.C+' % configurations],
                               'class': 'compute_SF',
                               'args' : ('2017', 4, 'single_SF_down', 1),
                               'samples': mc
                              }

aliases['ttHMVA_SF_Down_2'] = {'linesToAdd': ['.L %s/patches/compute_SF.C+' % configurations],
                               'class': 'compute_SF',
                               'args' : ('2017', 4, 'single_SF_down', 2),
                               'samples': mc
                              }

aliases['ttHMVA_SF_Down_3'] = {'linesToAdd': ['.L %s/patches/compute_SF.C+' % configurations],
                               'class': 'compute_SF',
                               'args' : ('2017', 4, 'single_SF_down', 3),
                               'samples': mc
                              }

##############################################################################
### Up/Down variations for electrons, i.e. LepSF2l__ele_'+eleWP+'__Up/Down ###
##############################################################################

aliases['ttHMVA_2l_ele_SF_Up'] = {'expr' : '(ttHMVA_SF_Up_0*(TMath::Abs(Lepton_pdgId[0]) == 11) + (TMath::Abs(Lepton_pdgId[0]) == 13)) *\
                                            (ttHMVA_SF_Up_1*(TMath::Abs(Lepton_pdgId[1]) == 11) + (TMath::Abs(Lepton_pdgId[1]) == 13))'
                                 }

aliases['ttHMVA_3l_ele_SF_Up'] = {'expr' : '(ttHMVA_SF_Up_0*(TMath::Abs(Lepton_pdgId[0]) == 11) + (TMath::Abs(Lepton_pdgId[0]) == 13)) *\
                                            (ttHMVA_SF_Up_1*(TMath::Abs(Lepton_pdgId[1]) == 11) + (TMath::Abs(Lepton_pdgId[1]) == 13)) *\
                                            (ttHMVA_SF_Up_2*(TMath::Abs(Lepton_pdgId[2]) == 11) + (TMath::Abs(Lepton_pdgId[2]) == 13))'
                                 }

aliases['ttHMVA_4l_ele_SF_Up'] = {'expr' : '(ttHMVA_SF_Up_0*(TMath::Abs(Lepton_pdgId[0]) == 11) + (TMath::Abs(Lepton_pdgId[0]) == 13)) *\
                                            (ttHMVA_SF_Up_1*(TMath::Abs(Lepton_pdgId[1]) == 11) + (TMath::Abs(Lepton_pdgId[1]) == 13)) *\
                                            (ttHMVA_SF_Up_2*(TMath::Abs(Lepton_pdgId[2]) == 11) + (TMath::Abs(Lepton_pdgId[2]) == 13)) *\
                                            (ttHMVA_SF_Up_3*(TMath::Abs(Lepton_pdgId[3]) == 11) + (TMath::Abs(Lepton_pdgId[3]) == 13))'
                                 }

aliases['ttHMVA_2l_ele_SF_Down'] = {'expr' : '(ttHMVA_SF_Down_0*(TMath::Abs(Lepton_pdgId[0]) == 11) + (TMath::Abs(Lepton_pdgId[0]) == 13)) *\
                                              (ttHMVA_SF_Down_1*(TMath::Abs(Lepton_pdgId[1]) == 11) + (TMath::Abs(Lepton_pdgId[1]) == 13))'
                                   }

aliases['ttHMVA_3l_ele_SF_Down'] = {'expr' : '(ttHMVA_SF_Down_0*(TMath::Abs(Lepton_pdgId[0]) == 11) + (TMath::Abs(Lepton_pdgId[0]) == 13)) *\
                                              (ttHMVA_SF_Down_1*(TMath::Abs(Lepton_pdgId[1]) == 11) + (TMath::Abs(Lepton_pdgId[1]) == 13)) *\
                                              (ttHMVA_SF_Down_2*(TMath::Abs(Lepton_pdgId[2]) == 11) + (TMath::Abs(Lepton_pdgId[2]) == 13))'
                                   }

aliases['ttHMVA_4l_ele_SF_Down'] = {'expr' : '(ttHMVA_SF_Down_0*(TMath::Abs(Lepton_pdgId[0]) == 11) + (TMath::Abs(Lepton_pdgId[0]) == 13)) *\
                                              (ttHMVA_SF_Down_1*(TMath::Abs(Lepton_pdgId[1]) == 11) + (TMath::Abs(Lepton_pdgId[1]) == 13)) *\
                                              (ttHMVA_SF_Down_2*(TMath::Abs(Lepton_pdgId[2]) == 11) + (TMath::Abs(Lepton_pdgId[2]) == 13)) *\
                                              (ttHMVA_SF_Down_3*(TMath::Abs(Lepton_pdgId[3]) == 11) + (TMath::Abs(Lepton_pdgId[3]) == 13))'
                                   }

########################################################################
### Up/Down variations for muons, i.e. LepSF2l__mu_'+muWP+'__Up/Down ###
########################################################################

aliases['ttHMVA_2l_mu_SF_Up'] = {'expr' : '(ttHMVA_SF_Up_0*(TMath::Abs(Lepton_pdgId[0]) == 13) + (TMath::Abs(Lepton_pdgId[0]) == 11)) *\
                                           (ttHMVA_SF_Up_1*(TMath::Abs(Lepton_pdgId[1]) == 13) + (TMath::Abs(Lepton_pdgId[1]) == 11))'
                                }

aliases['ttHMVA_3l_mu_SF_Up'] = {'expr' : '(ttHMVA_SF_Up_0*(TMath::Abs(Lepton_pdgId[0]) == 13) + (TMath::Abs(Lepton_pdgId[0]) == 11)) *\
                                           (ttHMVA_SF_Up_1*(TMath::Abs(Lepton_pdgId[1]) == 13) + (TMath::Abs(Lepton_pdgId[1]) == 11)) *\
                                           (ttHMVA_SF_Up_2*(TMath::Abs(Lepton_pdgId[2]) == 13) + (TMath::Abs(Lepton_pdgId[2]) == 11))'
                                }

aliases['ttHMVA_4l_mu_SF_Up'] = {'expr' : '(ttHMVA_SF_Up_0*(TMath::Abs(Lepton_pdgId[0]) == 13) + (TMath::Abs(Lepton_pdgId[0]) == 11)) *\
                                           (ttHMVA_SF_Up_1*(TMath::Abs(Lepton_pdgId[1]) == 13) + (TMath::Abs(Lepton_pdgId[1]) == 11)) *\
                                           (ttHMVA_SF_Up_2*(TMath::Abs(Lepton_pdgId[2]) == 13) + (TMath::Abs(Lepton_pdgId[2]) == 11)) *\
                                           (ttHMVA_SF_Up_3*(TMath::Abs(Lepton_pdgId[3]) == 13) + (TMath::Abs(Lepton_pdgId[3]) == 11))'
                                }

aliases['ttHMVA_2l_mu_SF_Down'] = {'expr' : '(ttHMVA_SF_Down_0*(TMath::Abs(Lepton_pdgId[0]) == 13) + (TMath::Abs(Lepton_pdgId[0]) == 11)) *\
                                             (ttHMVA_SF_Down_1*(TMath::Abs(Lepton_pdgId[1]) == 13) + (TMath::Abs(Lepton_pdgId[1]) == 11))'
                                  }

aliases['ttHMVA_3l_mu_SF_Down'] = {'expr' : '(ttHMVA_SF_Down_0*(TMath::Abs(Lepton_pdgId[0]) == 13) + (TMath::Abs(Lepton_pdgId[0]) == 11)) *\
                                             (ttHMVA_SF_Down_1*(TMath::Abs(Lepton_pdgId[1]) == 13) + (TMath::Abs(Lepton_pdgId[1]) == 11)) *\
                                             (ttHMVA_SF_Down_2*(TMath::Abs(Lepton_pdgId[2]) == 13) + (TMath::Abs(Lepton_pdgId[2]) == 11))'
                                  }

aliases['ttHMVA_4l_mu_SF_Down'] = {'expr' : '(ttHMVA_SF_Down_0*(TMath::Abs(Lepton_pdgId[0]) == 13) + (TMath::Abs(Lepton_pdgId[0]) == 11)) *\
                                             (ttHMVA_SF_Down_1*(TMath::Abs(Lepton_pdgId[1]) == 13) + (TMath::Abs(Lepton_pdgId[1]) == 11)) *\
                                             (ttHMVA_SF_Down_2*(TMath::Abs(Lepton_pdgId[2]) == 13) + (TMath::Abs(Lepton_pdgId[2]) == 11)) *\
                                             (ttHMVA_SF_Down_3*(TMath::Abs(Lepton_pdgId[3]) == 13) + (TMath::Abs(Lepton_pdgId[3]) == 11))'
                                  }
