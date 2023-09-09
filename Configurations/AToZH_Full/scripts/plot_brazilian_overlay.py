import argparse
import json 
import os
import re

import numpy as np
import matplotlib.pyplot as plt
#import mplhep as hep

#from plot_utils import CMSSW_BASE
#from plot_utils import PlotMeta


#plt.style.use(hep.style.CMS)

class BrazilianPlotter:

    tanb = 1
    BRAZILIAN_BLUE = "#002776"
    BRAZILIAN_GREEN = "#009C3B"
    BRAZILIAN_GOLD = "#FFDF00"

    def __init__(self, year, path_to_limits, path_to_limits2):
        self.year = year
        self.path_to_limits = path_to_limits
        self.path_to_limits2 = path_to_limits2
        self.thdmc_brs = self.load_thdmc()
        self.brasilians = self.load_brasilians()
        print(f"Plotting {year}, {path_to_limits}, {path_to_limits2}")


    def load_thdmc(self):
        with open(f"AToZH_xsc_br_results.json", 'r') as f:
            return json.load(f)
    
    def load_limits(self, mA, mH):
        with open(os.path.join(self.path_to_limits, f"CL_MA-{mA}_MH-{mH}.log"), 'r') as f:
            flines = [x for x in f if x.startswith("Expected")]
            limit_vals = []
            for line in flines:
                pct_val = float(re.findall(r"\d.\d+", line.split("<")[1])[0])
                limit_vals.append(pct_val)

            return limit_vals

    def load_limits2(self, mA, mH):
        with open(os.path.join(self.path_to_limits2, f"CL_MA-{mA}_MH-{mH}.log"), 'r') as f:
            flines = [x for x in f if x.startswith("Expected")]
            limit_vals = []
            for line in flines:
                pct_val = float(re.findall(r"\d.\d+", line.split("<")[1])[0])
                limit_vals.append(pct_val)

            return limit_vals

    def load_brasilians(self):
        with open("signals.txt", 'r') as f:
            mass_points = np.array([(int(re.findall(r"\d+", x)[0]), int(re.findall(r"\d+", x)[1])) for x in f])
            a_masses = np.unique(mass_points[:, 0])
            h_masses = np.unique(mass_points[:, 1])

            brasilians = {
    	        "mA_fixed": {mA: np.sort([x[1] for x in mass_points if x[0] == mA]) for mA in a_masses},
    	        "mH_fixed": {mH: np.sort([x[0] for x in mass_points if x[1] == mH]) for mH in h_masses}
        }
        return brasilians

    def compute_theory_value(self, mA, mH):
        try:
            br_z_ll = 0.1
            br_h_tt = self.thdmc_brs[f"{mA},{mH}"]["HtottBR"]
            br_a_zh = self.thdmc_brs[f"{mA},{mH}"]["AtoZHBR"]
            xsec_a = self.thdmc_brs[f"{mA},{mH}"]["xsec_ggH"]
        except KeyError:
            return 1
        return xsec_a*br_a_zh*br_h_tt*br_z_ll

    def plot_common(self, ax):
#        hep.cms.label(ax=ax, llabel="Work in progress", data=True,
#            lumi=PlotMeta.YEAR_LUMI_MAP[self.year],
#            year=PlotMeta.UL_YEAR_MAP[self.year])
        ax.set_ylabel(r"$\sigma(A) \times BR(A\rightarrow ZH) \times BR(H\rightarrow t\bar{t}) \times BR(Z\rightarrow l\bar{l})  [{pb}^{-1}]$")
        ax.legend()
        ax.set_yscale("log")

    def plot_fixed_mA(self):
        for mA, mHs in self.brasilians["mA_fixed"].items():
            print(f"-- MA fixed at {mA} GeV")
            limits = np.array([self.load_limits(mA, mH) for mH in mHs])
            limits2 = np.array([self.load_limits2(mA, mH) for mH in mHs])
            fig, ax = plt.subplots(figsize=(12, 8))
            ax.fill_between(mHs, limits[:, 0], limits[:, 4], color=self.BRAZILIAN_GOLD, label=r"$2\sigma$")
            ax.fill_between(mHs, limits[:, 1], limits[:, 3], color=self.BRAZILIAN_GREEN, label=r"$1\sigma$")
            ax.fill_between(mHs, limits2[:, 0], limits2[:, 4], color='m', label=r"$2\sigma$ w/o 1j SR", alpha=0.15, hatch='\\')
            ax.fill_between(mHs, limits2[:, 1], limits2[:, 3], color='b', label=r"$1\sigma$ w/o 1j SR", alpha=0.15, hatch='/')
            ax.plot(mHs, limits[:, 2], marker='D', linestyle='-', color=self.BRAZILIAN_BLUE, label="expected limit")
            ax.plot(mHs, limits2[:, 2], marker='d', linestyle='--', color=self.BRAZILIAN_BLUE, label="expected limit w/o 1j SR")

	    
	        #Plot Theory Curves
            theory_colors = ['r']
            theory_mHs = [i for i in range(min(mHs), min(1200, max(mHs) + 1), 2)]
            for color in theory_colors:
                theory_values = [self.compute_theory_value(mA, mH) for mH in mHs]
                ax.plot(mHs, theory_values, color=color, label=fr"2HDM type-II $\tan(\beta)=1$")

            ax.set_xlabel(fr"$m_H$ [GeV] ($m_A={mA}$)")
            self.plot_common(ax)

            os.makedirs(os.path.join(self.path_to_limits, "plot_output/brazilians_overlay"), exist_ok=True)
            fname = f"MA-{mA}_{self.year}"
            plt.savefig(os.path.join(self.path_to_limits, f"plot_output/brazilians_overlay/{fname}.png"))
            #plt.savefig(os.path.join(self.path_to_limits, f"plot_output/brasilians/{fname}.pdf"))
            plt.close()

    def plot_fixed_mH(self):
        for mH, mAs in self.brasilians["mH_fixed"].items():
            print(f"-- MH fixed at {mH} GeV")
            limits = np.array([self.load_limits(mA, mH) for mA in mAs])
            limits2 = np.array([self.load_limits2(mA, mH) for mA in mAs])
            fig, ax = plt.subplots(figsize=(12, 8))
            ax.fill_between(mAs, limits[:, 0], limits[:, 4], color=self.BRAZILIAN_GOLD, label=r"$2\sigma$")
            ax.fill_between(mAs, limits[:, 1], limits[:, 3], color=self.BRAZILIAN_GREEN, label=r"$1\sigma$")
            ax.fill_between(mAs, limits2[:, 0], limits2[:, 4], color='b', label=r"$2\sigma$ w/o 1j SR", alpha=0.15, hatch='\\')
            ax.fill_between(mAs, limits2[:, 1], limits2[:, 3], color='m', label=r"$1\sigma$ w/o 1j SR", alpha=0.15, hatch='/')
            ax.plot(mAs, limits[:, 2], marker='D', linestyle='-', color=self.BRAZILIAN_BLUE, label="expected limit")
            ax.plot(mAs, limits2[:, 2], marker='d', linestyle='--', color=self.BRAZILIAN_BLUE, label="expected limit w/o 1j SR")
   
	        # Plot Theory Curves
            theory_colors = ['r']
            theory_mAs = [i for i in range(min(mAs), min(1200, max(mAs) + 1), 2)]
            for color in theory_colors:
                theory_values = [self.compute_theory_value(mA, mH) for mA in mAs]
                ax.plot(mAs, theory_values, color=color, label=fr"2HDM type-II $\tan(\beta)=1$")

            ax.set_xlabel(fr"$m_A$ [GeV] ($m_H={mH}$)")
            self.plot_common(ax)

            os.makedirs(os.path.join(self.path_to_limits, "plot_output/brazilians_overlay"), exist_ok=True)
            fname = f"MH-{mH}_{self.year}"
            plt.savefig(os.path.join(self.path_to_limits, f"plot_output/brazilians_overlay/{fname}.png"))
            #plt.savefig(os.path.join(self.path_to_limits, f"plot_output/brasilians/{fname}.pdf"))
            plt.close()


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--path_to_limits", type=str, help="Name of the directory containing the inputs.")
    parser.add_argument("--path_to_limits2", type=str, help="Name of the directory containing the 2nd inputs.")
    parser.add_argument("--year", type=str, help="all/UL16/UL17/UL18")
    args = parser.parse_args()


    if args.year in ["UL16", "UL17", "UL18", "ULCombined"]:
        YEARS = [args.year]
    if args.year == "all":
        YEARS = ["UL16", "UL17", "UL18", "ULCombined"]


    for year in YEARS:
        plotter = BrazilianPlotter(year=year, path_to_limits=args.path_to_limits, path_to_limits2=args.path_to_limits2)
        plotter.plot_fixed_mA()
        plotter.plot_fixed_mH()
