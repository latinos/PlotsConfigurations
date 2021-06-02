from HiggsAnalysis.CombinedLimit.PhysicsModel import *
 
### This is the base python class to study the ggF and VBF HWW AC
 
class HWWCouplings(PhysicsModel):
    def __init__(self):
        self.ACF = 'NA'

    def setModelBuilder(self, modelBuilder):
        PhysicsModel.setModelBuilder(self,modelBuilder)
        self.modelBuilder.doModelBOnly = False

    def getYieldScale(self,bin,proc):
	scaling=1.

        ewkH = 0
        ggH  = 0

        if "VBF_T" in proc or "WH_T" in proc or "ZH_T" in proc : ewkH = 1 
        elif "ggH_T" in proc : ggH = 1

        if ewkH is 1 :
         if   "T1" in proc : 
          scaling = "scale_ewk_t1"
         elif "T2" in proc : 
          scaling = "scale_ewk_t2"
         elif "T3" in proc : 
          scaling = "scale_ewk_t3"
         elif "T4" in proc : 
          scaling = "scale_ewk_t4"
         elif "T5" in proc : 
          scaling = "scale_ewk_t5"

        elif ggH is 1 :
         if   "T1" in proc : 
          scaling = "scale_t1"
         elif "T2" in proc : 
          scaling = "scale_t2"
         elif "T3" in proc : 
          scaling = "scale_t3"

        if self.ACF is "H0PH" :
         if "WH_T2" in proc or "ZH_T2" in proc : 
          scaling = "scale_ewk_t2n"

        if self.ACF is "H0L1" :
         if "WH_T2" in proc or "ZH_T2" in proc : 
          scaling = "scale_ewk_t2n" 
         if "ggH_T2" in proc : 
          scaling = "scale_t2n" 
         if "VBF_T4" in proc or "WH_T4" in proc or "ZH_T4" in proc : 
          scaling = "scale_ewk_t4n" 
        print "Will scale",proc,"in bin",bin,"by",scaling  
        return scaling        

 
    def setPhysicsOptions(self,physOptions):
	for po in physOptions:

         if po == "H0M":
          print "Will float Fa3"
          self.ACF = "H0M"
    
         if po == "H0PH":
          print "Will float Fa2"
          self.ACF = "H0PH"

         if po == "H0L1":
          print "Will float FL1"
          self.ACF = "H0L1" 
 
    def doParametersOfInterest(self):
	"""Create POI and other parameters, and define the POI set."""

        self.modelBuilder.doVar("muV[1.0,-100000,100000]")
        #self.modelBuilder.doVar("muV[1.0,0.0,25.0]")
        self.modelBuilder.doVar("Fai[0.0,-1.0,1.0]")

        poi='muV,Fai'
        #poi='Fai' 

        self.modelBuilder.factory_( "expr::scale_ewk_t1(\"pow(@0,2)*pow(1-abs(@1),2)\", muV, Fai)")
        self.modelBuilder.factory_( "expr::scale_ewk_t2(\"pow(@0,2)*sign(@1)*pow(sqrt(1-abs(@1)),3)*sqrt(abs(@1))\", muV, Fai)")
        self.modelBuilder.factory_( "expr::scale_ewk_t2n(\"pow(@0,2)*sign(@1)*pow(sqrt(1-abs(@1)),3)*sqrt(abs(@1))*-1\", muV, Fai)")
        self.modelBuilder.factory_( "expr::scale_ewk_t3(\"pow(@0,2)*(1-abs(@1))*abs(@1)\", muV, Fai)")
        self.modelBuilder.factory_( "expr::scale_ewk_t4(\"pow(@0,2)*sign(@1)*sqrt(1-abs(@1))*pow(sqrt(abs(@1)),3)\", muV, Fai)")
        self.modelBuilder.factory_( "expr::scale_ewk_t4n(\"pow(@0,2)*sign(@1)*sqrt(1-abs(@1))*pow(sqrt(abs(@1)),3)*-1\", muV, Fai)")
        self.modelBuilder.factory_( "expr::scale_ewk_t5(\"pow(@0,2)*pow(@1,2)\", muV, Fai)")

        self.modelBuilder.factory_( "expr::scale_t1(\"@0*(1-abs(@1))\", muV, Fai)")
        self.modelBuilder.factory_( "expr::scale_t2(\"@0*sign(@1)*sqrt(1-abs(@1))*sqrt(abs(@1))\", muV, Fai)")
        self.modelBuilder.factory_( "expr::scale_t2n(\"@0*sign(@1)*sqrt(1-abs(@1))*sqrt(abs(@1))*-1\", muV, Fai)")
        self.modelBuilder.factory_( "expr::scale_t3(\"@0*abs(@1)\", muV, Fai)")
    

        self.modelBuilder.doSet("POI",poi)
       
HWWCouplings = HWWCouplings()
