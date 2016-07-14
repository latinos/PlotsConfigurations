import ROOT

# LOAD 
c = ROOT.KalmanMuonCalibrator("MC_80X_13TeV")

#print 'correct the pt of a 40 GeV muon + at eta=phi=0.0'
#print c.getCorrectedPt(40,0.0,0.0,1)

#print 'correct the pt of a 40 GeV muon - at eta=phi=0.0'
#print c.getCorrectedPt(40,0.0,0.0,-1)


#print 'correct the dpt/pt  a 40 geV muon at eta =1 that has dpt/pt=0.01'
#print 'Recall! This correction is only valid after smearing'
#print c.getCorrectedError(40,1.0,0.01)


#print 'smear a 40 geV muon at eta=1.0 to match the data'
#print c.smear(40,1.0)




#print 'propagate the statistical error of the calibratio to a + 40 GeV muon at eta=phi=0'
#print 'first get number of parameters'
#N=c.getN()
#print N,'parameters'
#for i in range(0,N):
    #c.vary(i,+1)
    #print 'variation',i,'ptUp', c.getCorrectedPt(40,0.0,0.0,1)
    #c.vary(i,-1)
    #print 'variation',i,'ptDwn', c.getCorrectedPt(40,0.0,0.0,1)


#c.reset()

#print 'propagate the closure error to a + 40 GeV muon at eta=phi=0'

#c.varyClosure(+1)
#print 'After closure shift pt=', c.getCorrectedPt(40,0.0,0.0,1)




 

print '~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~'
print '~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~'
print '~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~'
print '~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~'

#PtEtaRange = {
   #1:   ( (0.0, 10.0),  (0.0, 2.2) ),
   #2:   ( (0.0, 10.0),  (2.2, 2.5) ),
   #3:   ( (10.0, 20.0), (0.0, 2.2) ),
   #4:   ( (10.0, 20.0), (2.2, 2.5) ),
   #5:   ( (20.0, 30.0), (0.0, 2.2) ),
   #6:   ( (20.0, 30.0), (2.2, 2.5) ),
   #7:   ( (30.0, 40.0), (0.0, 2.2) ),
   #8:   ( (30.0, 40.0), (2.2, 2.5) ),
   #9:   ( (40.0, 50.0), (0.0, 2.2) ),
   #10:  ( (40.0, 50.0), (2.2, 2.5) ),
   #11:  ( (50.0, 200.0),(0.0, 2.2) ),
   #12:  ( (50.0, 200.0),(2.2, 2.5) ),
#}


PtEtaRange = {
   1:   ( (0.0, 10.0),   (0.0, 2.2) ),
   2:   ( (0.0, 10.0),   (2.2, 2.5) ),
   3:   ( (10.0, 20.0),  (0.0, 2.2) ),
   4:   ( (10.0, 20.0),  (2.2, 2.5) ),
   5:   ( (20.0, 30.0),  (0.0, 2.2) ),
   6:   ( (20.0, 30.0),  (2.2, 2.5) ),
   7:   ( (30.0, 40.0),  (0.0, 2.2) ),
   8:   ( (30.0, 40.0),  (2.2, 2.5) ),
   9:   ( (40.0, 50.0),  (0.0, 2.2) ),
   10:  ( (40.0, 50.0),  (2.2, 2.5) ),
   11:  ( (50.0, 100.0), (0.0, 2.2) ),
   12:  ( (50.0, 100.0), (2.2, 2.5) ),
   13:  ( (100.0, 200.0),(0.0, 2.2) ),
   14:  ( (100.0, 200.0),(2.2, 2.5) ),
}




#print PtEtaRange
#print PtEtaRange.keys()
#print PtEtaRange[1]


for i in range(1,len(PtEtaRange)+1):
    ptaverage  = 0.5 * (PtEtaRange[i][0][0] + PtEtaRange[i][0][1])
    etaaverage = 0.5 * (PtEtaRange[i][1][0] + PtEtaRange[i][1][1])
    
    #print 'PtEtaRange[i] = ', PtEtaRange[i]
    
    
    c.vary(i,+1)
    valueUp = c.getCorrectedPt(  ptaverage, etaaverage, 0.0, 1)
    c.vary(i,-1)
    valueLo = c.getCorrectedPt(  ptaverage, etaaverage, 0.0, 1)
    
    print '       ',
    print '(  ', PtEtaRange[i][0] , '  '  , PtEtaRange[i][1], '   ',
    print '(  ' , abs(valueUp-ptaverage)/2./ptaverage*100. ,' ) ), '
    #print '(  ' , abs(valueUp-valueLo)/2./ptaverage*100. ,' ) ), '
    
    #print ' up/do = ', valueUp, '  , ', valueLo,   '   <-- ', ptaverage
    


