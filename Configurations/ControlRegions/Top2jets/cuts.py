# cuts

#cuts = {}
  
#supercut = 'abs(mll-91.1876)<15 \
supercut = ' mll>20 \
             && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10 \
             && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
             && std_vector_lepton_pt[2]<10 \
             && metPfType1 > 20 && ptll > 30 \
            '
            
cuts['Topem2j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)   \
                 && mll>50 \
                 && njet>=2 \
               '

