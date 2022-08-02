import ROOT as R 

R.ROOT.EnableImplicitMT();

#basepath ="/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv7_Full2016v7/MCl1loose2016v7__MCCorr2016v7__MCCombJJLNu2016/"
basepath = "/eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/Autumn18_102X_nAODv7_Full2018v7/MCl1loose2018v7__MCCorr2018v7__MCCombJJLNu2018"
files = ["nanoLatino_WpToLNu_WpTo2J__part{}.root".format(i) for i in range(0,37)]
files = [basepath +"/"+ f for f in files]

rdf = R.RDataFrame("Events",files)

# mask = "[LHEPart_status==1 && abs(LHEPart_pdgId)<10]"
# mass = rdf.Define("mqq", "InvariantMass(LHEPart_pt"+mask+",LHEPart_eta"+mask+",LHEPart_phi"+mask+",LHEPart_eta"+mask+")")
# h = mass.Histo1D(("mqq","mqq",300, 0,3000),"mqq")

boost = rdf.Filter("VBS_category==0","boosted")
res= rdf.Filter("VBS_category==1","resolved")

res.Report().Print()