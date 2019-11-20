# Higgs fractions

Prepare the `scripts` directory.

    mkdir scripts
    cd scripts

Get the source material.

    cp /afs/cern.ch/user/l/lviliani/public/Full2016.txt .

    wget https://raw.githubusercontent.com/latinos/PlotsConfigurations/master/Configurations/Template/plotScripts/CMS_lumi.py
    wget https://raw.githubusercontent.com/latinos/PlotsConfigurations/master/Configurations/Template/plotScripts/tdrstyle.py
    wget https://raw.githubusercontent.com/latinos/PlotsConfigurations/master/Configurations/Template/plotScripts/plot.py
    wget https://raw.githubusercontent.com/latinos/PlotsConfigurations/master/Configurations/Template/plotScripts/multiSignalStrengthPlot.py

Produce the datacards.

    cmsenv

    pushd ../Full2016_nanoAODv4
    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_VH2j_2016.root
    cp datacards/VH_2j_emu/mll/datacard.txt ../scripts/datacard_mll_2016.txt
    popd

    pushd ../Full2017
    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_VH2j_2017.root
    cp datacards/VH_2j_emu/mll/datacard.txt ../scripts/datacard_mll_2017.txt
    popd

    pushd ../Full2018
    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_VH2j_2018.root
    cp datacards/VH_2j_emu/mll/datacard.txt ../scripts/datacard_mll_2018.txt
    popd

Prepare the environment.

    pushd ~piedra/combine/CMSSW_10_2_13/src/
    cmsenv
    popd

Produce the Higgs fractions distributions.

    python multiSignalStrengthPlot.py datacard_mll_2016.txt -p plot.py -l 35.9 -y 2016
    python multiSignalStrengthPlot.py datacard_mll_2017.txt -p plot.py -l 41.5 -y 2017
    python multiSignalStrengthPlot.py datacard_mll_2018.txt -p plot.py -l 58.8 -y 2018
