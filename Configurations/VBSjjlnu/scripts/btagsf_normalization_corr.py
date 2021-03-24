import ROOT as R 
import sys 
R.TH1.SetDefaultSumw2(True)
# R.gROOT.SetBatch(True)

iF = R.TFile.Open(sys.argv[1])

cuts = ['res_onshell', 'res_offshell', 'boost_onshell', 'boost_offshell']


samples_groups = {
    'VBS': ['VBS'],
    'VBS_dipoleRecoil' : ['VBS_dipoleRecoil'],
    'Wjets_HT': ['Wjets_HT'],
    'Vg_VgS_VBFV' :['Vg','VgS','VBF-V'],
    'VV_VVV_ggWW':['VVV','VV','ggWW'],
    'top':['top'],
    'DY': ['DY']
}

bins = {
    'VBS': 7,
    'VBS_dipoleRecoil': 7,
    'Wjets_HT': 8,
    'Vg_VgS_VBFV':  5 ,
    'VV_VVV_ggWW': 8 ,
    'top':  8,
    'DY': 8
}


oF = R.TFile.Open(sys.argv[2], "recreate")

mgrs  = { s:R.TMultiGraph() for s in samples_groups}
legs = { s:R.TLegend() for s in samples_groups}

for cut in cuts:
    for sgroup, samples in samples_groups.items():

        tot_h1 = None 
        tot_h2 = None 
        for s in samples:
            h1 = iF.Get(cut+ "/nJetsBtag/histo_"+s)
            print(cut+ "/nJetsBtag/histo_"+s)
            h2 = iF.Get(cut+ "/nJetsBtag_btagSF/histo_"+s)

            if tot_h1 == None:
                tot_h1 = h1.Clone()
                tot_h1.SetName(cut+ "_" +  sgroup + "_withoutbtagsf")
            else:
                tot_h1.Add(h1)

            if tot_h2 == None:
                tot_h2 = h2.Clone()
                tot_h2.SetName(cut+ "_" +  sgroup + "_withbtagsf")
            else:
                tot_h2.Add(h2)
        
        print ">>> ", cut, " sample: ", sgroup
        gr = R.TGraph()
        gr.SetName(sgroup+"_"+cut)
        hratio = tot_h1.Clone()
        hratio.SetName("historatio_" + cut+"_"+sgroup)
        hratio.SetTitle("historatio_" + cut+"_"+sgroup)
        hratio.Reset()
        
        NbinsMax = bins[sgroup]
        for i in range(1, tot_h1.GetNbinsX()+1):
            if i < NbinsMax:
                print "bin ", i, " " , tot_h1.GetBinLowEdge(i) , " --> ", tot_h1.GetBinContent(i) / tot_h2.GetBinContent(i)
                gr.SetPoint(i-1, tot_h1.GetBinLowEdge(i),tot_h1.GetBinContent(i) / tot_h2.GetBinContent(i) )
                hratio.SetBinContent(i, tot_h1.GetBinContent(i) / tot_h2.GetBinContent(i) )
        # now the bins to be summed
        sum1 =0.
        sum2 =0.
        for i in range(NbinsMax,tot_h1.GetNbinsX()+1):
            print "summing bins ", i, " " , tot_h1.GetBinLowEdge(i) , " --> ", tot_h1.GetBinContent(i) / tot_h2.GetBinContent(i)
            sum1+= tot_h1.GetBinContent(i)
            sum2+= tot_h2.GetBinContent(i)
        #print(sum1, sum2, NbinsMax, tot_h1.GetBinLowEdge(NbinsMax), sum1/sum2)
        gr.SetPoint(NbinsMax-1, tot_h1.GetBinLowEdge(NbinsMax), sum1/sum2)
        hratio.SetBinContent(NbinsMax, sum1/sum2)

        gr.Write()
        hratio.Write()
        
        mgrs[sgroup].Add(gr)
        gr.SetMarkerStyle(8)
        gr.SetLineWidth(2)
        legs[sgroup].AddEntry(gr, sgroup + " " + cut)

cache = [ ]
for s in samples_groups:
    c = R.TCanvas(s,s,800,600)
    mgrs[s].Draw("APL PMC PLC ")
    legs[s].Draw("same")
    mgrs[s].SetTitle("Scale factor to correct MC normalization;nJets btaggable;without btagSF / with btag SF")
    c.Draw()
    c.Write()
    cache.append(c)

oF.Write()
oF.Close()