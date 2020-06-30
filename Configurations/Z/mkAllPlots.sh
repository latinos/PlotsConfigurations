#!/bin/bash

mkPlot.py --pycfg=configuration_NobpogSF.py --inputFile=./rootFile/plots_NoTopBpogSF.root
mkPlot.py --pycfg=configuration_bpogSF.py --inputFile=./rootFile/plots_TopBpogSF.root
mkPlot.py --pycfg=configuration_bpogSFDown.py --inputFile=./rootFile/plots_TopBpogSFDown.root
mkPlot.py --pycfg=configuration_bpogSFUp.py --inputFile=./rootFile/plots_TopBpogSFUp.root
mkPlot.py --pycfg=configuration_bpogSF_scare.py --inputFile=./rootFile/plots_TopBpogSFScare.root
mkPlot.py --pycfg=configuration_bpogSF_scareDown.py --inputFile=./rootFile/plots_TopBpogSFScareDown.root
mkPlot.py --pycfg=configuration_bpogSF_scareUp.py --inputFile=./rootFile/plots_TopBpogSFScareUp.root
