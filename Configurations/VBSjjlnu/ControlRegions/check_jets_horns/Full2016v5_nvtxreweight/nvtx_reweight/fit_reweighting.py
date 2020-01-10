import ROOT as R 
import argparse

parser = argparse.ArgumentParser()
parser.add_argument("--input", type=str, help="Input File")
parser.add_argument("--output", type=str, help="Output File")
args = parser.parse_args()

c1 = R.TCanvas( 'c1', 'rew', 0, 60, 800, 600 )
g = R.TGraphErrors(args.input)

func1 = R.TF1("wf1", "pol1", 5, 35)
func2 = R.TF1("wf2", "pol2", 35, 60)
g.Fit("wf1", "+","", 5,35)
g.Fit("wf2", "+","", 35,60)

g.Draw("APL")
c1.Print(args.output + ".root", "root")

xs = []
ys = []
# estrapolate from 0 to 100
for x in range(0, 101):
    if x < 40:
        ys.append(func1.Eval(x))
    else: 
        ys.append(func2.Eval(x))
    xs.append(x)


with open(args.output, "w") as out:
    for x,y in zip(xs, ys):
        out.write("{:.0f} {}\n".format(x,y)) 


