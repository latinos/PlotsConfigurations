from __future__ import print_function
import ROOT as R 
import root_numpy as rnp 
import numpy as np
import argparse 

'''
Extract envelop or rms of nuisance variations
'''

parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", help="Input file", type=str)
parser.add_argument("-o","--output", help="Output file", type=str)
parser.add_argument("-n","--nuisance", help="Nuisance", type=str)
parser.add_argument("-v","--variations", help="Number of variations", type=int)
parser.add_argument("-s","--samples", help="Samples", type=str, nargs="+")
parser.add_argument("-sf","--samples-file", help="Samples", type=str)
parser.add_argument("-k","--kind", help="envelop/rms", type=str, default="envelope")
parser.add_argument("-e","--exclude-vars", help="Exclude vars", type=str, nargs="+")

args = parser.parse_args()


iF = R.TFile.Open(args.input, "READ")
oF = R.TFile.Open(args.output, "UPDATE")

if args.samples and len(args.samples) > 0:
    samples = args.samples 
elif args.samples_file:
    samples = [f.strip() for f in open(args.samples_file).readlines()]
else:
    print("Please provide samples of file with a list of samples")
    exit(1)

for cut in iF.GetListOfKeys():
    oF.mkdir(cut.GetName())
    print ("Cut: ", cut.GetName())
    vars = [k.GetName() for k in iF.Get(cut.GetName()).GetListOfKeys()]
    if args.exclude_vars:
        vars = [ v for v in vars if v not in args.exclude_vars]
    
    for var in vars:
        print ("> Var: ", var )
        oF.mkdir(cut.GetName() + "/"+var)
        for sample in samples:
            try: 
                histoName = 'histo_{}'.format(sample)
                nominal = iF.Get("{}/{}/".format(cut.GetName(), var)+histoName)
                vnominal = rnp.hist2array(nominal, copy=False)

                variations = np.empty( (args.variations, vnominal.size), dtype=vnominal.dtype)

                for ivar in range(args.variations):
                    histoNameVar = 'histo_{}_{}V{}Var'.format(sample, args.nuisance, ivar)
                    hTotalVar = iF.Get("{}/{}/".format(cut.GetName(), var) + histoNameVar)
                    variations[ivar, :] = rnp.hist2array(hTotalVar, copy=True).flat
                    # outDir.Delete(histoNameVar + ';*')

                if args.kind == "envelope":
                    arrup = np.max(variations, axis=0)
                    arrdown = np.min(variations, axis=0)

                elif args.kind == "rms":
                    arrnom = np.tile(vnominal.flat, (variations.shape[0], 1))
                    arrv = np.sqrt(np.mean(np.square(variations - arrnom), axis=0))
                    arrup = vnominal.flat[:] + arrv
                    arrdown = vnominal.flat[:] - arrv

                arrup = arrup.reshape(vnominal.shape)
                arrdown = arrdown.reshape(vnominal.shape)

                histoNameUp = 'histo_{}_{}Up'.format(sample, args.nuisance)
                histoNameDown = 'histo_{}_{}Down'.format(sample, args.nuisance)

                outputsHistoUp = nominal.Clone(histoNameUp)
                rnp.array2hist(arrup, outputsHistoUp)
                outputsHistoDown = nominal.Clone(histoNameDown)
                rnp.array2hist(arrdown, outputsHistoDown)

                oF.cd("{}/{}".format(cut.GetName(),var))
                outputsHistoUp.Write()
                outputsHistoDown.Write()
            except:
                print("Problem with {} {} {}".format(cut.GetName(), var, sample), " --> skipping it")
            
            oF.cd("/")
            
                        