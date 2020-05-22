import os
import argparse
import json

parser = argparse.ArgumentParser()
parser.add_argument("-i","--inputfile", help="Input file" , type=str)
parser.add_argument("-o","--outputdir", help="Output folder", type=str)
parser.add_argument("-y","--years", nargs="+", help="Years")
parser.add_argument("--wbins", type=str, help="Selected W+jets bining type (no,A,B...)", required=True)
parser.add_argument("-p", "--plot", type=str, help="Do plots in the specified file", default=False, )
parser.add_argument("--mc-asimov", action="store_true", default=True)
parser.add_argument("--data-asimov", action="store_true", default=False)
parser.add_argument("--dry", action="store_true", help="Do not run, only create script", default=False)
parser.add_argument("-fo","--fit-options", help="Robust fit options ", type=int, default=0)
parser.add_argument("--masks", help="File with list of channels to mask",  type=str)
args = parser.parse_args()


fitter_options= { 
    0:  " ",
    1:  "--robustFit=1 --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND",
    2:  "--cminDefaultMinimizerStrategy 0  --cminFallbackAlgo Minuit2,Migrad,0:0.1",
    3:  "--cminDefaultMinimizerStrategy 0  --cminFallbackAlgo Minuit2,Migrad,0:0.1 --robustFit=1 --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND",
}

toysf = "--toysFreq" if args.data_asimov else ""

def prepare_rateParams(years):
    rps = []

    if args.wbins == "no":
        Wjets_bins = ["Wjets" ]
        for y in years:
            for fl in ["ele", "mu"]:
                    rps.append('CMS_Wjets_norm_{}_boost_{}'.format(fl,y))
                    rps.append('CMS_Wjets_norm_{}_res_{}'.format(fl,y))

    elif args.wbins == "A":
        Wjets_bins = ["Wjets_jpt3","Wjets_deta2_jpt2", "Wjets_deta1_jpt2",
                "Wjets_deta2_jpt1","Wjets_deta1_jpt1",
                "Wjets_boost1", "Wjets_boost2"]
    elif args.wbins == "Ares":
        Wjets_bins = ["Wjets_jpt3","Wjets_deta2_jpt2", "Wjets_deta1_jpt2",
                "Wjets_deta2_jpt1","Wjets_deta1_jpt1"]
    elif args.wbins == "Aboost":
        Wjets_bins = ["Wjets_boost1", "Wjets_boost2"]

    elif args.wbins == "B":
        Wjets_bins = ["Wjets_NLO_jpt3","Wjets_NLO_deta2_jpt2", "Wjets_NLO_deta1_jpt2",
                "Wjets_NLO_deta2_jpt1","Wjets_NLO_deta1_jpt1",
                "Wjets_NLO_boost1", "Wjets_NLO_boost2"]

    else:
        print("ERROR! Specify a valid W+jets binning")
        exit(1)
    
    for y in years:
            for wjbin in Wjets_bins:
                for fl in ["ele", "mu"]:
                    if "boost" in wjbin:
                        rps.append('CMS_{}_norm_{}_boost_{}'.format(wjbin, fl,y))
                    else:
                        rps.append('CMS_{}_norm_{}_res_{}'.format(wjbin, fl,y))

    
    for y in years:
        if args.wbins == "A":
            rps.append("CMS_Top_norm_res_{}".format(y))
            rps.append("CMS_Top_norm_boost_{}".format(y))
        elif args.wbins == "Ares":
            rps.append("CMS_Top_norm_res_{}".format(y))
        elif args.wbins == "Aboost":
            rps.append("CMS_Top_norm_boost_{}".format(y))
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

if args.masks:
        mask = "--setParameters "+ ",".join([ "mask_"+ l.strip()+"=1" for l  in open(args.masks).readlines()])
else:
    mask = ""

if not args.plot:
# Prepare the script to create the impacts
    cmd.append("""combineTool.py -M Impacts -d combined.root -m 125 --doInitialFit \\
                -t -1 --expectSignal=1 {} -n nuis.125 \\
                {} {}""".format(toysf, fitter_options[args.fit_options], mask))

    cmd.append("""combineTool.py -M Impacts -d combined.root -m 125 --doFits \\
                -t -1 --expectSignal=1 {} --job-mode condor --task-name nuis -n nuis.125 \\
                {} {}""".format(toysf, fitter_options[args.fit_options],mask))


    cmd.append("""combineTool.py -M Impacts -d combined.root -m 125 --doInitialFit \\
                -t -1 --expectSignal=1 {} -n rateParams.125 \\
                --named {} \\
                --setParameterRanges {} \\
                {} {}""".format(toysf, rparam_names, rparam_ranges, fitter_options[args.fit_options], mask))
    
    cmd.append("""combineTool.py -M Impacts -d combined.root -m 125 --doFits \\
                -t -1 --expectSignal=1 {} \\
                --job-mode condor --task-name rateParams -n rateParams.125 \\
                --named {} \\
                --setParameterRanges {} \\
                {} {}""".format(toysf, rparam_names, rparam_ranges, fitter_options[args.fit_options], mask))

    with open("{}/script_preparation.sh".format(args.outputdir), "w") as of:
        of.write("\n\n".join(cmd))

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
        of.write("\n\n".join(cmd))

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
        # Copy it
        os.system("cp {0}/impacts.pdf {1}".format(args.outputdir, args.plot))
    


