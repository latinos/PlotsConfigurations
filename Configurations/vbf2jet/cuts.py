# cuts

#cuts = {}
  
supercut = 'mll>10  \
            && njet == 0 \
            && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>13 \
            && std_vector_lepton_pt[2]<10 \
            && pfType1Met > 20 \
            && ptll > 30 \
            && ( std_vector_jet_pt[0] < 15 || std_vector_jet_csvv2ivf[0] < 0.605 ) \
            && ( std_vector_jet_pt[1] < 15 || std_vector_jet_csvv2ivf[1] < 0.605 ) \
            && ( std_vector_jet_pt[2] < 15 || std_vector_jet_csvv2ivf[2] < 0.605 ) \
            && ( std_vector_jet_pt[3] < 15 || std_vector_jet_csvv2ivf[3] < 0.605 ) \
            && ( std_vector_jet_pt[4] < 15 || std_vector_jet_csvv2ivf[4] < 0.605 ) \
            && ( std_vector_jet_pt[5] < 15 || std_vector_jet_csvv2ivf[5] < 0.605 ) \
'

cuts['ee']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)    \
                  && abs(mll-91.1876)>15 \
                '

cuts['mm']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)    \
                  && abs(mll-91.1876)>15 \
                '

cuts['em']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
               && (   (abs(std_vector_lepton_flavour[0]) == 11) * (abs(std_vector_lepton_flavour[1]) == 13)    )    \
                '
                
cuts['me']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
               && (   (abs(std_vector_lepton_flavour[0]) == 13) * (abs(std_vector_lepton_flavour[1]) == 11)    )    \
                '

cuts['df']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                '

cuts['sf']  = '( (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) )    \
                  && abs(mll-91.1876)>15 \
                '

# 11 = e
# 13 = mu
# 15 = tau

