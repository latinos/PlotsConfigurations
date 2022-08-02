import ROOT as R 
import sys 

f= R.TFile.Open(sys.argv[1],"UPDATE")
cache = []
for njet in [2,3,4,5,6,7,8]:
    cut = "njet"+str(njet)
    f.cd(cut)
    
    ratio = R.gDirectory.Get("ratio_mjj")
    func1 = R.TF1("pol3_detajj", "pol3")
    func2 = R.TF1("pol4_detajj", "pol4")
    func3 = R.TF1("pol5_detajj", "pol5")
    func1.SetLineColor(R.kRed)
    func2.SetLineColor(R.kBlue)
    func3.SetLineColor(R.kGreen)
    ratio.Fit(func1, "LS+")
    ratio.Fit(func2, "LS+")
    ratio.Fit(func3, "LS+")
    c = R.TCanvas()
    ratio.Draw()
    c.Draw()
    cache.append((c,ratio))
    func1.Write()
    func2.Write()
    func3.Write()



    f.cd("/")

# f.Close()