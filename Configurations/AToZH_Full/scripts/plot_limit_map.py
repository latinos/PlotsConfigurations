import argparse
import json
import os
import re


import numpy as np
import matplotlib.pyplot as plt
from matplotlib.tri import Triangulation, LinearTriInterpolator
import mplhep as hep

from plot_utils import CMSSW_BASE
from plot_utils import PlotMeta

plt.style.use(hep.style.CMS)


class MassPlaneContourPlotter:

    def __init__(self, year, path_to_limits):#, channel, regions):
        self.year = year
        self.path_to_limits = path_to_limits
        self.thdmc_brs = self.load_thdmc()
        self.mass_points = self.load_mass_points()

    def load_thdmc(self):
        with open(f"AToZH_xsc_br_results.json", 'r') as f:
            return json.load(f)

    def load_limit(self, mA, mH):
        with open(os.path.join(self.path_to_limits, f"CL_MA-{mA}_MH-{mH}.log"), 'r') as f:
            flines = [x for x in f if x.startswith("Expected")]
            limit_vals = []
            for line in flines:
                pct_val = float(re.findall(r"\d.\d+", line.split("<")[1])[0])
                limit_vals.append(pct_val)

            return limit_vals[2]

    def load_mass_points(self):
        with open("signals_comb.txt", 'r') as f:
            mass_points = np.array([(int(re.findall(r"\d+", x)[0]), int(re.findall(r"\d+", x)[1])) for x in f])
        return mass_points

    def compute_theory_value(self, mA, mH):
        try:
            br_z_ll = 0.1
            br_h_tt = self.thdmc_brs[f"{mA},{mH}"]["HtottBR"]
            br_a_zh = self.thdmc_brs[f"{mA},{mH}"]["AtoZHBR"]
            xsec_a = self.thdmc_brs[f"{mA},{mH}"]["xsec_ggH"]
        except KeyError:
            return 1
        return xsec_a*br_a_zh*br_h_tt*br_z_ll

    def plot_contour(self):
        fig, ax = plt.subplots(figsize=(11, 8))
        expected_values = np.array(
            [self.load_limit(MA, MH) for MA, MH in zip(self.mass_points[:, 0], self.mass_points[:, 1])]
        )

        triObj = Triangulation(self.mass_points[:, 0], self.mass_points[:, 1])
        f_interpolate = LinearTriInterpolator(triObj, expected_values)
        expected_values_interpolated = f_interpolate(self.mass_points[:, 0], self.mass_points[:, 1])


        theory_values = np.array(
            [self.compute_theory_value(MA, MH) for MA, MH in zip(self.mass_points[:, 0], self.mass_points[:, 1])]
        )
        theory_limit_ratio = theory_values / expected_values_interpolated
        
        orig_map=plt.cm.get_cmap('RdYlBu') 
        reversed_map = orig_map.reversed() 
        contour = ax.tricontourf(self.mass_points[:, 0], self.mass_points[:, 1], expected_values, levels=20, cmap=reversed_map)

        fig.colorbar(contour, ax=ax, label=r"Expected $CL_S$ $\sigma$ $\cdot$ B [pb]")
        ax.set_xlabel(r"m$_{A}$ [GeV]")
        ax.set_ylabel(r"m$_{H}$ [GeV]")
        ax.set_xlim(325, 2110)
        ax.set_ylim(320, 2025)

        hep.cms.label(ax=ax, llabel="Work in progress", loc=3, data=True,
            lumi=PlotMeta.YEAR_LUMI_MAP[self.year],
            year=PlotMeta.UL_YEAR_MAP[self.year],
            fontsize=25)

        os.makedirs(os.path.join(self.path_to_limits, "plot_output/contours"), exist_ok=True)
        fname = "limit_map_tanb1"
        plt.savefig(os.path.join(self.path_to_limits, f"plot_output/contours/{fname}.png"))
        plt.savefig(os.path.join(self.path_to_limits, f"plot_output/contours/{fname}.pdf"))
        plt.close()

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--path_to_limits", type=str, help="Name of the directory containing the inputs.")
    parser.add_argument("--year", type=str, help="all/UL16/UL17/UL18/combined")
    args = parser.parse_args()


    if args.year in ["UL16preVFP", "UL16postVFP", "UL17", "UL18", "ULCombined"]:
        YEARS = [args.year]
    if args.year == "all":
        YEARS = ["UL16preVFP", "UL16postVFP", "UL17", "UL18", "ULCombined"]

    for year in YEARS:
        plotter = MassPlaneContourPlotter(year=year, path_to_limits=args.path_to_limits)
        plotter.plot_contour()
