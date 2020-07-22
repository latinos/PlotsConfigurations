# cuts

supercut = '1'

cuts['hww2l2v_13TeV'] = {
   'expr': '1',
   'categories' : {
      'GG2H_FWDH' :  'HTXS_stage1_1_cat_pTjet30GeV== 100',
      'GG2H_PTH_200_300' : 'HTXS_stage1_1_cat_pTjet30GeV== 101 && (HTXS_Higgs_pt>200 && HTXS_Higgs_pt<=300)',
      'GG2H_PTH_300_450' : 'HTXS_stage1_1_cat_pTjet30GeV== 101 && (HTXS_Higgs_pt>300 && HTXS_Higgs_pt<=450)',
      'GG2H_PTH_450_650' : 'HTXS_stage1_1_cat_pTjet30GeV== 101 && (HTXS_Higgs_pt>450 && HTXS_Higgs_pt<=650)',
      'GG2H_PTH_GT650' : 'HTXS_stage1_1_cat_pTjet30GeV== 101 && HTXS_Higgs_pt>650 ',
      'GG2H_0J_PTH_0_10' : 'HTXS_stage1_1_cat_pTjet30GeV== 102',
      'GG2H_0J_PTH_GT10' : 'HTXS_stage1_1_cat_pTjet30GeV== 103',
      'GG2H_1J_PTH_0_60' : 'HTXS_stage1_1_cat_pTjet30GeV== 104',
      'GG2H_1J_PTH_60_120' : 'HTXS_stage1_1_cat_pTjet30GeV== 105',
      'GG2H_1J_PTH_120_200' : 'HTXS_stage1_1_cat_pTjet30GeV== 106',
      'GG2H_GE2J_MJJ_0_350_PTH_0_60' : 'HTXS_stage1_1_cat_pTjet30GeV== 107',
      'GG2H_GE2J_MJJ_0_350_PTH_60_120' : 'HTXS_stage1_1_cat_pTjet30GeV== 108',
      'GG2H_GE2J_MJJ_0_350_PTH_120_200' : 'HTXS_stage1_1_cat_pTjet30GeV== 109',
      'GG2H_GE2J_MJJ_350_700_PTHJJ_0_25' : 'HTXS_stage1_1_cat_pTjet30GeV== 110',
      'GG2H_GE2J_MJJ_350_700_PTHJJ_GT25' : 'HTXS_stage1_1_cat_pTjet30GeV== 111',
      'GG2H_GE2J_MJJ_GT700_PTHJJ_0_25' : 'HTXS_stage1_1_cat_pTjet30GeV== 112',
      'GG2H_GE2J_MJJ_GT700_PTHJJ_GT25' : 'HTXS_stage1_1_cat_pTjet30GeV== 113',
      # "VBF"
      'QQ2HQQ_FWDH' : 'HTXS_stage1_1_cat_pTjet30GeV== 200',
      'QQ2HQQ_0J' : 'HTXS_stage1_1_cat_pTjet30GeV== 201',
      'QQ2HQQ_1J' : 'HTXS_stage1_1_cat_pTjet30GeV== 202',
      'QQ2HQQ_MJJ_0_60' : 'HTXS_stage1_1_cat_pTjet30GeV== 203',
      'QQ2HQQ_MJJ_60_120' : 'HTXS_stage1_1_cat_pTjet30GeV== 204',
      'QQ2HQQ_MJJ_120_350' : 'HTXS_stage1_1_cat_pTjet30GeV== 205',
      'QQ2HQQ_MJJ_GT350_PTH_GT200' : 'HTXS_stage1_1_cat_pTjet30GeV== 206',
      'QQ2HQQ_MJJ_350_700_PTHJJ_0_25' : 'HTXS_stage1_1_cat_pTjet30GeV== 207',
      'QQ2HQQ_MJJ_350_700_PTHJJ_GT25' : 'HTXS_stage1_1_cat_pTjet30GeV== 208',
      'QQ2HQQ_MJJ_GT700_PTHJJ_0_25' : 'HTXS_stage1_1_cat_pTjet30GeV== 209',
      'QQ2HQQ_MJJ_GT700_PTHJJ_GT25' : 'HTXS_stage1_1_cat_pTjet30GeV== 210',
      # qq -> WH
      'QQ2HLNU_FWDH' : 'HTXS_stage1_1_cat_pTjet30GeV== 300',
      'QQ2HLNU_PTV_0_75' : 'HTXS_stage1_1_cat_pTjet30GeV== 301',
      'QQ2HLNU_PTV_75_150' : 'HTXS_stage1_1_cat_pTjet30GeV== 302',
      'QQ2HLNU_PTV_150_250_0J' : 'HTXS_stage1_1_cat_pTjet30GeV== 303',
      'QQ2HLNU_PTV_150_250_GE1J' : 'HTXS_stage1_1_cat_pTjet30GeV== 304',
      'QQ2HLNU_PTV_GT250' : 'HTXS_stage1_1_cat_pTjet30GeV== 305',
      # qq -> ZH
      'QQ2HLL_FWDH' : 'HTXS_stage1_1_cat_pTjet30GeV== 400',
      'QQ2HLL_PTV_0_75' : 'HTXS_stage1_1_cat_pTjet30GeV== 401',
      'QQ2HLL_PTV_75_150' : 'HTXS_stage1_1_cat_pTjet30GeV== 402',
      'QQ2HLL_PTV_150_250_0J' : 'HTXS_stage1_1_cat_pTjet30GeV== 403',
      'QQ2HLL_PTV_150_250_GE1J' : 'HTXS_stage1_1_cat_pTjet30GeV== 404',
      'QQ2HLL_PTV_GT250' : 'HTXS_stage1_1_cat_pTjet30GeV== 405',
      # gg -> ZH
      'GG2HLL_FWDH' : 'HTXS_stage1_1_cat_pTjet30GeV== 500',
      'GG2HLL_PTV_0_75' : 'HTXS_stage1_1_cat_pTjet30GeV== 501',
      'GG2HLL_PTV_75_150' : 'HTXS_stage1_1_cat_pTjet30GeV== 502',
      'GG2HLL_PTV_150_250_0J' : 'HTXS_stage1_1_cat_pTjet30GeV== 503',
      'GG2HLL_PTV_150_250_GE1J' : 'HTXS_stage1_1_cat_pTjet30GeV== 504',
      'GG2HLL_PTV_GT250' : 'HTXS_stage1_1_cat_pTjet30GeV== 505',

   }
}
