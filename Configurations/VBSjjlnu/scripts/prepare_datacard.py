import yaml
import argparse
import os


parser = argparse.ArgumentParser()
parser.add_argument("config", help="configuration file", type=str)
args = parser.parse_args()

config = yaml.load(open(args.config))

for datac in config:
    print("Preparing datacard: "+ datac["datacard_name"])

    cards= []
    for card in datac["phase_spaces"] :
        cards.append("{0}={1}/{2}/{3}/datacard.txt".format(card["name"], datac["basedir"],card["cut"], card["var"]))
    
    os.system("combineCards.py {} > combined_{}.txt".format(" ".join(cards), datac["datacard_name"]))

    os.system("text2workspace.py combined_{0}.txt -o combined_{0}.root".format(datac["datacard_name"]))
