#!/bin/bash

#mkPlot.py --pycfg=configuration_NoSF.py --inputFile=./rootFile/plots_TopNoSF.root
mkPlot.py --pycfg=configuration_TPSF.py --inputFile=./rootFile/plots_TopSF.root
#mkPlot.py --pycfg=configuration_TPSFDown.py --inputFile=./rootFile/plots_TopSFDown.root
#mkPlot.py --pycfg=configuration_TPSFUp.py --inputFile=./rootFile/plots_TopSFUp.root
mkPlot.py --pycfg=configuration_DD.py --inputFile=./rootFile/plots_TopDD.root
