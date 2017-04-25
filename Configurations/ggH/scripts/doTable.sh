

cd ~/Framework/Combine/New/CMSSW_7_4_7/src/

eval `scramv1 runtime -sh`
cd -






# text2workspace.py superCombination.Total.txt.pruned.txt   -o    superCombination.Total.txt.pruned.txt.workspace.root
# text2workspace.py superCombination.2016.txt.pruned.txt    -o    superCombination.2016.txt.pruned.txt.workspace.root
# text2workspace.py superCombination.2015.txt.pruned.txt    -o    superCombination.2015.txt.pruned.txt.root


# 
# combine -M MaxLikelihoodFit   --rMin=-1 --rMax=3      superCombination.Total.txt.pruned.txt.workspace.root             >   result.data.MaxLikelihoodFit.superCombination.Total.txt
# combine -M ProfileLikelihood  --significance          superCombination.Total.txt.pruned.txt.workspace.root             >   result.data.Significance.superCombination.Total.txt
# 
# combine -M MaxLikelihoodFit   --rMin=-1 --rMax=3      superCombination.2016.txt.pruned.txt.workspace.root             >   result.data.MaxLikelihoodFit.superCombination.2016.txt
# combine -M ProfileLikelihood  --significance          superCombination.2016.txt.pruned.txt.workspace.root             >   result.data.Significance.superCombination.2016.txt
# 
# combine -M MaxLikelihoodFit   --rMin=-1 --rMax=3      superCombination.2015.txt.pruned.txt.root             >   result.data.MaxLikelihoodFit.superCombination.2015.txt
# combine -M ProfileLikelihood  --significance          superCombination.2015.txt.pruned.txt.root             >   result.data.Significance.superCombination.2015.txt
# 
# 

# 
# combine -M MultiDimFit \
#      --algo=grid --points=200  \
#      superCombination.2015.txt.pruned.txt.root    \
#      -n "DataLLS2015"     >   result.Data.MultiDimFit.grid.DataLLS2015.txt
# 
# 
# 
# 
# root -l higgsCombineDataLLS2015.MultiDimFit.mH120.root  \
#         ggH/scripts/drawNLLvar.C\(\"r\"\)
#  
# 
#  
#      
# combine -M MultiDimFit \
#      --algo=grid --points=200  \
#      superCombination.2016.txt.pruned.txt.workspace.root    \
#      -n "DataLLS2016"     >   result.Data.MultiDimFit.grid.DataLLS2016.txt
# 
# 
#      
#      
# combine -M MultiDimFit \
#      --algo=grid --points=200  \
#      superCombination.Total.txt.pruned.txt.workspace.root    \
#      -n "DataLLSTotal"     >   result.Data.MultiDimFit.grid.DataLLSTotal.txt
# 
# 
     
    root -l higgsCombineDataLLS2015.MultiDimFit.mH120.root  \
            higgsCombineDataLLS2016.MultiDimFit.mH120.root  \
            higgsCombine1Dfit.multidimfit.categories.mu.unique.withbkg.bis.LOCAL.MultiDimFit.mH125.root  \
        ggH/scripts/drawNLLvarThree.C\(\"r\"\)
 
 


# 
# #######################
# #### for the table ####
# 
# 
# # combined
# 
# 
# 
combine -M MaxLikelihoodFit   --rMin=-4 --rMax=6      Combined.vbf.pruned.txt             >   result.data.MaxLikelihoodFit.Combined.vbf.txt
combine -M MaxLikelihoodFit   --rMin=-6 --rMax=8      Combined.vh2j.pruned.txt            >   result.data.MaxLikelihoodFit.Combined.vh2j.txt
combine -M MaxLikelihoodFit   --rMin=-4 --rMax=6      Combined.2j.pruned.txt              >   result.data.MaxLikelihoodFit.Combined.2j.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=6      Combined.wh3l.pruned.txt            >   result.data.MaxLikelihoodFit.Combined.wh3l.txt



combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      Combined.1jet.txt             >   result.data.MaxLikelihoodFit.Combined.1jet.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      Combined.0jet.txt             >   result.data.MaxLikelihoodFit.Combined.0jet.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      Combined.0jet.em.txt          >   result.data.MaxLikelihoodFit.Combined.0jet.em.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      Combined.0jet.me.txt          >   result.data.MaxLikelihoodFit.Combined.0jet.me.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      Combined.1jet.em.txt          >   result.data.MaxLikelihoodFit.Combined.1jet.em.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      Combined.1jet.me.txt          >   result.data.MaxLikelihoodFit.Combined.1jet.me.txt



combine -M ProfileLikelihood --significance         Combined.vbf.pruned.txt             >   result.data.Significance.Combined.vbf.txt
combine -M ProfileLikelihood --significance         Combined.vh2j.pruned.txt            >   result.data.Significance.Combined.vh2j.txt
combine -M ProfileLikelihood --significance         Combined.2j.pruned.txt              >   result.data.Significance.Combined.2j.txt
combine -M ProfileLikelihood --significance         Combined.wh3l.pruned.txt              >   result.data.Significance.Combined.wh3l.txt


combine -M ProfileLikelihood --significance      --setPhysicsModelParameterRanges r=-10,10     Combined.1jet.txt             >   result.data.Significance.Combined.1jet.txt
combine -M ProfileLikelihood --significance         Combined.0jet.txt             >   result.data.Significance.Combined.0jet.txt
combine -M ProfileLikelihood --significance         Combined.0jet.em.txt          >   result.data.Significance.Combined.0jet.em.txt
combine -M ProfileLikelihood --significance         Combined.0jet.me.txt          >   result.data.Significance.Combined.0jet.me.txt
combine -M ProfileLikelihood --significance         Combined.1jet.em.txt          >   result.data.Significance.Combined.1jet.em.txt
combine -M ProfileLikelihood --significance         Combined.1jet.me.txt          >   result.data.Significance.Combined.1jet.me.txt
# 

# 
# # 
# # 
# # #
# # # 2015 separate
# # #
# # 
# # # 
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      Moriond2016.vbf.pruned.txt             >   result.data.MaxLikelihoodFit.Moriond2016.vbf.txt
combine -M MaxLikelihoodFit   --rMin=-6 --rMax=7      Moriond2016.vh2j.pruned.txt            >   result.data.MaxLikelihoodFit.Moriond2016.vh2j.txt
combine -M MaxLikelihoodFit   --rMin=-6 --rMax=7      Moriond2016.2j.pruned.txt              >   result.data.MaxLikelihoodFit.Moriond2016.2j.txt
combine -M MaxLikelihoodFit   --rMin=-6 --rMax=7      Moriond2016.wh3l.pruned.txt            >   result.data.MaxLikelihoodFit.Moriond2016.wh3l.txt
# 
# 
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      Moriond2016.vbf.pruned.txt             >   result.data.Data.MaxLikelihoodFit.Moriond2016.vbf.txt
combine -M MaxLikelihoodFit   --rMin=-6 --rMax=7      Moriond2016.vh2j.pruned.txt            >   result.data.Data.MaxLikelihoodFit.Moriond2016.vh2j.txt
combine -M MaxLikelihoodFit   --rMin=-6 --rMax=7      Moriond2016.2j.pruned.txt              >   result.data.Data.MaxLikelihoodFit.Moriond2016.2j.txt
combine -M MaxLikelihoodFit   --rMin=-13 --rMax=14    Moriond2016.wh3l.pruned.txt            >   result.data.Data.MaxLikelihoodFit.Moriond2016.wh3l.txt

combine -M ProfileLikelihood --significance     Moriond2016.vbf.pruned.txt             >   result.data.Data.Significance.Moriond2016.vbf.txt
combine -M ProfileLikelihood --significance     Moriond2016.vh2j.pruned.txt            >   result.data.Data.Significance.Moriond2016.vh2j.txt
combine -M ProfileLikelihood --significance     Moriond2016.2j.pruned.txt              >   result.data.Data.Significance.Moriond2016.2j.txt
combine -M ProfileLikelihood --significance     Moriond2016.wh3l.pruned.txt            >   result.data.Data.Significance.Moriond2016.wh3l.txt

combine -M ProfileLikelihood --significance        Moriond2016.vbf.pruned.txt             >   result.data.Significance.Moriond2016.vbf.txt
combine -M ProfileLikelihood --significance        Moriond2016.vh2j.pruned.txt            >   result.data.Significance.Moriond2016.vh2j.txt
combine -M ProfileLikelihood --significance        Moriond2016.2j.pruned.txt              >   result.data.Significance.Moriond2016.2j.txt
combine -M ProfileLikelihood --significance        Moriond2016.wh3l.pruned.txt            >   result.data.Significance.Moriond2016.wh3l.txt
# #                                             
# #                                             
# 
# # 
# #  
# # #  
# # #  
# # # # 2016 separate
# # # 
# # 
# # 
# 
combine -M MaxLikelihoodFit   --rMin=-4 --rMax=6      ICHEP2016.vbf.pruned.txt             >   result.data.MaxLikelihoodFit.ICHEP2016.vbf.txt
combine -M MaxLikelihoodFit   --rMin=-6 --rMax=8      ICHEP2016.vh2j.pruned.txt            >   result.data.MaxLikelihoodFit.ICHEP2016.vh2j.txt
combine -M MaxLikelihoodFit   --rMin=-4 --rMax=6      ICHEP2016.2j.pruned.txt              >   result.data.MaxLikelihoodFit.ICHEP2016.2j.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=6      ICHEP2016.wh3l.pruned.txt            >   result.data.MaxLikelihoodFit.ICHEP2016.wh3l.txt



combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      ICHEP2016.1jet.txt             >   result.data.MaxLikelihoodFit.ICHEP2016.1jet.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      ICHEP2016.0jet.txt             >   result.data.MaxLikelihoodFit.ICHEP2016.0jet.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      ICHEP2016.0jet.em.txt          >   result.data.MaxLikelihoodFit.ICHEP2016.0jet.em.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      ICHEP2016.0jet.me.txt          >   result.data.MaxLikelihoodFit.ICHEP2016.0jet.me.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      ICHEP2016.1jet.em.txt          >   result.data.MaxLikelihoodFit.ICHEP2016.1jet.em.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      ICHEP2016.1jet.me.txt          >   result.data.MaxLikelihoodFit.ICHEP2016.1jet.me.txt


combine -M ProfileLikelihood --significance         ICHEP2016.vbf.pruned.txt             >   result.data.Significance.ICHEP2016.vbf.txt
combine -M ProfileLikelihood --significance         ICHEP2016.vh2j.pruned.txt            >   result.data.Significance.ICHEP2016.vh2j.txt
combine -M ProfileLikelihood --significance         ICHEP2016.2j.pruned.txt              >   result.data.Significance.ICHEP2016.2j.txt
combine -M ProfileLikelihood --significance         ICHEP2016.wh3l.pruned.txt              >   result.data.Significance.ICHEP2016.wh3l.txt


combine -M ProfileLikelihood --significance         ICHEP2016.1jet.txt             >   result.data.Significance.ICHEP2016.1jet.txt
combine -M ProfileLikelihood --significance         ICHEP2016.0jet.txt             >   result.data.Significance.ICHEP2016.0jet.txt
combine -M ProfileLikelihood --significance         ICHEP2016.0jet.em.txt          >   result.data.Significance.ICHEP2016.0jet.em.txt
combine -M ProfileLikelihood --significance         ICHEP2016.0jet.me.txt          >   result.data.Significance.ICHEP2016.0jet.me.txt
combine -M ProfileLikelihood --significance         ICHEP2016.1jet.em.txt          >   result.data.Significance.ICHEP2016.1jet.em.txt
combine -M ProfileLikelihood --significance         ICHEP2016.1jet.me.txt          >   result.data.Significance.ICHEP2016.1jet.me.txt


