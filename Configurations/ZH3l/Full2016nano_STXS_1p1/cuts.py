# cuts

supercut = 'MinIf$( WH3l_mOSll[], WH3l_mOSll[Iteration$] > 0) > 12 \
            && Alt$(Lepton_pt[0],0)>25 \
            && Alt$(Lepton_pt[1],0)>20 \
            && Alt$(Lepton_pt[2],0)>15 \
            && Alt$(Lepton_pt[3],0)<10 \
            && abs(WH3l_chlll) == 1 \
           '

cuts['zh3l_Zg_CR'] = {
    'expr' :' WH3l_ZVeto < 25 && bVeto && ZH3l_Z4lveto < 10 ',
    'categories' : {
        '1j' : 'Alt$(CleanJet_pt[0], 0) >= 30 && Alt$(CleanJet_pt[1], 0) < 30 ',
        '2j' : 'Alt$(CleanJet_pt[0], 0) >= 30 && Alt$(CleanJet_pt[1], 0) >= 30',
    }
}

cuts['zh3l_WZ_CR'] = {
    'expr' : 'WH3l_ZVeto < 25 && bVeto && ZH3l_Z4lveto > 20',
    'categories' : {
        '1j' : 'Alt$(CleanJet_pt[0], 0) >= 30 && Alt$(CleanJet_pt[1], 0) < 30  && ZH3l_dphilmetj  > 3.14159/2',
        '2j' : 'Alt$(CleanJet_pt[0], 0) >= 30 && Alt$(CleanJet_pt[1], 0) >= 30 && ZH3l_dphilmetjj > 3.14159/2',
    }
}

cuts['zh3l_SR'] = {
    'expr' : 'WH3l_ZVeto < 25 && bVeto && ZH3l_Z4lveto > 20 ',
    'categories' : {
        #'ptv_0_75_1j'    : 'Alt$(CleanJet_pt[0], 0) >= 30 && Alt$(CleanJet_pt[1], 0) <  30 && ZH3l_dphilmetj  < 3.14159/2 && ZH3l_pTZ <= 75',
        #'ptv_75_150_1j'  : 'Alt$(CleanJet_pt[0], 0) >= 30 && Alt$(CleanJet_pt[1], 0) <  30 && ZH3l_dphilmetj  < 3.14159/2 && ZH3l_pTZ >  75 && ZH3l_pTZ <= 150',
        #'ptv_150_250_1j' : 'Alt$(CleanJet_pt[0], 0) >= 30 && Alt$(CleanJet_pt[1], 0) <  30 && ZH3l_dphilmetj  < 3.14159/2 && ZH3l_pTZ > 150 && ZH3l_pTZ <= 250',
        #'ptv_gt250_1j'   : 'Alt$(CleanJet_pt[0], 0) >= 30 && Alt$(CleanJet_pt[1], 0) <  30 && ZH3l_dphilmetj  < 3.14159/2 && ZH3l_pTZ > 250',
        'ptv_lt150_1j'   : 'Alt$(CleanJet_pt[0], 0) >= 30 && Alt$(CleanJet_pt[1], 0) <  30 && ZH3l_dphilmetj  < 3.14159/2 && ZH3l_pTZ < 150',
        'ptv_gt150_1j'   : 'Alt$(CleanJet_pt[0], 0) >= 30 && Alt$(CleanJet_pt[1], 0) <  30 && ZH3l_dphilmetj  < 3.14159/2 && ZH3l_pTZ > 150',
        #'ptv_0_75_2j'    : 'Alt$(CleanJet_pt[0], 0) >= 30 && Alt$(CleanJet_pt[1], 0) >= 30 && ZH3l_dphilmetjj < 3.14159/2 && ZH3l_pTZ <= 75',
        #'ptv_75_150_2j'  : 'Alt$(CleanJet_pt[0], 0) >= 30 && Alt$(CleanJet_pt[1], 0) >= 30 && ZH3l_dphilmetjj < 3.14159/2 && ZH3l_pTZ >  75 && ZH3l_pTZ <= 150',
        #'ptv_150_250_2j' : 'Alt$(CleanJet_pt[0], 0) >= 30 && Alt$(CleanJet_pt[1], 0) >= 30 && ZH3l_dphilmetjj < 3.14159/2 && ZH3l_pTZ > 150 && ZH3l_pTZ <= 250',
        #'ptv_gt250_2j'   : 'Alt$(CleanJet_pt[0], 0) >= 30 && Alt$(CleanJet_pt[1], 0) >= 30 && ZH3l_dphilmetjj < 3.14159/2 && ZH3l_pTZ > 250',
        'ptv_lt150_2j'   : 'Alt$(CleanJet_pt[0], 0) >= 30 && Alt$(CleanJet_pt[1], 0) >= 30 && ZH3l_dphilmetjj < 3.14159/2 && ZH3l_pTZ < 150',
        'ptv_gt150_2j'   : 'Alt$(CleanJet_pt[0], 0) >= 30 && Alt$(CleanJet_pt[1], 0) >= 30 && ZH3l_dphilmetjj < 3.14159/2 && ZH3l_pTZ > 150',
    }
}


'''
 #11 = e
# 13 = mu
# 15 = tau
'''
