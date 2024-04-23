# cuts

supercut = 'Lepton_pt[0]>25 \
         && Lepton_pt[1]>10 \
         && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
         && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
         && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
         && mll>12 \
         && PuppiMET_pt > 20 \
         && ptll > 30 \
         && mth > 60 \
'

cuts['hww2l2v_13TeV_WH_SS'] = {
    'expr'       : 'Lepton_pdgId[0]*Lepton_pdgId[1] > 0',
    'categories' : {
        # different-flavor pt2 >= 20 GeV
        'df_0j_pt2ge20' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13 && Lepton_pt[1]>=20 && Alt$(CleanJet_pt[0],0)<30',
        'df_1j_pt2ge20' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13 && Lepton_pt[1]>=20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)<30',
        'df_2j_pt2ge20' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13 && Lepton_pt[1]>=20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && Alt$(CleanJet_pt[2],0)<30',
        # ee pt2 >= 20 GeV
        'ee_0j_pt2ge20' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*11 && Lepton_pt[1]>=20 && Alt$(CleanJet_pt[0],0)<30',
        'ee_1j_pt2ge20' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*11 && Lepton_pt[1]>=20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)<30',
        'ee_2j_pt2ge20' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*11 && Lepton_pt[1]>=20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && Alt$(CleanJet_pt[2],0)<30',
        # mm pt2 >= 20 GeV
        'mm_0j_pt2ge20' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 13*13 && Lepton_pt[1]>=20 && Alt$(CleanJet_pt[0],0)<30',
        'mm_1j_pt2ge20' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 13*13 && Lepton_pt[1]>=20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)<30',
        'mm_2j_pt2ge20' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 13*13 && Lepton_pt[1]>=20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && Alt$(CleanJet_pt[2],0)<30',
        # # different-flavor pt2 < 20 GeV
        # 'df_0j_pt2lt20' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13 && Lepton_pt[1]<20 && Alt$(CleanJet_pt[0],0)<30',
        # 'df_1j_pt2lt20' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13 && Lepton_pt[1]<20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)<30',
        # 'df_2j_pt2lt20' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13 && Lepton_pt[1]<20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && Alt$(CleanJet_pt[2],0)<30',
        # # ee pt2 < 20 GeV
        # 'ee_0j_pt2lt20' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*11 && Lepton_pt[1]<20 && Alt$(CleanJet_pt[0],0)<30',
        # 'ee_1j_pt2lt20' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*11 && Lepton_pt[1]<20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)<30',
        # 'ee_2j_pt2lt20' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*11 && Lepton_pt[1]<20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && Alt$(CleanJet_pt[2],0)<30',
        # # mm pt2 < 20 GeV
        # 'mm_0j_pt2lt20' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 13*13 && Lepton_pt[1]<20 && Alt$(CleanJet_pt[0],0)<30',
        # 'mm_1j_pt2lt20' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 13*13 && Lepton_pt[1]<20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)<30',
        # 'mm_2j_pt2lt20' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 13*13 && Lepton_pt[1]<20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && Alt$(CleanJet_pt[2],0)<30',
    }
}

# Splitting by sign l+l+ or l-l-
cuts['hww2l2v_13TeV_WH'] = {
    'expr'       : 'Lepton_pdgId[0]*Lepton_pdgId[1] > 0',
    'categories' : {
        # different-flavor pt2 >= 20 GeV
        'SS_plus_df_0j_pt2ge20'  : '((Lepton_pdgId[0] == -13 && Lepton_pdgId[1] == -11) || (Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -13)) && Lepton_pt[1]>=20 && Alt$(CleanJet_pt[0],0)<30',
        'SS_plus_df_1j_pt2ge20'  : '((Lepton_pdgId[0] == -13 && Lepton_pdgId[1] == -11) || (Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -13)) && Lepton_pt[1]>=20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)<30',
        'SS_plus_df_2j_pt2ge20'  : '((Lepton_pdgId[0] == -13 && Lepton_pdgId[1] == -11) || (Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -13)) && Lepton_pt[1]>=20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && Alt$(CleanJet_pt[2],0)<30',
        'SS_minus_df_0j_pt2ge20' : '((Lepton_pdgId[0] == +13 && Lepton_pdgId[1] == +11) || (Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +13)) && Lepton_pt[1]>=20 && Alt$(CleanJet_pt[0],0)<30',
        'SS_minus_df_1j_pt2ge20' : '((Lepton_pdgId[0] == +13 && Lepton_pdgId[1] == +11) || (Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +13)) && Lepton_pt[1]>=20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)<30',
        'SS_minus_df_2j_pt2ge20' : '((Lepton_pdgId[0] == +13 && Lepton_pdgId[1] == +11) || (Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +13)) && Lepton_pt[1]>=20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && Alt$(CleanJet_pt[2],0)<30',
        # ee pt2 >= 20 GeV
        'SS_plus_ee_0j_pt2ge20'  : '(Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -11) && Lepton_pt[1]>=20 && Alt$(CleanJet_pt[0],0)<30',
        'SS_plus_ee_1j_pt2ge20'  : '(Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -11) && Lepton_pt[1]>=20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)<30',
        'SS_plus_ee_2j_pt2ge20'  : '(Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -11) && Lepton_pt[1]>=20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && Alt$(CleanJet_pt[2],0)<30',
        'SS_minus_ee_0j_pt2ge20' : '(Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +11) && Lepton_pt[1]>=20 && Alt$(CleanJet_pt[0],0)<30',
        'SS_minus_ee_1j_pt2ge20' : '(Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +11) && Lepton_pt[1]>=20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)<30',
        'SS_minus_ee_2j_pt2ge20' : '(Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +11) && Lepton_pt[1]>=20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && Alt$(CleanJet_pt[2],0)<30',
        # mm pt2 >= 20 GeV
        'SS_plus_mm_0j_pt2ge20'  : '(Lepton_pdgId[0] == -13 && Lepton_pdgId[1] == -13) && Lepton_pt[1]>=20 && Alt$(CleanJet_pt[0],0)<30',
        'SS_plus_mm_1j_pt2ge20'  : '(Lepton_pdgId[0] == -13 && Lepton_pdgId[1] == -13) && Lepton_pt[1]>=20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)<30',
        'SS_plus_mm_2j_pt2ge20'  : '(Lepton_pdgId[0] == -13 && Lepton_pdgId[1] == -13) && Lepton_pt[1]>=20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && Alt$(CleanJet_pt[2],0)<30',
        'SS_minus_mm_0j_pt2ge20' : '(Lepton_pdgId[0] == +13 && Lepton_pdgId[1] == +13) && Lepton_pt[1]>=20 && Alt$(CleanJet_pt[0],0)<30',
        'SS_minus_mm_1j_pt2ge20' : '(Lepton_pdgId[0] == +13 && Lepton_pdgId[1] == +13) && Lepton_pt[1]>=20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)<30',
        'SS_minus_mm_2j_pt2ge20' : '(Lepton_pdgId[0] == +13 && Lepton_pdgId[1] == +13) && Lepton_pt[1]>=20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && Alt$(CleanJet_pt[2],0)<30',
        # # different-flavor pt2 < 20 GeV
        # 'SS_plus_df_0j_pt2lt20'  : '((Lepton_pdgId[0] == -13 && Lepton_pdgId[1] == -13) || (Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -13)) && Lepton_pt[1]<20 && Alt$(CleanJet_pt[0],0)<30',
        # 'SS_plus_df_1j_pt2lt20'  : '((Lepton_pdgId[0] == -13 && Lepton_pdgId[1] == -13) || (Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -13)) && Lepton_pt[1]<20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)<30',
        # 'SS_plus_df_2j_pt2lt20'  : '((Lepton_pdgId[0] == -13 && Lepton_pdgId[1] == -13) || (Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -13)) && Lepton_pt[1]<20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && Alt$(CleanJet_pt[2],0)<30',
        # 'SS_minus_df_0j_pt2lt20' : '((Lepton_pdgId[0] == +13 && Lepton_pdgId[1] == +13) || (Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +13)) && Lepton_pt[1]<20 && Alt$(CleanJet_pt[0],0)<30',
        # 'SS_minus_df_1j_pt2lt20' : '((Lepton_pdgId[0] == +13 && Lepton_pdgId[1] == +13) || (Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +13)) && Lepton_pt[1]<20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)<30',
        # 'SS_minus_df_2j_pt2lt20' : '((Lepton_pdgId[0] == +13 && Lepton_pdgId[1] == +13) || (Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +13)) && Lepton_pt[1]<20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && Alt$(CleanJet_pt[2],0)<30',
        # # ee pt2 < 20 GeV
        # 'SS_plus_ee_0j_pt2lt20'  : '(Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -11) && Lepton_pt[1]<20 && Alt$(CleanJet_pt[0],0)<30',
        # 'SS_plus_ee_1j_pt2lt20'  : '(Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -11) && Lepton_pt[1]<20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)<30',
        # 'SS_plus_ee_2j_pt2lt20'  : '(Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -11) && Lepton_pt[1]<20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && Alt$(CleanJet_pt[2],0)<30',
        # 'SS_minus_ee_0j_pt2lt20' : '(Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +11) && Lepton_pt[1]<20 && Alt$(CleanJet_pt[0],0)<30',
        # 'SS_minus_ee_1j_pt2lt20' : '(Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +11) && Lepton_pt[1]<20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)<30',
        # 'SS_minus_ee_2j_pt2lt20' : '(Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +11) && Lepton_pt[1]<20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && Alt$(CleanJet_pt[2],0)<30',
        # # mm pt2 < 20 GeV
        # 'SS_plus_mm_0j_pt2lt20'  : '(Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -11) && Lepton_pt[1]<20 && Alt$(CleanJet_pt[0],0)<30',
        # 'SS_plus_mm_1j_pt2lt20'  : '(Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -11) && Lepton_pt[1]<20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)<30',
        # 'SS_plus_mm_2j_pt2lt20'  : '(Lepton_pdgId[0] == -11 && Lepton_pdgId[1] == -11) && Lepton_pt[1]<20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && Alt$(CleanJet_pt[2],0)<30',
        # 'SS_minus_mm_0j_pt2lt20' : '(Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +11) && Lepton_pt[1]<20 && Alt$(CleanJet_pt[0],0)<30',
        # 'SS_minus_mm_1j_pt2lt20' : '(Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +11) && Lepton_pt[1]<20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)<30',
        # 'SS_minus_mm_2j_pt2lt20' : '(Lepton_pdgId[0] == +11 && Lepton_pdgId[1] == +11) && Lepton_pt[1]<20 && Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && Alt$(CleanJet_pt[2],0)<30',
    }
}
