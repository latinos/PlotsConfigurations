# cuts
'''
supercut = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
&& std_vector_lepton_pt[0]>20 \
&& std_vector_lepton_pt[1]>13 \
&& std_vector_lepton_pt[2]<10 \
&& mll>50 \
&& ptll>30 \
&& pfType1Met > 20 \
'

cuts['TopCtrl1jet'] = '( std_vector_jet_csvv2ivf[0]>0.605 \
&& njet==1 ) \
'
'''
supercut = 'mll>12  \
            && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10 \
            && std_vector_lepton_pt[2]<10 \
            && pfType1Met > 20 \
            && ptll > 30 \
'

cuts['hww2l2v_13TeV_top_of1j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && mll>50 \
                && ( std_vector_jet_pt[0] >= 30 ) \
                && ( std_vector_jet_pt[1] < 30 ) \
                && std_vector_jet_csvv2ivf[0]>0.605 \
                '
