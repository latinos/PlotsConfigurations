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



def define_bins_res(groupPlot,plot):
    new_plots = { k:v for k,v in plot.items() if k != "Wjets_HT"}
    new_group =  { k:v for k,v in groupPlot.items() if k != "Wjets"}
    wjets_list = []
    for ir in range(1,6):
        sname = "Wjets_HT_res_"+str(ir)
        wjets_list.append(sname)
        new_plots[sname] = {
                'color': 1,
                 'isSignal' : 0,
                 'isData'   : 0, 
                 'scale'    : 1.0 
        }
        new_group[sname] = {
            'nameHR' : 'W+Jets bin'+str(ir),
            'isSignal' : 0,
            'color':   wjets_palette[ir-1],
            'samples'  : [sname],
            'fill': 1001
        }
    new_group = reorder_plots(new_group, [ "vbfV+VV+VVV", 'Vg+VgS', 'DY', 'Fake', 'top'] + wjets_list + ['VBS'] )
    return new_group, new_plots

def define_bins_boost(groupPlot,plot):
    new_plots = { k:v for k,v in plot.items() if k != "Wjets_HT"}
    new_group =  { k:v for k,v in groupPlot.items() if k != "Wjets"}
    wjets_list = []
    for ir in range(1,5):
        sname = "Wjets_HT_boost_"+str(ir)
        wjets_list.append(sname)
        new_plots[sname] = {
                'color': 1,
                 'isSignal' : 0,
                 'isData'   : 0, 
                 'scale'    : 1.0 
        }
        new_group[sname] = {
            'nameHR' : 'W+Jets bin'+str(ir),
            'isSignal' : 0,
            'color':   wjets_palette[ir-1],
            'samples'  : [sname],
            'fill': 1001
        }
    new_group = reorder_plots(new_group, [ "vbfV+VV+VVV", 'Vg+VgS', 'DY', 'Fake', 'top'] + wjets_list + ['VBS'] )
    return new_group, new_plots




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

    if key=="bins_res":
        new_cuts = filter_cuts(cuts, r"res_.*_.*")
        new_groupPlot, new_plot = define_bins_res(groupPlot, plot)
        return samples, new_cuts, variables, nuisances, new_plot, new_groupPlot

    if key=="bins_boost":
        new_cuts = filter_cuts(cuts, r"boost_.*_.*")
        new_groupPlot, new_plot = define_bins_boost(groupPlot, plot)
        return samples, new_cuts, variables, nuisances, new_plot, new_groupPlot
    
    else:
        return samples,cuts,variables,nuisances,plot,groupPlot