import ROOT as R 
import argparse

parser = argparse.ArgumentParser()
parser.add_argument("--config", help="configuration file", type=str)
parser.add_argument("-i", "--inputfile", help="input file with shapes", type=str)
parser.add_argument("--ta",  help="TitleA", type=str)
parser.add_argument("--tb",  help="TitleB", type=str)
parser.add_argument("--cutA", help="CutA", type=str)
parser.add_argument("--cutB", help="CutA", type=str)
parser.add_argument("--var", help="Var", type=str)
parser.add_argument("-o", "--output", help="Output", type=str)
args = parser.parse_args()


exec(open(args.config))

samples= {}
cuts= {}
exec(open(samplesFile))

iF = R.TFile(args.inputfile)
#iF.ls()

def get_totMC_hist(cut, var, samples, title):
    hs = {}
    tot_mc = None

    for s in samples:
        if s == "DATA": continue
        
        h = iF.Get(cut+ "/"+args.var+"/histo_"+s)
        print (h)
        hs[s] = h
        if tot_mc:
            tot_mc.Add(h)
        else:
            tot_mc = h.Clone()
            tot_mc.SetName("totMC_"+cut)
            tot_mc.SetTitle(title)

    return tot_mc



hA = get_totMC_hist( args.cutA, args.var, samples, args.ta)
hB = get_totMC_hist( args.cutB, args.var, samples, args.tb)

print(hA)
print(hB)

# Rescale to 1
hA.Scale(1/hA.Integral())
hB.Scale(1/hB.Integral())

hA.SetLineColor(R.kBlue)
hB.SetLineColor(R.kRed)

c = R.TCanvas("c1")
hR1 = R.TRatioPlot(hB, hA, "divsym")

hB.GetXaxis().SetTitle(args.var)

hR1.Draw()

R.gPad.Modified()
R.gPad.Update(); # make sure it's really (re)drawn
uppad = hR1.GetUpperPad();
leg = uppad. BuildLegend();

uppad.Modified()
uppad.Update()

hR1.GetLowerRefGraph().SetMinimum(0.5);
hR1.GetLowerRefGraph().SetMaximum(1.5);

R.gStyle.SetOptStat(0)
c.Draw()
#c.SaveAs(args.output+".png")