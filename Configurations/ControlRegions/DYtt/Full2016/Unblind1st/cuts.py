# cuts

#cuts = {}

supercut = 'mll>12  \
            && std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>10 \
            && std_vector_lepton_pt[2]<10 \
            && metPfType1 > 20 \
            && ptll > 30 \
            && mll > 40 \
            && mll < 80 \
            && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
            && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
            && ( mth<60) \
            && '+bVeto+' \
            '

cuts['hww2l2v_13TeV_dytt_of0j']  = 'njet == 0 \
                '

cuts['hww2l2v_13TeV_dytt_of1j']  = 'njet == 1 \
                '

cuts['hww2l2v_13TeV_dytt_of2j']  = 'njet >= 2 \
                '

cuts['hww2l2v_13TeV_dytt_of2j_ggh']  = 'njet >= 2 \
                                        && (njet>=2) \
                                        && (mjj<65 || (mjj > 105 && mjj<400)) \
                                       '

cuts['hww2l2v_13TeV_dytt_of2j_vbf']  = 'njet >= 2 \
                                        && (njet==2) \
                                        && (detajj>3.5 && mjj>400) \
                                       '

cuts['hww2l2v_13TeV_dytt_of2j_vh2j']  =  'njet >= 2 \
                                        && (njet>=2) \
                                        &&  (detajj<3.5 && mjj<105 && mjj>65) \
                                        && (abs(std_vector_jet_eta[0])<2.5) && (abs(std_vector_jet_eta[1])<2.5) \
                                       '


# cuts['hww2l2v_13TeV_dytt_of']  = '1 \
#                 '








#cuts['hww2l2v_13TeV_dytt_of0j_noSF']  = 'njet == 0 \
                #'

#cuts['hww2l2v_13TeV_dytt_of1j_noSF']  = 'njet == 1 \
                #'

#cuts['hww2l2v_13TeV_dytt_of2j_noSF']  = 'njet >= 2 \
                #'
  
  
#supercut = 'abs(mll-91.1876)<15 \
# supercut = ' mll>20 \
#              && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10 \
#              && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
#              && std_vector_lepton_pt[2]<10 \
#             '

# cuts['DYee']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
#                  && mll>60 \
#                '

# cuts['DYmm']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
#                  && mll>60 \
#                '

# cuts['DYee0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
#                  && mll>60 \
#                  && njet==0 \
#                '

# cuts['DYmm0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
#                  && mll>60 \
#                  && njet==0 \
#                '

#cuts['DYeept150']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                 #&& mll>60 \
                 #&& std_vector_lepton_pt[0]>50 && abs(std_vector_lepton_eta[0])<1.46  \
               #'

#cuts['DYeept1502lepEB']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                 #&& mll>60 \
                 #&& std_vector_lepton_pt[0]>50 && abs(std_vector_lepton_eta[0])<1.46  \
                 #&& abs(std_vector_lepton_eta[1])<1.46  \
               #'

#cuts['DYeept1502lepEE']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                 #&& mll>60 \
                 #&& std_vector_lepton_pt[0]>50 && abs(std_vector_lepton_eta[0])<1.46  \
                 #&& abs(std_vector_lepton_eta[1])>1.46  \
               #'



#cuts['DYeeFix']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)  \
                    #* ( (dataset == 0) + (dataset != 0)  \
                    #* ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0]))  \
                    #* ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1]))  \
                    #)'

#cuts['DYmmFix']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                    #* ( (dataset == 0) + (dataset != 0)  \
                    #* ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0]))  \
                    #* ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1]))  \
               #'



#cuts['DYem0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)   \
                  #&& njet==0 \
                  #'

#cuts['DYem1j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)   \
                  #&& njet==1 \
                  #'

#cuts['DYee1j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                  #&& njet == 1 \
                #'

#cuts['DYmm1j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                  #&& njet == 1 \
                #'

# emu not here

#cuts['DYem']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)   \
                #'

#cuts['DYem0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)   \
                  #&& njet == 0 \
                #'

#cuts['DYem1j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)   \
                  #&& njet == 1 \
                #'
