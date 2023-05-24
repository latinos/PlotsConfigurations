# cuts

supercut = 'mll>12 \
         && Lepton_pt[0]>25 \
         && Lepton_pt[1]>10 \
         && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
         && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
         && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
         && ptll>30 \
         && PuppiMET_pt > 20 \
         && (Lepton_pdgId[0]*Lepton_pdgId[1]) == 11*13 \
         '

cuts['preselection']   = '1'

#cuts['zmass_cut'] = 'WH3l_ZVeto < 25'


#cuts['b_veto_all']  = 'WH3l_ZVeto < 25 \
#                     && bVeto \
#                     '	     


cuts['jet_cut_4j'] = ' Alt$( CleanJet_pt[0], 0) > 30 \
                    && Alt$( CleanJet_pt[1], 0) > 30 \
                    && Alt$( CleanJet_pt[2], 0) > 30 \
                    && Alt$( CleanJet_pt[3], 0) > 30 \
                    '

cuts['breq'] = ' Alt$( CleanJet_pt[0], 0) > 30 \
               && Alt$( CleanJet_pt[1], 0) > 30 \
               && Alt$( CleanJet_pt[2], 0) > 30 \
               && Alt$( CleanJet_pt[3], 0) > 30 \
               && bReq \
               '

	       
#cuts['bveto_4j'] = ' Alt$( CleanJet_pt[0], 0) > 30 \
#               && Alt$( CleanJet_pt[1], 0) > 30 \
#               && Alt$( CleanJet_pt[2], 0) > 30 \
#               && Alt$( CleanJet_pt[3], 0) > 30 \
#               && bVeto \
#               '


#cuts['bveto_1j'] = ' Alt$( CleanJet_pt[0], 0) > 30 \
#               && Alt$( CleanJet_pt[1], 0) > 30 \
#               && Alt$( CleanJet_pt[2], 0) > 30 \
#               && Alt$( CleanJet_pt[3], 0) > 30 \
#               && bVeto_1j \
#               '

