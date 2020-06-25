import ROOT as R 
import argparse

parser = argparse.ArgumentParser()
parser.add_argument("--input", type=str, help="Input File")
parser.add_argument("--output", type=str, help="Output File")
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
c1.Print(args.output + ".root", "root")

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
    with open('nvtx_zmm_integralratio.txt', 'r') as f:
        k = float( f.read() )
except:
    k = 1.
print (k)
ys = [y / k for y in ys]

with open("zmmnorm_" + args.output, "w") as out:
    for x,y in zip(xs, ys):
        out.write("{:.0f} {}\n".format(x,y)) 


