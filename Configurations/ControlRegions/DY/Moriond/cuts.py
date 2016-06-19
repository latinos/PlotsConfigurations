# cuts

#cuts = {}
  
#supercut = 'abs(mll-91.1876)<15 \
supercut = ' mll>20 \
             && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10 \
             && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
             && std_vector_lepton_pt[2]<10 \
            '

cuts['DYee']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                 && mll>60 \
               '

cuts['DYmm']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                 && mll>60 \
               '

cuts['DYee2lepEB']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                 && mll>60 \
                 && abs(std_vector_lepton_eta[0])<1.46  \
                 && abs(std_vector_lepton_eta[1])<1.46  \
               '

cuts['DYee2lepEE']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                 && mll>60 \
                 && abs(std_vector_lepton_eta[0])<1.46  \
                 && abs(std_vector_lepton_eta[1])>1.46  \
               '



#cuts['DYee0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                 #&& mll>60 \
                 #&& njet==0 \
               #'

#cuts['DYmm0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                 #&& mll>60 \
                 #&& njet==0 \
               #'

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
