categorization_wh = { 'FWDH'             : 'abs(HTXS_Higgs_y) > 2.5',
                      'PTV_0_75'         : 'abs(HTXS_Higgs_y) < 2.5 && genWPt <= 75',
                      'PTV_75_150'       : 'abs(HTXS_Higgs_y) < 2.5 && genWPt > 75  && genWPt <= 150',
                      'PTV_150_250_0J'   : 'abs(HTXS_Higgs_y) < 2.5 && genWPt > 150 && genWPt <= 250 && HTXS_njets30==0',
                      'PTV_150_250_GE1J' : 'abs(HTXS_Higgs_y) < 2.5 && genWPt > 150 && genWPt <= 250 && HTXS_njets30>=1',
                      'PTV_GT250'        : 'abs(HTXS_Higgs_y) < 2.5 && genWPt > 250',
}

categorization_zh = { 'FWDH'             : 'abs(HTXS_Higgs_y) > 2.5',
                      'PTV_0_75'         : 'abs(HTXS_Higgs_y) < 2.5 && genZPt <= 75',
                      'PTV_75_150'       : 'abs(HTXS_Higgs_y) < 2.5 && genZPt > 75  && genZPt <= 150',
                      'PTV_150_250_0J'   : 'abs(HTXS_Higgs_y) < 2.5 && genZPt > 150 && genZPt <= 250 && HTXS_njets30==0',
                      'PTV_150_250_GE1J' : 'abs(HTXS_Higgs_y) < 2.5 && genZPt > 150 && genZPt <= 250 && HTXS_njets30>=1',
                      'PTV_GT250'        : 'abs(HTXS_Higgs_y) < 2.5 && genZPt > 250',
}

