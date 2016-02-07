# cuts

#cuts = {}

  
supercut = 'mll>12 \
            && std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>20 \
            && std_vector_lepton_pt[2]<10 \
            && pfType1Met > 20 \
            && ptll > 30 \
            && ( std_vector_jet_pt[0] < 30 ) \
            && !( std_vector_jet_pt[0] > 10 &&  std_vector_jet_pt[0] < 30 && std_vector_jet_softMuPt[0] > 3) \
            && !( std_vector_jet_pt[1] > 10 &&  std_vector_jet_pt[1] < 30 && std_vector_jet_softMuPt[1] > 3) \
            && !( std_vector_jet_pt[2] > 10 &&  std_vector_jet_pt[2] < 30 && std_vector_jet_softMuPt[2] > 3) \
            && !( std_vector_jet_pt[3] > 10 &&  std_vector_jet_pt[3] < 30 && std_vector_jet_softMuPt[3] > 3) \
            && !( std_vector_jet_pt[4] > 10 &&  std_vector_jet_pt[4] < 30 && std_vector_jet_softMuPt[4] > 3) \
            && !( std_vector_jet_pt[5] > 10 &&  std_vector_jet_pt[5] < 30 && std_vector_jet_softMuPt[5] > 3) \
            && !( std_vector_jet_pt[6] > 10 &&  std_vector_jet_pt[6] < 30 && std_vector_jet_softMuPt[6] > 3) \
            && !( std_vector_jet_pt[7] > 10 &&  std_vector_jet_pt[7] < 30 && std_vector_jet_softMuPt[7] > 3) \
            && !( std_vector_jet_pt[8] > 10 &&  std_vector_jet_pt[8] < 30 && std_vector_jet_softMuPt[8] > 3) \
            && !( std_vector_jet_pt[9] > 10 &&  std_vector_jet_pt[9] < 30 && std_vector_jet_softMuPt[9] > 3) \
           '


cuts['WWee']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
               && ( std_vector_jet_pt[0] < 15 || std_vector_jet_csvv2ivf[0] < 0.605 ) \
               && ( std_vector_jet_pt[1] < 15 || std_vector_jet_csvv2ivf[1] < 0.605 ) \
               && ( std_vector_jet_pt[2] < 15 || std_vector_jet_csvv2ivf[2] < 0.605 ) \
               && ( std_vector_jet_pt[3] < 15 || std_vector_jet_csvv2ivf[3] < 0.605 ) \
               && ( std_vector_jet_pt[4] < 15 || std_vector_jet_csvv2ivf[4] < 0.605 ) \
               && ( std_vector_jet_pt[5] < 15 || std_vector_jet_csvv2ivf[5] < 0.605 ) \
               && ( std_vector_jet_pt[6] < 15 || std_vector_jet_csvv2ivf[6] < 0.605 ) \
               && ( std_vector_jet_pt[7] < 15 || std_vector_jet_csvv2ivf[7] < 0.605 ) \
               && ( std_vector_jet_pt[8] < 15 || std_vector_jet_csvv2ivf[8] < 0.605 ) \
               && ( std_vector_jet_pt[9] < 15 || std_vector_jet_csvv2ivf[9] < 0.605 ) \
                '

cuts['WWmm']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
               && ( std_vector_jet_pt[0] < 15 || std_vector_jet_csvv2ivf[0] < 0.605 ) \
               && ( std_vector_jet_pt[1] < 15 || std_vector_jet_csvv2ivf[1] < 0.605 ) \
               && ( std_vector_jet_pt[2] < 15 || std_vector_jet_csvv2ivf[2] < 0.605 ) \
               && ( std_vector_jet_pt[3] < 15 || std_vector_jet_csvv2ivf[3] < 0.605 ) \
               && ( std_vector_jet_pt[4] < 15 || std_vector_jet_csvv2ivf[4] < 0.605 ) \
               && ( std_vector_jet_pt[5] < 15 || std_vector_jet_csvv2ivf[5] < 0.605 ) \
               && ( std_vector_jet_pt[6] < 15 || std_vector_jet_csvv2ivf[6] < 0.605 ) \
               && ( std_vector_jet_pt[7] < 15 || std_vector_jet_csvv2ivf[7] < 0.605 ) \
               && ( std_vector_jet_pt[8] < 15 || std_vector_jet_csvv2ivf[8] < 0.605 ) \
               && ( std_vector_jet_pt[9] < 15 || std_vector_jet_csvv2ivf[9] < 0.605 ) \
                '

cuts['WWem']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)   \
               && ( std_vector_jet_pt[0] < 15 || std_vector_jet_csvv2ivf[0] < 0.605 ) \
               && ( std_vector_jet_pt[1] < 15 || std_vector_jet_csvv2ivf[1] < 0.605 ) \
               && ( std_vector_jet_pt[2] < 15 || std_vector_jet_csvv2ivf[2] < 0.605 ) \
               && ( std_vector_jet_pt[3] < 15 || std_vector_jet_csvv2ivf[3] < 0.605 ) \
               && ( std_vector_jet_pt[4] < 15 || std_vector_jet_csvv2ivf[4] < 0.605 ) \
               && ( std_vector_jet_pt[5] < 15 || std_vector_jet_csvv2ivf[5] < 0.605 ) \
               && ( std_vector_jet_pt[6] < 15 || std_vector_jet_csvv2ivf[6] < 0.605 ) \
               && ( std_vector_jet_pt[7] < 15 || std_vector_jet_csvv2ivf[7] < 0.605 ) \
               && ( std_vector_jet_pt[8] < 15 || std_vector_jet_csvv2ivf[8] < 0.605 ) \
               && ( std_vector_jet_pt[9] < 15 || std_vector_jet_csvv2ivf[9] < 0.605 ) \
                '
                

cuts['WWemTop']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)   \
                && !( ( std_vector_jet_pt[0] < 15 || std_vector_jet_csvv2ivf[0] < 0.605 ) \
                && ( std_vector_jet_pt[1] < 15 || std_vector_jet_csvv2ivf[1] < 0.605 ) \
                && ( std_vector_jet_pt[2] < 15 || std_vector_jet_csvv2ivf[2] < 0.605 ) \
                && ( std_vector_jet_pt[3] < 15 || std_vector_jet_csvv2ivf[3] < 0.605 ) \
                && ( std_vector_jet_pt[4] < 15 || std_vector_jet_csvv2ivf[4] < 0.605 ) \
                && ( std_vector_jet_pt[5] < 15 || std_vector_jet_csvv2ivf[5] < 0.605 ) \
                && ( std_vector_jet_pt[6] < 15 || std_vector_jet_csvv2ivf[6] < 0.605 ) \
                && ( std_vector_jet_pt[7] < 15 || std_vector_jet_csvv2ivf[7] < 0.605 ) \
                && ( std_vector_jet_pt[8] < 15 || std_vector_jet_csvv2ivf[8] < 0.605 ) \
                && ( std_vector_jet_pt[9] < 15 || std_vector_jet_csvv2ivf[9] < 0.605 ) \
               ) '
                



