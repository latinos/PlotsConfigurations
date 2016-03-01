#!/bin/bash

#mkPlot.py --pycfg=configuration_NoSF.py --inputFile=./rootFile/plots_TopNoSF.root
mkPlot.py --pycfg=configuration_BPogSF.py --inputFile=./rootFile/plots_TopSF.root
#mkPlot.py --pycfg=configuration_BPogSFDown.py --inputFile=./rootFile/plots_TopSFDown.root
#mkPlot.py --pycfg=configuration_BPogSFUp.py --inputFile=./rootFile/plots_TopSFUp.root
mkPlot.py --pycfg=configuration_DD.py --inputFile=./rootFile/plots_TopDD.root
