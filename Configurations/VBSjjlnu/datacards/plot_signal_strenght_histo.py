import ROOT as R 

s = [
    1.505,  0.323,
    -0.221, 1.176,
    0.308, -0.486,
    1.452, 0.389,
    1.380, 1.267,
    1.598, 1.504
     
]

mu = R.TH1F("mu","mu",20,-1,2)
for i in s:
    mu.Fill(i)

c = R.TCanvas()
mu.Draw("hist")
c.Draw()