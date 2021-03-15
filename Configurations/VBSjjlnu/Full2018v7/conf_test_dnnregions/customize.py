#test
from collections import OrderedDict, defaultdict
import re
import os
from pprint import pprint


#Order of sample for plot in top_only 
plots_top_order_res = [  'VV+VVV', 'DY', "Others",'Fake', 'Wjets','top','VBS']
plots_wjets_order_res = [  'VV+VVV', 'DY', "Others", 'top','Fake',  'Wjets', 'VBS']
plots_top_order_boost = [  'VV+VVV',  'DY', "Others",'Fake', 'Wjets','top','VBS']
plots_wjets_order_boost = [  'VV+VVV', 'DY', "Others",'top','Fake','Wjets', 'VBS']

# '#FF3D00',F57C00
wjets_palette = ['#FFC400','#FFAB00', '#FF6D00','#FF3D00','#DD2C00','#c41e08']

signal_for_bins = '#eb21a1'


def filter_cuts(cuts, filter):
    new_cuts = {}
    for k, c in cuts.items():
        if re.search(filter, k):
            new_cuts[k] = c 
    return new_cuts

def filter_plots(filt, plots, groupPlots):
    new_plots = OrderedDict()
    new_groups = OrderedDict()
    for p,pl in plots.items():
        if filt in p:
            new_plots[p] = pl 
    for p,pl in groupPlots.items():
        if filt in p:
            new_groups[p] = pl 
    return new_plots, new_groups




def customize(samples,cuts,variables,nuisances,plot,groupPlot, key=None):
    if key=="res":
        new_cuts = filter_cuts(cuts, r"res_.*")
        new_plot , new_groupPlot = filter_plots("res", plot, groupPlot)
        return samples, new_cuts, variables, nuisances, new_plot, new_groupPlot

    if key=="boost":
        new_cuts = filter_cuts(cuts, r"boost_.*")
        new_plot , new_groupPlot = filter_plots("boost", plot, groupPlot)
        return samples, new_cuts, variables, nuisances, new_plot, new_groupPlot

    if key=="signal_vbsbins":
        new_cuts = filter_cuts(cuts, r".*_sig_.*")
        new_plot , new_groupPlot = filter_plots("res", plot, groupPlot)
        new_variables = {"vbs_1_pt": variables["vbs_1_pt"]}
        return samples, new_cuts, new_variables, nuisances, plot, new_groupPlot
    else:
        return samples,cuts,variables,nuisances,plot,groupPlot



