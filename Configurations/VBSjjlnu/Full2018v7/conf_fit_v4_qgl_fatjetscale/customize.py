#test
from collections import OrderedDict
import re
from pprint import pprint


#Order of sample for plot in top_only 
plots_top_order = [ "vbfV+VV+VVV", 'Vg+VgS', 'DY', 'Fake', 'Wjets','top','VBS']
plots_wjets_order = [ "vbfV+VV+VVV", 'Vg+VgS', 'DY', 'Fake', 'top','Wjets', 'VBS']

# '#FF3D00',F57C00
wjets_palette = ['#FFC400','#FFAB00', '#FF6D00','#FF3D00','#DD2C00']


def filter_cuts(cuts, filter):
    new_cuts = {}
    for k, c in cuts.items():
        if re.search(filter, k):
            new_cuts[k] = c 
    return new_cuts

def reorder_plots(groupPlot, order):
    new_group = OrderedDict()
    for g in order:
        new_group[g] = groupPlot[g]
    return new_group



def customize(samples,cuts,variables,nuisances,plot,groupPlot, key=None):
    if key=="top_only":
        new_cuts = filter_cuts(cuts, r".*_topcr_.*")
        new_groupPlot = reorder_plots(groupPlot,  plots_top_order)
        return samples, new_cuts, variables, nuisances, plot, new_groupPlot

    if key=="wjets_only":
        new_cuts = filter_cuts(cuts, r".*_wjetcr_.*")
        new_groupPlot = reorder_plots(groupPlot,  plots_wjets_order)
        return samples, new_cuts, variables, nuisances, plot, new_groupPlot

    if key=="signal_only":
        new_cuts = filter_cuts(cuts, r".*_sig_.*")
        new_groupPlot = reorder_plots(groupPlot,  plots_wjets_order)
        return samples, new_cuts, variables, nuisances, plot, new_groupPlot
    
    else:
        return samples,cuts,variables,nuisances,plot,groupPlot