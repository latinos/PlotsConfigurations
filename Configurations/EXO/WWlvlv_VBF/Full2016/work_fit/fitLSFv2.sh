
#!/bin/bash
## text2workspace: --PO verbose

#./fitLSFv2.sh 300 limit VBF combined_datacards_2016 
massmodel=${1}

what=${2}  ## sig or limit

cat=${3}  ## 0jet or 1jet or 01jet or 2jet or all

directory=${4}

#cd ..
#./doWW.sh

#cd -

workdir=/afs/cern.ch/user/l/lorusso/work/Higgs_highmass/Full_2016_V2/CMSSW_8_0_26_patch1/work/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/Full2016/${directory}
combinedir=/afs/cern.ch/user/l/lorusso/work/Higgs_highmass/combine_V2/CMSSW_7_4_7/src/

cd $combinedir
eval `scramv1 runtime -sh`
cd -


        cp ${workdir}/MORIOND2017.*txt .

        m=${massmodel%_*}
        echo $m

        if [ "${cat}" == "all" ]; then
            
    text2workspace.py  MORIOND2017.txt -o MORIOND2017.workspace.mH${massmodel}.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
	--PO 'map=.*/ggH_hww_.*:r[1, 0, 10]' --PO 'map=.*/qqH_hww_.*:r'\
	--PO 'map=.*/ggH_hww_.*:0' --PO 'map=.*/qqH_hww_.*:0' \
	--PO 'map=.*/ggH_hww_'${massmodel}_':s_scaling=expr::s_scaling("@0 - TMath::Sqrt(@0)", r)' \
	--PO 'map=.*/ggWW:b_scaling=expr::b_scaling("1.-TMath::Sqrt(@0)",r)' \
	--PO 'map=.*/ggH_hww$:b_scaling=expr::b_scaling("1.-TMath::Sqrt(@0)",r)' \
	--PO 'map=.*/ggH_hww_SBI'${massmodel}_':sbi_scaling=expr::sbi_scaling("TMath::Sqrt(@0)",r)'\
	--PO 'map=.*/qqH_hww_'${massmodel}_':s_scaling=expr::s_scaling("@0 - TMath::Sqrt(@0)", r)'\
        --PO 'map=.*/qqWWqq:b_scaling=expr::b_scaling("1.-TMath::Sqrt(@0)",r)'\
	--PO 'map=.*/qqH_hww$:b_scaling=expr::b_scaling("1.-TMath::Sqrt(@0)",r)'\
	--PO 'map=.*/qqH_hww_SBI'${massmodel}_':sbi_scaling=expr::sbi_scaling("TMath::Sqrt(@0)",r)' 

		
	
	       
        else
         
	    
    text2workspace.py  MORIOND2017.${cat}.txt -o MORIOND2017.workspace.${cat}.mH${massmodel}.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
	--PO 'map=.*/ggH_hww_.*:r[1, 0, 10]' --PO 'map=.*/qqH_hww_.*:r'\
	--PO 'map=.*/ggH_hww_.*:0' --PO 'map=.*/qqH_hww_.*:0' \
	--PO 'map=.*/ggH_hww_'${massmodel}_':s_scaling=expr::s_scaling("@0 - TMath::Sqrt(@0)", r)' \
	--PO 'map=.*/ggWW:b_scaling=expr::b_scaling("1.-TMath::Sqrt(@0)",r)' \
	--PO 'map=.*/ggH_hww$:b_scaling=expr::b_scaling("1.-TMath::Sqrt(@0)",r)' \
	--PO 'map=.*/ggH_hww_SBI'${massmodel}_':sbi_scaling=expr::sbi_scaling("TMath::Sqrt(@0)",r)'\
	--PO 'map=.*/qqH_hww_'${massmodel}_':s_scaling=expr::s_scaling("@0 - TMath::Sqrt(@0)", r)'\
        --PO 'map=.*/qqWWqq:b_scaling=expr::b_scaling("1.-TMath::Sqrt(@0)",r)'\
	--PO 'map=.*/qqH_hww$:b_scaling=expr::b_scaling("1.-TMath::Sqrt(@0)",r)'\
	--PO 'map=.*/qqH_hww_SBI'${massmodel}_':sbi_scaling=expr::sbi_scaling("TMath::Sqrt(@0)",r)' 


        #Comments 
	#per ggH
        #--PO 'map=.*/ggH_hww_.*:0' --PO 'map=.*/qqH_hww_.*:0' \ Scalo Tutti i sign HM a zero	
	# 
	#--PO 'map=.*/ggWW:b_scaling=expr::b_scaling("1.-TMath::Sqrt(@0)",r)' \ Background ggWW
	#--PO 'map=.*/ggH_hww$:b_scaling=expr::b_scaling("1.-TMath::Sqrt(@0)",r)' \  Background H125
	# 
	#--PO 'map=.*/ggH_hww_'${massmodel}':s_scaling=expr::s_scaling("@0 - TMath::Sqrt(@0)", r)' \ Signal HM_XXX sclatato (solo quello a massa XXX) 
	# 
	#--PO 'map=.*/ggH_hww_SBI'${massmodel}':sbi_scaling=expr::sbi_scaling("TMath::Sqrt(@0)",r)'\ Interferenza
	# 
        #Per VBF
        #--PO 'map=.*/qqH_hww_'${massmodel}':r[1,0,10]' \ TOLTO!
        #--PO 'map=.*/qqWWqq:b_scaling=expr::b_scaling("1.-TMath::Sqrt(@0)",r)'\
	#--PO 'map=.*/qqH_hww$:b_scaling=expr::b_scaling("1.-TMath::Sqrt(@0)",r)'\
	#--PO 'map=.*/qqH_hww_'${massmodel}':s_scaling=expr::s_scaling("@0 - TMath::Sqrt(@0)", r)'\
	#--PO 'map=.*/qqH_hww_SBI'${massmodel}':sbi_scaling=expr::sbi_scaling("TMath::Sqrt(@0)",r)' 



        fi

        cp MORIOND2017.workspace* /afs/cern.ch/user/l/lorusso/work/Higgs_highmass/Full_2016_V2/CMSSW_8_0_26_patch1/work/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/Full2016/work_fit/workspace
        #cp log.workspace* ${workdir}

#fi

if [ "${what}" == "sig" ]; then
	if [ "${cat}" == "all" ]; then

	    combine -M ProfileLikelihood --significance -t -1 --expectSignal 1 MORIOND2017.workspace.mH${massmodel}.root       &> Significance.MORIOND2017.mH${massmodel}.txt
	      	  
        else
          combine -M ProfileLikelihood --significance -t -1 --expectSignal 1 MORIOND2017.workspace.${cat}.mH${massmodel}.root       &> Significance.${cat}.MORIOND2017.mH${massmodel}.txt

        fi
        cp Significance* /afs/cern.ch/user/l/lorusso/work/Higgs_highmass/Full_2016_V2/CMSSW_8_0_26_patch1/work/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/Full2016/work_fit

else
        if [ "${cat}" == "all" ]; then
          combine -M Asymptotic -t -1 --expectSignal 1 --run expected MORIOND2017.workspace.mH${massmodel}.root      &> Limit.MORIOND2017.mH${massmodel}.txt

        else
          combine -M Asymptotic -t -1 --expectSignal 1 --run expected MORIOND2017.workspace.${cat}.mH${massmodel}.root      &> Limit.${cat}.MORIOND2017.mH${massmodel}.txt
        fi
        cp Limit* /afs/cern.ch/user/l/lorusso/work/Higgs_highmass/Full_2016_V2/CMSSW_8_0_26_patch1/work/PlotsConfigurations/Configurations/EXO/WWlvlv_VBF/Full2016/work_fit

fi


