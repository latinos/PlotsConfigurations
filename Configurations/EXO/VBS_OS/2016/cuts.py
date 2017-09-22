# cuts

#cuts = {}

widths = ['0.5','1','1.5','2']

ptcuts = ['5','10','15','20','25']

detajjcuts = ['2','2.5','3','3.5','4','4.5']




supercut = 'mll>50  \
            && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>20 \
            && std_vector_lepton_pt[2]<10 \
            && metPfType1 > 20 \
            && std_vector_lepton_eta[0]<3 && std_vector_lepton_eta[1]<3 \
            && ptll > 30 \
            && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
            && ( mjj>500 ) && ( detajj>3.5  )'

# 11 = e
# 13 = mu
# 15 = tau


cuts['Signal_region']  = '( mth>=60) \
                && ( mjj>500 ) \
                && ( detajj>3.5  ) \
                && ( std_vector_jet_pt[0] >= 30 && std_vector_jet_cmvav2[0] < -0.715 ) \
                && ( std_vector_jet_pt[1] >= 30 && std_vector_jet_cmvav2[1] < -0.715 ) \
                && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
                && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
                && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
                && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
                && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
                && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
                && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
                && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
                && (( TMath::Min(abs( std_vector_jet_eta[2] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[2] - std_vector_jet_eta[1])) < 1 || std_vector_jet_pt[2] < 20) || (std_vector_jet_eta[2] < TMath::Min(std_vector_jet_eta[0],std_vector_jet_eta[1])) || (std_vector_jet_eta[2] > TMath::Max(std_vector_jet_eta[0],std_vector_jet_eta[1])) )\
                && (( TMath::Min(abs( std_vector_jet_eta[3] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[3] - std_vector_jet_eta[1])) < 1 || std_vector_jet_pt[3] < 20) || (std_vector_jet_eta[3] < TMath::Min(std_vector_jet_eta[0],std_vector_jet_eta[1])) || (std_vector_jet_eta[3] > TMath::Max(std_vector_jet_eta[0],std_vector_jet_eta[1])) )\
                && (( TMath::Min(abs( std_vector_jet_eta[4] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[4] - std_vector_jet_eta[1])) < 1 || std_vector_jet_pt[4] < 20) || (std_vector_jet_eta[4] < TMath::Min(std_vector_jet_eta[0],std_vector_jet_eta[1])) || (std_vector_jet_eta[4] > TMath::Max(std_vector_jet_eta[0],std_vector_jet_eta[1])) )\
                && (( TMath::Min(abs( std_vector_jet_eta[5] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[5] - std_vector_jet_eta[1])) < 1 || std_vector_jet_pt[5] < 20) || (std_vector_jet_eta[5] < TMath::Min(std_vector_jet_eta[0],std_vector_jet_eta[1])) || (std_vector_jet_eta[5] > TMath::Max(std_vector_jet_eta[0],std_vector_jet_eta[1])) )\
                && (( TMath::Min(abs( std_vector_jet_eta[6] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[6] - std_vector_jet_eta[1])) < 1 || std_vector_jet_pt[6] < 20) || (std_vector_jet_eta[6] < TMath::Min(std_vector_jet_eta[0],std_vector_jet_eta[1])) || (std_vector_jet_eta[6] > TMath::Max(std_vector_jet_eta[0],std_vector_jet_eta[1])) )\
                && (( TMath::Min(abs( std_vector_jet_eta[7] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[7] - std_vector_jet_eta[1])) < 1 || std_vector_jet_pt[7] < 20) || (std_vector_jet_eta[7] < TMath::Min(std_vector_jet_eta[0],std_vector_jet_eta[1])) || (std_vector_jet_eta[7] > TMath::Max(std_vector_jet_eta[0],std_vector_jet_eta[1])) )\
                && (( TMath::Min(abs( std_vector_jet_eta[8] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[8] - std_vector_jet_eta[1])) < 1 || std_vector_jet_pt[8] < 20) || (std_vector_jet_eta[8] < TMath::Min(std_vector_jet_eta[0],std_vector_jet_eta[1])) || (std_vector_jet_eta[8] > TMath::Max(std_vector_jet_eta[0],std_vector_jet_eta[1])) )\
                && (( TMath::Min(abs( std_vector_jet_eta[9] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[9] - std_vector_jet_eta[1])) < 1 || std_vector_jet_pt[9] < 20) || (std_vector_jet_eta[9] < TMath::Min(std_vector_jet_eta[0],std_vector_jet_eta[1])) || (std_vector_jet_eta[9] > TMath::Max(std_vector_jet_eta[0],std_vector_jet_eta[1])) )\
                '
       
cuts['Signal_region_lowZepp']  = '( mth>=60) \
                && ( mjj>500 ) \
                && ( detajj>3.5  ) \
                && ( std_vector_jet_pt[0] >= 30 && std_vector_jet_cmvav2[0] < -0.715 ) \
                && ( std_vector_jet_pt[1] >= 30 && std_vector_jet_cmvav2[1] < -0.715 ) \
                && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
                && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
                && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
                && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
                && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
                && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
                && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
                && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
                && (( TMath::Min(abs( std_vector_jet_eta[2] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[2] - std_vector_jet_eta[1])) < 1 || std_vector_jet_pt[2] < 20) || (std_vector_jet_eta[2] < TMath::Min(std_vector_jet_eta[0],std_vector_jet_eta[1])) || (std_vector_jet_eta[2] > TMath::Max(std_vector_jet_eta[0],std_vector_jet_eta[1])) )\
                && (( TMath::Min(abs( std_vector_jet_eta[3] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[3] - std_vector_jet_eta[1])) < 1 || std_vector_jet_pt[3] < 20) || (std_vector_jet_eta[3] < TMath::Min(std_vector_jet_eta[0],std_vector_jet_eta[1])) || (std_vector_jet_eta[3] > TMath::Max(std_vector_jet_eta[0],std_vector_jet_eta[1])) )\
                && (( TMath::Min(abs( std_vector_jet_eta[4] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[4] - std_vector_jet_eta[1])) < 1 || std_vector_jet_pt[4] < 20) || (std_vector_jet_eta[4] < TMath::Min(std_vector_jet_eta[0],std_vector_jet_eta[1])) || (std_vector_jet_eta[4] > TMath::Max(std_vector_jet_eta[0],std_vector_jet_eta[1])) )\
                && (( TMath::Min(abs( std_vector_jet_eta[5] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[5] - std_vector_jet_eta[1])) < 1 || std_vector_jet_pt[5] < 20) || (std_vector_jet_eta[5] < TMath::Min(std_vector_jet_eta[0],std_vector_jet_eta[1])) || (std_vector_jet_eta[5] > TMath::Max(std_vector_jet_eta[0],std_vector_jet_eta[1])) )\
                && (( TMath::Min(abs( std_vector_jet_eta[6] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[6] - std_vector_jet_eta[1])) < 1 || std_vector_jet_pt[6] < 20) || (std_vector_jet_eta[6] < TMath::Min(std_vector_jet_eta[0],std_vector_jet_eta[1])) || (std_vector_jet_eta[6] > TMath::Max(std_vector_jet_eta[0],std_vector_jet_eta[1])) )\
                && (( TMath::Min(abs( std_vector_jet_eta[7] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[7] - std_vector_jet_eta[1])) < 1 || std_vector_jet_pt[7] < 20) || (std_vector_jet_eta[7] < TMath::Min(std_vector_jet_eta[0],std_vector_jet_eta[1])) || (std_vector_jet_eta[7] > TMath::Max(std_vector_jet_eta[0],std_vector_jet_eta[1])) )\
                && (( TMath::Min(abs( std_vector_jet_eta[8] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[8] - std_vector_jet_eta[1])) < 1 || std_vector_jet_pt[8] < 20) || (std_vector_jet_eta[8] < TMath::Min(std_vector_jet_eta[0],std_vector_jet_eta[1])) || (std_vector_jet_eta[8] > TMath::Max(std_vector_jet_eta[0],std_vector_jet_eta[1])) )\
                && (( TMath::Min(abs( std_vector_jet_eta[9] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[9] - std_vector_jet_eta[1])) < 1 || std_vector_jet_pt[9] < 20) || (std_vector_jet_eta[9] < TMath::Min(std_vector_jet_eta[0],std_vector_jet_eta[1])) || (std_vector_jet_eta[9] > TMath::Max(std_vector_jet_eta[0],std_vector_jet_eta[1])) )\
                && ( 0.5*abs((std_vector_lepton_eta[0]+std_vector_lepton_eta[1])-(std_vector_jet_eta[0]+std_vector_jet_eta[1])) <= 1)\
                '

       
cuts['Signal_region_highZepp']  = '( mth>=60) \
                && ( mjj>500 ) \
                && ( detajj>3.5  ) \
                && ( std_vector_jet_pt[0] >= 30 && std_vector_jet_cmvav2[0] < -0.715 ) \
                && ( std_vector_jet_pt[1] >= 30 && std_vector_jet_cmvav2[1] < -0.715 ) \
                && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
                && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
                && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
                && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
                && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
                && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
                && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
                && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
                && (( TMath::Min(abs( std_vector_jet_eta[2] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[2] - std_vector_jet_eta[1])) < 1 || std_vector_jet_pt[2] < 20) || (std_vector_jet_eta[2] < TMath::Min(std_vector_jet_eta[0],std_vector_jet_eta[1])) || (std_vector_jet_eta[2] > TMath::Max(std_vector_jet_eta[0],std_vector_jet_eta[1])) )\
                && (( TMath::Min(abs( std_vector_jet_eta[3] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[3] - std_vector_jet_eta[1])) < 1 || std_vector_jet_pt[3] < 20) || (std_vector_jet_eta[3] < TMath::Min(std_vector_jet_eta[0],std_vector_jet_eta[1])) || (std_vector_jet_eta[3] > TMath::Max(std_vector_jet_eta[0],std_vector_jet_eta[1])) )\
                && (( TMath::Min(abs( std_vector_jet_eta[4] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[4] - std_vector_jet_eta[1])) < 1 || std_vector_jet_pt[4] < 20) || (std_vector_jet_eta[4] < TMath::Min(std_vector_jet_eta[0],std_vector_jet_eta[1])) || (std_vector_jet_eta[4] > TMath::Max(std_vector_jet_eta[0],std_vector_jet_eta[1])) )\
                && (( TMath::Min(abs( std_vector_jet_eta[5] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[5] - std_vector_jet_eta[1])) < 1 || std_vector_jet_pt[5] < 20) || (std_vector_jet_eta[5] < TMath::Min(std_vector_jet_eta[0],std_vector_jet_eta[1])) || (std_vector_jet_eta[5] > TMath::Max(std_vector_jet_eta[0],std_vector_jet_eta[1])) )\
                && (( TMath::Min(abs( std_vector_jet_eta[6] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[6] - std_vector_jet_eta[1])) < 1 || std_vector_jet_pt[6] < 20) || (std_vector_jet_eta[6] < TMath::Min(std_vector_jet_eta[0],std_vector_jet_eta[1])) || (std_vector_jet_eta[6] > TMath::Max(std_vector_jet_eta[0],std_vector_jet_eta[1])) )\
                && (( TMath::Min(abs( std_vector_jet_eta[7] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[7] - std_vector_jet_eta[1])) < 1 || std_vector_jet_pt[7] < 20) || (std_vector_jet_eta[7] < TMath::Min(std_vector_jet_eta[0],std_vector_jet_eta[1])) || (std_vector_jet_eta[7] > TMath::Max(std_vector_jet_eta[0],std_vector_jet_eta[1])) )\
                && (( TMath::Min(abs( std_vector_jet_eta[8] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[8] - std_vector_jet_eta[1])) < 1 || std_vector_jet_pt[8] < 20) || (std_vector_jet_eta[8] < TMath::Min(std_vector_jet_eta[0],std_vector_jet_eta[1])) || (std_vector_jet_eta[8] > TMath::Max(std_vector_jet_eta[0],std_vector_jet_eta[1])) )\
                && (( TMath::Min(abs( std_vector_jet_eta[9] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[9] - std_vector_jet_eta[1])) < 1 || std_vector_jet_pt[9] < 20) || (std_vector_jet_eta[9] < TMath::Min(std_vector_jet_eta[0],std_vector_jet_eta[1])) || (std_vector_jet_eta[9] > TMath::Max(std_vector_jet_eta[0],std_vector_jet_eta[1])) )\
                && ( 0.5*abs((std_vector_lepton_eta[0]+std_vector_lepton_eta[1])-(std_vector_jet_eta[0]+std_vector_jet_eta[1])) > 1)\
                '

                

cuts['controlregion'] = '( mth>=60) \
                && ( mjj>500 ) \
                && ( detajj>3.5  ) \
                && ( std_vector_jet_pt[0] >= 30  ) \
                && ( std_vector_jet_pt[1] >= 30  ) \
                && ( std_vector_jet_cmvav2[0] > -0.715 || std_vector_jet_cmvav2[1] > -0.715 ) \
                && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
                && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
                && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
                && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
                && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
                && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
                && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
                && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
                '
