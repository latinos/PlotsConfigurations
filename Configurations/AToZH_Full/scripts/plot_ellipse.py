import numpy as np
import matplotlib.pyplot as plt
import matplotlib.patches as mpatches
import ROOT 
from array import array


fig, ax = plt.subplots(figsize=(11, 8))

ellipse_1 = mpatches.Ellipse(xy=(93.77776,161.33923689584662), width=71.4033550304184, height =147.93717045091483, angle=145.9668747907025, ec='r', fc="None")
ellipse_2 = mpatches.Ellipse(xy=(93.77776,161.33923689584662), width=110.10273722366176, height =228.11655554322616, angle=145.9668747907025, ec='r', fc="None")
ellipse_3 = mpatches.Ellipse(xy=(93.77776,161.33923689584662), width=145.79778650243574, height =302.0714080450197, angle=145.9668747907025, ec='r', fc="None")
ellipse_4 = mpatches.Ellipse(xy=(93.77776,161.33923689584662), width=180.6478383786047, height =374.27555114770297, angle=145.9668747907025, ec='r', fc="None")
ellipse_5 = mpatches.Ellipse(xy=(93.77776,161.33923689584662), width=215.2826467834335, height =446.033741674425, angle=145.9668747907025, ec='r', fc="None")
ellipse_6 = mpatches.Ellipse(xy=(93.77776,161.33923689584662), width=249.926805724941, height =517.8113051275012, angle=145.9668747907025, ec='r', fc="None")


file0 = ROOT.TFile.Open("../2018_v9/rootFiles_AZH_2018_v9_2D/plots_AZH_2018_v9_2D.root")
#pairVec = [(900, 400), (900, 370), (700, 400), (700, 370), (700, 350),
#	               (500, 400), (500, 350), (1200, 850), (1200, 1000), (1000, 600), (800, 600)]
h_input = file0.Get("breq_SR/ptzVSdeltam/histo_Fake")

xbinedges = array('d', [0, 100, 200, 300, 400, 600, 1000])
ybinedges = array('d', [0, 200, 300, 400, 500, 600, 800])
h_output = ROOT.TH2D("h_output", "PtZ vs DeltaM", 6, xbinedges, 6, ybinedges)

hist_array = np.zeros((h_output.GetNbinsX(), h_output.GetNbinsY()))

for ibinx in xrange(1, 7):
    for ibiny in xrange(1, 7):
        h_output.SetBinContent(ibinx, ibiny, h_input.GetBinContent(ibinx + 6 * (ibiny - 1)))

for i in range(1, h_output.GetNbinsX() + 1):
    for j in range(1, h_output.GetNbinsY() + 1):
        hist_array[i - 1, j - 1] = h_output.GetBinContent(i, j)

xbins = [h_output.GetXaxis().GetBinLowEdge(i) for i in range(1, h_output.GetNbinsX() + 2)]
ybins = [h_output.GetYaxis().GetBinLowEdge(i) for i in range(1, h_output.GetNbinsX() + 2)]


im = ax.imshow(hist_array, extent=[xbins[0], xbins[-1], ybins[0], ybins[-1]], origin='lower', cmap='viridis')

ax.add_patch(ellipse_1)
ax.add_patch(ellipse_2)
ax.add_patch(ellipse_3)
ax.add_patch(ellipse_4)
ax.add_patch(ellipse_5)
ax.add_patch(ellipse_6)

cbar = plt.colorbar(im, ax=ax)


ax.set_xlabel(r"$p_{T,Z}$")
ax.set_ylabel(r"$\Delta m$")
#ax.set_xlim(0,400)
#ax.set_ylim(0,1200)
plt.title("2018 mA500_mH350 Ellipses, Fakes")
plt.savefig("/eos/user/s/srudrabh/AZH/mA500_mH350_Fakes_ellipses_2018.png")
plt.show()
