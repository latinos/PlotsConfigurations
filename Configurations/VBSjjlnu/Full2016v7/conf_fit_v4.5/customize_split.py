#test
from collections import OrderedDict, defaultdict
import re
import os
from pprint import pprint


#Order of sample for plot in top_only 
plots_top_order_res = [  'VBS_ZV', 'VV+VVV', 'DY', "Others",'Fake', 'Wjets','top','VBS_WV']
plots_wjets_order_res = [ 'VBS_ZV', 'VV+VVV', 'DY', "Others", 'top','Fake',  'Wjets', 'VBS_WV']
plots_top_order_boost = [  'VBS_ZV','VV+VVV',  'DY', "Others",'Fake', 'Wjets','top','VBS_WV']
plots_wjets_order_boost = [ 'VBS_ZV', 'VV+VVV', 'DY', "Others",'top','Fake','Wjets', 'VBS_WV']

# '#FF3D00',F57C00
wjets_palette = ['#DF7000', '#FF8A00','#FFA133','#F7C307','#FFE200','#FFE93E','#FFEE66']


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
    wjetbin_colormap = {}
    for i in range(6): wjetbin_colormap[i] = i
    for i in range(6, 12):  wjetbin_colormap[i] = i-6
    for i in range(12, 16): wjetbin_colormap[i] = i-12
    for i in range(16, 22): wjetbin_colormap[i] = i-16
    new_plots = { k:v for k,v in plot.items() if k != "Wjets"}
    new_group =  { k:v for k,v in groupPlot.items() if k != "Wjets"}
    wjets_list = []
    for ir in range(1,22):
        sname = "Wjets_res_"+str(ir)
        wjets_list.append(sname)
        new_plots[sname] = {
                'color': 1,
                 'isSignal' : 0,
                 'isData'   : 0, 
                 'scale'    : 1.0 
        }
        new_group[sname] = {
            'nameHR' : 'Wbin'+str(ir),
            'isSignal' : 0,
            'color':   wjets_palette[wjetbin_colormap[ir-1]],
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
    new_plots = { k:v for k,v in plot.items() if k != "Wjets"}
    new_group =  { k:v for k,v in groupPlot.items() if k != "Wjets"}
    wjets_list = []
    for ir in range(1,8):
        sname = "Wjets_boost_"+str(ir)
        wjets_list.append(sname)
        new_plots[sname] = {
                'color': 1,
                 'isSignal' : 0,
                 'isData'   : 0, 
                 'scale'    : 1.0 
        }
        new_group[sname] = {
            'nameHR' : 'Wbin'+str(ir),
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
       if "scale" in plot[bin]:
           plot[bin].pop("scale")
    # for s,v in plot.items():
    #     print s
    #     pprint(v)
    return plot



def customize(samples,cuts,variables,nuisances,plot,groupPlot, key=None):
    if key=="top_boost":
        new_cuts = filter_cuts(cuts, r"boost_topcr.*")
        new_groupPlot = reorder_plots(groupPlot,  plots_top_order_boost)
        new_plot ={ k:v for k,v in plot.items() if 'res' not in k}
        return samples, new_cuts, variables, nuisances, new_plot, new_groupPlot

    if key=="wjets_boost":
        new_cuts = filter_cuts(cuts, r"boost_wjetcr_.*")
        new_groupPlot = reorder_plots(groupPlot,  plots_wjets_order_boost)
        new_plot ={ k:v for k,v in plot.items() if 'res' not in k}
        return samples, new_cuts, variables, nuisances, new_plot, new_groupPlot

    if key=="signal_boost":
        new_cuts = filter_cuts(cuts, r"boost_sig_.*")
        new_groupPlot = reorder_plots(groupPlot,  plots_wjets_order_boost)
        new_plot ={ k:v for k,v in plot.items() if 'res' not in k}
        return samples, new_cuts, variables, nuisances, new_plot, new_groupPlot
    
    if key=="top_res":
        new_cuts = filter_cuts(cuts, r"res_topcr.*")
        new_groupPlot = reorder_plots(groupPlot,  plots_top_order_res)
        new_plot ={ k:v for k,v in plot.items() if 'boost' not in k}
        return samples, new_cuts, variables, nuisances, new_plot, new_groupPlot

    if key=="wjets_res":
        new_cuts = filter_cuts(cuts, r"res_wjetcr_.*")
        new_groupPlot = reorder_plots(groupPlot,  plots_wjets_order_res)
        new_plot ={ k:v for k,v in plot.items() if 'boost' not in k}
        return samples, new_cuts, variables, nuisances, new_plot, new_groupPlot

    if key=="signal_res":
        new_cuts = filter_cuts(cuts, r"res_sig_.*")
        new_groupPlot = reorder_plots(groupPlot,  plots_wjets_order_res)
        new_plot ={ k:v for k,v in plot.items() if 'boost' not in k}
        return samples, new_cuts, variables, nuisances, new_plot, new_groupPlot

    if key=="signal_vbsbins":
        new_cuts = filter_cuts(cuts, r".*_sig_.*")
        new_groupPlot = reorder_plots(groupPlot,  plots_wjets_order_boost)
        new_variables = {"vbs_1_pt_res": variables["vbs_1_pt_res"]}
        return samples, new_cuts, new_variables, nuisances, plot, new_groupPlot

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
        norm_factors = get_wjets_scaling(os.path.dirname(__file__) + "/wjets_norm/bins_norm.txt")
        new_cuts = filter_cuts(cuts, r"res_wjetcr_.*")
        new_groupPlot, new_plot = define_bins_res(groupPlot, plot, plots_wjets_order_res)
        scale_plot = scaleBins(new_plot,  norm_factors)
        return samples, new_cuts, variables, nuisances, scale_plot, new_groupPlot
    if key == "wjets_rescale_boost":
        norm_factors = get_wjets_scaling(os.path.dirname(__file__) + "/wjets_norm/bins_norm.txt")
        new_cuts = filter_cuts(cuts, r"boost_wjetcr_.*")
        new_groupPlot, new_plot = define_bins_boost(groupPlot, plot, plots_wjets_order_boost)
        scale_plot = scaleBins(new_plot,  norm_factors)
        return samples, new_cuts, variables, nuisances, scale_plot, new_groupPlot
    if key == "signal_rescale_res":
        norm_factors = get_wjets_scaling(os.path.dirname(__file__) + "/wjets_norm/bins_norm.txt")
        new_cuts = filter_cuts(cuts, r"res_sig_.*")
        new_groupPlot, new_plot = define_bins_res(groupPlot, plot, plots_wjets_order_res)
        scale_plot = scaleBins(new_plot,  norm_factors)
        return samples, new_cuts, variables, nuisances, scale_plot, new_groupPlot
    if key == "signal_rescale_boost":
        norm_factors = get_wjets_scaling(os.path.dirname(__file__) + "/wjets_norm/bins_norm.txt")
        new_cuts = filter_cuts(cuts, r"boost_sig_.*")
        new_groupPlot, new_plot = define_bins_boost(groupPlot, plot, plots_wjets_order_boost)
        scale_plot = scaleBins(new_plot,  norm_factors)
        return samples, new_cuts, variables, nuisances, scale_plot, new_groupPlot
    if key == "top_rescale_res":
        norm_factors = get_wjets_scaling(os.path.dirname(__file__) + "/wjets_norm/bins_norm.txt")
        new_cuts = filter_cuts(cuts, r"res_topcr_.*")
        new_groupPlot, new_plot = define_bins_res(groupPlot, plot, plots_top_order_res)
        scale_plot = scaleBins(new_plot, norm_factors)
        return samples, new_cuts, variables, nuisances, scale_plot, new_groupPlot
    if key == "top_rescale_boost":
        norm_factors = get_wjets_scaling(os.path.dirname(__file__) + "/wjets_norm/bins_norm.txt")
        new_cuts = filter_cuts(cuts, r"boost_topcr_.*")
        new_groupPlot, new_plot = define_bins_boost(groupPlot, plot, plots_top_order_boost)
        scale_plot = scaleBins(new_plot,  norm_factors)
        return samples, new_cuts, variables, nuisances, scale_plot, new_groupPlot

    if key=="check_nuis":
        sample = 'Fake'
        new_cuts = filter_cuts(cuts, r"res_sig_mu")
        new_groupPlot = OrderedDict()
        new_plot = OrderedDict()
        for gr, d in groupPlot.items():
            if sample in gr:
                new_groupPlot[gr] = d
        for gr, d in plot.items():
            if sample in gr:
                new_plot[gr] = d
        new_groupPlot["VBS"] = groupPlot["VBS"]
        new_plot["VBS"] = plot["VBS"]
        return samples, new_cuts, variables, nuisances, new_plot, new_groupPlot

    if key=="redo_mjj_boost":
        new_cuts = filter_cuts(cuts, r"boost_.*")
        new_groupPlot = reorder_plots(groupPlot,  plots_wjets_order_res)
        new_plot ={ k:v for k,v in plot.items() if 'res' not in k}
        new_variables = { "mjj_vbs": variables["mjj_vbs"]}
        new_variables["mjj_vbs"]['range'] = (22, 500, 3140)
        return samples, new_cuts, new_variables, nuisances, new_plot, new_groupPlot
        
    else:
        return samples,cuts,variables,nuisances,plot,groupPlot



