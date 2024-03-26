import numpy as np
import matplotlib.pyplot as plt
import ROOT
from array import array
import matplotlib.patches as mpatches

_file0 = ROOT.TFile.Open("../2018_v9/rootFiles_AZH_2018_v9_Full/plots_AZH_2018_v9_Full.root")
h_input = _file0.Get("breq_SR/ptzVSdeltam/histo_DATA")


xbinedges = array('d', [0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 250, 260, 270, 280, 290, 300, 350, 400, 450, 500, 550, 600, 700, 800, 900, 1000])
ybinedges = array('d', [0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 250, 260, 270, 280, 290, 300, 350, 400, 450, 500, 550, 600, 700, 800, 900, 1000])


h_output = ROOT.TH2D("h_output", "PtZ vs DeltaM", len(xbinedges)-1, xbinedges, len(ybinedges)-1, ybinedges)


for ibinx in range(1, len(xbinedges)):
        for ibiny in range(1, len(ybinedges)):
	            h_output.SetBinContent(ibinx, ibiny, h_input.GetBinContent(ibinx + (len(xbinedges)-1) * (ibiny - 1)))

plt.figure(figsize=(8, 6))
ROOT.gStyle.SetPalette(55)
plt.pcolormesh(xbinedges, ybinedges, np.array([[h_output.GetBinContent(ix, iy) for ix in range(1, h_output.GetNbinsX()+1)] for iy in range(1, h_output.GetNbinsY()+1)]), cmap='viridis')
plt.xlabel("PtZ")
plt.ylabel("DeltaM")
plt.title("PtZ vs DeltaM")



ellipse_1 = mpatches.Ellipse(xy=(93.77776,161.33923689584662), width=71.4033550304184, height=147.93717045091483, angle=145.9668747907025, ec='r', fc="None")
ellipse_2 = mpatches.Ellipse(xy=(93.77776,161.33923689584662), width=110.10273722366176, height=228.11655554322616, angle=145.9668747907025, ec='r', fc="None")
ellipse_3 = mpatches.Ellipse(xy=(93.77776,161.33923689584662), width=145.79778650243574, height=302.0714080450197, angle=145.9668747907025, ec='r', fc="None")
ellipse_4 = mpatches.Ellipse(xy=(93.77776,161.33923689584662), width=180.6478383786047, height=374.27555114770297, angle=145.9668747907025, ec='r', fc="None")
ellipse_5 = mpatches.Ellipse(xy=(93.77776,161.33923689584662), width=215.2826467834335, height=446.033741674425, angle=145.9668747907025, ec='r', fc="None")
ellipse_6 = mpatches.Ellipse(xy=(93.77776,161.33923689584662), width=249.926805724941, height=517.8113051275012, angle=145.9668747907025, ec='r', fc="None")

plt.gca().add_patch(ellipse_1)
plt.gca().add_patch(ellipse_2)
plt.gca().add_patch(ellipse_3)
plt.gca().add_patch(ellipse_4)
plt.gca().add_patch(ellipse_5)
plt.gca().add_patch(ellipse_6)
#plt.xlim(0, 500)
#plt.ylim(0, 800)
plt.colorbar(label='Bin Content')
plt.show()
