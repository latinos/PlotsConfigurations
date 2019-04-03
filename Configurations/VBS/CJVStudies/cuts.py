#cuts
cuts = {}
supercut= 'abs(std_vector_jet_eta[1])<5 && abs(std_vector_jet_eta[0])<5 \
&& metPfType1 > 30 \
&& std_vector_jet_pt[0]>30 && std_vector_jet_pt[1]>30 \
&& (abs((std_vector_lepton_eta[0] - (std_vector_jet_eta[0]+std_vector_jet_eta[1])/2)/detajj) < 0.5) \
&& (abs((std_vector_lepton_eta[1] - (std_vector_jet_eta[0]+std_vector_jet_eta[1])/2)/detajj) < 0.5) \
&& (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0 \
&& veto_EMTFBug'

#sc1 = '(abs(std_vector_jet_eta[1])<5 && abs(std_vector_jet_eta[0])<5)'
#sc2 = '(metPfType1 > 30)'
#sc3 = '(std_vector_jet_pt[0]>30 && std_vector_jet_pt[1]>30)'
#sc4 = '((abs((std_vector_lepton_eta[0] - (std_vector_jet_eta[0]+std_vector_jet_eta[1])/2)/detajj) < 0.5)&& (abs((std_vector_lepton_eta[1] - (std_vector_jet_eta[0]+std_vector_jet_eta[1])/2)/detajj) < 0.5))'
#sc5 = '(veto_EMTFBug)'

#cuts['SPC_5_3_1']=sc5+'&&'+sc3+'&&'+sc1
#cuts['SPC_5_3_1_2']=sc5+'&&'+sc3+'&&'+sc1+'&&'+sc2
#cuts['SPC_5_3_1_2_4']=sc5+'&&'+sc3+'&&'+sc1+'&&'+sc2+'&&'+sc4

#cuts['VBS_13TeV_SS']='(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0'

cuts['VBS_13TeV_BaseCut']='1'

JetVeto = '(std_vector_jet_pt[2]<30)'

CentralJetVeto = '\
(std_vector_jet_pt[2]<=30 \
|| (std_vector_jet_pt[2]>30 \
&& std_vector_jet_eta[2] <  \
((std_vector_jet_eta[0]<std_vector_jet_eta[1])*std_vector_jet_eta[0]+(std_vector_jet_eta[0]>=std_vector_jet_eta[1])*std_vector_jet_eta[1]) \
&& std_vector_jet_eta[2] > \
((std_vector_jet_eta[0]<std_vector_jet_eta[1])*std_vector_jet_eta[1]+(std_vector_jet_eta[0]>=std_vector_jet_eta[1])*std_vector_jet_eta[0]) )) \
'

DynamicJetVeto35mjj = '(std_vector_jet_pt[2] < 0.035 * mjj)'


DynamicCentralJetVeto35mjj = '\
(std_vector_jet_pt[2]<=0.035 * mjj \
|| (std_vector_jet_pt[2]>0.035 * mjj \
&& std_vector_jet_eta[2] <  \
((std_vector_jet_eta[0]<std_vector_jet_eta[1])*std_vector_jet_eta[0]+(std_vector_jet_eta[0]>=std_vector_jet_eta[1])*std_vector_jet_eta[1]) \
&& std_vector_jet_eta[2] > \
((std_vector_jet_eta[0]<std_vector_jet_eta[1])*std_vector_jet_eta[1]+(std_vector_jet_eta[0]>=std_vector_jet_eta[1])*std_vector_jet_eta[0]) )) \
'

#cuts['JV'] = JetVeto
#cuts['CJV'] = CentralJetVeto
cuts['DJV_35mjj'] = DynamicJetVeto35mjj

# 11 = e
# 13 = mu
# 15 = tau


