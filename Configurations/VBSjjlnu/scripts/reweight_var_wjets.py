import ROOT as R 
import pandas as pd
import argparse 

'''
Script that computes the residual deltaeta VBS reweighting after the scaling of
W+jets bins in W+Jets control regions
'''

parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", help="Input root file", type=str)
parser.add_argument("-v","--var", help="Variable",type=str)
parser.add_argument("--wjets-factors", help="W+jets normalization factors", type=str)
parser.add_argument("-o","--output", help="Output File",type=str)
args = parser.parse_args()

iF = R.TFile(args.input, "READ")
oF = R.TFile(args.output,"RECREATE")

wfactors = pd.read_csv(args.wjets_factors, sep=";")


wjets_bins = {'res':[], 'boost':[]}
for ir in range(1,22):
    wjets_bins['res'].append("Wjets_res_"+str(ir))
for ir in range(1,8):
    wjets_bins['boost'].append("Wjets_boost_"+str(ir))

var = args.var
# cuts = ['res_wjetcr_ele', 'res_wjetcr_mu', 'boost_wjetcr_ele','boost_wjetcr_mu']
cuts = ['res_sig_ele', 'res_sig_mu', 'boost_sig_ele','boost_sig_mu']
samples = ["VV",'VVV','VgS','Vg','ggWW','DY','top','VBF-V_dipole','VBS_dipoleRecoil','Fake']

hratios = {}

for cut in cuts:
    htotMC = None 
    for sam in samples:
        print("{}/{}/histo_{}".format(cut, var, sam))
        h = iF.Get("{}/{}/histo_{}".format(cut, var, sam))
        if htotMC:
            htotMC.Add(h)
        else:
            htotMC = h.Clone("htot")
    
    hdata = iF.Get("{}/{}/histo_DATA".format(cut, var))
    hdiff = hdata.Clone("hdiff")
    hdiff.Add(htotMC, -1)
    
    htotWjets = None 
    
    if 'res' in cut: wjets = wjets_bins['res']
    if 'boost' in cut: wjets = wjets_bins['boost']
    for w in wjets:
        h = iF.Get("{}/{}/histo_{}".format(cut, var, w)).Clone(w+"_clone")
        #rescale with factor
        wjet_cat = cut.replace('sig','wjetcr')
        # print(cut, wjet_cat)
        corrfactor = wfactors[(wfactors.channel==wjet_cat ) & (wfactors.bin == w)]["weight"].values[0]
        # print(corrfactor)
        h.Scale(corrfactor)
        if htotWjets: 
            htotWjets.Add(h)
        else:
            htotWjets = h.Clone("htotWjets")
        
    # now we normalize to 1 both the histogram before the ratio
    hdiff.Scale(1/hdiff.Integral())

    print(htotWjets.Integral())
    htotWjets.Scale(1/htotWjets.Integral())

    hratio = hdiff.Clone("ratio_"+cut.replace("sig_",""))
    hratio.Divide(htotWjets)

    oF.cd()
    hratio.Write()
    
    hratios[cut] = hratio

    
    # c = R.TCanvas()
    # hdiff.Draw("hist")
    # htotWjets.Draw("hist same")
    # c.Draw()

cRatio = R.TCanvas()
leg = R.TLegend()
for n, h in hratios.items():
    h.Draw("hist PLC same")
    h.SetLineWidth(2)
    h.GetYaxis().SetRangeUser(0.4,1.6)
    leg.AddEntry(h,n)
leg.Draw("same")
R.gStyle.SetOptStat(0)
cRatio.Draw()

#     # draw_cache.append((c,hdiff,htotWjets, cRatio, hratio))

# oF.Close()
# iF.Close()