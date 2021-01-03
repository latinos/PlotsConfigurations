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

def reorder_plots(groupPlot, order):
    new_group = OrderedDict()
    for g in order:
        new_group[g] = groupPlot[g]
    pprint(new_group)
    return new_group



def define_bins_res(groupPlot,plot, plot_order):
    new_plots = { k:v for k,v in plot.items() if k != "Wjets_HT"}
    new_group =  { k:v for k,v in groupPlot.items() if k != "Wjets"}
    wjets_list = []
    for ir in range(1,7):
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
    new_order = [ ]
    for o in plot_order:
        if o == "Wjets":
            new_order += wjets_list
        else:
            new_order.append(o)
    new_group = reorder_plots(new_group, new_order )

    new_group['VBS']['color'] = signal_for_bins
    return new_group, new_plots

def define_bins_boost(groupPlot,plot, plot_order):
    new_plots = { k:v for k,v in plot.items() if k != "Wjets_HT"}
    new_group =  { k:v for k,v in groupPlot.items() if k != "Wjets"}
    wjets_list = []
    for ir in range(1,6):
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
    new_order = [ ]
    for o in plot_order:
        if o == "Wjets":
            new_order += wjets_list
        else:
            new_order.append(o)
    new_group = reorder_plots(new_group, new_order )

    new_group['VBS']['color'] = signal_for_bins
    return new_group, new_plots


def get_wjets_scaling(path):
    import pandas
    norm_factors = defaultdict(dict)
    df = pandas.read_csv(path, sep=";")
    for a, row in df.iterrows():
        norm_factors[row.bin][row.channel] = row.weight
        norm_factors[row.bin][row.channel.replace("wjetcr","topcr")] = row.weight
        norm_factors[row.bin][row.channel.replace("wjetcr","sig")] = row.weight
    return norm_factors


def scaleBins(plot, norm_factors):
    for bin, w in norm_factors.items():
       if bin not in plot: continue
       plot[bin]['cuts'] = w
       plot[bin].pop("scale")
    # for s,v in plot.items():
    #     print s
    #     pprint(v)
    return plot



def customize(samples,cuts,variables,nuisances,plot,groupPlot, key=None):
    if key=="top_boost":
        new_cuts = filter_cuts(cuts, r"boost_topcr_.*")
        new_groupPlot = reorder_plots(groupPlot,  plots_top_order_boost)
        return samples, new_cuts, variables, nuisances, plot, new_groupPlot

    if key=="wjets_boost":
        new_cuts = filter_cuts(cuts, r"boost_wjetcr_.*")
        new_groupPlot = reorder_plots(groupPlot,  plots_wjets_order_boost)
        return samples, new_cuts, variables, nuisances, plot, new_groupPlot

    if key=="signal_boost":
        new_cuts = filter_cuts(cuts, r"boost_sig_.*")
        new_groupPlot = reorder_plots(groupPlot,  plots_wjets_order_boost)
        return samples, new_cuts, variables, nuisances, plot, new_groupPlot
    
    if key=="top_res":
        new_cuts = filter_cuts(cuts, r"res_topcr_.*")
        new_groupPlot = reorder_plots(groupPlot,  plots_top_order_res)
        return samples, new_cuts, variables, nuisances, plot, new_groupPlot

    if key=="wjets_res":
        new_cuts = filter_cuts(cuts, r"res_wjetcr_.*")
        new_groupPlot = reorder_plots(groupPlot,  plots_wjets_order_res)
        return samples, new_cuts, variables, nuisances, plot, new_groupPlot

    if key=="signal_res":
        new_cuts = filter_cuts(cuts, r"res_sig_.*")
        new_groupPlot = reorder_plots(groupPlot,  plots_wjets_order_res)
        return samples, new_cuts, variables, nuisances, plot, new_groupPlot

    ###########################################
    if key=="bins_wjets_res":
        new_cuts = filter_cuts(cuts, r"res_wjetcr_.*")
        new_groupPlot, new_plot = define_bins_res(groupPlot, plot, plots_wjets_order_res)
        return samples, new_cuts, variables, nuisances, new_plot, new_groupPlot
    if key=="bins_top_res":
        new_cuts = filter_cuts(cuts, r"res_topcr_.*")
        new_groupPlot, new_plot = define_bins_res(groupPlot, plot, plots_top_order_res)
        return samples, new_cuts, variables, nuisances, new_plot, new_groupPlot
    if key=="bins_signal_res":
        new_cuts = filter_cuts(cuts, r"res_sig_.*")
        new_groupPlot, new_plot = define_bins_res(groupPlot, plot, plots_wjets_order_res)
        return samples, new_cuts, variables, nuisances, new_plot, new_groupPlot
    
    if key=="bins_wjets_boost":
        new_cuts = filter_cuts(cuts, r"boost_wjetcr_.*")
        new_groupPlot, new_plot = define_bins_boost(groupPlot, plot, plots_wjets_order_boost)
        return samples, new_cuts, variables, nuisances, new_plot, new_groupPlot
    if key=="bins_top_boost":
        new_cuts = filter_cuts(cuts, r"boost_topcr_.*")
        new_groupPlot, new_plot = define_bins_boost(groupPlot, plot, plots_top_order_boost)
        return samples, new_cuts, variables, nuisances, new_plot, new_groupPlot
    if key=="bins_signal_boost":
        new_cuts = filter_cuts(cuts, r"boost_sig_.*")
        new_groupPlot, new_plot = define_bins_boost(groupPlot, plot, plots_wjets_order_boost)
        return samples, new_cuts, variables, nuisances, new_plot, new_groupPlot
    
    ######################################
    if key == "wjets_rescale_res":
        norm_factors = get_wjets_scaling(os.path.dirname(__file__) + "/wjets_norm/all.txt")
        new_cuts = filter_cuts(cuts, r"res_wjetcr_.*")
        new_groupPlot, new_plot = define_bins_res(groupPlot, plot, plots_wjets_order_res)
        scale_plot = scaleBins(new_plot,  norm_factors)
        return samples, new_cuts, variables, nuisances, scale_plot, new_groupPlot
    if key == "wjets_rescale_boost":
        norm_factors = get_wjets_scaling(os.path.dirname(__file__) + "/wjets_norm/all.txt")
        new_cuts = filter_cuts(cuts, r"boost_wjetcr_.*")
        new_groupPlot, new_plot = define_bins_boost(groupPlot, plot, plots_wjets_order_boost)
        scale_plot = scaleBins(new_plot,  norm_factors)
        return samples, new_cuts, variables, nuisances, scale_plot, new_groupPlot
    if key == "signal_rescale_res":
        norm_factors = get_wjets_scaling(os.path.dirname(__file__) + "/wjets_norm/all.txt")
        new_cuts = filter_cuts(cuts, r"res_sig_.*")
        new_groupPlot, new_plot = define_bins_res(groupPlot, plot, plots_wjets_order_res)
        scale_plot = scaleBins(new_plot,  norm_factors)
        return samples, new_cuts, variables, nuisances, scale_plot, new_groupPlot
    if key == "signal_rescale_boost":
        norm_factors = get_wjets_scaling(os.path.dirname(__file__) + "/wjets_norm/all.txt")
        new_cuts = filter_cuts(cuts, r"boost_sig_.*")
        new_groupPlot, new_plot = define_bins_boost(groupPlot, plot, plots_wjets_order_boost)
        scale_plot = scaleBins(new_plot,  norm_factors)
        return samples, new_cuts, variables, nuisances, scale_plot, new_groupPlot
    if key == "top_rescale_res":
        norm_factors = get_wjets_scaling(os.path.dirname(__file__) + "/wjets_norm/all.txt")
        new_cuts = filter_cuts(cuts, r"res_topcr_.*")
        new_groupPlot, new_plot = define_bins_res(groupPlot, plot, plots_top_order_res)
        scale_plot = scaleBins(new_plot, norm_factors)
        return samples, new_cuts, variables, nuisances, scale_plot, new_groupPlot
    if key == "top_rescale_boost":
        norm_factors = get_wjets_scaling(os.path.dirname(__file__) + "/wjets_norm/all.txt")
        new_cuts = filter_cuts(cuts, r"boost_topcr_.*")
        new_groupPlot, new_plot = define_bins_boost(groupPlot, plot, plots_top_order_boost)
        scale_plot = scaleBins(new_plot,  norm_factors)
        return samples, new_cuts, variables, nuisances, scale_plot, new_groupPlot

    if key == "wjets_rescale_res_nobins":
        norm_factors = get_wjets_scaling(os.path.dirname(__file__) + "/wjets_norm/all.txt")
        new_cuts = filter_cuts(cuts, r"res_wjetcr_.*")
        scale_plot = scaleBins(plot,  norm_factors)
        new_groupPlot = reorder_plots(groupPlot,  plots_wjets_order_res)
        return samples, new_cuts, variables, nuisances, scale_plot, groupPlot
    if key == "top_rescale_res_nobins":
        norm_factors = get_wjets_scaling(os.path.dirname(__file__) + "/wjets_norm/all.txt")
        new_cuts = filter_cuts(cuts, r"res_topcr_.*")
        scale_plot = scaleBins(plot, norm_factors)
        new_groupPlot = reorder_plots(groupPlot,  plots_top_order_res)
        return samples, new_cuts, variables, nuisances, scale_plot, new_groupPlot

    else:
        return samples,cuts,variables,nuisances,plot,groupPlot



