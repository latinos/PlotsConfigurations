# cuts

#cuts = {}

supercut = 'std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>20 \
            && std_vector_lepton_pt[2]<10 \
            && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*11) \
            && mll > 100 \
            && metPfType1 > 20 \
            && mpmet > 20 \
            && ptll > 30 \
'

bVeto_cut = '( std_vector_jet_pt[0] < 20 || std_vector_jet_csvv2ivf[0] < 0.5426 ) \
          && ( std_vector_jet_pt[1] < 20 || std_vector_jet_csvv2ivf[1] < 0.5426 ) \
          && ( std_vector_jet_pt[2] < 20 || std_vector_jet_csvv2ivf[2] < 0.5426 ) \
          && ( std_vector_jet_pt[3] < 20 || std_vector_jet_csvv2ivf[3] < 0.5426 ) \
          && ( std_vector_jet_pt[4] < 20 || std_vector_jet_csvv2ivf[4] < 0.5426 ) \
          && ( std_vector_jet_pt[5] < 20 || std_vector_jet_csvv2ivf[5] < 0.5426 ) \
          && ( std_vector_jet_pt[6] < 20 || std_vector_jet_csvv2ivf[6] < 0.5426 ) \
          && ( std_vector_jet_pt[7] < 20 || std_vector_jet_csvv2ivf[7] < 0.5426 ) \
          && ( std_vector_jet_pt[8] < 20 || std_vector_jet_csvv2ivf[8] < 0.5426 ) \
          && ( std_vector_jet_pt[9] < 20 || std_vector_jet_csvv2ivf[9] < 0.5426 ) \
'


# bVeto cut: defined in samples.py

cuts['ww_0jet_em'] = 'njet==0 \
             && '+bVeto_cut+' \
'

cuts['ww_1jet_em'] = 'njet==1 \
             && '+bVeto_cut+' \
'


# Top Control Region

cuts['ww_top0jet_em'] = 'njet==0 \
             && !('+bVeto_cut+') \
'


cuts['ww_top1jet_em'] = 'njet==1 \
             && !('+bVeto_cut+') \
'
