import argparse
import json
import os
import re

import numpy as np
import matplotlib.pyplot as plt

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

    def load_limits(self, mA, mH, path):
        with open(os.path.join(path, f"CL_MA-{mA}_MH-{mH}.log"), 'r') as f:
            flines = [x for x in f if x.startswith("Expected")]
            limit_vals = []
            for line in flines:
                pct_val = float(re.findall(r"\d.\d+", line.split("<")[1])[0])
                limit_vals.append(pct_val)
            return limit_vals[2]

    def load_brasilians(self):
        with open("signals_mod.txt", 'r') as f:
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

    def plot_common(self, ax):
        ax.set_ylabel(r"$\frac{\sigma(A)\times BR(A\rightarrow ZH)\times BR(H\rightarrow t\bar{t})\times BR(Z\rightarrow l\bar{l})}{\sigma(A)\times BR(A\rightarrow ZH)\times BR(H\rightarrow t\bar{t})\times BR(Z\rightarrow l\bar{l})}  [{pb}]$")
        ax.legend()
        ax.set_yscale("log")
    
    def plot_fixed_mH(self, mH_value):
        mHs = [mH_value]
        for mH in mHs:
            print(f"-- MH fixed at {mH} GeV")
            ratios_all = []
            mAs = self.brasilians["mH_fixed"][mH]
            for mA in mAs:
                limit1 = self.load_limits(mA, mH, self.path_to_limits)
                limit2 = self.load_limits(mA, mH, self.path_to_limits2)
                ratio = limit1 / limit2
                ratios_all.append(ratio)

        # Plot the ratios
        fig, ax = plt.subplots(figsize=(12, 8))
        ax.plot(mAs, ratios_all, marker='D', linestyle='-', color=self.BRAZILIAN_BLUE, label=f"MH={mH}")

        ax.set_xlabel(fr"$m_A$ [GeV]")
        ax.set_ylabel("Ratio of Expected limits - with 3j SR/without 3j SR")
        ax.legend()
        ax.set_yscale("log")

        os.makedirs(os.path.join(self.path_to_limits, "plot_output/brazilians_ratio"), exist_ok=True)
        fname = f"MH-{mH}_ratio"
        plt.savefig(os.path.join(self.path_to_limits, f"plot_output/brazilians_ratio/{fname}.png"))
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
        plotter.plot_fixed_mH(500)
