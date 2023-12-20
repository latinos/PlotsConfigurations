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

    def __init__(self, year, path_to_logs):#, channel, regions):
        self.year = year
        self.path_to_logs = path_to_logs
        self.mass_points = self.load_mass_points()

    def load_significance(self, mA, mH):
        with open(os.path.join(self.path_to_logs, f"ExpSig_MA-{mA}_MH-{mH}.log"), 'r') as f:
            file_content = f.read()
            matches = re.search(r"Significance: ([\d.]*)", file_content)
            if matches:
                return float(matches.group(1))
            else:
                print(f"Error, no value for significance found for (mA,mH) = ({mA},{mH})")
                return 0

    def load_mass_points(self):
        with open("signals.txt", 'r') as f:
            mass_points = np.array([(int(re.findall(r"\d+", x)[0]), int(re.findall(r"\d+", x)[1])) for x in f])
        return mass_points

    def plot_contour(self):
        fig, ax = plt.subplots(figsize=(11, 8))
        expected_values = np.array(
            [self.load_significance(MA, MH) for MA, MH in zip(self.mass_points[:, 0], self.mass_points[:, 1])]
        )

        triObj = Triangulation(self.mass_points[:, 0], self.mass_points[:, 1])
        f_interpolate = LinearTriInterpolator(triObj, expected_values)
        expected_values_interpolated = f_interpolate(self.mass_points[:, 0], self.mass_points[:, 1])

        contour = ax.tricontourf(self.mass_points[:, 0], self.mass_points[:, 1], expected_values, levels=10, cmap="viridis")
        ax.scatter(self.mass_points[:, 0], self.mass_points[:, 1], color="orange", s=15)

        fig.colorbar(contour, ax=ax, label=r"Expected Significance")
        ax.set_xlabel(r"m$_{A}$ [GeV]")
        ax.set_ylabel(r"m$_{H}$ [GeV]")
        ax.set_xlim(475, 2110)
        ax.set_ylim(320, 2025)

        hep.cms.label(ax=ax, llabel="Work in progress", loc=3, data=True,
            lumi=PlotMeta.YEAR_LUMI_MAP[self.year],
            year=PlotMeta.UL_YEAR_MAP[self.year],
            fontsize=25)

        os.makedirs(os.path.join(self.path_to_logs, "plot_output/contours"), exist_ok=True)
        fname = "mass_plane_significance_tanb1"
        plt.savefig(os.path.join(self.path_to_logs, f"plot_output/contours/{fname}.png"))
        plt.savefig(os.path.join(self.path_to_logs, f"plot_output/contours/{fname}.pdf"))
        plt.close()

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--path_to_logs", type=str, help="Name of the directory containing the inputs.")
    parser.add_argument("--year", type=str, help="all/UL16preVFP(noHIPM)/UL16postVFP(HIPM)/UL17/UL18/combined")
    args = parser.parse_args()


    if args.year in ["UL16preVFP", "UL16postVFP", "UL17", "UL18", "ULCombined"]:
        YEARS = [args.year]
    if args.year == "all":
        YEARS = ["UL16preVFP", "UL16postVFP", "UL17", "UL18", "ULCombined"]

    for year in YEARS:
        plotter = MassPlaneContourPlotter(year=year, path_to_logs=args.path_to_logs)
        plotter.plot_contour()
