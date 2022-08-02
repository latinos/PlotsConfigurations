import ROOT as R 
import argparse 

parser = argparse.ArgumentParser()
parser.add_argument("--inputs", type=str, nargs="+")
parser.add_argument("--outputfile", type=str)
parser.add_argument("--func1", nargs="+", type=str)
parser.add_argument("--func2", nargs="+", type=str)
args = parser.parse_args()

f0 = R.TFile(args.inputs[0])
f1 = R.TFile(args.inputs[1])

gr0 = args.func1
gr1 = args.func2
    
out = R.TFile(args.outputfile, "RECREATE")


for g in gr0:
    gr = f0.Get(g)
    out.cd()
    gr.Write()

for g in gr1:
    gr = f1.Get(g)
    out.cd()
    gr.Write() 

out.Close()