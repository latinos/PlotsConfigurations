The following code and instructions are needed to:
* draw Higgs fractions;
* make yield tables;
* make prefit and posfit plots;
* make mjj plot.


# Original material for drawing Higgs fractions

    wget https://raw.githubusercontent.com/latinos/PlotsConfigurations/master/Configurations/Template/plotScripts/CMS_lumi.py
    wget https://raw.githubusercontent.com/latinos/PlotsConfigurations/master/Configurations/Template/plotScripts/tdrstyle.py
    wget https://raw.githubusercontent.com/latinos/PlotsConfigurations/master/Configurations/Template/plotScripts/plot.py
    wget https://raw.githubusercontent.com/latinos/PlotsConfigurations/master/Configurations/Template/plotScripts/multiSignalStrengthPlot.py

Notice that the `multiSignalStrengthPlot.py` macro has been adapted to properly read the VH2j datacards.


# Original material for making yield tables

    wget https://raw.githubusercontent.com/latinos/PlotsConfigurations/master/Configurations/Template/scripts/prepareTables.py

    git clone https://github.com/latinos/PlayWithDatacards

Overwrite the original `systematicsAnalyzer.py` script.

    cp systematicsAnalyzer.py PlayWithDatacards/.

Notice that the `prepareTables.py` macro has been adapted to properly read the VH2j datacards.


# Prepare the environment

    pushd ~piedra/combine/CMSSW_10_2_13/src/
    cmsenv
    popd

    ln -s  /eos/user/c/calderon/HWW_Run2/VH2j_legacyDataCards datacards


# Draw the Higgs fractions

Reading the `legacyDataCards` folder.

    python multiSignalStrengthPlot.py datacards/2016/VH_2j_emu/mll/datacard.txt --lumi=35.9 --year=2016
    python multiSignalStrengthPlot.py datacards/2017/VH_2j_emu/mll/datacard.txt --lumi=41.5 --year=2017
    python multiSignalStrengthPlot.py datacards/2018/VH_2j_emu/mll/datacard.txt --lumi=58.8 --year=2018
    
Reading the `v6` folders.

    python multiSignalStrengthPlot.py ../Full2016_v6/datacards/VH_2j_emu/mll/datacard.txt --lumi=35.9 --year=2016
    python multiSignalStrengthPlot.py ../Full2017_v6/datacards/VH_2j_emu/mll/datacard.txt --lumi=41.5 --year=2017
    python multiSignalStrengthPlot.py ../Full2018_v6/datacards/VH_2j_emu/mll/datacard.txt --lumi=58.8 --year=2018


# Make the yield tables

The script below will produce three tables for each data-taking period, corresponding to the DYtautau, top and signal regions. This means a total of nine tables in latex format, for 2016, 2017 and 2018.

    python prepareTables.py


# Make prefit and postfit plots 

After creating the datacards, you should run the following command to get the file `fitDiagnostics.root`.

    combine -M FitDiagnostics -d datacards_mll.root --X-rtd MINIMIZER_analytic --saveShapes --saveNormalizations --saveWithUncertainties

The output should be prepared to have the final root file and plot it.

    mkPostFitPlot.py --inputFileCombine fitDiagnostics.root --outputFile out.root --variable mll --cut ch1 --cutNameInOriginal VH_2j_emu --inputFile rootFile/plots_VH2j_2017.root --kind b

You can plot with `mkPlot.py`.

    mkPlot.py --pycfg=configuration.py --inputFile=out.root --onlyCut=VH_2j_emu --onlyVariable=mll --postFit y


# Make mjj plot

Produce histograms.

    root -l -b -q mjj.C\(0\)

Draw histograms.

    root -l -b -q mjj.C\(1\)

