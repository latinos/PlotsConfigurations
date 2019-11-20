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

Prepare the environment.

    pushd ~piedra/combine/CMSSW_10_2_13/src/
    cmsenv
    popd

Produce the Higgs fractions distributions.

    python multiSignalStrengthPlot.py Full2016.txt --plotFile=plot.py --cmsLumi=35.9
