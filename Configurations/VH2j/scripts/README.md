The following code and instructions are needed to draw VH2j Higgs fractions and make yield tables.

# Original material for drawing Higgs fractions

    wget https://raw.githubusercontent.com/latinos/PlotsConfigurations/master/Configurations/Template/plotScripts/CMS_lumi.py
    wget https://raw.githubusercontent.com/latinos/PlotsConfigurations/master/Configurations/Template/plotScripts/tdrstyle.py
    wget https://raw.githubusercontent.com/latinos/PlotsConfigurations/master/Configurations/Template/plotScripts/plot.py
    wget https://raw.githubusercontent.com/latinos/PlotsConfigurations/master/Configurations/Template/plotScripts/multiSignalStrengthPlot.py

Notice that the `multiSignalStrengthPlot.py` macro has been adapted to properly read the VH2j datacards.


# Original material for making yield tables

    wget https://raw.githubusercontent.com/latinos/PlotsConfigurations/master/Configurations/Template/scripts/prepareTables.py

    git clone https://github.com/latinos/PlayWithDatacards

Notice that the `prepareTables.py` macro has been adapted to properly read the VH2j datacards.


# Prepare the environment

    pushd ~piedra/combine/CMSSW_10_2_13/src/
    cmsenv
    popd

    ln -s  /eos/user/c/calderon/HWW_Run2/VH2j_legacyDataCards datacards


# Draw the Higgs fractions

    python multiSignalStrengthPlot.py datacards/2016/VH_2j_emu/mll/datacard.txt --lumi=35.9 --year=2016
    python multiSignalStrengthPlot.py datacards/2017/VH_2j_emu/mll/datacard.txt --lumi=41.5 --year=2017
    python multiSignalStrengthPlot.py datacards/2018/VH_2j_emu/mll/datacard.txt --lumi=58.8 --year=2018


# Make the yield tables

    python prepareTables.py

