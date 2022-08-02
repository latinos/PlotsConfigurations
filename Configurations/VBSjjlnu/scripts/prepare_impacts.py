import os
import argparse
import json

parser = argparse.ArgumentParser()
parser.add_argument("-i","--inputfile", help="Input file" , type=str)
parser.add_argument("-o","--outputdir", help="Output folder", type=str)
parser.add_argument("-y","--years", nargs="+", help="Years")
parser.add_argument("--wbins", type=str, help="Selected W+jets bining type (no,A,B...)", required=True)
parser.add_argument("-p", "--plot", type=str, help="Do plots in the specified file", default=False, )
parser.add_argument("--mc-asimov", action="store_true", default=False)
parser.add_argument("--data-asimov", action="store_true", default=False)
parser.add_argument("--data-unblind", action="store_true", default=False)
parser.add_argument("--dry", action="store_true", help="Do not run, only create script", default=False)
parser.add_argument("-fo","--fit-options", help="Robust fit options ", type=int, default=0)
parser.add_argument("--masks", help="File with list of channels to mask",  type=str)
parser.add_argument("-q","--queue", help="Queue", type=str,default="microcentury")
parser.add_argument("-v","--verbose", help="Combine verbosity level", type=int, default=0)
args = parser.parse_args()


fitter_options= { 
    0:  " ",
    1:  "--robustFit=1 --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND",
    2:  "--cminDefaultMinimizerStrategy 0  --cminFallbackAlgo Minuit2,Migrad,0:0.1",
    3:  "--robustFit=1 --cminDefaultMinimizerStrategy 0  --cminFallbackAlgo Minuit2,Migrad,0:0.1--X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND",
    4:  "--robustFit=1 --cminDefaultMinimizerStrategy 0 --X-rtd MINIMIZER_MaxCalls=9999999 --cminFallbackAlgo Minuit2,Migrad,0:0.1  --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND",
    5:  "--robustFit=1 --cminDefaultMinimizerStrategy 0 --X-rtd=MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=9999999 --cminFallbackAlgo Minuit2,Migrad,0:0.1  --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND",
    6:  "--robustFit=1 --cminDefaultMinimizerStrategy 0 --X-rtd MINIMIZER_MaxCalls=9999999 --cminFallbackAlgo Minuit2,Migrad,0:0.2  --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND --setRobustFitTolerance 0.2 --stepSize=0.001",
    7:  "--robustFit=1 --cminDefaultMinimizerStrategy=0 --X-rtd=MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=9999999 --cminFallbackAlgo Minuit2,Simplex,0:0.2 --setRobustFitTolerance 0.2 --stepSize=0.001  --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND",
    8: "--robustFit=1 --cminDefaultMinimizerStrategy=0 --X-rtd=MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=9999999 --cminFallbackAlgo Minuit2,Migrad,0:0.4 --setRobustFitTolerance 0.4 --stepSize=0.01 --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND"
}

if args.data_asimov:
    toysf = "-t -1 --expectSignal=1 --toysFreq"
elif args.mc_asimov:
    toysf = "-t -1 --expectSignal=1"
elif args.data_unblind:
    toysf = ""
else:
    toysf = "--expectSignal=1"

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

    elif args.wbins in  ["v4_res", "v4_res_ele", "v4_res_mu"]:
        Wjets_bins = []
        for ir in range(1,7):
            Wjets_bins.append("Wjets_HT_res_"+str(ir))
    elif args.wbins  in ["v4_boost", "v4_boost_ele", "v4_boost_mu"]:
        Wjets_bins = []
        for ir in range(1,6):
            Wjets_bins.append("Wjets_HT_boost_"+str(ir))
    elif args.wbins == 'v4':
        Wjets_bins = []
        for ir in range(1,7):
            Wjets_bins.append("Wjets_HT_res_"+str(ir))
        for ir in range(1,6):
            Wjets_bins.append("Wjets_HT_boost_"+str(ir))
    elif args.wbins == 'v5':
        Wjets_bins = []
        for ir in range(1,22):
            Wjets_bins.append("Wjets_res_"+str(ir))
        for ir in range(1,8):
            Wjets_bins.append("Wjets_boost_"+str(ir))


    else:
        print("ERROR! Specify a valid W+jets binning")
        exit(1)
    
    fls = []
    if "ele" in args.wbins: fls.append("ele")
    elif "mu" in args.wbins: fls.append("mu")
    else: fls=['ele','mu']


    for y in years:
            for wjbin in Wjets_bins:
                for fl in fls:
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
        elif args.wbins == "v4":
            rps.append("CMS_Top_norm_ele_res_{}".format(y))
            rps.append("CMS_Top_norm_ele_boost_{}".format(y))
            rps.append("CMS_Top_norm_mu_res_{}".format(y))
            rps.append("CMS_Top_norm_mu_boost_{}".format(y))
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
                {} -n nuis  {} {} -v {}""".format(toysf, fitter_options[args.fit_options], mask, args.verbose))

    cmd.append("""combineTool.py -M Impacts -d combined.root -m 125  --doFits \\
              {} --job-mode condor --sub-opts '+JobFlavour="{}"' \\
                 --task-name nuis -n nuis \\
                {} {} -v {}""".format(toysf, args.queue, fitter_options[args.fit_options],mask, args.verbose))


    cmd.append("""combineTool.py -M Impacts -d combined.root -m 125  --doInitialFit \\
               {} -n rateParams \\
                --named {} --setParameterRanges {} \\
                {} {} -v {}""".format(toysf, rparam_names, rparam_ranges, fitter_options[args.fit_options], mask, args.verbose))
    
    cmd.append("""combineTool.py -M Impacts -d combined.root -m 125  --doFits \\
              {} --job-mode condor  --sub-opts '+JobFlavour="{}"' --task-name rateParams -n rateParams \\
                --named {} --setParameterRanges {} \\
                {} {} -v {}""".format(toysf, args.queue, rparam_names, rparam_ranges, fitter_options[args.fit_options], mask, args.verbose ))

    with open("{}/script_preparation.sh".format(args.outputdir), "w") as of:
        of.write("\n\n".join(cmd))

    if not args.dry:
        os.system("sh {}/script_preparation.sh".format(args.outputdir))


if args.plot:
    cmd.append("""combineTool.py -M Impacts -d combined.root {} -m 125  -o impacts.nuis.json -n nuis""".format(toysf))
    cmd.append("""combineTool.py -M Impacts -d combined.root {} -m 125 --named {} \\
                --setParameterRanges {} -o impacts.rateParams.json -n rateParams  """.format(toysf,rparam_names,rparam_ranges))

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
    


