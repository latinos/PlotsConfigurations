'''

'''

import ROOT as R 
import argparse

parser = argparse.ArgumentParser()
parser.add_argument("--input", type=str, help="Input File (output of `reweight_ratiodatamc.py`)")
parser.add_argument("--constscale", type=str, help="Constant scale factor File (output of `reweight_closure.py`)")
parser.add_argument("--output", type=str, help="Output File: Unsafe normalization weights")
parser.add_argument("--output_scaled", type=str, help="Output File: Correct normalization weights")
args = parser.parse_args()

c1 = R.TCanvas( 'c1', 'rew', 0, 60, 800, 600 )
g = R.TGraphErrors(args.input)

ranges=[(5,65)]

func1 = R.TF1("wf1", "pol5", ranges[0][0], ranges[0][1])
# func2 = R.TF1("wf2", "pol3", ranges[1][0], ranges[1][1])
g.Fit("wf1", "+","", ranges[0][0], ranges[0][1])
# g.Fit("wf2", "+","", ranges[1][0], ranges[1][1])
g.GetYaxis().SetRangeUser(0,7)
g.Draw("APL")
# c1.Print(args.output + ".root", "root")

xs = []
ys = []
# estrapolate from 0 to 100
for x in range(0, 101):
    ys.append(func1.Eval(x))
    xs.append(x)

with open(args.output, "w") as out:
    for x,y in zip(xs, ys):
        out.write("{:.0f} {}\n".format(x,y)) 

try:
    with open(args.constscale, 'r') as f:
        k = float( f.read() )
    print ("const scale factor for normalization: " + str(k))
    ys = [y / k for y in ys]

    with open(args.output_scaled, "w") as out:
        for x,y in zip(xs, ys):
            out.write("{:.0f} {}\n".format(x,y)) 
except Exception as e:
    print ("Not saved correctly-normalized weights: " + str(e))


