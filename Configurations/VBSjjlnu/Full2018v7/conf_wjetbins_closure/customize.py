#test
from collections import OrderedDict
import re
from pprint import pprint


#Order of sample for plot in top_only 
plots_top_order = [ "vbfV+VV+VVV", 'Vg+VgS', 'DY', 'Fake', 'Wjets','top','VBS']
plots_wjets_order = [ "vbfV+VV+VVV", 'Vg+VgS', 'DY', 'Fake', 'top','Wjets', 'VBS']

# '#FF3D00',F57C00
wjets_palette = ['#FFC400','#FFAB00', '#FF6D00','#FF3D00','#DD2C00','#c41e08']


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
    new_group = reorder_plots(new_group, [ "vbfV+VV+VVV", 'Vg+VgS', 'DY', 'Fake', 'top'] + wjets_list + ['VBS'] )
    return new_group, new_plots

def define_bins_boost(groupPlot,plot):
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
    new_group = reorder_plots(new_group, [ "vbfV+VV+VVV", 'Vg+VgS', 'DY', 'Fake', 'top'] + wjets_list + ['VBS'] )
    return new_group, new_plots


norm_factors = {
    "Wjets_HT_res_1": 
        {
            "res_wjetcr_ele":1.386,
            "res_wjetcr_mu": 1.178,
            "res_wjetcr_ele_mext":  1.430 ,
            "res_wjetcr_mu_mext" : 1.206  ,
            "res_wjetcr_ele_mint":  1.430 , # ext weights
            "res_wjetcr_mu_mint" : 1.206  ,
        },
    "Wjets_HT_res_2": 
        {
            "res_wjetcr_ele":1.130,
            "res_wjetcr_mu": 1.028,
            "res_wjetcr_ele_mext":  1.174 ,
            "res_wjetcr_mu_mext" :  1.045 ,
            "res_wjetcr_ele_mint":  1.174 ,
            "res_wjetcr_mu_mint" :  1.045 ,
        },
    "Wjets_HT_res_3": 
        {
            "res_wjetcr_ele":0.784,
            "res_wjetcr_mu": 0.871,
            "res_wjetcr_ele_mext":  0.777 ,
            "res_wjetcr_mu_mext" :  0.881 ,
             "res_wjetcr_ele_mint":  0.777 ,
            "res_wjetcr_mu_mint" :  0.881 ,

        },
    "Wjets_HT_res_4": 
        {
            "res_wjetcr_ele":0.619,
            "res_wjetcr_mu": 0.687,
            "res_wjetcr_ele_mext": 0.59   ,
            "res_wjetcr_mu_mext" : 0.711 ,
             "res_wjetcr_ele_mint": 0.59   ,
            "res_wjetcr_mu_mint" : 0.711 ,
        },
    "Wjets_HT_res_5": 
        {
            "res_wjetcr_ele":0.470,
            "res_wjetcr_mu": 0.523,
            "res_wjetcr_ele_mext": 0.53  ,
            "res_wjetcr_mu_mext" : 0.527  ,
             "res_wjetcr_ele_mint": 0.53  ,
            "res_wjetcr_mu_mint" : 0.527  ,
        }, 
    "Wjets_HT_res_6": 
        {
            "res_wjetcr_ele":0.370,
            "res_wjetcr_mu": 0.432,
            "res_wjetcr_ele_mext": 0.379 ,
            "res_wjetcr_mu_mext" : 0.397 ,
            "res_wjetcr_ele_mint": 0.379 ,
            "res_wjetcr_mu_mint" : 0.397 ,
        }, 
     "Wjets_HT_boost_1": 
        {
            "boost_wjetcr_ele":0.878,
            "boost_wjetcr_mu": 0.701,
            "boost_wjetcr_ele_mext": 0.823 ,
            "boost_wjetcr_mu_mext": 0.954,
            "boost_wjetcr_ele_mint": 0.823 ,
            "boost_wjetcr_mu_mint": 0.954,
        },
    "Wjets_HT_boost_2": 
        {
            "boost_wjetcr_ele":0.848,
            "boost_wjetcr_mu": 0.684,
            "boost_wjetcr_ele_mext": 0.901,
            "boost_wjetcr_mu_mext": 0.681 ,
            "boost_wjetcr_ele_mint": 0.901,
            "boost_wjetcr_mu_mint": 0.681 
        },
    "Wjets_HT_boost_3": 
        {
            "boost_wjetcr_ele":0.783,
            "boost_wjetcr_mu": 0.741,
            "boost_wjetcr_ele_mext": 0.750,
            "boost_wjetcr_mu_mext": 0.729,
             "boost_wjetcr_ele_mint": 0.750,
            "boost_wjetcr_mu_mint": 0.729
        },
    "Wjets_HT_boost_4": 
        {
            "boost_wjetcr_ele":0.606,
            "boost_wjetcr_mu": 0.696,
            "boost_wjetcr_ele_mext": 0.614,
            "boost_wjetcr_mu_mext": 0.649,
            "boost_wjetcr_ele_mint": 0.614,
            "boost_wjetcr_mu_mint": 0.649
        },
    "Wjets_HT_boost_5": 
        {
            "boost_wjetcr_ele":0.510,
            "boost_wjetcr_mu": 0.574,
            "boost_wjetcr_ele_mext": 0.539,
            "boost_wjetcr_mu_mext": 0.505,
            "boost_wjetcr_ele_mint": 0.539,
            "boost_wjetcr_mu_mint": 0.505
        }, 

}


def scaleBins(plot, cut):
    for bin,w in norm_factors.items():
       if cut not in bin: continue
       plot[bin]['cuts'] = w
       plot[bin].pop("scale")
       print(plot[bin])
    return plot




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
    
    if key=="bins_res_scale":
        new_cuts = ["res_wjetcr_mu","res_wjetcr_ele",
                    "res_wjetcr_mu_mint","res_wjetcr_ele_mint","res_wjetcr_mu_mext","res_wjetcr_ele_mext"]
        new_groupPlot, new_plot = define_bins_res(groupPlot, plot)
        scale_plot = scaleBins(new_plot, 'res')
        return samples, new_cuts, variables, nuisances, scale_plot, new_groupPlot

    if key=="bins_boost_scale":
        new_cuts = ["boost_wjetcr_mu","boost_wjetcr_ele",
                   "boost_wjetcr_mu_mint","boost_wjetcr_ele_mint","boost_wjetcr_mu_mext","boost_wjetcr_ele_mext"]
        new_groupPlot, new_plot = define_bins_boost(groupPlot, plot)
        scale_plot = scaleBins(new_plot, 'boost')
        return samples, new_cuts, variables, nuisances, scale_plot, new_groupPlot

    if key=="rescale_VV":
        new_cuts = filter_cuts(cuts, r"boost_.*_.*")
        new_groupPlot, new_plot = define_bins_boost(groupPlot, plot)
        new_plot["VV"]['scale'] = 1.147
        return samples, new_cuts, variables, nuisances, new_plot, new_groupPlot


    else:
        return samples,cuts,variables,nuisances,plot,groupPlot