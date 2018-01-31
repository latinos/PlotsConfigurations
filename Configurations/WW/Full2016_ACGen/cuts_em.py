# cuts

#cuts = {}


supercut = '1.'
cuts['all'] = '1.'

#supercut = 'std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>25 \
#            && std_vector_lepton_pt[2]<10 \
#            && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*11) \
#            && mll > 20 \
#            && metPfType1 > 20 \
#            && mpmet > 20 \
#            && ptll > 30 \
#'
#
#cuts['ww_0jet_em'] = 'std_vector_jet_pt[0] < 30 \
#            && ( std_vector_jet_pt[0] < 15 || std_vector_jet_csvv2ivf[0] < 0.5426 ) \
#            && ( std_vector_jet_pt[1] < 15 || std_vector_jet_csvv2ivf[1] < 0.5426 ) \
#            && ( std_vector_jet_pt[2] < 15 || std_vector_jet_csvv2ivf[2] < 0.5426 ) \
#            && ( std_vector_jet_pt[3] < 15 || std_vector_jet_csvv2ivf[3] < 0.5426 ) \
#            && ( std_vector_jet_pt[4] < 15 || std_vector_jet_csvv2ivf[4] < 0.5426 ) \
#            && ( std_vector_jet_pt[5] < 15 || std_vector_jet_csvv2ivf[5] < 0.5426 ) \
#            && ( std_vector_jet_pt[6] < 15 || std_vector_jet_csvv2ivf[6] < 0.5426 ) \
#            && ( std_vector_jet_pt[7] < 15 || std_vector_jet_csvv2ivf[7] < 0.5426 ) \
#            && ( std_vector_jet_pt[8] < 15 || std_vector_jet_csvv2ivf[8] < 0.5426 ) \
#            && ( std_vector_jet_pt[9] < 15 || std_vector_jet_csvv2ivf[9] < 0.5426 ) \
#'
#
#cuts['ww_1jet_em'] = 'std_vector_jet_pt[1] < 30 \
#            && ( std_vector_jet_pt[0] < 15 || std_vector_jet_csvv2ivf[0] < 0.5426 ) \
#            && ( std_vector_jet_pt[1] < 15 || std_vector_jet_csvv2ivf[1] < 0.5426 ) \
#            && ( std_vector_jet_pt[2] < 15 || std_vector_jet_csvv2ivf[2] < 0.5426 ) \
#            && ( std_vector_jet_pt[3] < 15 || std_vector_jet_csvv2ivf[3] < 0.5426 ) \
#            && ( std_vector_jet_pt[4] < 15 || std_vector_jet_csvv2ivf[4] < 0.5426 ) \
#            && ( std_vector_jet_pt[5] < 15 || std_vector_jet_csvv2ivf[5] < 0.5426 ) \
#            && ( std_vector_jet_pt[6] < 15 || std_vector_jet_csvv2ivf[6] < 0.5426 ) \
#            && ( std_vector_jet_pt[7] < 15 || std_vector_jet_csvv2ivf[7] < 0.5426 ) \
#            && ( std_vector_jet_pt[8] < 15 || std_vector_jet_csvv2ivf[8] < 0.5426 ) \
#            && ( std_vector_jet_pt[9] < 15 || std_vector_jet_csvv2ivf[9] < 0.5426 ) \
#'
#
#cuts['ww_2jet_em'] = 'std_vector_jet_pt[1] >= 30 \
#            && ( std_vector_jet_pt[0] < 15 || std_vector_jet_csvv2ivf[0] < 0.5426 ) \
#            && ( std_vector_jet_pt[1] < 15 || std_vector_jet_csvv2ivf[1] < 0.5426 ) \
#            && ( std_vector_jet_pt[2] < 15 || std_vector_jet_csvv2ivf[2] < 0.5426 ) \
#            && ( std_vector_jet_pt[3] < 15 || std_vector_jet_csvv2ivf[3] < 0.5426 ) \
#            && ( std_vector_jet_pt[4] < 15 || std_vector_jet_csvv2ivf[4] < 0.5426 ) \
#            && ( std_vector_jet_pt[5] < 15 || std_vector_jet_csvv2ivf[5] < 0.5426 ) \
#            && ( std_vector_jet_pt[6] < 15 || std_vector_jet_csvv2ivf[6] < 0.5426 ) \
#            && ( std_vector_jet_pt[7] < 15 || std_vector_jet_csvv2ivf[7] < 0.5426 ) \
#            && ( std_vector_jet_pt[8] < 15 || std_vector_jet_csvv2ivf[8] < 0.5426 ) \
#            && ( std_vector_jet_pt[9] < 15 || std_vector_jet_csvv2ivf[9] < 0.5426 ) \
#'
#
#cuts['ww_Incl_em'] = 'std_vector_jet_pt[0] >= 0 \
#            && ( std_vector_jet_pt[0] < 15 || std_vector_jet_csvv2ivf[0] < 0.5426 ) \
#            && ( std_vector_jet_pt[1] < 15 || std_vector_jet_csvv2ivf[1] < 0.5426 ) \
#            && ( std_vector_jet_pt[2] < 15 || std_vector_jet_csvv2ivf[2] < 0.5426 ) \
#            && ( std_vector_jet_pt[3] < 15 || std_vector_jet_csvv2ivf[3] < 0.5426 ) \
#            && ( std_vector_jet_pt[4] < 15 || std_vector_jet_csvv2ivf[4] < 0.5426 ) \
#            && ( std_vector_jet_pt[5] < 15 || std_vector_jet_csvv2ivf[5] < 0.5426 ) \
#            && ( std_vector_jet_pt[6] < 15 || std_vector_jet_csvv2ivf[6] < 0.5426 ) \
#            && ( std_vector_jet_pt[7] < 15 || std_vector_jet_csvv2ivf[7] < 0.5426 ) \
#            && ( std_vector_jet_pt[8] < 15 || std_vector_jet_csvv2ivf[8] < 0.5426 ) \
#            && ( std_vector_jet_pt[9] < 15 || std_vector_jet_csvv2ivf[9] < 0.5426 ) \
#'
