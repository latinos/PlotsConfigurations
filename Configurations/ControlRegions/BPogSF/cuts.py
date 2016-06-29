# cuts

#cuts = {}

import os.path

binsFile = "bins.py"


if os.path.exists(binsFile) :
  handle = open(binsFile,'r')
  exec(handle)
  handle.close()
else:
  print "!!! ERROR file ", binsFile, " does not exist."

supercut = ' mll>20 \
             && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10 \
             && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
             && std_vector_lepton_pt[2]<10 \
            '
for ipt in range(len(ptranges)-1):
  for ieta in range(len(etaranges)-1):
    ptmin  = str(ptranges[ipt])
    ptmax  = str(ptranges[ipt+1])
    ptmaxName = ptmax if ptranges[ipt+1] != -1 else "inf"
    etamin = str(etaranges[ieta])
    etamax = str(etaranges[ieta+1])
    binSuffix = "_pt_"+ptmin+"_"+ptmaxName+"_eta_"+etamin+"_"+etamax 
    print binSuffix 


    jetcut =  ' std_vector_jet_pt[1] > '+ptmin+\
              ' && (std_vector_jet_pt[1] < '+ptmax+' || "'+ptmaxName+'"=="inf")\
                && abs(std_vector_jet_eta[1]) > '+etamin+ \
              ' && abs(std_vector_jet_eta[1]) < '+etamax
    
    cuts['Topem'+binSuffix] = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)   \
                              && mll>60 && std_vector_jet_cmvav2[0] > -0.715 \
                              && metPfType1 > 20 && ptll > 30 \
                              && std_vector_jet_pt[0] > 30 && '+jetcut
    
    cuts['Z'+binSuffix]     = 'abs(std_vector_lepton_flavour[0])== abs(std_vector_lepton_flavour[1]) &&\
                               mll > 80 && mll < 120 && \
                              '+jetcut.replace("[1]", "[0]")
    
    cuts['Topem'+binSuffix+"_Heavy"] = cuts['Topem'+binSuffix] + " && (std_vector_jet_HadronFlavour[1]==4 || std_vector_jet_HadronFlavour[1]==5)"
    cuts['Topem'+binSuffix+"_Light"] = cuts['Topem'+binSuffix] + " && (std_vector_jet_HadronFlavour[1]!=4 && std_vector_jet_HadronFlavour[1]!=5)"

    cuts['Z'+binSuffix+"_Heavy"] = cuts['Z'+binSuffix] + " && (std_vector_jet_HadronFlavour[1]==4 || std_vector_jet_HadronFlavour[1]==5)"
    cuts['Z'+binSuffix+"_Light"] = cuts['Z'+binSuffix] + " && (std_vector_jet_HadronFlavour[1]!=4 && std_vector_jet_HadronFlavour[1]!=5)"

