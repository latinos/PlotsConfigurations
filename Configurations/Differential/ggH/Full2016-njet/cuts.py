# cuts

#cuts = {}
  
supercut = 'mll>12  \
            && std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>10 \
            && std_vector_lepton_pt[2]<10 \
            && metPfType1 > 20 \
            && ptll > 30 \
            && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
           '

## DY control regions
categorization = '0*(std_vector_jet_pt[0] < 30)+(std_vector_jet_pt[0] >= 30)*('
categorization += '1*(std_vector_jet_pt[1] < 30)+(std_vector_jet_pt[1] >= 30)*('
categorization += '2*(std_vector_jet_pt[2] < 30)+(std_vector_jet_pt[2] >= 30)*('
categorization += '3*(std_vector_jet_pt[3] < 30)+4*(std_vector_jet_pt[3] >= 30))))'

cuts['hww_CR_catDY'] = {
    'expr': '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && ( mth<60) \
                && mll>40 && mll<80 \
                && '+bVeto,
    'categories': ['0j_2016', '1j_2016', '2j_2016', '3j_2016', 'ge4j_2016'],
    'categorization': categorization
}

## Top control regions
categorization = '-1' # default
categorization += '+1*(Sum$(std_vector_jet_pt >= 30) == 0 && Sum$(std_vector_jet_pt > 20 && std_vector_jet_cmvav2 > -0.5884) != 0)' # 0jet
categorization += '+(Sum$(std_vector_jet_pt >= 30 && std_vector_jet_cmvav2>-0.5884) != 0 && std_vector_jet_pt[0] >= 30)*('
categorization += '2*(std_vector_jet_pt[1] < 30)+(std_vector_jet_pt[1] >= 30)*('
categorization += '3*(std_vector_jet_pt[2] < 30)+(std_vector_jet_pt[2] >= 30)*('
categorization += '4*(std_vector_jet_pt[3] < 30)+5*(std_vector_jet_pt[3] >= 30))))'

cuts['hww_CR_cattop'] = {
    'expr': '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && mll>50 \
                && ( mtw2>30)',
    'categories': ['0j_2016', '1j_2016', '2j_2016', '3j_2016', 'ge4j_2016'],
    'categorization': categorization
}

## Signal regions

categories = []
for njbin in ['0', '1', '2', '3', 'GE4']:
    for ptcat in ['pt2lt20', 'pt2ge20']:
        for flavcat in ['em', 'me']:
            for chargecat in ['pm', 'mp']:
                categories.append('NJ_%s_cat%s%s%s_2016' % (njbin, ptcat, flavcat, chargecat))

categorization = '0*(std_vector_jet_pt[0] < 30)+(std_vector_jet_pt[0] >= 30)*('
categorization += '8*(std_vector_jet_pt[1] < 30)+(std_vector_jet_pt[1] >= 30)*('
categorization += '16*(std_vector_jet_pt[2] < 30)+(std_vector_jet_pt[2] >= 30)*('
categorization += '24*(std_vector_jet_pt[3] < 30)+32*(std_vector_jet_pt[3] >= 30))))'
categorization += '+4*(std_vector_lepton_pt[1] >= 20)'
categorization += '+2*(abs(std_vector_lepton_flavour[0]) == 13)'
categorization += '+1*(std_vector_lepton_flavour[0]<0)'

cuts['hww'] = {
    'expr': '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && ( mth>=60) \
                && ( mtw2>30) \
                && '+bVeto,
    'categories': categories,
    'categorization': categorization
}

# 11 = e
# 13 = mu
# 15 = tau
