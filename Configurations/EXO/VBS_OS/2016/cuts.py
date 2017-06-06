# cuts

#cuts = {}

widths = ['0.5','1','1.5','2']

ptcuts = ['5','10','15','20','25']




supercut = 'mll>50  \
            && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>20 \
            && std_vector_lepton_pt[2]<10 \
            && metPfType1 > 20 \
            && std_vector_lepton_eta[0]<3 && std_vector_lepton_eta[1]<3 \
            && ptll > 30 \
            && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
           '

# 11 = e
# 13 = mu
# 15 = tau
'''
cuts['hwwhm_13TeV_of_0j'] = '( mth>=60) \
                && ( mTi > 100 ) \
                && ( std_vector_jet_pt[0] < 30 ) \
                && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
                && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
                && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
                && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
                && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
                && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
                && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
                && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
                && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
                && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
                '

cuts['hwwhm_13TeV_of_1j']  = '( mth>=60) \
                && ( mTi > 100 ) \
                && ( std_vector_jet_pt[0] >= 30 ) \
                && ( std_vector_jet_pt[1] < 30 ) \
                && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
                && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
                && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
                && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
                && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
                && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
                && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
                && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
                && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
                && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \

std_vector_LHElepton_pt[0] _eta_phi_id
std_vector_LHEneutrino_pt[0] _eta_phi_id
                '
'''
'''
cuts['myVBF']  = '( mth>=60) \
                && ( mjj>500 ) \
                && ( detajj>2.5  ) \
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
                '
'''
cuts['myVBF']  = '( mth>=60) \
                && ( mjj>500 ) \
                && ( detajj>3.5  ) \
                && ( std_vector_jet_pt[0] >= 30 && std_vector_jet_cmvav2[0] < -0.715 ) \
                && ( std_vector_jet_pt[1] >= 30 && std_vector_jet_cmvav2[1] < -0.715 ) \
                && ( std_vector_jet_pt[2] < 30 && std_vector_jet_cmvav2[1] < -0.715 ) \
                && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
                && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
                && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
                && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
                && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
                && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
                && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
                '
'''
cuts['myVBF_Centralveto']  = '( mth>=60) \
                && ( mjj>500 ) \
                && ( detajj>3.5  ) \
                && ( std_vector_jet_pt[0] >= 30 && std_vector_jet_cmvav2[0] < -0.715 ) \
                && ( std_vector_jet_pt[1] >= 30 && std_vector_jet_cmvav2[1] < -0.715 ) \
                && ( std_vector_jet_pt[2] < 30 && std_vector_jet_cmvav2[1] < -0.715 ) \
                && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
                && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
                && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
                && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
                && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
                && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
                && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
                && ( abs( std_vector_jet_eta[2] - ( (std_vector_jet_eta[0]+std_vector_jet_eta[1])*0.5 ) ) > 1.5 || std_vector_jet_pt[2] < 20) \
                && ( abs( std_vector_jet_eta[3] - ( (std_vector_jet_eta[0]+std_vector_jet_eta[1])*0.5 ) ) > 1.5 || std_vector_jet_pt[3] < 20) \
                && ( abs( std_vector_jet_eta[4] - ( (std_vector_jet_eta[0]+std_vector_jet_eta[1])*0.5 ) ) > 1.5 || std_vector_jet_pt[4] < 20) \
                && ( abs( std_vector_jet_eta[5] - ( (std_vector_jet_eta[0]+std_vector_jet_eta[1])*0.5 ) ) > 1.5 || std_vector_jet_pt[5] < 20) \
                && ( abs( std_vector_jet_eta[6] - ( (std_vector_jet_eta[0]+std_vector_jet_eta[1])*0.5 ) ) > 1.5 || std_vector_jet_pt[6] < 20) \
                && ( abs( std_vector_jet_eta[7] - ( (std_vector_jet_eta[0]+std_vector_jet_eta[1])*0.5 ) ) > 1.5 || std_vector_jet_pt[7] < 20) \
                && ( abs( std_vector_jet_eta[8] - ( (std_vector_jet_eta[0]+std_vector_jet_eta[1])*0.5 ) ) > 1.5 || std_vector_jet_pt[8] < 20) \
                && ( abs( std_vector_jet_eta[9] - ( (std_vector_jet_eta[0]+std_vector_jet_eta[1])*0.5 ) ) > 1.5 || std_vector_jet_pt[9] < 20) \
\             '
'''
'''
for width in widths:
    widthname=width.replace(".","_")
    for ptcut in ptcuts:
        cuts['myVBF_localveto_deta'+widthname+'_pt'+ptcut]  = '( mth>=60) \
                && ( mjj>500 ) \
                && ( detajj>3.5  ) \
                && ( std_vector_jet_pt[0] >= 30 && std_vector_jet_cmvav2[0] < -0.715 ) \
                && ( std_vector_jet_pt[1] >= 30 && std_vector_jet_cmvav2[1] < -0.715 ) \
                && ( std_vector_jet_pt[2] < 30 && std_vector_jet_cmvav2[1] < -0.715 ) \
                && ( std_vector_jet_pt[3] < 10 || std_vector_jet_cmvav2[3] < -0.715 ) \
                && ( std_vector_jet_pt[4] < 10 || std_vector_jet_cmvav2[4] < -0.715 ) \
                && ( std_vector_jet_pt[5] < 10 || std_vector_jet_cmvav2[5] < -0.715 ) \
                && ( std_vector_jet_pt[6] < 10 || std_vector_jet_cmvav2[6] < -0.715 ) \
                && ( std_vector_jet_pt[7] < 10 || std_vector_jet_cmvav2[7] < -0.715 ) \
                && ( std_vector_jet_pt[8] < 10 || std_vector_jet_cmvav2[8] < -0.715 ) \
                && ( std_vector_jet_pt[9] < 10 || std_vector_jet_cmvav2[9] < -0.715 ) \
                && ( TMath::Min(abs( std_vector_jet_eta[2] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[2] - std_vector_jet_eta[1])) < '+width+' || std_vector_jet_pt[2] < '+ptcut+') \
                && ( TMath::Min(abs( std_vector_jet_eta[3] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[3] - std_vector_jet_eta[1])) < '+width+' || std_vector_jet_pt[3] < '+ptcut+') \
                && ( TMath::Min(abs( std_vector_jet_eta[4] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[4] - std_vector_jet_eta[1])) < '+width+' || std_vector_jet_pt[4] < '+ptcut+') \
                && ( TMath::Min(abs( std_vector_jet_eta[5] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[5] - std_vector_jet_eta[1])) < '+width+' || std_vector_jet_pt[5] < '+ptcut+') \
                && ( TMath::Min(abs( std_vector_jet_eta[6] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[6] - std_vector_jet_eta[1])) < '+width+' || std_vector_jet_pt[6] < '+ptcut+') \
                && ( TMath::Min(abs( std_vector_jet_eta[7] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[7] - std_vector_jet_eta[1])) < '+width+' || std_vector_jet_pt[7] < '+ptcut+') \
                && ( TMath::Min(abs( std_vector_jet_eta[8] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[8] - std_vector_jet_eta[1])) < '+width+' || std_vector_jet_pt[8] < '+ptcut+') \
                && ( TMath::Min(abs( std_vector_jet_eta[9] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[9] - std_vector_jet_eta[1])) < '+width+' || std_vector_jet_pt[9] < '+ptcut+') \
                '
'''
                

cuts['myVBF_localveto']  = '( mth>=60) \
                && ( mjj>500 ) \
                && ( detajj>3.5  ) \
                && ( std_vector_jet_pt[0] >= 30 && std_vector_jet_cmvav2[0] < -0.715 ) \
                && ( std_vector_jet_pt[1] >= 30 && std_vector_jet_cmvav2[1] < -0.715 ) \
                && ( std_vector_jet_pt[2] < 30 && std_vector_jet_cmvav2[1] < -0.715 ) \
                && ( std_vector_jet_pt[3] < 10 || std_vector_jet_cmvav2[3] < -0.715 ) \
                && ( std_vector_jet_pt[4] < 10 || std_vector_jet_cmvav2[4] < -0.715 ) \
                && ( std_vector_jet_pt[5] < 10 || std_vector_jet_cmvav2[5] < -0.715 ) \
                && ( std_vector_jet_pt[6] < 10 || std_vector_jet_cmvav2[6] < -0.715 ) \
                && ( std_vector_jet_pt[7] < 10 || std_vector_jet_cmvav2[7] < -0.715 ) \
                && ( std_vector_jet_pt[8] < 10 || std_vector_jet_cmvav2[8] < -0.715 ) \
                && ( std_vector_jet_pt[9] < 10 || std_vector_jet_cmvav2[9] < -0.715 ) \
                && ( TMath::Min(abs( std_vector_jet_eta[2] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[2] - std_vector_jet_eta[1])) < 1.5 || std_vector_jet_pt[2] < 20) \
                && ( TMath::Min(abs( std_vector_jet_eta[3] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[3] - std_vector_jet_eta[1])) < 1.5 || std_vector_jet_pt[3] < 20) \
                && ( TMath::Min(abs( std_vector_jet_eta[4] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[4] - std_vector_jet_eta[1])) < 1.5 || std_vector_jet_pt[4] < 20) \
                && ( TMath::Min(abs( std_vector_jet_eta[5] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[5] - std_vector_jet_eta[1])) < 1.5 || std_vector_jet_pt[5] < 20) \
                && ( TMath::Min(abs( std_vector_jet_eta[6] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[6] - std_vector_jet_eta[1])) < 1.5 || std_vector_jet_pt[6] < 20) \
                && ( TMath::Min(abs( std_vector_jet_eta[7] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[7] - std_vector_jet_eta[1])) < 1.5 || std_vector_jet_pt[7] < 20) \
                && ( TMath::Min(abs( std_vector_jet_eta[8] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[8] - std_vector_jet_eta[1])) < 1.5 || std_vector_jet_pt[8] < 20) \
                && ( TMath::Min(abs( std_vector_jet_eta[9] - std_vector_jet_eta[0]),abs(std_vector_jet_eta[9] - std_vector_jet_eta[1])) < 1.5 || std_vector_jet_pt[9] < 20) \
                '




cuts['controlregion'] = '( mth>=60) \
                && ( mjj>500 ) \
                && ( detajj>2.5  ) \
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
             

