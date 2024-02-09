#!/nfs/dust/cms/user/hundhad/anaconda3/envs/py39/bin/python
import os

import matplotlib.pyplot as plt


def CMSSW_BASE():
    cwd = os.getcwd()
    cmssw_path = "/afs/cern.ch/user/m/mihawksw/private/azh/analysis/CMSSW_10_6_28"
    return cmssw_path


class PlotMeta:

    YEAR_LUMI_MAP = {
        "UL18": 59.8,
        "UL17": 41.5,
        "UL16": 36.3,
        "ULCombined": 138,
        "UL16preVFP": 19.5,
        "UL16postVFP": 16.8,
        "ULCombined": 137,
    }

    UL_YEAR_MAP = {
        "UL18": 2018,
        "UL17": 2017,
        "UL16": 2016,
        "UL16preVFP": "2016 preVFP",
        "UL16postVFP": "2016 postVFP",
        "ULCombined": "Full Run II"
   }

    CMAP = plt.cm.get_cmap("Set3")

    LLABEL = "Private work"

    def year(self, ul_year: str):
        return self.UL_YEAR_MAP[ul_year]

    def lumi(self, ul_year: str):
        return self.YEAR_LUMI_MAP[ul_year]

    def xlabel(self, obs: str):
        return self.OBS_XLABEL_MAP[obs]

    def colors(self, processes: list):
        id_map = {
            "AtoZH": 8,
            "VVV": 0,
            "TT": 1,
            "TTZ": 2,
            "QCD": 3,
            "VV": 4,
            "SingleTop": 5,
            "TTW": 6,
        }

        return [self.CMAP.colors[id_map[p]] for p in processes]


class map_region_int_to_str:
    single_region_map = {
        "all": "All Control Regions",
        0: "SignalRegion",
        5: "SRonebjet",
        51: "CR_WZ",
    }

    def __getitem__(self, i):
        if isinstance(i, str) or isinstance(i, int):
            return self.single_region_map[i]
        if isinstance(i, list):
            return '\n+'.join([self.single_region_map[x] for x in i])


map_year_lumi = {
    'UL18': 59.83,
    'UL17': 41.48,
    'UL16preVFP': 19.5,
    'UL16postVFP': 16.8,
}


map_ul_year = {
    'UL18': 2018,
    'UL17': 2017,
    'UL16preVFP': 2016,
    'UL16postVFP': 2016,
}



def errorband(
    H_band,  # value array if error band is symmetric / tuple of upper and lower value arrays
    bins,  # corresponding to bin edges of the hist values supplied in H_band
    label=None,
    edges=True,
    ax=None,
    **kwargs,
):
    # ax check
    if ax is None:
        ax = plt.gca()
    else:
        if not isinstance(ax, plt.Axes):
            raise ValueError("ax must be a matplotlib Axes object")

    # Construction of upper and lower boundries
    y_upper = H_band[0]
    y_lower = H_band[1]

    error_band_args = {
        "edges": bins, "facecolor": "none", "linewidth": 0,
        "alpha": .9, "color": "black", "hatch": "///"
    }
    ax.stairs(y_upper, baseline=y_lower, label=label, **{**error_band_args, **kwargs})


if __name__ == "__main__":
    pass

