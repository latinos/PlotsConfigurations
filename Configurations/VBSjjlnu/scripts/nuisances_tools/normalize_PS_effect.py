import ROOT as R 
R.gROOT.SetBatch(True)
import argparse 

parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", help="Input file", type=str)
args = parser.parse_args()

iF = R.TFile.Open(args.input, "UPDATE")

nuisances = ['CMS_PS_ISR', 'CMS_PS_FSR']

wjets_bins = {'res':[], 'boost':[]}
for ir in range(1,7):
    wjets_bins['res'].append("Wjets_HT_res_"+str(ir))
for ir in range(1,6):
    wjets_bins['boost'].append("Wjets_HT_boost_"+str(ir))


cuts = [ 
    ('res_sig_mu','res_wjetcr_mu', wjets_bins['res']),
    ('res_sig_ele','res_wjetcr_ele', wjets_bins['res']),
    ('boost_sig_mu','boost_wjetcr_mu', wjets_bins['boost']),
    ('boost_sig_ele','boost_wjetcr_ele', wjets_bins['boost'])
]

vars = [ 
    ('DNNoutput_res_bins2', 'fit_bins_res'),
    ('DNNoutput_res_bins2', 'fit_bins_res'),
    ('DNNoutput_boost_bins2', 'fit_bins_boost'),
    ('DNNoutput_boost_bins2', 'fit_bins_boost'),
]

for nuis in nuisances:
    for (cut_sig, cut_wjet, wbins), (var_sig, var_wjet) in zip(cuts, vars):
        for wbin in wbins:
            h_nom_sig = iF.Get("{}/{}/histo_{}".format(cut_sig, var_sig, wbin))
            h_nom_wjet = iF.Get("{}/{}/histo_{}".format(cut_wjet, var_wjet, wbin))
            int_nom = h_nom_sig.Integral() + h_nom_wjet.Integral() 
            for ndir in ['Up','Down']:
                h_sig = iF.Get("{}/{}/histo_{}_{}{}".format(cut_sig, var_sig, wbin, nuis, ndir))
                h_wjet = iF.Get("{}/{}/histo_{}_{}{}".format(cut_wjet, var_wjet, wbin, nuis, ndir))
                int_var = h_sig.Integral() + h_wjet.Integral()
                ratio = int_nom / int_var
                print cut_sig, cut_wjet, nuis, ndir, wbin, "nom: ", int_nom, " var: ", int_var, " ratio: ", ratio 
                h_sig.Scale(ratio)
                h_wjet.Scale(ratio)
                # Now to to be saved
                iF.cd("{}/{}".format(cut_sig, var_sig))
                h_sig.Write()
                iF.cd("{}/{}".format(cut_wjet, var_wjet))
                h_wjet.Write()
            


