# cuts

supercut = 'MinIf$( WH3l_mOSll[], WH3l_mOSll[Iteration$] > 0) > 12 \
            && Alt$(Lepton_pt[0],0)>25 \
            && Alt$(Lepton_pt[1],0)>20 \
            && Alt$(Lepton_pt[2],0)>15 \
            && Alt$(Lepton_pt[3],0)<10 \
            && abs(WH3l_chlll) == 1 \
           '

cuts['preselection']   = '1'

cuts['zmass_cut'] = 'WH3l_ZVeto < 25'

cuts['MET'] = 'PuppiMET_pt > 40 \
              && WH3l_ZVeto < 25 \
              '


cuts['jet_cut_4j'] = ' Alt$( CleanJet_pt[0], 0) > 30 \
                    && Alt$( CleanJet_pt[1], 0) > 30 \
                    && Alt$( CleanJet_pt[2], 0) > 30 \
                    && Alt$( CleanJet_pt[3], 0) > 30 \
                    && PuppiMET_pt > 40 \
                    && WH3l_ZVeto < 25 \
                    '

#cuts['breq_SR'] = ' Alt$( CleanJet_pt[0], 0) > 30 \
#               && Alt$( CleanJet_pt[1], 0) > 30 \
#               && Alt$( CleanJet_pt[2], 0) > 30 \
#               && Alt$( CleanJet_pt[3], 0) > 30 \
#               && PuppiMET_pt > 40 \
#               && WH3l_ZVeto < 25 \
#               && bReq \
#               '

cuts['bveto_4j'] = ' Alt$( CleanJet_pt[0], 0) > 30 \
               && Alt$( CleanJet_pt[1], 0) > 30 \
               && Alt$( CleanJet_pt[2], 0) > 30 \
               && Alt$( CleanJet_pt[3], 0) > 30 \
               && PuppiMET_pt > 40 \
               && WH3l_ZVeto < 25 \
               && bVeto \
               '

#cuts['bveto_1j_SR'] = ' Alt$( CleanJet_pt[0], 0) > 30 \
#               && Alt$( CleanJet_pt[1], 0) > 30 \
#               && Alt$( CleanJet_pt[2], 0) > 30 \
#               && Alt$( CleanJet_pt[3], 0) > 30 \
#               && PuppiMET_pt > 40 \
#               && WH3l_ZVeto < 25 \
#               && bVeto_1j \
#               '

'''
#11 = e
# 13 = mu
# 15 = tau
'''
