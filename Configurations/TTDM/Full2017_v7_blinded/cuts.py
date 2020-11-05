# cuts

#Different trainings to be considered in the cuts

trainings = [{"tag": "scalar_LO_Mchi_1_Mphi_100_firstv7_step0", "shortName": "scalar100_set0"},
             {"tag": "scalar_LO_Mchi_1_Mphi_100_firstv7_step8", "shortName": "scalar100_set8"}]

supercut = """Lepton_pt[0] > 25. && Lepton_pt[1] > 20. \
&& Lepton_pdgId[0]*Lepton_pdgId[1] < 0 \\
&& (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \\
&& abs(Lepton_eta[0])<2.4 && abs(Lepton_eta[1])<2.4 \
&& (mll > 20.) \
&& (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || (mll < 76 || mll > 106)) \
&& (Sum$(CleanJet_pt >= 30. && abs(CleanJet_eta) < 2.4) >= 1) \
&& mt2ll > 80."""
#&& dphillmet > 0.4 \
#&& nbJet > 0

cuts['topCR_ll']  = '1'
cuts['topCR_df']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)'

for training in trainings:

    #BDT signal regions
    cuts['topCR_ll_BDT_signal0_' + training['shortName']] = '(BDT_output_category_' + training['tag'] + ' == 0)' 
    cuts['topCR_ll_BDT_signal1_' + training['shortName']] = '(BDT_output_category_' + training['tag'] + ' == 1)' 
    cuts['topCR_ll_BDT_bkg_' + training['shortName']]     = '(BDT_output_category_' + training['tag'] + ' == 2)' 

    #DNN signal regions
    cuts['topCR_ll_DNN_signal0_' + training['shortName']] = '(DNN_output_category_' + training['tag'] + ' == 0)' 
    cuts['topCR_ll_DNN_signal1_' + training['shortName']] = '(DNN_output_category_' + training['tag'] + ' == 1)' 
    cuts['topCR_ll_DNN_bkg_' + training['shortName']]     = '(DNN_output_category_' + training['tag'] + ' == 2)' 

