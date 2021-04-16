from ROOT import *
import array as arr

#f=TFile('/afs/cern.ch/work/a/arun/Latinos/Check_forCC7/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WW/FullRunII/Full2016_v7/njets/rootFile/plots_WW2016_v7_njets.root')
#f=TFile('plots_WWRunII_v7_njets.root')
f=TFile('/afs/cern.ch/work/a/arun/Latinos/Check_forCC7/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WW/FullRunII/Full2016_v7/njets/rootFile/plots_WW2016_v7_njets_withetacut_ALL_WW.root')
#f=TFile('/afs/cern.ch/work/a/arun/Latinos/Check_forCC7/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WW/FullRunII/Full2016_v7/njets/rootFile/plots_WW2016_v7_njets_withoutetacut_ALL_WW.root')

######## Extract RM from mkShapes output ########
categories = []

categories.append('ww2l2v_13TeV_sr_0j')
categories.append('ww2l2v_13TeV_sr_1j')
categories.append('ww2l2v_13TeV_sr_2j')
categories.append('ww2l2v_13TeV_sr_3j')
categories.append('ww2l2v_13TeV_sr_4j')
#categories.append('ww2l2v_13TeV_sr_5j')
	
#bins_reco=arr.array('d',[0.,1.,2.,3.,4.,5.,6.])
bins_reco=arr.array('d',[0.,1.,2.,3.,4.,5.])
	
#RM=TMatrixD(7,7)
RM=TMatrixD(6,6)
#h_RM=TH2F('h_RM','Response Matrix',6,0,6,6,bins_reco)
h_RM=TH2F('h_RM','Response Matrix',5,0,5,5,bins_reco)

h_RM.SetBinContent(1,1,f.Get(categories[0]+'/events/histo_WW_fid_NJ_0').Integral())
h_RM.SetBinContent(1,2,f.Get(categories[1]+'/events/histo_WW_fid_NJ_0').Integral())
h_RM.SetBinContent(1,3,f.Get(categories[2]+'/events/histo_WW_fid_NJ_0').Integral())
h_RM.SetBinContent(1,4,f.Get(categories[3]+'/events/histo_WW_fid_NJ_0').Integral())
h_RM.SetBinContent(1,5,f.Get(categories[4]+'/events/histo_WW_fid_NJ_0').Integral())
#h_RM.SetBinContent(1,6,f.Get(categories[5]+'/events/histo_WW_fid_NJ_0').Integral())

h_RM.SetBinContent(2,1,f.Get(categories[0]+'/events/histo_WW_fid_NJ_1').Integral())
h_RM.SetBinContent(2,2,f.Get(categories[1]+'/events/histo_WW_fid_NJ_1').Integral())
h_RM.SetBinContent(2,3,f.Get(categories[2]+'/events/histo_WW_fid_NJ_1').Integral())
h_RM.SetBinContent(2,4,f.Get(categories[3]+'/events/histo_WW_fid_NJ_1').Integral())
h_RM.SetBinContent(2,5,f.Get(categories[4]+'/events/histo_WW_fid_NJ_1').Integral())
#h_RM.SetBinContent(2,6,f.Get(categories[5]+'/events/histo_WW_fid_NJ_1').Integral())

h_RM.SetBinContent(3,1,f.Get(categories[0]+'/events/histo_WW_fid_NJ_2').Integral())
h_RM.SetBinContent(3,2,f.Get(categories[1]+'/events/histo_WW_fid_NJ_2').Integral())
h_RM.SetBinContent(3,3,f.Get(categories[2]+'/events/histo_WW_fid_NJ_2').Integral())
h_RM.SetBinContent(3,4,f.Get(categories[3]+'/events/histo_WW_fid_NJ_2').Integral())
h_RM.SetBinContent(3,5,f.Get(categories[4]+'/events/histo_WW_fid_NJ_2').Integral())
#h_RM.SetBinContent(3,6,f.Get(categories[5]+'/events/histo_WW_fid_NJ_2').Integral())

h_RM.SetBinContent(4,1,f.Get(categories[0]+'/events/histo_WW_fid_NJ_3').Integral())
h_RM.SetBinContent(4,2,f.Get(categories[1]+'/events/histo_WW_fid_NJ_3').Integral())
h_RM.SetBinContent(4,3,f.Get(categories[2]+'/events/histo_WW_fid_NJ_3').Integral())
h_RM.SetBinContent(4,4,f.Get(categories[3]+'/events/histo_WW_fid_NJ_3').Integral())
h_RM.SetBinContent(4,5,f.Get(categories[4]+'/events/histo_WW_fid_NJ_3').Integral())
#h_RM.SetBinContent(4,6,f.Get(categories[5]+'/events/histo_WW_fid_NJ_3').Integral())

h_RM.SetBinContent(5,1,f.Get(categories[0]+'/events/histo_WW_fid_NJ_4').Integral())
h_RM.SetBinContent(5,2,f.Get(categories[1]+'/events/histo_WW_fid_NJ_4').Integral())
h_RM.SetBinContent(5,3,f.Get(categories[2]+'/events/histo_WW_fid_NJ_4').Integral())
h_RM.SetBinContent(5,4,f.Get(categories[3]+'/events/histo_WW_fid_NJ_4').Integral())
h_RM.SetBinContent(5,5,f.Get(categories[4]+'/events/histo_WW_fid_NJ_4').Integral())
#h_RM.SetBinContent(5,6,f.Get(categories[5]+'/events/histo_WW_fid_NJ_4').Integral())

#h_RM.SetBinContent(6,1,f.Get(categories[0]+'/events/histo_WW_fid_NJ_GE5').Integral())
#h_RM.SetBinContent(6,2,f.Get(categories[1]+'/events/histo_WW_fid_NJ_GE5').Integral())
#h_RM.SetBinContent(6,3,f.Get(categories[2]+'/events/histo_WW_fid_NJ_GE5').Integral())
#h_RM.SetBinContent(6,4,f.Get(categories[3]+'/events/histo_WW_fid_NJ_GE5').Integral())
#h_RM.SetBinContent(6,5,f.Get(categories[4]+'/events/histo_WW_fid_NJ_GE5').Integral())
#h_RM.SetBinContent(6,6,f.Get(categories[5]+'/events/histo_WW_fid_NJ_GE5').Integral())
	
######## RM normalization ########
			
norm=[]
	
#for j in range(1,7):
for j in range(1,6):
	temp=0.
	for i in range(1,6):
		temp=temp+h_RM.GetBinContent(j,i)

	norm.append(temp)
			
for j in range(1,6):
	for i in range(1,6):
		if(norm[j-1]!=0.):
			h_RM.SetBinContent(j,i,h_RM.GetBinContent(j,i)/norm[j-1])
			RM[i-1][j-1]=h_RM.GetBinContent(j,i)
			
h_RM.SetStats(0)
h_RM.GetXaxis().SetTitle('njet_gen')
h_RM.GetYaxis().SetTitle('njet_reco')
h_RM.Draw('col text')
	
######## Condition number calculation ########
	
T_RM=TDecompSVD(RM)
SVs=T_RM.GetSig()
cond=SVs.Max()/(max(0.000001,SVs.Min()))

print("Condition number:")
print(cond)

raw_input('Press Enter to continue...')

