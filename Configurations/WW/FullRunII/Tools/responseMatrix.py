from ROOT import *
import sys
import array as arr

gROOT.SetBatch(1)
gStyle.SetPaintTextFormat("1.2f")
gStyle.SetOptTitle(0)
gStyle.SetOptStat(0)

# User defined values
# If we end up automating config creation, can automate this too

if len(sys.argv) < 2:
     print("Syntax: python responseMatrix.py <root file>")
     exit()

rootfile = sys.argv[1]

#### Lines to modify ####
diffvar = 'jetpt0'    # Differential variable
nbins = 12            # Number of bins in differential variable
jetbins = ['1j','2j'] # Number of jet bins (in CR / SR)

genbins = ['B%d'%i for i in range(nbins)]
recobins = [['ww2l2v_13TeV_sr_%s_B%d'%(j,i) for j in jetbins] for i in range(nbins)]
binedges = range(nbins+1)

######## Extract RM from mkShapes output ########
f = TFile.Open(rootfile)

bins=arr.array('f',binedges)
h_RM=TH2F('h_RM','Response Matrix',nbins,bins,nbins,bins)
h_RM.GetXaxis().SetNdivisions(nbins+1)
h_RM.GetXaxis().SetTitleSize(0.05)
h_RM.GetXaxis().SetLabelSize(0.045)
h_RM.GetYaxis().SetNdivisions(nbins+1)
h_RM.GetYaxis().SetTitleSize(0.05)
h_RM.GetYaxis().SetLabelSize(0.045)

for igen in range(nbins):
     for ireco in range(nbins):   
          bincontent = 0.0
          for recobin in recobins[ireco]:
               for sample in ['WW','ggWW']:
                    histname = recobin+'/events/histo_'+sample+'_'+genbins[igen]
                    bincontent += f.Get(histname).Integral()
          h_RM.SetBinContent(igen+1,ireco+1,bincontent)
	
######## RM normalization ########
			
RM=TMatrixD(nbins,nbins)

norm=[h_RM.Integral(i,i,1,nbins) for i in range(1,nbins+1)]
			
for j in range(1,nbins+1):
     for i in range(1,nbins+1):
          if(norm[j-1]!=0.):
               h_RM.SetBinContent(j,i,h_RM.GetBinContent(j,i)/norm[j-1])
               RM[i-1][j-1]=h_RM.GetBinContent(j,i)
			
c = TCanvas("c","c",900,700)
h_RM.GetXaxis().SetTitle('%s gen'%diffvar)
h_RM.GetYaxis().SetTitle('%s reco'%diffvar)
h_RM.SetMarkerSize(1.5)
h_RM.Draw('col text')
c.SaveAs("responseMatrix_%s.pdf"%diffvar)
	
######## Condition number calculation ########
	
T_RM=TDecompSVD(RM)
SVs=T_RM.GetSig()
cond=SVs.Max()/(max(0.000001,SVs.Min()))

print("Condition number:")
print(cond)

