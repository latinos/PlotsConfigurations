import sys,os
import optparse


# Parsing input parameter
usage = 'usage: %prog [options]'
parser = optparse.OptionParser(usage)

parser.add_option('--datacard_name', dest='datacard_name', help='datacard to use for the fit',           default="DEFAULT")
parser.add_option('--output_name',   dest='output_name',   help='txt file where fit results are saved',  default="DEFAULT")
parser.add_option('--sanity_check',  dest='sanity_check',  help='flag for additional fit sanity checks', default=False)

(opt, args) = parser.parse_args()

print("Datacard name   = {}".format(opt.datacard_name))
print("Output name     = {}".format(opt.output_name))
print("Do santy checks = {}".format(opt.sanity_check))


# Exceptions
if opt.datacard_name == 'DEFAULT' :
    raise ValueError("Please insert datacard file name")
    
if opt.output_name == 'DEFAULT' :
    raise ValueError("Please insert output file name")


# Assign input parameters to variables
datacard_name = opt.datacard_name
output_name   = opt.output_name

sanity_check = False
if opt.sanity_check == "True" or opt.sanity_check == "1":
    opt.sanity_check = True
else:
    sanity_check = opt.sanity_check
    
# Create workspace
workspace_command = "text2workspace.py \
                     {0}.txt \
                     -o {0}.root \
                     -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                     -m 125 \
                     --PO verbose \
                     --PO 'map=.*/ggH_hww:r_higgs[1,-20,20]' \
                     --PO 'map=.*/qqH_hww:r_higgs[1,-20,20]' \
                     --PO 'map=.*/ZH_hww:r_higgs[1,-20,20]' \
                     --PO 'map=.*/ggZH_hww:r_higgs[1,-20,20]' \
                     --PO 'map=.*/ttH_hww:r_higgs[1,-20,20]' \
                     --PO 'map=.*/ggH_htt:r_higgs[1,-20,20]' \
                     --PO 'map=.*/qqH_htt:r_higgs[1,-20,20]' \
                     --PO 'map=.*/ZH_htt:r_higgs[1,-20,20]' \
                     --PO 'map=.*/WH_h.*_plus:r_WH_plus=expr;;r_WH_plus(\"@0*(1+@1)/(2*0.8380)\",r_S[1.3693,0,20],r_A[0.224,-1,100])' \
                     --PO 'map=.*/WH_h.*_minus:r_WH_minus=expr;;r_WH_minus(\"@0*(1-@1)/(2*0.5313)\",r_S[1.3693,0,20],r_A[0.224,-1,100])' \
                     ".format(datacard_name)


# Fit to get the asymmetry value
combine_command = "combine \
                   -M MultiDimFit \
                   --algo=singles \
                   -d {0}.root \
                   -t -1 \
                   --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 \
                   --setParameterRanges r_S=0,20:r_A=-1,100:r_higgs=-20,20 \
                   --redefineSignalPOIs r_S,r_A,r_higgs \
                   > {1} \
                   ".format(datacard_name,output_name)
#                   --X-rtd MINIMIZER_analytic \


# combineTool.py -M MultiDimFit --algo grid -t -1 --setParameters r=1 --X-rtd MINIMIZER_analytic --cminDefaultMinimizerStrategy=0 -d ../../globalMu_htt.root -n globalMu_scan --task-name globalMu_scan --autoRange 2 --points 40 --split-points 1 --job-mode=condor --redefineSignalPOIs r --floatOtherPOIs 1
# grid
# Likelihood scan on POIs - focusing on r_A
rA_scan_command = "combineTool.py \
                   -M MultiDimFit \
                   --algo grid \
                   -t -1 \
                   --setParameters r_A=0.224 \
                   -d {0}.root \
                   -n globalMu_scan \
                   --points 40 \
                   --redefineSignalPOIs r_A \
                   --floatOtherPOIs 1 \
                   ".format(datacard_name)

                   # --X-rtd MINIMIZER_analytic \
                   # --cminDefaultMinimizerStrategy=0 \

                   # --task-name globalMu_scan \
                   # --autoRange 2 \
                   # --split-points 1 \
                   # --job-mode=condor \


# Likelihood scan on POIs
likelihood_scan_command = "combine \
                           -M MultiDimFit \
                           --algo=grid \
                           --points=1000 \
                           -d {0}.root \
                           -t -1 \
                           --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 \
                           --setParameterRanges r_S=0,20:r_A=-4,4:r_higgs=-20,20 \
                           --redefineSignalPOIs r_A,r_S,r_higgs \
                           --floatOtherPOIs 1 \
                           ".format(datacard_name)


# Fast likelihood scan of all parameters
prepare_toy_command = "combine \
                       -M GenerateOnly \
                       -d {0}.root \
                       -t -1 \
                       --saveToys \
                       --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 \
                       ".format(datacard_name)

fast_scan_command = "combineTool.py \
                     -M FastScan \
                     --robustHesse=1 \
                     -w {0}.root:w \
                     -d higgsCombineTest.GenerateOnly.mH120.123456.root:toys/toy_asimov \
                     ".format(datacard_name)

# Fit diagnostic  
fit_diagnostics_command = "combine \
                           -M FitDiagnostics {0}.root \
                           -t -1 \
                           --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 \
                           --saveWithUncertainties \
                           --saveOverallShapes \
                           --numToysForShapes 200 \
                           ".format(datacard_name)


# Now use the commands
print("Preparing workspace...")
print(workspace_command)
os.system(workspace_command)
print("\n")
print("\n")

print("Fitting the asymmetry value...")
print(combine_command)
os.system(combine_command)
print("\n")
print("\n")

print("Moving output to Combine folder...")
root_output_name = output_name.replace(".txt",".root")
move_command = "mv higgsCombineTest.MultiDimFit.mH120.root {}".format(root_output_name)
os.system(move_command)
print(move_command)
print("\n")
print("\n")

print("Sanity check flag: {}".format(sanity_check))
if sanity_check != False:

    # To read output file:
    # limit->Draw("deltaNLL:r_A","r_S < 1.5 && r_S > 0 && r_higgs > 0 && r_higgs < 2.5","colz")
    if "ML" in sanity_check:
        print("Performing likelihood scan on POIs...")
        print(likelihood_scan_command)
        os.system(likelihood_scan_command)
        ML_output_name = output_name.replace(".txt","_ML.root")
        move_command = "mv higgsCombineTest.MultiDimFit.mH120.root {}".format(ML_output_name)
        print(move_command)
        os.system(move_command)
        print("\n")
        print("\n")


    if "rA_scan" in sanity_check:
        print("Performing likelihood scan on POIs, focusing on r_A...")
        print(rA_scan_command)
        os.system(rA_scan_command)
        rA_output_name = output_name.replace(".txt","_rA.root")
        move_command = "mv higgsCombineglobalMu_scan.MultiDimFit.mH120.root {}".format(rA_output_name)
        print(move_command)
        os.system(move_command)
        print("\n")
        print("\n")


    if "FS" in sanity_check:
        print("Preparing toys for fast likelihood scan on all parameters...")
        print(prepare_toy_command)
        os.system(prepare_toy_command)
        print("\n")
        print("\n")
        
        print("Now doing fast scan...")
        print(fast_scan_command)
        os.system(fast_scan_command)
        print("\n")
        print("\n")

    # print("Doing FitDiagnistics...")
    # print(fit_diagnostics_command)
    # os.system(fit_diagnostics_command)
    # print("\n")
    # print("\n")
