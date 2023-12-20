# cuts

# Two muons with pT > 53 GeV
supercut = 'Muon_tuneP_pT_0 > 53 \
         && Muon_tuneP_pT_1 > 53 \
         && (nMuon>=2 && Alt$(Muon_pt[2],0) < 10) \
         && (nElectron>=0 && Alt$(Electron_pt[0],0) < 10) \
         && abs(Muon_eta[0]) < 2.4 \
         && abs(Muon_eta[1]) < 2.4 \
         && pt_uncertainty_0 < 0.3 \
         && pt_uncertainty_1 < 0.3 \
         && Alt$(Muon_tkRelIso[0],100) < 0.05 \
         && Alt$(Muon_tkRelIso[1],100) < 0.05 \
         && trk_iso_0 < 30 \
         && trk_iso_1 < 30 \
         && Alt$(Muon_isGlobal[0],0) == 1 \
         && Alt$(Muon_isGlobal[1],0) == 1 \
         '

### Do we also need to add this selection?
##########################################
# Muon_highPtId[0] == 2
# Muon_highPtId[1] == 2


# && abs(mll-91.2) < 15 \
# && abs(Lepton_pdgId[0]*Lepton_pdgId[1]) == 13*13 \

# Eta categories: [0, 0.9, 1.2, 2.1, 2.4]
# Barrel  - B: 0.0 <= abs(eta) < 0.9
# Overlap - O: 0.9 <= abs(eta) < 1.2
# Endcap  - E: 1.2 <= abs(eta) < 2.1
# Forward - F: 2.1 <= abs(eta) < 2.4

# Momentum categories: [0, 50, 100, 200, 300, 400, 500, 700, 1000, 1500, 2000, 2500]

eta_regions_dict = {
    'B' : ['0.0', '0.9'],
    'O' : ['0.9', '1.2'],
    'E' : ['1.2', '2.1'],
    'F' : ['2.1', '2.4'],
}

p_categories = ['0', '50', '100', '200', '300', '400', '500', '700', '1000', '1500', '2000', '2500']

# for index1, p1 in enumerate(p_categories[:-1]):
# ...     print(p1, p_categories[index1+1])

# Only splitting according to leading muons: in these categories, we can only use the leading muon distributions!
n1 = 0
category_dict_mu1 = {}
for i1, p1 in enumerate(p_categories[:-1]): # leading muon momentum interval: (p1_low = p1, p1_high = p_categories[i1+1])
    for eta1_region, eta1_interval in eta_regions_dict.items(): # leading muon eta interval: (eta1_region = eta1_region, eta1_low = eta1_interval[0], eta1_high = eta1_interval[1])
        p1_low    = p1
        p1_high   = p_categories[i1+1]
        eta1_low  = eta1_interval[0]
        eta1_high = eta1_interval[1]
        
        key_dict = 'p1_{0}_{1}_{2}'.format(p1_low, p1_high, eta1_region)
        print(key_dict)
        n1 = n1 + 1
        
        value_dict = 'Muon_tuneP_p_0 >= {0} && Muon_tuneP_p_0 < {1} && abs(Muon_eta[0]) >= {2} && abs(Muon_eta[0]) < {3}'.format(p1_low, p1_high, eta1_low, eta1_high)
        
        # print(value_dict)
        category_dict_mu1[key_dict] = value_dict

print("Number of leading muon categories = {}".format(n1))


# Same-sign category
cuts['DY_mm_cf_ss_mu1'] = {
    'expr'       : 'Muon_charge[0]*Muon_charge[1] == +1',
    'categories' : category_dict_mu1,
}

# Opposite-sign category
cuts['DY_mm_cf_os_mu1'] = {
    'expr'       : 'Muon_charge[0]*Muon_charge[1] == -1',
    'categories' : category_dict_mu1,
}


# Only splitting according to sub-leading muons: in these categories, we can only use the sub-leading muon distributions!
n2 = 0
category_dict_mu2 = {}
for i2, p2 in enumerate(p_categories[:-1]): # sub-leading muon momentum interval: (p2_low = p2, p2_high = p_categories[i2+1])
    for eta2_region, eta2_interval in eta_regions_dict.items(): # sub-leading muon eta interval: (eta2_region = eta2_region, eta2_low = eta2_interval[0], eta2_high = eta2_interval[1])
        p2_low    = p2
        p2_high   = p_categories[i2+1]
        eta2_low  = eta2_interval[0]
        eta2_high = eta2_interval[1]
        
        key_dict = 'p1_{0}_{1}_{2}'.format(p2_low, p2_high, eta2_region)
        print(key_dict)
        n2 = n2 + 1
        
        value_dict = 'Muon_tuneP_p_1 >= {0} && Muon_tuneP_p_1 < {1} && abs(Muon_eta[1]) >= {2} && abs(Muon_eta[1]) < {3}'.format(p2_low, p2_high, eta2_low, eta2_high)
        
        print(value_dict)
        category_dict_mu2[key_dict] = value_dict

print("Number of sub-leading muon categories = {}".format(n2))


# Same-sign category
cuts['DY_mm_cf_ss_mu2'] = {
    'expr'       : 'Muon_charge[0]*Muon_charge[1] == +1',
    'categories' : category_dict_mu2,
}

# Opposite-sign category
cuts['DY_mm_cf_os_mu2'] = {
    'expr'       : 'Muon_charge[0]*Muon_charge[1] == -1',
    'categories' : category_dict_mu2,
}


# category_dict = {}
# n = 0
# for i1, p1 in enumerate(p_categories[:-1]): # leading muon momentum interval: (p1_low = p1, p1_high = p_categories[i1+1])
#     for i2, p2 in enumerate(p_categories[:-1]): # sub-leading muon momentum: (p2_low = p2, p2_high = p_categories[i2+1])
#         for eta1_region, eta1_interval in eta_regions_dict.items(): # leading muon eta interval: (eta1_region = eta1_region, eta1_low = eta1_interval[0], eta1_high = eta1_interval[1])
#             for eta2_region, eta2_interval in eta_regions_dict.items(): # sub-leading muon eta interval: (eta2_region = eta2_region, eta2_low = eta2_interval[0], eta2_high = eta2_interval[1])
#                 p1_low    = p1
#                 p1_high   = p_categories[i1+1]
#                 p2_low    = p2
#                 p2_high   = p_categories[i2+1]
#                 eta1_low  = eta1_interval[0]
#                 eta1_high = eta1_interval[1]
#                 eta2_low  = eta2_interval[0]
#                 eta2_high = eta2_interval[1]
                
#                 key_dict = 'p1_{0}_{1}_p2_{2}_{3}_{4}{5}'.format(p1_low, p1_high, p2_low, p2_high, eta1_region, eta2_region)
#                 print(key_dict)
#                 n = n+1
                
#                 value_dict = 'Muon_tuneP_p_0 >= {0} && Muon_tuneP_p_0 < {1} && abs(Muon_eta[0]) >= {4} && abs(Muon_eta[0]) < {5} && Muon_tuneP_p_1 >= {2} && Muon_tuneP_p_1 < {3} && abs(Muon_eta[1]) >= {6} && abs(Muon_eta[1]) < {7}'.format(p1_low, p1_high, p2_low, p2_high, eta1_low, eta1_high, eta2_low, eta2_high)
                
#                 print(value_dict)

#                 # category_dict['p1_{0}_{1}_p2_{2}_{3}_{4}{5}'.format(p1_low, p1_high, p2_low, p2_high, eta1_region, eta2_region)] : 'Muon_tuneP_p_0 >= {0} && Muon_tuneP_p_0 < {1} && abs(Muon_eta[0]) >= {4} && abs(Muon_eta[0]) < {5} && Muon_tuneP_p_1 >= {2} && Muon_tuneP_p_1 < {3} && abs(Muon_eta[1]) >= {6} && abs(Muon_eta[1]) < {7}'.format(p1_low, p1_high, p2_low, p2_high, eta1_low, eta1_high, eta2_low, eta2_high)
#                 category_dict[key_dict] = value_dict

# print("Total number of categories = {}".format(n))


# # Same-sign category
# cuts['DY_mm_cf_ss'] = {
#     'expr'       : 'Muon_charge[0]*Muon_charge[1] == +1',
#     'categories' : category_dict,
# }

# # Opposite-sign category
# cuts['DY_mm_cf_os'] = {
#     'expr'       : 'Muon_charge[0]*Muon_charge[1] == -1',
#     'categories' : category_dict,
# }
