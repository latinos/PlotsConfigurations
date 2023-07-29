import argparse
import json
import os
import re


import numpy as np
import matplotlib.pyplot as plt
from matplotlib.tri import Traingulation, LinearTriInterpolator
import mplhep as hep

from plot_utils import CMSSW_BASE

plt.style.use(hep.style.CMS)


class MassPlaneContourPlotter:

    def __init__(self, year, run_name, channel, regions):
	self.year = year
	self.run_name = run_name
	self.thdmc_brs = self.load_thdmc()
	self.mass_points = self.load_mass_points()

    def load_thdmc(self):
	with open("/afs/cern.ch/work/s/srudrabh/AZH/TheoryComputations/CMSSW_10_2_22/src/cp3_llbb/Calculators42HDM/AToZH_xsc_br_results.json", 'r') as f:
	    return json.load(f)


    def load_limit(self, mA, mH):
	pct = "50.0%"
        fname = f"AsymptoticLimits_AZH_MA-{mA}_MH-{mH}_2DEllipses.log"
	with open(os.path.join(CMSSW_BASE(), f"src/PlotsConfigurations/Configurations/AtoZH_Full/{self.year}_v9"), 'r') as f:
	     limit_line = [x for x in f if pct in x][0]

	limit_value = float(re.findall(r"\d.\d+", line.split("<")[1])[0])


        return limit_value

    def load_mass_points(self):
	with open(os.path.join(CMSSW_BASE(), "src/PlotsConfigurations/Configurations/AtoZH_Full/scripts/signals.txt"), 'r') as f:
	    mass_points = np.array([(MA, MH) for MA, MH in mass_points if MA < 1201 and MH < 1201])
	    return mass_points


    def compute_theory_value(self, mA, mH):
	try:
	   br_z_ll = 0.066
	   br_h_tt = self.thdmc_brs[f"{mA},{mH}"]["HtottBR"]
	   br_a_zh = self.thdmc_brs[f"{mA},{mH}"]["AtoZHBR"]
	   xsec_a = self.thdmc_brs[f"{mA},{mH}"]["xsec_ggH"]
	except KeyError:
	   return 1
	return xsec_a*br_a_zh*br_h_tt*br_z_ll

    def plot_contour(self):

	MA_MH = np.array(
		[[MA, MH] for MA in range (500, 1200, 2) for MH in range(350 + 50 * int(MA / 900), MA - int(MA / 5), 2)]
      )

       fig, ax = plt.subplots(figsize=(11, 8))
       expected_values = np.array(
	       [self.load_limit(MA, MH) for MA, MH in zip(self.mass_points[:, 0], self.mass_points[:, 1])]
	    )

       triObj = Triangulation(self.mass_points[:, 0], self.mass_points[:, 1])
       f_interpolate = LinearTriInterpolator(triObj, expected_values)
       expected_values_interpolated = f_interpolate(MA_MH[:, 0], MA_MH[:, 1])


       theory_values = np.array(
	       [self.compute_theory_value(MA, MH) for MA, MH in zip(MA_MH[:, 0], MA_MH[:, 1])]
	     )
       theory_limit_ratio = theory_values / expected_values_interpolated
       countour = ax.tricontourf(MA_MH[:, 0], MA_MH[:, 1], theory_limit_ratio, levels=10, cmap="viridis")
       ax.tricontour(MA_MH[:, 0], MA_MH[:, 1], theory_limit_ratio, levels=[0,1], colors="red")
       ax.scatter(self.mass_points[:, 0], self.mass_points[:, 1], color="orange")

       fig.colorbar(contour, ax=ax, label=r"$\sigma_{Theory}/\sigma_{Expected}$")
       ax.set_xlabel(r"m$_{A}$ [GeV]")
       ax.set_ylabel(r"m$_{H}$ [GeV]")
       ax.set_xlim(500, 1200)
       ax.set_ylim(350, 1000)

       os.makedirs("plot_output/contours", exist_ok=True)
       fname = "mass_plane_contour_tanb1"
       plt.savefig(f"plot_output/contours/{fname}.png")
       plt.savefig(f"plot_output/contours/{fname}.pdf")
       plt.close()

if __name__ == "__main__"
       parser = argparse.ArgumentParser()
       parser.add_argument("run_name", type=str, help="Name of the directory containing the inputs.")
       parser.add_argument("--year", type=str, help="all/UL16/UL17/UL18/combined")
       args = parser.parse_args()


       if args.year in ["UL16", "UL17", "UL18", "ULCombined"]:
           YEARS = [args.year]
       if args.year == "all":
           YEARS = ["UL16", "UL17", "UL18", "ULCombined"]

       for year in YEARS:
           plotter = MassPlaneContourPlotter(year=year, run_name=args.run_name, channel=args.channel, regions=args.regions)
           plotter.plot_contour()



