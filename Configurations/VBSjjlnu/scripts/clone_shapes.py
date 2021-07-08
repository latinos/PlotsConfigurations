import ROOT as R
import sys
import argparse

parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", help="Input file", type=str)
parser.add_argument("-s","--shapes", help="Shapes", type=str, nargs="+")
parser.add_argument("-t","--targets", help="Target", type=str, nargs="+")
args = parser.parse_args()


f = R.TFile(args.input, "UPDATE")


    #f.ls()
for k in f.GetListOfKeys():
    #print(k)
    R.gDirectory.Cd(k.GetName())
    for z in R.gDirectory.GetListOfKeys():
        #print(z)
        print ">>> ", k.GetName(), z.GetName()
        R.gDirectory.Cd(z.GetName())

        for shape, target in zip(args.shapes, args.targets):
            try:
                h = R.gDirectory.Get("histo_"+ shape)
                h2 = h.Clone("histo_"+ target)
                h2.Write()
            except:
                print("Problem with ", shape, target)
                   
        R.gDirectory.Cd("../")

    R.gDirectory.Cd("../")

# f.Write()
f.Close()
