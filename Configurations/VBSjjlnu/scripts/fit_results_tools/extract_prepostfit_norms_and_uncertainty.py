import argparse
import pandas as pd
import ROOT as R

'''
Script to extract prefit and postfit normalizations and uncertainty 
from the output of PostFitFromWorkspace combine script

'''
parser = argparse.ArgumentParser()
parser.add_argument("-i","--inputfile", help="Input file from combine", type=str)
parser.add_argument("-o","--outputfile", help="output file", type=str)
parser.add_argument("-ol","--output-latex", help="output latex", type=str)
parser.add_argument("-y","--years", help="Years", type=str, nargs="+")
parser.add_argument("-r","--regions", help="Regions", type=str, nargs="+")
parser.add_argument("-c","--cats", help="Categories", type=str, nargs="+")
parser.add_argument("-x","--xmin", help="Xmin", type=float)
parser.add_argument("-b","--blind", help="Bling", action="store_true")
args = parser.parse_args()


iF = R.TFile.Open(args.inputfile)

phase_spaces = [] 
for y in args.years:
    for region in args.regions:
        for cat in args.cats:
            for fl in ['ele','mu']:
                phase_spaces.append('{}_sig_{}_{}'.format(cat, fl, y))

samples = ["VBS_dipoleRecoil", "top","DY","VV","VVV","Vg","VgS","VBF-V_dipole","Fake"]
wjets_bins = {'res':[], 'boost':[]}
for ir in range(1,22):
    wjets_bins['res'].append("Wjets_res_"+str(ir))
for ir in range(1,8):
    wjets_bins['boost'].append("Wjets_boost_"+str(ir))


results = []

for ph in phase_spaces:
    if 'res' in ph:
        wjs = wjets_bins['res']
    if 'boost' in ph:
        wjs = wjets_bins['boost']

    for sample in samples+wjs:
        print "{}_prefit/{}".format(ph, sample)
        hpre = iF.Get("{}_prefit/{}".format(ph, sample))
        minbin = hpre.FindBin(args.xmin)
        pre_nom = sum([hpre.GetBinContent(i) for i in range(minbin, hpre.GetNbinsX()+1)])
        pre_err = sum([hpre.GetBinError(i) for i in range(minbin,   hpre.GetNbinsX()+1)])
        
        hpost = iF.Get("{}_postfit/{}".format(ph, sample))
        post_nom = sum([hpost.GetBinContent(i) for i in range(minbin, hpost.GetNbinsX()+1)])
        post_err = sum([hpost.GetBinError(i) for i in range(minbin,   hpost.GetNbinsX()+1)])
        
        results.append((ph, sample, pre_nom, pre_err, pre_err/pre_nom, post_nom, post_err, post_err/post_nom))

with open(args.outputfile, "w") as of:
    of.write("channel;process;prefit_norm;prefit_err;prefit_err_rel;postfit_norm;postfit_err;postfit_err_rel\n")
    for r in results:
        of.write("{};{};{};{};{};{};{};{}\n".format(*r))
    
df = pd.DataFrame(results, columns=["channel","process","prefit_norm","prefit_err","prefit_err_rel","postfit_norm","postfit_err","postfit_err_rel"])

ncols = len(phase_spaces)

latex = r'''\begin{table}[htbp]
    \footnotesize
    \caption{}
    \label{}
    \begin{center}
      \begin{tabular}{|c |{{cols}}}
        \hline
        Sample & {{header}}   \\
         & {{subheader}} \\
        \hline
        {{body}}      
        \hline
      \end{tabular}
    \end{center}
  \end{table}'''

latex = latex.replace("{{cols}}", "c c |"*ncols)

columns = []
for ph in phase_spaces:
    columns.append('\multicolumn{2}{|c|}{' +ph + '}' )

latex = latex.replace("{{header}}", "&".join(columns))
latex = latex.replace("{{subheader}}", "&".join(["Prefit & Postfit"]*ncols))

body = [] 
for sample in  samples + wjets_bins["res"] + wjets_bins["boost"]:
    line = "{}".format(sample)
    for ph in phase_spaces:
        d = df[(df.channel==ph) & (df.process==sample)]
        if len(d) ==0 : continue
        if not args.blind:
            line += "& $ {:.1f} \pm {:.1f}$  &$ {:.1f} \pm  {:.1f}$".format(float(d.prefit_norm.values[0]), float(d.prefit_err.values[0]), float(d.postfit_norm.values[0]),float( d.postfit_err.values[0]))
        else:
            line += "& ${:.1f} \pm {:.1f}$  & $X \pm  X$ ".format(float(d.prefit_norm.values[0]), float(d.prefit_err.values[0]))
    line += r' \\'
    body.append(line)

latex= latex.replace("{{body}}","\n".join(body))    
        
with open(args.output_latex, "w") as outlatex:
    outlatex.write(latex)


print(latex)