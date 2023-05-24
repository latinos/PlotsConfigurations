# cuts

#supercut = 'MinIf$( WH3l_mOSll[], WH3l_mOSll[Iteration$] > 0) > 12 \
#            && Alt$(Lepton_pt[0],0)>25 \
#            && Alt$(Lepton_pt[1],0)>20 \
#            && Alt$(Lepton_pt[2],0)>15 \
#            && Alt$(Lepton_pt[3],0)<10 \
#            && abs(WH3l_chlll) == 1 \
#           '

#supercut = '1'

#cuts['preselection']   = '1'

supercut = 'Alt$(Lepton_pt[0],0) > 25 \
   && Alt$(Lepton_pt[1],0) > 15  \
   && Alt$(Lepton_pt[2],0) > 10 \
   && Alt$(Lepton_pt[3],0) > 10 \
   && (nLepton >= 4 && Alt$(Lepton_pt[4],0) < 10) \
   && chllll_zh4l == 0 \
   && z0Mass_zh4l > 12 \
   && bVeto \
   '

cuts['ZH4l_preselection'] = '((flagZ1SF_zh4l==1)&&(mllll_zh4l > 140)) || (flagZ1SF_zh4l==0)'

cuts['ZZ_CR']  =  ' z1Mass_zh4l < 105 && z1Mass_zh4l >75 \
                && PuppiMET_pt < 35 \
                && fabs(z0Mass_zh4l-91.1876)< 15\
                '




#cuts['zmass_cut'] = 'WH3l_ZVeto < 25'


#cuts['b_veto_all']  = 'WH3l_ZVeto < 25 \
#                     && bVeto \
#                     '	     



#cuts['jet_cut_4j'] = ' Alt$( CleanJet_pt[0], 0) > 30 \
#                    && Alt$( CleanJet_pt[1], 0) > 30 \
#                    && Alt$( CleanJet_pt[2], 0) > 30 \
#                    && Alt$( CleanJet_pt[3], 0) > 30 \
#                    && WH3l_ZVeto < 25 \
#                    '

#cuts['breq'] = ' Alt$( CleanJet_pt[0], 0) > 30 \
#               && Alt$( CleanJet_pt[1], 0) > 30 \
#               && Alt$( CleanJet_pt[2], 0) > 30 \
#               && Alt$( CleanJet_pt[3], 0) > 30 \
#               && WH3l_ZVeto < 25 \
#               && bReq \
#               '

	       
#cuts['bveto_4j'] = ' Alt$( CleanJet_pt[0], 0) > 30 \
#               && Alt$( CleanJet_pt[1], 0) > 30 \
#               && Alt$( CleanJet_pt[2], 0) > 30 \
#               && Alt$( CleanJet_pt[3], 0) > 30 \
#               && WH3l_ZVeto < 25 \
#               && bVeto \
#               '


#cuts['bveto_1j'] = ' Alt$( CleanJet_pt[0], 0) > 30 \
#               && Alt$( CleanJet_pt[1], 0) > 30 \
#               && Alt$( CleanJet_pt[2], 0) > 30 \
#               && Alt$( CleanJet_pt[3], 0) > 30 \
#               && WH3l_ZVeto < 25 \
#               && bVeto_1j \
#               '

'''
#11 = e
# 13 = mu
# 15 = tau
'''

