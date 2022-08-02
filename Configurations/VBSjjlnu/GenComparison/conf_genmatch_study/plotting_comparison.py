import ROOT as R 
R.gROOT.SetBatch(True)
R.TH1.SetDefaultSumw2()
import argparse
R.gStyle.SetOptStat(0)

parser = argparse.ArgumentParser()
parser.add_argument("-o","--output", help="outputdir", type=str,required=True )
args = parser.parse_args() 

files = {
    "massWZ_maxMjj": R.TFile("output_massWZ_maxmjj.root"), 
    "maxMjj_massWZ": R.TFile("output_maxmjj_massWZ.root"), 
    "massWZ_maxPt": R.TFile("output_massWZ_maxPt.root"), 
    "maxPt_massWZ": R.TFile("output_maxPt_massWZ.root"),  
}

var = [ "mjj_vbs","mjj_vjet","deltaeta_vbs","lepton_pt","puppimet","jet0pt_zoom","jet0pt"]


efficiency = {}

def add_overflow(h):
    h.SetBinContent(1, h.GetBinContent(1)+h.GetBinContent(0))
    nbins= h.GetNbinsX()
    h.SetBinContent(nbins, h.GetBinContent(nbins)+h.GetBinContent(nbins+1))

cache = [] 

match = ["vbs", "vjets", "all"]

for v in var:
    for m in match:
        eff = {}
        for f, file  in files.items():
            hpass = file.Get(m+"_match_"+ v).Clone("num"+f+m+v)
            hpass.SetTitle(v)
            hpass.GetXaxis().SetTitle(v)
            add_overflow(hpass)
            npass =hpass.Integral()

            htot = file.Get("denom_"+ v).Clone("den"+f+m+v)
            add_overflow(htot)
            ntot = htot.Integral()
        
            hpass.Divide(htot)
            eff[f] = hpass.Clone()
            print(f"Total efficiency Match {f}:{m}: eff { npass /ntot:.3f}")


        c = R.TCanvas("c","c",1000,800)
        l = R.TLegend(0.12,0.72,0.35,0.88)
        for i,(e, ef) in enumerate(eff.items()):
            if i==0 : ef.Draw("PLC PMC")
            else: ef.Draw("same PLC PMC")
            l.AddEntry(ef, e, "lm")
            ef.GetYaxis().SetRangeUser(0,1)
        l.Draw("same")
        #c.Draw("PMC PLC")
        c.SaveAs(args.output +"/tagcomparison_match_"+m + "_" + v + ".png")
       

for v in var:
    for m in match:
        eff = {}
        for f, file  in files.items():
            hpass = file.Get("signal_"+m+"_match_"+ v).Clone("num"+f+m+v)
            add_overflow(hpass)
            hpass.SetTitle(v)
            hpass.GetXaxis().SetTitle(v)
            npass =hpass.Integral()

            htot = file.Get("signal_denom_"+ v).Clone("den"+f+m+v)
            add_overflow(htot)
            ntot = htot.Integral()
        
            hpass.Divide(htot)
            eff[f] = hpass.Clone()
            print(f"Total efficiency Signal Match {f}:{m}: eff { npass /ntot:.3f}")


        c = R.TCanvas("c","c",1000,800)
        l = R.TLegend(0.12,0.72,0.35,0.88)
        for i,(e, ef) in enumerate(eff.items()):
            if i==0 : ef.Draw("PLC PMC")
            else: ef.Draw("same PLC PMC")
            l.AddEntry(ef, e, "lm")
            ef.GetYaxis().SetRangeUser(0,1)
        l.Draw("same")
        #c.Draw("PMC PLC")
        c.SaveAs(args.output +"/tagcomparison_signal_match_"+m + "_" + v + ".png")
       


a = input("enter to exit")
cache.clear()