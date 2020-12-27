import ROOT as R 
R.gROOT.SetBatch(True)
import argparse 
import json

parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", help="Input file", type=str)
parser.add_argument("-c","--config", help="Config file",type=str)
parser.add_argument("-o","--output", help="Output file",type=str)
parser.add_argument("--dry", help="Dry run", action="store_true")
args = parser.parse_args()

iF = R.TFile.Open(args.input, "UPDATE")

# Load config 
exec(open(args.config))


for sample, sample_conf in config.items():
    print "> Working on sample: ", sample
    for nuis in sample_conf["nuisances"]:
        print ">> nuisance: ", nuis
        for phase_space, phs_conf in sample_conf["phase_spaces"].items():
            print ">>> phase space: ", phase_space
            nom, up, down = [],[],[]
            up_histos, down_histos = [],[]
            for cut, var in zip(phs_conf["cuts"], phs_conf["vars"]):
                h_nom  = iF.Get("{}/{}/histo_{}".format(cut, var, sample))
                h_up   = iF.Get("{}/{}/histo_{}_{}Up".format(cut, var, sample, nuis))
                h_down = iF.Get("{}/{}/histo_{}_{}Down".format(cut, var, sample, nuis))
                nom.append(h_nom.Integral())
                up.append(h_up.Integral())
                down.append(h_down.Integral())
                up_histos.append(("{}/{}".format(cut, var), h_up))
                down_histos.append(("{}/{}".format(cut, var), h_down))
            ratio_up = sum(nom)/sum(up)
            ratio_down = sum(nom)/sum(down)
            phs_conf["nom"] = nom
            phs_conf["up"] = up
            phs_conf["down"] = down
            phs_conf["ratioUp"] = ratio_up
            phs_conf["ratioDown"] = ratio_down
            print "Nominal: ", nom
            print "Up: ", up 
            print "Down: ", down 
            print "---> ratioUp: ", ratio_up, " ratioDown: ", ratio_down
            if not args.dry:
                for path, h in up_histos:
                    h.Scale(ratio_up)
                    iF.cd(path)
                    h.Write()
                for path, h in down_histos:
                    h.Scale(ratio_down)
                    iF.cd(path)
                    h.Write()
                
    print "-------------------------------------"

json.dump(config, open(args.output,"w"),indent=2)


