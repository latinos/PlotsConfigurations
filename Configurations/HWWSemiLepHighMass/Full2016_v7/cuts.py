# lourdes:include an argument with the year?cuts page 118 AN2019/249
#cuts = {}
# Aliases in supercut doesnt seem to work!

supercut = 'nCleanFatJet>0 && Lepton_pt[0]>25 && (abs(Lepton_eta[0])<2.5) \
            && (nLepton>=1 && Alt$(Lepton_pt[1],0)<10) && (abs(Lepton_pdgId[0])==11 || abs(Lepton_pdgId[0])==13)\
            && PuppiMET_pt > 20 \
            '

#cuts['hww2l2v_13TeV_SRBVH'] = 'bVeto && CleanFatJet_pt[0]>=200 && abs(CleanFatJet_eta[0])<2.4 && (mV[0]>70 && mV[0]<110) && (mth>=30 && mth<125)'

#cuts['hww2l2v_13TeV_SRBVH_nomthcut'] = 'bVeto && CleanFatJet_pt[0]>=200 && abs(CleanFatJet_eta[0])<2.4 && (mV[0]>70 && mV[0]<110)'

#cuts['hww2l2v_13TeV_SRBVH_nomthcut_outsidemVwindow'] = 'bVeto && CleanFatJet_pt[0]>=200 && abs(CleanFatJet_eta[0])<2.4 && (mV[0]<70 || mV[0]>110)'

# Top control region

cuts['hww2l2v_13TeV_top_CR'] = 'topcr'

# DY control region

#cuts['hww2l2v_13TeV_dytt_CR_outsideZpeak'] = 'mth < 60. && drll < 2. && (mV[0]<70 || mV[0]>110) && bVeto && mll > 40. && mll < 80.'

#cuts['hww2l2v_13TeV_dytt_CR_outsideZpeak_nomthcut'] = 'drll < 2. && (mV[0]<70 || mV[0]>110) && bVeto  && mll > 40. && mll < 80.'

cuts['hww2l2v_13TeV_ttsemileptonic'] = 'CleanFatJet_pt[0]>=200 && abs(CleanFatJet_eta[0])<2.4 && (mV[0]>40 && mV[0]<150) && topcr'
