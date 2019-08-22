# cuts
# Looking only at FatJet category
supercut = 'VBS_category==0'

cuts["inclusive"] = '1'

cuts["VBSlike"] = 'bVeto \
                && mjj_vbs > 300 \
                && deltaeta_vbs > 2.5 \
                '

cuts["topCR"] = '!bVeto \
                && mjj_vbs > 300 \
                && deltaeta_vbs > 2.5 \
                '

cuts["checkRecoMET"] = 'recoMET < 30'

