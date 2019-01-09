from ROOT import *
import array as arr

f=TFile('../rootFile/full_split/plots_ggH_differential_njet.root')

######## Extract RM from mkShapes output ########

em_mp = ['em_pm','em_mp','me_pm','me_mp']
pt2 = ['pt2ge20','pt2lt20']
categories = []
	
for sign in em_mp:
	for pt in pt2:
		categories.append('hww2l2v_13TeV_'+sign+'_0j_'+pt)
			
for sign in em_mp:
	for pt in pt2:
		categories.append('hww2l2v_13TeV_'+sign+'_1j_'+pt)
			
categories.append('hww2l2v_13TeV_of2j')
categories.append('hww2l2v_13TeV_of3j')
categories.append('hww2l2v_13TeV_of4j')
	
bins_reco=arr.array('d',[0.,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1.,1.125,1.25,1.375,1.5,1.625,1.75,1.875,2.,3.,4.,5.])
	
RM=TMatrixD(19,5)
h_RM=TH2F('h_RM','Response Matrix',5,0,5,19,bins_reco)
	
for i_gen in range(0,5):
	for j_reco in range(0,19):
		h_RM.SetBinContent(i_gen+1,j_reco+1,f.Get(categories[j_reco]+'/events/histo_ggH_hww_'+str(i_gen)+'j_fid').Integral())

######## RM normalization ########
			
norm=[]
	
for j in range(1,6):
	temp=0.
	for i in range(1,20):
		temp=temp+h_RM.GetBinContent(j,i)

	norm.append(temp)
			
for j in range(1,6):
	for i in range(1,20):
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
