import ROOT as R
import argparse
import numpy as np 
import root_numpy as rnp

parser = argparse.ArgumentParser()
parser.add_argument("-i","--input-files", help="Input file", type=str, nargs="+")
parser.add_argument("-c","--cuts", help="Cuts",type=str, nargs="+")
parser.add_argument("-v","--var", help="Variable",type=str)
parser.add_argument("-s","--samples", help="Samples",type=str, nargs="+")
parser.add_argument("-o","--output", help="Output file",type=str)
args = parser.parse_args()

R.TH1.SetDefaultSumw2(True)
hs = R.THStack("total",'')

for file in args.input_files:
    iF = R.TFile.Open(file,  "READ")
    for cut in args.cuts:
        for sample in args.samples:
            print file, cut, sample
            try:
                h = iF.Get("{}/{}/histo_{}".format(cut, args.var, sample))
                hs.Add(h)
            except:
                print "missing histo"


#Final histogram -> get MC errors
last = hs.GetStack().Last()
err_up = np.sqrt(np.array(last.GetSumw2())[1:-1])
err_do = np.sqrt(np.array(last.GetSumw2())[1:-1])

nom = rnp.hist2array(last, copy=False)
print "nominal ", nom

# err_rel_up = err_up / nom 
# err_rel_do = err_do / nom 
# print err_rel_up, err_rel_do

oF = R.TFile.Open(args.output, "RECREATE")
gr = R.TGraphAsymmErrors()
gr.SetName("gr_mcstaterr")
for i in range(1, last.GetNbinsX()+1):
    gr.SetPoint(i-1, last.GetBinCenter(i), nom[i-1])
    gr.SetPointError(i-1, 0.,0., err_up[i-1], err_do[i-1])
gr.Write()
oF.Close()


