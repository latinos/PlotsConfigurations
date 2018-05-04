Impact plots
====

    doImpact.sh
    

Max-likelihood fit 
====

    combine -M MaxLikelihoodFit   --rMin=-4 --rMax=6     datacards_3Dec/hww2l2v_13TeV_of2j_vbf_highmjj/mll_optim/datacard.txt          >   result.data.MaxLikelihoodFit.Combined.vbf.txt
    
    combine -M MaxLikelihoodFit datacards_3Dec/hww2l2v_13TeV_of2j_vbf_highmjj/mll_optim/datacard.txt  -n mytest --saveShapes --saveNormalizations   --saveWithUncertainties
 
    mkPostFitTable.py --pycfg=configuration.py    --inputFileCombine fitDiagnosticsmytest.root --outputFile out.txt --variable mll_optim --cut hww2l2v_13TeV_of2j_vbf_highmjj --inputFile rootFile_3Dec/plots_VBF_3Dec.root
     
    
    


