import ROOT as R 
import sys 

f= R.TFile.Open(sys.argv[1],"UPDATE")
cache = []
for njet in [5]:
    cut = "njet"+str(njet)
    f.cd(cut)
    
    ratio = R.gDirectory.Get("ratio_mjj_zoom")

    func1 = R.TF1("fit_mjj", "cristalball", 0, 300)
    #func1.SetLineColor(R.kRed)
    ratio.Fit(func1, "RLS+")

    c = R.TCanvas()
    ratio.Draw()
    c.Draw()
    cache.append((c,ratio))
    # func1.Write()



    f.cd("/")

# f.Close()