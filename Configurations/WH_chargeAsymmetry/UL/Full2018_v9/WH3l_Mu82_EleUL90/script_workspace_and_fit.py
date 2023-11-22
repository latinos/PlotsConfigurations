import sys,os
import optparse


# Parsing input parameter
usage = 'usage: %prog [options]'
parser = optparse.OptionParser(usage)

parser.add_option('--datacard_name',    dest='datacard_name',    help='datacard to use for the fit',           default="DEFAULT")
parser.add_option('--output_name',      dest='output_name',      help='txt file where fit results are saved',  default="DEFAULT")
parser.add_option('--sanity_check',     dest='sanity_check',     help='flag for additional fit sanity checks', default=False)
parser.add_option('--freeze_nuisances', dest='freeze_nuisances', help='freeze systematic uncertainties',       default=False)

(opt, args) = parser.parse_args()

print("Datacard name    = {}".format(opt.datacard_name))
print("Output name      = {}".format(opt.output_name))
print("Do santy checks  = {}".format(opt.sanity_check))
print("Freeze nuisances = {}".format(opt.freeze_nuisances))


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

nuisances = ""
if opt.freeze_nuisances == "True" or opt.freeze_nuisances == "1":
    nuisances = "--freezeParameters lumi_13TeV_2018,lumi_13TeV_XYFact,lumi_13TeV_CurrCalib,lumi_13TeV_LSCale,CMS_fake_syst_mm,CMS_fake_syst_em,CMS_fake_e_2018,CMS_fake_stat_e_2018,CMS_fake_m_2018,CMS_fake_stat_m_2018,CMS_btag_jes,CMS_btag_lf,CMS_btag_hf,CMS_btag_hfstats1_2018,CMS_btag_hfstats2_2018,CMS_btag_lfstats1_2018,CMS_btag_lfstats2_2018,CMS_btag_cferr1,CMS_btag_cferr2,CMS_eff_hwwtrigger_2018,CMS_eff_e_2018,CMS_scale_e_2018,CMS_eff_m_2018,CMS_scale_m_2018,CMS_scale_JESAbsolute,CMS_scale_JESAbsolute_2018,CMS_scale_JESBBEC1,CMS_scale_JESBBEC1_2018,CMS_scale_JESEC2,CMS_scale_JESEC2_2018,CMS_scale_JESFlavorQCD,CMS_scale_JESHF,CMS_scale_JESHF_2018,CMS_scale_JESRelativeBal,CMS_scale_JESRelativeSample_2018,CMS_res_j_2018,CMS_scale_met_2018,CMS_PU_2018,CMS_PUID_2018,UE_whss,CMS_whss_chargeFlip,pdf_Higgs_gg,pdf_Higgs_ttH,pdf_Higgs_qqbar,pdf_qqbar,pdf_Higgs_gg_ACCEPT,pdf_gg_ACCEPT,pdf_Higgs_qqbar_ACCEPT,pdf_qqbar_ACCEPT,QCDscale_V,QCDscale_VV,QCDscale_ggVV,QCDscale_qqH,QCDscale_VH,QCDscale_ggZH,QCDscale_ttH,QCDscale_WWewk,QCDscale_qqbar_ACCEPT,QCDscale_gg_ACCEPT,singleTopToTTbar,CMS_topPtRew,CMS_hww_WgStarScale"
    nuisances = "--freezeParameters allConstrainedNuisances"
if opt.freeze_nuisances == "r_higgs":
    nuisances = "--freezeParameters r_higgs"


####################    
### Create workspace
####################

# Using POIs: r_S, r_A
workspace_command = "text2workspace.py \
                     {0}.txt \
                     -o {0}.root \
                     -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                     -m 125 \
                     --PO verbose \
                     --PO 'map=.*/ggH_hww:r_higgs[1,0.99,1.01]' \
                     --PO 'map=.*/qqH_hww:r_higgs[1,0.99,1.01]' \
                     --PO 'map=.*/ZH_hww:r_higgs[1,0.99,1.01]' \
                     --PO 'map=.*/ggZH_hww:r_higgs[1,0.99,1.01]' \
                     --PO 'map=.*/ttH_hww:r_higgs[1,0.99,1.01]' \
                     --PO 'map=.*/ggH_htt:r_higgs[1,0.99,1.01]' \
                     --PO 'map=.*/qqH_htt:r_higgs[1,0.99,1.01]' \
                     --PO 'map=.*/ZH_htt:r_higgs[1,0.99,1.01]' \
                     --PO 'map=.*/WH_h.*_plus:r_WH_plus=expr;;r_WH_plus(\"@0*(1+@1)/(2*0.8380)\",r_S[1.3693,0.01,5],r_A[0.224,-1,1])' \
                     --PO 'map=.*/WH_h.*_minus:r_WH_minus=expr;;r_WH_minus(\"@0*(1-@1)/(2*0.5313)\",r_S,r_A)' \
                     ".format(datacard_name)

#                     --PO 'map=.*/WH_h.*_minus:r_WH_minus=expr;;r_WH_minus(\"(@0-@1*0.8380)/0.5313\",r_S,r_WH_plus)' \

# Using only one POI for the total WH signal strength
workspace_command_WH = "text2workspace.py \
                        {0}.txt \
                        -o {0}_WH_strength.root \
                        -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                        -m 125 \
                        --PO verbose \
                        --PO 'map=.*/ggH_hww:r_higgs[1,0.99,1.01]' \
                        --PO 'map=.*/qqH_hww:r_higgs[1,0.99,1.01]' \
                        --PO 'map=.*/ZH_hww:r_higgs[1,0.99,1.01]' \
                        --PO 'map=.*/ggZH_hww:r_higgs[1,0.99,1.01]' \
                        --PO 'map=.*/ttH_hww:r_higgs[1,0.99,1.01]' \
                        --PO 'map=.*/ggH_htt:r_higgs[1,0.99,1.01]' \
                        --PO 'map=.*/qqH_htt:r_higgs[1,0.99,1.01]' \
                        --PO 'map=.*/ZH_htt:r_higgs[1,0.99,1.01]' \
                        --PO 'map=.*/WH_h.*_plus:r_WH[1,0.01,10.0]' \
                        --PO 'map=.*/WH_h.*_minus:r_WH[1,0.01,10.0]' \
                        ".format(datacard_name)


################
### Actually fit
################

# Fit to get the asymmetry value
combine_command = "combine \
                   -M MultiDimFit \
                   --algo=singles \
                   -d {0}.root \
                   -t -1 \
                   --setParameters r_S=1.3693,r_A=0.224 \
                   --setParameterRanges r_S=0.01,5:r_A=-1,1 \
                   --redefineSignalPOIs r_S,r_A \
                   {2} \
                   > {1} \
                   ".format(datacard_name,output_name,nuisances)

#                   --X-rtd MINIMIZER_analytic \
#                   -v 9 \

# Fit to get the total WH signal strength
combine_command_WH = "combine \
                      -M MultiDimFit \
                      --algo=singles \
                      -d {0}_WH_strength.root \
                      -t -1 \
                      --setParameters r_WH=1 \
                      --setParameterRanges r_WH=0.01,10 \
                      --redefineSignalPOIs r_WH \
                      {2} \
                      > {1} \
                      ".format(datacard_name,output_name.replace(".txt","_WH_strength.txt"),nuisances)

# combineTool.py -M MultiDimFit --algo grid -t -1 --setParameters r=1 --X-rtd MINIMIZER_analytic --cminDefaultMinimizerStrategy=0 -d ../../globalMu_htt.root -n globalMu_scan --task-name globalMu_scan --autoRange 2 --points 40 --split-points 1 --job-mode=condor --redefineSignalPOIs r --floatOtherPOIs 1
# grid

# Likelihood scan on POIs - focusing on r_A
rA_scan_command = "combine \
                   -M MultiDimFit \
                   --algo grid \
                   -t -1 \
                   --setParameters r_A=0.224,r_S=1.3693 \
                   -d {0}.root \
                   -n _r_A_scan \
                   --points 100 \
                   --redefineSignalPOIs r_A,r_S \
                   -P r_A \
                   --floatOtherPOIs 1 \
                   --trackParameters r_S \
                   {1} \
                   ".format(datacard_name,nuisances)


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
                           --points=50 \
                           -d {0}.root \
                           -t -1 \
                           --setParameters r_S=1.3693,r_A=0.224 \
                           --setParameterRanges r_S=-0.01,5:r_A=-1,1 \
                           --redefineSignalPOIs r_A,r_S \
                           --floatOtherPOIs 1 \
                          {1} \
                           ".format(datacard_name,nuisances)
                           # ,r_higgs 

# Fast likelihood scan of all parameters
prepare_toy_command = "combine \
                       -M GenerateOnly \
                       -d {0}.root \
                       -t -1 \
                       --saveToys \
                       --setParameters r_S=1.3693,r_A=0.224 \
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
                           --setParameters r_S=1.3693,r_A=0.224 \
                           --saveShapes \
                           --saveWithUncertainties \
                           ".format(datacard_name)

# --saveOverallShapes \
# --numToysForShapes 200 \


######################
# Now use the commands
######################

# Asymmetry extraction
print("Preparing workspace for asymmetry...")
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
if (opt.freeze_nuisances) == "1" or (opt.freeze_nuisances) == "True":
    root_output_name = output_name.replace(".txt","_freeze.root")
move_command = "mv higgsCombineTest.MultiDimFit.mH120.root {}".format(root_output_name)
# os.system(move_command)
print(move_command)
print("\n")
print("\n")


# Total signal strength extraction
print("Preparing workspace for WH signal strength...")
print(workspace_command_WH)
os.system(workspace_command_WH)
print("\n")
print("\n")

print("Fitting the signal strength value...")
print(combine_command_WH)
os.system(combine_command_WH)
print("\n")
print("\n")

print("Moving output to Combine folder...")
root_output_name_WH = output_name.replace(".txt","_WH_strength.root")
if (opt.freeze_nuisances) == "1" or (opt.freeze_nuisances) == "True":
    root_output_name_WH = output_name.replace(".txt","_WH_strength_freeze.root")
move_command = "mv higgsCombineTest.MultiDimFit.mH120.root {}".format(root_output_name_WH)
# os.system(move_command)
print(move_command)
print("\n")
print("\n")


# # Using original asymmetry definition
# print("Preparing workspace...")
# print(workspace_command_original)
# os.system(workspace_command_original)
# print("\n")
# print("\n")

# print("Fitting the asymmetry value...")
# print(combine_command_original)
# os.system(combine_command_original)
# print("\n")
# print("\n")

# print("Moving output to Combine folder...")
# root_output_name_original = output_name_original.replace(".txt",".root")
# if (opt.freeze_nuisances) == "1" or (opt.freeze_nuisances) == "True":
#     root_output_name = output_name.replace(".txt","_freeze.root")
# move_command = "mv higgsCombineTest.MultiDimFit.mH120.root {}".format(root_output_name_original)
# os.system(move_command)
# print(move_command)
# print("\n")
# print("\n")


# Additional sanity checks
print("Sanity check flag: {}".format(sanity_check))
if sanity_check != False:

    # To read output file:
    # limit->Draw("deltaNLL:r_A","r_S < 1.5 && r_S > 0 && r_higgs > 0 && r_higgs < 2.5","colz")
    if "ML" in sanity_check:
        print("Performing likelihood scan on POIs...")
        print(likelihood_scan_command)
        os.system(likelihood_scan_command)
        ML_output_name = output_name.replace(".txt","_ML.root")
        if (opt.freeze_nuisances) == "1" or (opt.freeze_nuisances) == "True":
            ML_output_name = output_name.replace(".txt","_ML_freeze.root")
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
        if (opt.freeze_nuisances) == "1" or (opt.freeze_nuisances) == "True":
            rA_output_name = output_name.replace(".txt","_rA_freeze.root")
        move_command = "mv higgsCombine_r_A_scan.MultiDimFit.mH120.root {}".format(rA_output_name)
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

    if "FD" in sanity_check:
        print("Doing FitDiagnistics...")
        print(fit_diagnostics_command)
        os.system(fit_diagnostics_command)
        print("\n")
        print("\n")
        FD_output_name = output_name.replace(".txt","_fitDiagnostics.root")
        if (opt.freeze_nuisances) == "1" or (opt.freeze_nuisances) == "True":
            rA_output_name = output_name.replace(".txt","_fitDiagnostics_freeze.root")
        move_command = "mv fitDiagnosticsTest.root {}".format(FD_output_name)
        print(move_command)
        os.system(move_command)
        print("\n")
        print("\n")
