import argparse
import json 
import os
import re

import numpy as np
import matplotlib.pyplot as plt
import mplhep as hep

from plot_utils import CMSSW_BASE
from plot_utils import PlotMeta


plt.style.use(hep.style.CMS)

class BrazilianPlotter:

    tanb = 1
    BRAZILIAN_BLUE = "#002776"
    BRAZILIAN_GREEN = "#009C3B"
    BRAZILIAN_GOLD = "#FFDF00"

    def __init__(self, year, path_to_limits):
        self.year = year
        self.path_to_limits = path_to_limits
        self.thdmc_brs = self.load_thdmc()
        self.brasilians = self.load_brasilians()
        print(f"Plotting {year}, {path_to_limits}")


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
        hep.cms.label(ax=ax, llabel="Work in progress", data=True,
            lumi=PlotMeta.YEAR_LUMI_MAP[self.year],
            year=PlotMeta.UL_YEAR_MAP[self.year],
            fontsize=22.5)
        ax.set_ylabel(r"$\sigma(A) \times BR(A\rightarrow ZH) \times BR(H\rightarrow t\bar{t}) \times BR(Z\rightarrow l\bar{l})  [{pb}]$", fontsize=18.5)
        ax.set_yscale("log")

    def plot_fixed_mA(self):
        fig, ax = plt.subplots(figsize=(10, 12))
        num = 0
        for mA, mHs in self.brasilians["mA_fixed"].items():
            limits = np.array([self.load_limits(mA, mH) for mH in mHs])
            l1 =ax.fill_between(mHs, limits[:, 0]*float(pow(10,num)), limits[:, 4]*float(pow(10,num)), color=self.BRAZILIAN_GOLD)
            l2 = ax.fill_between(mHs, limits[:, 1]*float(pow(10,num)), limits[:, 3]*float(pow(10,num)), color=self.BRAZILIAN_GREEN)
            l3, = ax.plot(mHs, limits[:, 2]*float(pow(10,num)), marker='D', linestyle='--', color=self.BRAZILIAN_BLUE)
            ax.annotate(fr'$m_A = {mA}$ $(x1E{num})$',xy=(min(2100,max(mHs))+50 , (limits[-1][2]*float(pow(10,num)))*0.5 ), xycoords='data', horizontalalignment='left', fontsize=12)
            num = num + 1
        ax.legend((l1, l2, l3), ('2 std. deviation', '1 std. deviation', 'Expected CLs'), loc='lower right', shadow=False, fontsize=16)
        ax.set_xlim(250,2600)
        ax.set_xlabel(fr"$m_H$ [GeV]", fontsize=19.5)
        self.plot_common(ax)

        os.makedirs(os.path.join(self.path_to_limits, "plot_output_all/brasilians_stacked"), exist_ok=True)
        fname = f"MA_fixed_{self.year}"
        plt.savefig(os.path.join(self.path_to_limits, f"plot_output_all/brasilians_stacked/{fname}.png"))
        plt.savefig(os.path.join(self.path_to_limits, f"plot_output_all/brasilians_stacked/{fname}.pdf"))
        plt.close()

    def plot_fixed_mH(self):
        fig, ax = plt.subplots(figsize=(12, 8))
        num=0
        for mH, mAs in self.brasilians["mH_fixed"].items():
            limits = np.array([self.load_limits(mA, mH) for mA in mAs])
            l1 = ax.fill_between(mAs, limits[:, 0]*float(pow(10,num)), limits[:, 4]*float(pow(10,num)), color=self.BRAZILIAN_GOLD)
            l2 = ax.fill_between(mAs, limits[:, 1]*float(pow(10,num)), limits[:, 3]*float(pow(10,num)), color=self.BRAZILIAN_GREEN)
            l3, = ax.plot(mAs, limits[:, 2]*float(pow(10,num)), marker='D', linestyle='--', color=self.BRAZILIAN_BLUE)
            ax.annotate(fr'$m_H = {mH}$ $(x1E{num}$)',xy=(min(2100,max(mAs))+35 , (limits[-1][2]*float(pow(10,num)))*0.21 ), xycoords='data', horizontalalignment='left', verticalalignment='bottom', fontsize=11.5)
            num=num+1
        ax.legend((l1, l2, l3), ('2 std. deviation', '1 std. deviation', 'Expected CLs'), loc='upper left', shadow=False, fontsize=18)
        ax.set_xlim(250,2600)
        ax.set_xlabel(fr"$m_A$ [GeV]", fontsize=22)
        self.plot_common(ax)

        os.makedirs(os.path.join(self.path_to_limits, "plot_output_all/brasilians_stacked"), exist_ok=True)
        fname = f"MH_fixed_{self.year}"
        plt.savefig(os.path.join(self.path_to_limits, f"plot_output_all/brasilians_stacked/{fname}.png"))
        plt.savefig(os.path.join(self.path_to_limits, f"plot_output_all/brasilians_stacked/{fname}.pdf"))
        plt.close()


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--path_to_limits", type=str, help="Name of the directory containing the inputs.")
    parser.add_argument("--year", type=str, help="all/UL16/UL17/UL18")
    args = parser.parse_args()


    if args.year in ["UL16preVFP", "UL16postVFP", "UL17", "UL18", "ULCombined"]:
        YEARS = [args.year]
    if args.year == "all":
        YEARS = ["UL16preVFP", "UL16postVFP", "UL17", "UL18", "ULCombined"]

    for year in YEARS:
        plotter = BrazilianPlotter(year=year, path_to_limits=args.path_to_limits)
        plotter.plot_fixed_mA()
        plotter.plot_fixed_mH()
