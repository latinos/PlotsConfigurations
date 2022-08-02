from __future__ import print_function
import ROOT as R 
import sys 


iF = R.TFile.Open(sys.argv[1],"UPDATE")
iF.cd("incl_cleanlep")
h3 = R.gDirectory.Get("ratio_dipolepythia_njet_vbstot_pt_detajj_bin3")


for x in range(1, h3.GetNbinsX()+1):
    # No for each y check when the ratio become 0 and keep the latest value
    for y in range(1, h3.GetNbinsY()+1):
        latest_value = 0.
        for z in range(1, h3.GetNbinsZ()+1):
            value = h3.GetBinContent(x,y,z)
            print(x, y, z, value)
            if value >0:
                latest_value = value
                continue 
            else:
                print("Setting up latest value for (x,y,z)",x,y,z,latest_value)
                h3.SetBinContent(h3.GetBin(x,y,z), latest_value)

#and then reverse
for x in range(h3.GetNbinsX(),0,-1):
    # No for each y check when the ratio become 0 and keep the latest value
    for y in range(h3.GetNbinsY(),0,-1):
        latest_value = 0.
        for z in range(h3.GetNbinsZ(),0,-1):
            value = h3.GetBinContent(x,y,z)
            print(x, y, z, value)
            if value >0:
                latest_value = value
                continue 
            else:
                print("Setting up latest value for (x,y,z)",x,y,z,latest_value)
                h3.SetBinContent(h3.GetBin(x,y,z), latest_value)



h3.Write()
iF.Close()