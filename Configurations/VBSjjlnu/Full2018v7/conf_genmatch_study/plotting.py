import ROOT as R 
R.gROOT.SetBatch(True)
import argparse

parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", help="inputfile", type=str,required=True )
parser.add_argument("-o","--output", help="outputdir", type=str,required=True )
args = parser.parse_args() 

f = R.TFile(args.input)

var = [ "mjj_vbs","mjj_vjet","deltaeta_vbs","lepton_pt","puppimet","jet0pt_zoom","jet0pt"]


efficiency = {}

cache = [] 

match = ["vbs", "vjets", "all"]

for v in var:
    for m in match:
        hpass = f.Get(m+"_match_"+ v)
        htot = f.Get("denom_"+ v)

        c1 = R.TCanvas()
        htot.Draw()
        hpass.Draw("same")
        htot.GetXaxis().SetTitle(v)
        htot.SetTitle("Match " + m + " jets")
        hpass.SetLineColor(R.kRed)
        #c1.Draw()
        c1.SaveAs(args.output +"/compare_match_"+m + "_" + v + ".png")

        eff = R.TEfficiency(hpass, htot)
        c = R.TCanvas()
        eff.Draw()
        eff.SetTitle("Match " + m + " jets")
        #c.Draw()
        c.SaveAs(args.output +"/eff_match_"+m + "_" + v + ".png")

        

        del eff 
        
        #cache.append((eff,c1,c,htot,hpass))

for m,e in efficiency.items():
    print(f"Total efficiency Match  {m}: eff { e:.3f}")


a = input("enter to exit")
cache.clear()