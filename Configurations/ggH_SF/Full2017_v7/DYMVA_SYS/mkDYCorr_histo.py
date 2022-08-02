import sys, os
argv = sys.argv
sys.argv = argv[:1]

import re

import ROOT

from ROOT import TFile, TH1D, TCanvas, TLegend, gStyle

input_file = "rootFile/plots_ggH_SF_2017_v7_DYMVA_SYS.root"
#out_file_name = "rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS_CORR_MVA.root"

copy_file = "cp {} {}.original".format(input_file, input_file)

print(copy_file)
os.system(copy_file)

cuts_var_dict = {
    "0j_ee_in"   : "dymva_alt_dnn_0j", 
    "0j_ee_out"  : "dymva_alt_dnn_0j",
    "0j_mm_in"   : "dymva_alt_dnn_0j", 
    "0j_mm_out"  : "dymva_alt_dnn_0j", 
    "1j_ee_in"   : "dymva_alt_dnn_1j",
    "1j_ee_out"  : "dymva_alt_dnn_1j",
    "1j_mm_in"   : "dymva_alt_dnn_1j",
    "1j_mm_out"  : "dymva_alt_dnn_1j",
    "2j_ee_in"   : "dymva_alt_dnn_2j",
    "2j_ee_out"  : "dymva_alt_dnn_2j",
    "2j_mm_in"   : "dymva_alt_dnn_2j",
    "2j_mm_out"  : "dymva_alt_dnn_2j",
    "VBF_ee_in"  : "dymva_alt_dnn_VBF",
    "VBF_ee_out" : "dymva_alt_dnn_VBF",
    "VBF_mm_in"  : "dymva_alt_dnn_VBF",
    "VBF_mm_out" : "dymva_alt_dnn_VBF",
    "VH_ee_in"   : "dymva_alt_dnn_VH",
    "VH_ee_out"  : "dymva_alt_dnn_VH",
    "VH_mm_in"   : "dymva_alt_dnn_VH",
    "VH_mm_out"  : "dymva_alt_dnn_VH"
}

#variables = ["dymva_alt_dnn_0j", "dymva_alt_dnn_1j", "dymva_alt_dnn_2j", "dymva_alt_dnn_VBF", "dymva_alt_dnn_VH"]

f_0j_ee  = ROOT.TF1("0j_ee","(0.812022019463 + 0.826499636323 * x)", 0., 1.);
f_0j_mm  = ROOT.TF1("0j_mm","(0.848287265329 + 0.678454831736 * x)", 0., 1.);
f_1j_ee  = ROOT.TF1("1j_ee","(0.870179151466 + 0.46512249532 * x + 0.374494447057 * x * x -0.91490725614 * x * x * x + 0.875171847515 * x * x * x * x)", 0., 1.);
f_1j_mm  = ROOT.TF1("1j_mm","(0.81247205097 + 1.5069771738 * x -4.05473723735 * x * x + 5.87785344152 * x * x * x -2.60722512943 * x * x * x * x)", 0., 1.);
f_2j_ee  = ROOT.TF1("2j_ee","(0.928193002669 + 0.299216271991 * x -0.828861932841 * x * x + 1.31177913287 * x * x * x)", 0., 1.);
f_2j_mm  = ROOT.TF1("2j_mm","(0.870010799137 + 0.633912913888 * x -1.38463283114 * x * x + 1.82772405928 * x * x * x)", 0., 1.);
f_VBF_ee = ROOT.TF1("VBF_ee","(0.759966200262 + 1.49208032647 * x -0.662442594588 * x * x)", 0., 1.);
f_VBF_mm = ROOT.TF1("VBF_mm","(0.855698276837 + 0.294486932679 * x + 1.44414459601 * x * x)", 0., 1.);
f_VH_ee  = ROOT.TF1("VH_ee","(0.849914728353 + 0.746458054508 * x -3.35798063109 * x * x + 9.82461489097 * x * x * x -6.88974697884 * x * x * x * x)", 0., 1.);
f_VH_mm  = ROOT.TF1("VH_mm","(0.716253804051 + 1.37348392997 * x -2.04819848416 * x * x + 2.22658723732 * x * x * x)", 0., 1.);


# Here starts the actual script
# out_file = TFile(out_file_name)

my_file = TFile(input_file, "UPDATE")
my_file.cd()

for cut, var in cuts_var_dict.iteritems():
    my_folder = cut + "/" + var
    my_file.cd(my_folder)
    my_histo = my_file.Get(my_folder + "/histo_DY")
    print("=================")
    print(my_folder)
    print(my_histo.Integral())

    if   "0j_ee"  in cut: f = f_0j_ee
    elif "0j_mm"  in cut: f = f_0j_mm
    elif "1j_ee"  in cut: f = f_1j_ee
    elif "1j_mm"  in cut: f = f_1j_mm
    elif "2j_ee"  in cut: f = f_2j_ee
    elif "2j_mm"  in cut: f = f_2j_mm
    elif "VBF_ee" in cut: f = f_VBF_ee
    elif "VBF_mm" in cut: f = f_VBF_mm
    elif "VH_ee"  in cut: f = f_VH_ee
    elif "VH_mm"  in cut: f = f_VH_mm

    for i_bin in range(1, my_histo.GetNbinsX() + 1):
        print("{}: {} --> {}x{} = {}".format(my_histo.GetBinCenter(i_bin), my_histo.GetBinContent(i_bin), my_histo.GetBinContent(i_bin), f_0j_ee.Eval(my_histo.GetBinCenter(i_bin)), my_histo.GetBinContent(i_bin)*f.Eval(my_histo.GetBinCenter(i_bin))))
        my_histo.SetBinContent(i_bin, my_histo.GetBinContent(i_bin)*f.Eval(my_histo.GetBinCenter(i_bin)))
        my_histo.Write()

my_file.Close()
