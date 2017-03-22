# cuts

#cuts = {}
  
#supercut = 'abs(mll-91.1876)<15 \
supercut = ' mll>60 \
             && std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>10 \
             && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
             && std_vector_lepton_pt[2]<10 \
             && iRunPeriod >= 5 \
            '

cuts['Zee']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                 && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>15 \
                 && mll>80 && mll<100 \
               '

cuts['Zmm']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                 && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>15 \
                 && mll>80 && mll<100 \
               '

#cuts['DYee']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                 #&& std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>20 \
                 #&& mll>60 \
               #'

#cuts['DYmm']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                 #&& mll>60 \
               #'

#cuts['DYeeLowVtx']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                 #&& std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>20 \
                 #&& mll>60 \
                 #&& nvtx<10  \
               #'


#cuts['DYeeHighVtx']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                 #&& std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>20 \
                 #&& mll>60 \
                 #&& nvtx>=10  \
              #'





#cuts['Zee2j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
#                 && std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>20 \
#                 && mll>80 && mll<100 \
#                 && njet >= 2 \
#               '

#cuts['Zmm2j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
#                 && mll>80 && mll<100 \
#                 && njet >= 2 \
#               '









#cuts['DYee2lepEB']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                 #&& mll>60 \
                 #&& std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>20 \
                 #&& abs(std_vector_lepton_eta[0])<1.46  \
                 #&& abs(std_vector_lepton_eta[1])<1.46  \
               #'

#cuts['DYee2lepEE']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                 #&& mll>60 \
                 #&& std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>20 \
                 #&& abs(std_vector_lepton_eta[0])>1.46  \
                 #&& abs(std_vector_lepton_eta[1])>1.46  \
               #'


#cuts['DYee2lepEBEE']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                 #&& mll>60 \
                 #&& std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>20 \
                 #&& abs(std_vector_lepton_eta[0])>1.46  \
                 #&& abs(std_vector_lepton_eta[1])<1.46  \
               #'


#cuts['DYee0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                 #&& std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>20 \
                 #&& mll>60 \
                 #&& njet == 0 \
               #'

#cuts['DYmm0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                 #&& mll>60 \
                 #&& njet == 0 \
               #'


#cuts['DYee1j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                 #&& std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>20 \
                 #&& mll>60 \
                 #&& njet == 1 \
               #'

#cuts['DYmm1j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                 #&& mll>60 \
                 #&& njet == 1 \
               #'


#cuts['DYee2j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                 #&& std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>20 \
                 #&& mll>60 \
                 #&& njet >= 2 \
               #'

#cuts['DYmm2j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                 #&& mll>60 \
                 #&& njet >= 2 \
               #'
