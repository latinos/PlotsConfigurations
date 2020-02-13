import yaml
import argparse
import os


parser = argparse.ArgumentParser()
parser.add_argument("-c","--config", help="configuration file", type=str)
parser.add_argument("-b","--basedir", help="Baseline folder", type=str)
parser.add_argument("-o","--outputdir", help="Output folder", type=str)
args = parser.parse_args()

config = yaml.load(open(args.config))


for datac in config:
    print("Preparing datacard: "+ datac["datacard_name"])

    outdir = args.outputdir + "/" + datac["datacard_name"]
    if not os.path.exists(outdir):
        os.makedirs(outdir)

    cards= []
    for folder in datac["folders"]:
        for card in datac["phase_spaces"] :
            cards.append("{0}_{1}={2}/{3}/{4}/datacard.txt".format(
                                card["name"], folder["name"],  args.basedir + "/" + folder["basedir"],
                                                                card["cut"], card["var"]))
    print(cards)

    os.system("combineCards.py {} > {}/combined_{}.txt".format(" ".join(cards), outdir, datac["datacard_name"]))
    
    print(">Preparing workspace")

    os.system("text2workspace.py {0}/combined_{1}.txt -o {0}/combined_{1}.root".format(outdir, datac["datacard_name"]))

    print(">Running combine (Asimov + pre-fit nuisances)")
    os.system("combine -M Significance -t -1  --expectSignal=1 {0}/combined_{1}.root > {0}/logSignificance_MCasimov.txt".format(outdir, datac["datacard_name"]))

    with open("{0}/logSignificance_MCasimov.txt".format(outdir)) as f: 
        print(f.read())
        print(">>>>>")

    print(">Running combine (Asimov + post-fit nuisances)")
    os.system("combine -M Significance -t -1  --expectSignal=1 --toysFreq {0}/combined_{1}.root > {0}/logSignificance_data_asimov.txt".format(outdir, datac["datacard_name"]))
    print(">Done")

    with open("{0}/logSignificance_data_asimov.txt".format(outdir)) as f: 
        print(f.read())
        print(">>>>>")
