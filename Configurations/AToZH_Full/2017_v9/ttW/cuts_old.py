# cuts

supercut = 'MinIf$( WH3l_mOSll[], WH3l_mOSll[Iteration$] > 0) > 12 \
            && Alt$(Lepton_pt[0],0)>25 \
            && Alt$(Lepton_pt[1],0)>20 \
            && Alt$(Lepton_pt[2],0)<10 \
            && ((abs(Lepton_pdgId[0]))*(abs(Lepton_pdgId[1])) == 11*13) \
           '

cuts['preselection']   = '1'

#cuts['zmass_cut'] = 'WH3l_ZVeto < 25'


#cuts['b_veto_all']  = 'WH3l_ZVeto < 25 \
#                     && bVeto \
#                     '	     

cuts['MET'] = 'PuppiMET_pt > 30 \
              '

cuts['jet_cut_4j'] = ' Alt$( CleanJet_pt[0], 0) > 30 \
                    && Alt$( CleanJet_pt[1], 0) > 30 \
                    && Alt$( CleanJet_pt[2], 0) > 30 \
                    && Alt$( CleanJet_pt[3], 0) > 30 \
                    && PuppiMET_pt > 40 \
                    '

cuts['breq'] = ' Alt$( CleanJet_pt[0], 0) > 30 \
               && Alt$( CleanJet_pt[1], 0) > 30 \
               && Alt$( CleanJet_pt[2], 0) > 30 \
               && Alt$( CleanJet_pt[3], 0) > 30 \
               && PuppiMET_pt > 40 \
               && bReq \
               '

	       
cuts['bveto_4j'] = ' Alt$( CleanJet_pt[0], 0) > 30 \
               && Alt$( CleanJet_pt[1], 0) > 30 \
               && Alt$( CleanJet_pt[2], 0) > 30 \
               && Alt$( CleanJet_pt[3], 0) > 30 \
               && PuppiMET_pt > 40 \
               && bVeto \
               '


cuts['bveto_1j'] = ' Alt$( CleanJet_pt[0], 0) > 30 \
               && Alt$( CleanJet_pt[1], 0) > 30 \
               && Alt$( CleanJet_pt[2], 0) > 30 \
               && Alt$( CleanJet_pt[3], 0) > 30 \
               && PuppiMET_pt > 40 \
               && bVeto_1j \
               '

'''
#11 = e
# 13 = mu
# 15 = tau
'''

