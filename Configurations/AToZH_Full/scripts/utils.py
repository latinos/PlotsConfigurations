import copy

import matplotlib.patches as mpatches
import numpy as np
import scipy.integrate as integrate


class Ellipse():

    def __init__(self, mean_x, mean_y, width, height, angle, n_std):
        self.mean_x = mean_x
        self.mean_y = mean_y
        self.width = width
        self.height = height
        self.angle = angle
        self.rad_angle = np.radians(angle)
        self.semi_w = width / 2
        self.semi_h = height / 2
        self.n_std = n_std

    def set_width(self, value):
        self.width = value
        self.semi_w = value / 2

    def set_height(self, value):
        self.height = value
        self.semi_h = value / 2

    def rescale_axes(self, factor):
        width = self.width * factor
        height = self.height * factor
        self.set_width(width)
        self.set_height(height)

    def get_plt_patch(self, color):
        mean = (self.mean_x, self.mean_y)
        ell = mpatches.Ellipse(xy=mean, width=self.width, height=self.height,
                               angle=self.angle, edgecolor=color, fc='None',
                               lw=2, zorder=4)
        return ell

    def pct_points_in(self, x_vals, y_vals, weights):
        p_in = 0
        norm = np.sum(weights)
        for x, y, w in zip(x_vals, y_vals, weights):
            if self.is_point_included(x, y):
                p_in += w / norm
        return p_in

    def is_point_included(self, x, y):
        cos = np.cos(self.rad_angle)
        sin = np.sin(self.rad_angle)
        n1 = (cos * (x - self.mean_x) + sin * (y - self.mean_y)) ** 2
        n2 = (sin * (x - self.mean_x) - cos * (y - self.mean_y)) ** 2
        v = n1 / self.semi_w ** 2 + n2 / self.semi_h ** 2
        return v < 1

    def rescale_to_nstd(self, x_vals, y_vals, weights):
        target = integrate.quad(normal_distribution, -self.n_std, self.n_std)[0]
        pct_in = self.pct_points_in(x_vals, y_vals, weights)
        required_accuracy = 1  # in percent
        f_scale = 1
        i = 1
        while abs(target - pct_in) * 100 > required_accuracy:
            self.rescale_axes(f_scale)
            pct_in = self.pct_points_in(x_vals, y_vals, weights)
            if i > 1900:
                print(target - pct_in)
            if pct_in < 1e-4:
                f_scale = 2
            else:
                f_scale = (target / pct_in) ** 0.1

            assert (i < 2000), "Rescaling got stuck"
            i += 1


CHANNEL_ID_MAP = {
    "diMuon": 13**2,
    "diElectron": 11**2,
    "ElectronMuon": 11 * 13
}


REGION_ID_MAP = {
    "SignalRegion": 0,
    "CRZMassSidebands": 11,
    "CRZMassSidebands1BTagged": 111,
    "CRZMassSidebands0BTagged": 110,
    "CRSameSignLeptons": 12,
    "CR0BTaggedJets": 13,
    "CR1BTaggedJets": 14,
    "CRDiffLeptonFlavours": 15,
    "SRFiveJets": 5,
    "CRFiveJets1BTagged": 51,
    "CRFiveJets0BTagged": 50,
    "CRFiveJetsZMassSidebands": 512,
    "CRFiveJetsZMassSidebands0BTagged": 510,
    "CRFiveJetsZMassSidebands1BTagged": 511
}


def normal_distribution(x: float):
    return 1 / np.sqrt(2 * np.pi) * np.exp(-0.5 * x ** 2)


def weighted_median(data, weights):
    """
    Args:
      data (list or numpy.array): data
      weights (list or numpy.array): weights
    """
    data = np.array(data).squeeze()
    weights = np.array(weights).squeeze()

    s_data, s_weights = map(np.array, zip(*sorted(zip(data, weights))))
    midpoint = 0.5 * sum(s_weights)
    if any(weights > midpoint):
        w_median = (data[weights == np.max(weights)])[0]
    else:
        cs_weights = np.cumsum(s_weights)
        idx = np.where(cs_weights <= midpoint)[0][-1]
        if cs_weights[idx] == midpoint:
            w_median = np.mean(s_data[idx:idx + 2])
        else:
            w_median = s_data[idx + 1]
    return w_median


def split_ul16(_years: list):
    years = copy.deepcopy(_years)
    if "UL16" in years:
        years.remove("UL16")
        years.append("UL16preVFP")
        years.append("UL16postVFP")
    return years


def pt_of_z_edge(m_a, m_h, m_z=91.187):
    """
    Returns the value of the characteristic p_t(Z) edge in the AZH
    decay for a given combination of m_A and m_H.
    """
    x = (m_a**2 - m_h**2 - m_z**2) ** 2 - 4 * m_h**2 * m_z**2
    return 1 / (2 * m_a) * np.sqrt(x)


def collection_key(x):
    """
    Utility to make a key out of a collection plus
    position tuple provided in config.yaml
    """
    if isinstance(x, list):
        return f"{x[0]}_{x[1]}"
    else:
        return x


def is_valid_set(channel, region, svar):
    return not (
        # 2D Binning only implemented in Signal Region
        # Other regions lack statistics for scaling.
        svar in ["ellipses", "2DEllipses"] and not channel.startswith("di")
        # Make sure no Electron or Muon observables
        # are included in channel without either.
        or "Elec" in svar and channel == "diMuon"
        or "Muon" in svar and channel == "diElectron"
        or (
            channel == "ElectronMuon"
            and ("Elec" in svar or "Muon" in svar)
            and (svar[-1] == '2' or svar[-3] == '2')
        )
    )

