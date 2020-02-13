import os
import argparse
import json

parser = argparse.ArgumentParser()
parser.add_argument("-i","--inputfile", help="Input file" , type=str)
parser.add_argument("-o","--outputdir", help="Output folder", type=str)
parser.add_argument("-y","--years", nargs="+", help="Years")
parser.add_argument("-p", "--plot", action="store_true", help="Do plots", default=False, )
parser.add_argument("--mc-asimov", action="store_true", default=True)
parser.add_argument("--data-asimov", action="store_true", default=False)
parser.add_argument("--dry", action="store_true", help="Do not run, only create script", default=False)
args = parser.parse_args()


fitter_options=  "--robustFit=1 --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND"
toysf = "--toysFreq" if args.data_asimov else ""

def prepare_rateParams(years):
    rps = []
    for fl in ["e", "mu"]:
        for s in ["Wjets", "Top"]:
            for c in ["boos", "res"]:
                for y in years:
                    if s == "Wjets":
                        rps.append("CMS_Wjets_norm_{}_{}_{}".format(fl,c,y))
                    if s == "Top":
                        rps.append("CMS_Top_norm_{}".format(y))
    return rps


rate_params = prepare_rateParams(args.years)
rparam_names = ",".join(rate_params)
rparam_ranges = ":".join([r+"=-2,4" for r in rate_params])

if not os.path.exists(args.outputdir):
        os.makedirs(args.outputdir)
  
cmd = []   
cmd.append("cp {} {}/combined.root".format(args.inputfile, args.outputdir))
cmd.append("cd "+ args.outputdir)
cmd.append("echo '{}' > log.txt".format("Initial dir: "+ args.inputfile))


if not args.plot:
# Prepare the script to create the impacts
    cmd.append("""combineTool.py -M Impacts -d combined.root -m 125 --doInitialFit \\
                -t -1 --expectSignal=1 {} -n nuis.125 \\
                {}""".format(toysf, fitter_options))

    cmd.append("""combineTool.py -M Impacts -d combined.root -m 125 --doFits \\
                -t -1 --expectSignal=1 {} --job-mode condor --task-name nuis -n nuis.125 \\
                {}""".format(toysf, fitter_options))


    cmd.append("""combineTool.py -M Impacts -d combined.root -m 125 --doInitialFit \\
                -t -1 --expectSignal=1 {} -n rateParams.125 \\
                --named {} \\
                --setParameterRanges {} \\
                {}""".format(toysf, rparam_names, rparam_ranges, fitter_options))
    
    cmd.append("""combineTool.py -M Impacts -d combined.root -m 125 --doFits \\
                -t -1 --expectSignal=1 {} \\
                --job-mode condor --task-name rateParams -n rateParams.125 \\
                --named {} \\
                --setParameterRanges {} \\
                {}""".format(toysf, rparam_names, rparam_ranges, fitter_options))

    with open("{}/script_preparation.sh".format(args.outputdir), "w") as of:
        of.write("\n".join(cmd))

    if not args.dry:
        os.system("sh {}/script_preparation.sh".format(args.outputdir))


if args.plot:
    cmd.append("""combineTool.py -M Impacts -d combined.root -m 125 \\
                -t -1 --expectSignal=1 {} \\
                -o impacts.nuis.json -n nuis.125""".format(toysf))
    cmd.append("""combineTool.py -M Impacts -d combined.root -m 125 -t -1 --expectSignal=1 {} \\
                --named {} \\
                --setParameterRanges {} \\
                -o impacts.rateParams.json -n rateParams.125  """.format(toysf,rparam_names,rparam_ranges))

    with open("{}/script_preparation_plots.sh".format(args.outputdir), "w") as of:
        of.write("\n".join(cmd))

    if not args.dry:
        os.system("sh {}/script_preparation_plots.sh".format(args.outputdir))

        result_nuis =  json.load(open("{}/impacts.nuis.json".format(args.outputdir)))
        result_rateparam =  json.load(open("{}/impacts.rateParams.json".format(args.outputdir)))

        results = {}
        results["POIs"] = result_nuis["POIs"]
        results["params"] = result_rateparam["params"]
        names = [pr["name"] for pr in results["params"]]
        
        for pr in result_nuis["params"]:
            if pr["name"] not in names:
                results["params"].append(pr)

        json.dump(results, open("{}/impacts.json".format(args.outputdir), "w"), indent=2)

        # Create pdf
        os.system("plotImpacts.py -i {0}/impacts.json -o {0}/impacts".format(args.outputdir))

    


