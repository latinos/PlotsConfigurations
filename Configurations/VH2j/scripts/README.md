The following code and instructions are needed to produce VH2j Higgs fractions distributions.

# Original material

    cp /afs/cern.ch/user/l/lviliani/public/Full2016.txt .

    wget https://raw.githubusercontent.com/latinos/PlotsConfigurations/master/Configurations/Template/plotScripts/CMS_lumi.py
    wget https://raw.githubusercontent.com/latinos/PlotsConfigurations/master/Configurations/Template/plotScripts/tdrstyle.py
    wget https://raw.githubusercontent.com/latinos/PlotsConfigurations/master/Configurations/Template/plotScripts/plot.py
    wget https://raw.githubusercontent.com/latinos/PlotsConfigurations/master/Configurations/Template/plotScripts/multiSignalStrengthPlot.py

Notice that the `multiSignalStrengthPlot.py` macro has been adapted to properly read the VH2j datacards.


# Get the datacards

    cp /eos/user/c/calderon/HWW_Run2/VH2j_legacyDataCards/2016/VH_2j_emu/mll/datacard.txt datacard_mll_2016.txt
    cp /eos/user/c/calderon/HWW_Run2/VH2j_legacyDataCards/2017/VH_2j_emu/mll/datacard.txt datacard_mll_2017.txt
    cp /eos/user/c/calderon/HWW_Run2/VH2j_legacyDataCards/2018/VH_2j_emu/mll/datacard.txt datacard_mll_2018.txt


# Prepare the combine environment

    pushd ~piedra/combine/CMSSW_10_2_13/src/
    cmsenv
    popd


# Draw the Higgs fractions

    python multiSignalStrengthPlot.py datacard_mll_2016.txt --lumi=35.9 --year=2016
    python multiSignalStrengthPlot.py datacard_mll_2017.txt --lumi=41.5 --year=2017
    python multiSignalStrengthPlot.py datacard_mll_2018.txt --lumi=58.8 --year=2018

