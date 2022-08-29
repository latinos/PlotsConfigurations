cuts = {}
# this should be checked in postprocessing, just to be sure
supercut = '\
    (Alt$(Lepton_pt[1],0)<=10 \
&&  abs(Lepton_eta[0])<2.5) \
'

LepCats={}
LepCats['incl_']='( (abs(Lepton_pdgId[0])==11) && Lepton_pt[0]>32 \
                 || (abs(Lepton_pdgId[0])==13) && Lepton_pt[0]>24 )'
#LepCats['incl_']='( (abs(Lepton_pdgId[0])==11) && Lepton_pt[0]>32 \
#                 || (abs(Lepton_pdgId[0])==13) && Lepton_pt[0]>24 )'
#LepCats['ElCh_']='( (abs(Lepton_pdgId[0])==11) && Lepton_pt[0]>30 )'
#LepCats['MuCh_']='( (abs(Lepton_pdgId[0])==13) && Lepton_pt[0]>27 )'



for Lep in LepCats:
    cuts[Lep]=  LepCats[Lep]
