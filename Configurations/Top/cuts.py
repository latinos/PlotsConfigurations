# cuts

#cuts = {}
    

#cuts['TopCtrl0jets'] = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) &&  std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>15 && std_vector_lepton_pt[2]<10 && mll>50 && (std_vector_jet_csvv2ivf[0]>0.605 || std_vector_jet_csvv2ivf[1]>0.605 || std_vector_jet_csvv2ivf[2]>0.605 || std_vector_jet_csvv2ivf[3]>0.605 || std_vector_jet_csvv2ivf[4]>0.605 || std_vector_jet_csvv2ivf[5]>0.605 || std_vector_jet_csvv2ivf[6]>0.605 || std_vector_jet_csvv2ivf[7]>0.605 || std_vector_jet_csvv2ivf[8]>0.605 || std_vector_jet_csvv2ivf[9]>0.605 ) && njet==0 && ptll>45 && ppfMet>20'


cuts['TopCtrlge2jets'] = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) &&  std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>15 && std_vector_lepton_pt[2]<10 && mll>50 && (std_vector_jet_csvv2ivf[0]>0.605 || std_vector_jet_csvv2ivf[1]>0.605) && ptll>45 && ppfMet>20 && njet>1'

#cuts['TopCtrlge2jet'] = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) &&  std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>15 && std_vector_lepton_pt[2]<10 && mll>12 && (std_vector_jet_csvv2ivf[0]>0.89 && std_vector_jet_csvv2ivf[1]>0.89) && ptll>45 && ppfMet>20 && njet>1'
