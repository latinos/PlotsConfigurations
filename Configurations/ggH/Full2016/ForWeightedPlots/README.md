Instructions to produce weighted plots combining different phase spaces
====

Master code:

    mkCombinedPlot.py
    
How to use:

       
    mkCombinedPlot.py        --pycfg=configuration_lxbatch.py  --inputCutsList=cuts_to_merge.py   --outputDirPlots=plots/  \
          --variable=mllVSmth  \
          --minvariable=10 \
          --maxvariable=110  \
          --variableHR="m_{ll} [GeV]" \
          --getVarFromFile=1 \
          --divideByBinWidth \
          --removeOverflow \
    
    --getVarFromFile=1: get the variable binning from variables.py
    --divideByBinWidth: didive the bin content by the bin width, useful for asymmetric binning
    --removeOverflow: drop the overflow bin 
    
    
    

    
    
    
