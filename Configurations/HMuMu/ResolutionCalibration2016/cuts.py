# cuts

supercut = '   Lepton_pt[0]>26 \
            && Lepton_pt[1]>20 \
            && (nLepton>=2 && (Alt$(Lepton_pt[2],0)<10) || Alt$(Lepton_pdgId[2],13)==13) \
            && abs(Lepton_eta[0])<2.4 && abs(Lepton_eta[1])<2.4 \
            && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
            && (mll>76 && mll<106) \
            && bVeto \
           '

##&& ptll>30 \
##&& MET_pt > 20 \


## DY control regions

# B = barrel  -> |eta| < 0.9
# O = overalp -> 0.9 < |eta| < 1.8
# E = endcap  -> |eta| < 1.8

# Leading muon pT bins 
# [30, 45, 52, 62, 200]

## BB bins
cuts['hmm_13TeV_DY_BB_30_45']  = ' Lepton_pt[0] > 30 && Lepton_pt[0] < 45 \
                                && abs(Lepton_eta[0]) < 0.9 \
                                && abs(Lepton_eta[1]) < 0.9'

cuts['hmm_13TeV_DY_BB_45_52']  = ' Lepton_pt[0] > 45 && Lepton_pt[0] < 52 \
                                && abs(Lepton_eta[0]) < 0.9 \
                                && abs(Lepton_eta[1]) < 0.9'

cuts['hmm_13TeV_DY_BB_52_62']  = ' Lepton_pt[0] > 52 && Lepton_pt[0] < 62 \
                                && abs(Lepton_eta[0]) < 0.9 \
                                && abs(Lepton_eta[1]) < 0.9'

cuts['hmm_13TeV_DY_BB_62_200']  = ' Lepton_pt[0] > 62 && Lepton_pt[0] < 200 \
                                && abs(Lepton_eta[0]) < 0.9 \
                                && abs(Lepton_eta[1]) < 0.9'

## OB bins
cuts['hmm_13TeV_DY_OB_30_45']  = ' Lepton_pt[0] > 30 && Lepton_pt[0] < 45 \
                                && abs(Lepton_eta[0]) > 0.9 && abs(Lepton_eta[0]) < 1.8 \
                                && abs(Lepton_eta[1]) < 0.9'

cuts['hmm_13TeV_DY_OB_45_52']  = ' Lepton_pt[0] > 45 && Lepton_pt[0] < 52 \
                                && abs(Lepton_eta[0]) > 0.9 && abs(Lepton_eta[0]) < 1.8 \
                                && abs(Lepton_eta[1]) < 0.9'

cuts['hmm_13TeV_DY_OB_52_62']  = ' Lepton_pt[0] > 52 && Lepton_pt[0] < 62 \
                                && abs(Lepton_eta[0]) > 0.9 && abs(Lepton_eta[0]) < 1.8 \
                                && abs(Lepton_eta[1]) < 0.9'

cuts['hmm_13TeV_DY_OB_62_200']  = ' Lepton_pt[0] > 62 && Lepton_pt[0] < 200 \
                                && abs(Lepton_eta[0]) > 0.9 && abs(Lepton_eta[0]) < 1.8 \
                                && abs(Lepton_eta[1]) < 0.9'

## BO bins
cuts['hmm_13TeV_DY_BO_30_45']  = ' Lepton_pt[0] > 30 && Lepton_pt[0] < 45 \
                                && abs(Lepton_eta[1]) > 0.9 && abs(Lepton_eta[1]) < 1.8 \
                                && abs(Lepton_eta[0]) < 0.9'

cuts['hmm_13TeV_DY_BO_45_52']  = ' Lepton_pt[0] > 45 && Lepton_pt[0] < 52 \
                                && abs(Lepton_eta[1]) > 0.9 && abs(Lepton_eta[1]) < 1.8 \
                                && abs(Lepton_eta[0]) < 0.9'

cuts['hmm_13TeV_DY_BO_52_62']  = ' Lepton_pt[0] > 52 && Lepton_pt[0] < 62 \
                                && abs(Lepton_eta[1]) > 0.9 && abs(Lepton_eta[1]) < 1.8 \
                                && abs(Lepton_eta[0]) < 0.9'

cuts['hmm_13TeV_DY_BO_62_200']  = ' Lepton_pt[0] > 62 && Lepton_pt[0] < 200 \
                                && abs(Lepton_eta[1]) > 0.9 && abs(Lepton_eta[1]) < 1.8 \
                                && abs(Lepton_eta[0]) < 0.9'

## BE bins
cuts['hmm_13TeV_DY_BE_30_45']  = ' Lepton_pt[0] > 30 && Lepton_pt[0] < 45 \
                                && abs(Lepton_eta[0]) < 0.9 \
                                && abs(Lepton_eta[1]) > 1.8'

cuts['hmm_13TeV_DY_BE_45_52']  = ' Lepton_pt[0] > 45 && Lepton_pt[0] < 52 \
                                && abs(Lepton_eta[0]) < 0.9 \
                                && abs(Lepton_eta[1]) > 1.8'

cuts['hmm_13TeV_DY_BE_52_62']  = ' Lepton_pt[0] > 52 && Lepton_pt[0] < 62 \
                                && abs(Lepton_eta[0]) < 0.9 \
                                && abs(Lepton_eta[1]) > 1.8'

cuts['hmm_13TeV_DY_BE_62_200']  = ' Lepton_pt[0] > 62 && Lepton_pt[0] < 200 \
                                && abs(Lepton_eta[0]) > 0.9 && abs(Lepton_eta[0]) < 1.8 \
                                && abs(Lepton_eta[1]) > 1.8'

## EB bins
cuts['hmm_13TeV_DY_EB_30_45']  = ' Lepton_pt[0] > 30 && Lepton_pt[0] < 45 \
                                && abs(Lepton_eta[1]) < 0.9 \
                                && abs(Lepton_eta[0]) > 1.8'

cuts['hmm_13TeV_DY_EB_45_52']  = ' Lepton_pt[0] > 45 && Lepton_pt[0] < 52 \
                                && abs(Lepton_eta[1]) < 0.9 \
                                && abs(Lepton_eta[0]) > 1.8'

cuts['hmm_13TeV_DY_EB_52_62']  = ' Lepton_pt[0] > 52 && Lepton_pt[0] < 62 \
                                && abs(Lepton_eta[1]) < 0.9 \
                                && abs(Lepton_eta[0]) > 1.8'

cuts['hmm_13TeV_DY_EB_62_200']  = ' Lepton_pt[0] > 62 && Lepton_pt[0] < 200 \
                                && abs(Lepton_eta[1]) < 0.9 \
                                && abs(Lepton_eta[0]) > 1.8'

## OE bins
cuts['hmm_13TeV_DY_OE_30_45']  = ' Lepton_pt[0] > 30 && Lepton_pt[0] < 45 \
                                && abs(Lepton_eta[0]) > 0.9 && abs(Lepton_eta[0]) < 1.8 \
                                && abs(Lepton_eta[1]) > 1.8'

cuts['hmm_13TeV_DY_OE_45_52']  = ' Lepton_pt[0] > 45 && Lepton_pt[0] < 52 \
                                && abs(Lepton_eta[0]) > 0.9 && abs(Lepton_eta[0]) < 1.8 \
                                && abs(Lepton_eta[1]) > 1.8'

cuts['hmm_13TeV_DY_OE_52_62']  = ' Lepton_pt[0] > 52 && Lepton_pt[0] < 62 \
                                && abs(Lepton_eta[0]) > 0.9 && abs(Lepton_eta[0]) < 1.8 \
                                && abs(Lepton_eta[1]) > 1.8'

cuts['hmm_13TeV_DY_OE_62_200']  = ' Lepton_pt[0] > 62 && Lepton_pt[0] < 200 \
                                && abs(Lepton_eta[0]) > 0.9 && abs(Lepton_eta[0]) < 1.8 \
                                && abs(Lepton_eta[1]) > 1.8'

## EO bins
cuts['hmm_13TeV_DY_EO_30_45']  = ' Lepton_pt[0] > 30 && Lepton_pt[0] < 45 \
                                && abs(Lepton_eta[1]) > 0.9 && abs(Lepton_eta[1]) < 1.8 \
                                && abs(Lepton_eta[0]) > 1.8'

cuts['hmm_13TeV_DY_EO_45_52']  = ' Lepton_pt[0] > 45 && Lepton_pt[0] < 52 \
                                && abs(Lepton_eta[1]) > 0.9 && abs(Lepton_eta[1]) < 1.8 \
                                && abs(Lepton_eta[0]) > 1.8'

cuts['hmm_13TeV_DY_EO_52_62']  = ' Lepton_pt[0] > 52 && Lepton_pt[0] < 62 \
                                && abs(Lepton_eta[1]) > 0.9 && abs(Lepton_eta[1]) < 1.8 \
                                && abs(Lepton_eta[0]) > 1.8'

cuts['hmm_13TeV_DY_EO_62_200']  = ' Lepton_pt[0] > 62 && Lepton_pt[0] < 200 \
                                && abs(Lepton_eta[1]) > 0.9 && abs(Lepton_eta[1]) < 1.8 \
                                && abs(Lepton_eta[0]) > 1.8'

## OO bins
cuts['hmm_13TeV_DY_OO_30_45']  = ' Lepton_pt[0] > 30 && Lepton_pt[0] < 45 \
                                && abs(Lepton_eta[0]) > 0.9 && abs(Lepton_eta[0]) < 1.8 \
                                && abs(Lepton_eta[1]) > 0.9 && abs(Lepton_eta[1]) < 1.8'

cuts['hmm_13TeV_DY_OO_45_52']  = ' Lepton_pt[0] > 45 && Lepton_pt[0] < 52 \
                                && abs(Lepton_eta[0]) > 0.9 && abs(Lepton_eta[0]) < 1.8 \
                                && abs(Lepton_eta[1]) > 0.9 && abs(Lepton_eta[1]) < 1.8'

cuts['hmm_13TeV_DY_OO_52_62']  = ' Lepton_pt[0] > 52 && Lepton_pt[0] < 62 \
                                && abs(Lepton_eta[0]) > 0.9 && abs(Lepton_eta[0]) < 1.8 \
                                && abs(Lepton_eta[1]) > 0.9 && abs(Lepton_eta[1]) < 1.8'

cuts['hmm_13TeV_DY_OO_62_200']  = ' Lepton_pt[0] > 62 && Lepton_pt[0] < 200 \
                                && abs(Lepton_eta[0]) > 0.9 && abs(Lepton_eta[0]) < 1.8 \
                                && abs(Lepton_eta[1]) > 0.9 && abs(Lepton_eta[1]) < 1.8'

## EE bins
cuts['hmm_13TeV_DY_EE_30_45']  = ' Lepton_pt[0] > 30 && Lepton_pt[0] < 45 \
                                && abs(Lepton_eta[0]) > 1.8 \
                                && abs(Lepton_eta[1]) > 1.8'

cuts['hmm_13TeV_DY_EE_45_52']  = ' Lepton_pt[0] > 45 && Lepton_pt[0] < 52 \
                                && abs(Lepton_eta[0]) > 1.8 \
                                && abs(Lepton_eta[1]) > 1.8'

cuts['hmm_13TeV_DY_EE_52_62']  = ' Lepton_pt[0] > 52 && Lepton_pt[0] < 62 \
                                && abs(Lepton_eta[0]) > 1.8 \
                                && abs(Lepton_eta[1]) > 1.8'

cuts['hmm_13TeV_DY_EE_62_200']  = ' Lepton_pt[0] > 62 && Lepton_pt[0] < 200 \
                                && abs(Lepton_eta[0]) > 1.8 \
                                && abs(Lepton_eta[1]) > 1.8'

