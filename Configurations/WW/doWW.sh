# combine -M MultiDimFit datacards/ww_BVeto0j_em/events/datacard.txt --algo=grid --points 100 --setPhysicsModelParameterRanges r=0.01,2 -n "LHScan" -m 125 >> SignalStrength/signalStrength0jet.txt

# combine -M MultiDimFit datacards/ww_BVeto1j_em/events/datacard.txt --algo=grid --points 100 --setPhysicsModelParameterRanges r=0.01,2 -n "LHScan" -m 125 >> SignalStrength/signalStrength1jet.txt

combine -M MultiDimFit datacards/ww_BVeto0j_em/events/datacard.txt --algo=grid --points 100 --setPhysicsModelParameterRanges r=0.01,2 -t -1 --expectSignal=1 -n "LHScan" -m 125 >> signalStrength0jet.txt

combine -M MultiDimFit datacards/ww_BVeto1j_em/events/datacard.txt --algo=grid --points 100 --setPhysicsModelParameterRanges r=0.01,2 -t -1 --expectSignal=1 -n "LHScan" -m 125 >> signalStrength1jet.txt

#combine -M MaxLikelihoodFit datacards/ww_BVeto0j_em/events/datacard.txt  --freezeNuisances=Topnorm0j,WWnorm0j,DYttnorm0j >> SignalStrength/signalStrength0jet.txt

#combine -M MaxLikelihoodFit datacards/ww_BVeto1j_em/events/datacard.txt  --freezeNuisances=Topnorm1j,WWnorm1j,DYttnorm1j >> SignalStrength/signalStrength1jet.txt
