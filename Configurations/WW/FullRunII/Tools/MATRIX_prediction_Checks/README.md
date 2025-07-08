#### Go to the folder where scripts are copied
```
cd CMSSW_10_6_39/src/PlotsConfigurations/Configurations/WW/FullRunII/Tools/MATRIX_prediction_Checks/
```

#### Get GEN level pTWW distribution for MINNLOPs samples
```
python3 Get_GEN_ptWW.py
```
##### Input
The file take input the latinos postprocessed qqWW sample files and produces the GEN level distribution for pTWW after the fiducial cuts. 

##### Output
This will produce following output:
1. rootfile with pTWW distribution histogram: lhe_ptww_MINNLOPs_qqWW.png
2. png file with distribution: lhe_ptww_MINNLOPs_qqWW.root

#### Compare the MATRIX predictions with MINNLOPs
```
python3 Get_Ratio_Plot.py
```
##### Input
1. lhe_ptww_MINNLOPs_qqWW.root from above step
2. hists_MATRIX.root from /afs/cern.ch/user/s/ssaumya/public/ForArun/MATRIX_ptWW_Checks/

##### Output
This will produce following output matrix_vs_minnlops_comparison.png, which compares the pTWW distributions for MATRIX predictions with MINNLOPs sample.

##### CAUTION 
The `Get_Ratio_Plot.py` also rebins the MATRIX histogram in hists_MATRIX.root, due to a bug which creates 40 bins instead of 20, with dupilcate values for 2 consecutive bins.

### Details: 
1. We have the MATRIX predictions in hists_MATRIX.root, which has differential Xsec of pTWW i.e. (dsigma/pTWW) in fb/10GeV with the fiducial cuts.
2. We have the pTWW distribution for MINNLOPs sample at GEN level after applying fiducial cuts in lhe_ptww_MINNLOPs_qqWW.root
3. We convert the 1 into 2 using `Events = (dsigma/dptWW) × bin_width × L_int (138fb-1)` where bin_width = 10GeV.

### Condor Submission

```
# Get list of files in a List_cff.py
# python generate_file_list.py <year> <pattern> <output_file>
python3 generate_file_list.py 2018 'nanoLatino_WWJTo2L2Nu_minnlo__part*.root' List_MINNLOPs_qqWW_2018_cff.py

# Submit jobs
#    Input file (analysis-script): Get_GEN_ptWW_condor.py
#    Outpur root files will be saved in directory given to --output-dir argument
python3 createJobs.py \
  --tag Test \
  --list-file List_Test_cff.py \
  -n 1 \
  --analysis-script /afs/cern.ch/work/s/ssaumya/private/Projects/WW_Analysis_Work/CMSSW_10_6_39/src/PlotsConfigurations/Configurations/WW/FullRunII/Tools/MATRIX_prediction_Check/9THjULY2025/Get_GEN_ptWW_condor.py \
  --output-dir= /afs/cern.ch/work/s/ssaumya/private/Projects/WW_Analysis_Work/CMSSW_10_6_39/src/PlotsConfigurations/Configurations/WW/FullRunII/Tools/MATRIX_prediction_Check/9THjULY2025/condor_jobs_Test/ \
  --cmssw-env /afs/cern.ch/work/s/ssaumya/private/Projects/WW_Analysis_Work/CMSSW_10_6_39/src/ \
  --flavour espresso
```
