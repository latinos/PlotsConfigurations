Setup combine
==============

    cd ~/Framework/Combine/CMSSW_7_4_7/src/
    eval `scramv1 runtime -sh`
    cd -



doTop.sh
==============

Compute Top SFs and perform the Likelihood scan using the combined datacard:

    bash doTop.sh outputFileSF.txt outputFileLH.txt

NB: to be used on top of the combined datacard after the unblinding!

doTopBlind.sh
==============

Compute Top SFs and perform the Likelihood scan using the top 0-jets and 1-jet datacards:

    bash doTopBlind.sh outputFileSF.txt outputFileLH.txt


How to plot the Likelihood scan:
-------------------------------

    root -l higgsCombineLHScanTopnorm0j.MultiDimFit.mH125.root 
    limit->Draw("2*deltaNLL:Topnorm0j","deltaNLL<10 && deltaNLL>0","l")

    root -l higgsCombineLHScanTopnorm1j.MultiDimFit.mH125.root 
    limit->Draw("2*deltaNLL:Topnorm1j","deltaNLL<10 && deltaNLL>0","l")

    root -l ../higgsCombineLHScanH.MultiDimFit.mH125.root
    limit->Draw("2*deltaNLL:r","deltaNLL<10 && deltaNLL>0","l")
    
    
doDY.sh
==============

Compute DYtt SFs and perform the Likelihood scan:

    bash dodytt0jet.sh  outputFileSFdy0jet.txt outputFileLHdy0jet.txt

    bash dodytt1jet.sh  outputFileSFdy1jet.txt outputFileLHdy1jet.txt

    cd ~/Framework/Combine/CMSSW_7_4_7/src/
    eval `scramv1 runtime -sh`
    cd -
    bash doDYBlind.sh   outputFileSFDY.txt outputFileLHDY.txt


doGGH.sh
==============
    
    root -l higgsCombineLHScanH.MultiDimFit.mH125.root
    limit->Draw("2*deltaNLL:r","deltaNLL<10 && deltaNLL>0","l")

    
    root -l higgsCombineLHScanH.MultiDimFit.mH125.root   ggH/scripts/draw.C
    

    
Calculate UE/PS nuisance normalization
==============

    r99t scripts/drawUEPS.C\(\"WWTo2L2Nu\"\)
    r99t scripts/drawUEPS.C\(\"GluGluHToWWTo2L2NuPowheg_M125\"\)
    r99t scripts/drawUEPS.C\(\"VBFHToWWTo2L2Nu_M125\"\)  

    
    