

from HiggsAnalysis.CombinedLimit.PhysicsModel import *
from NegList import XHNegList, ggHNegList

### This is the base python class to study the VBF HWW AC
 
class HWWCouplings(PhysicsModel):
    def __init__(self):

        self.AC = 'NA'
        self.g = "NA"
        self.ScanCouplings = False

    def setModelBuilder(self, modelBuilder):
        PhysicsModel.setModelBuilder(self,modelBuilder)
        self.modelBuilder.doModelBOnly = False

    def getYieldScale(self,bin,proc):
        scaling=1.

        signal = "NA" 
        temp = "NA" 

        if "VBF_T" in proc : 
         temp = proc[4:]
         signal = "Ewk"
        elif "WH_T" in proc or "ZH_T" in proc : 
         temp = proc[3:]
         signal = "Ewk"
        elif "ggH_T" in proc :                                   
         temp = proc[4:]
         signal = "ggH"
        elif "ggHjj_T" in proc :                                   
         temp = proc[6:]
         signal = "ggH"

        if signal is "Ewk" : NegList = XHNegList[self.AC]
        elif signal is "ggH" : NegList = ggHNegList

        if signal is not "NA" : 
         scaling = "scale_"+signal+"_"+temp
         for c, s, p, t in NegList :
          if (c in bin or c is "all") and p in proc and s in self.AC and t in temp :
           scaling = scaling+"_Neg"
           break

        print "Will scale",proc,"in bin",bin,"by",scaling
        return scaling
         
    def setPhysicsOptions(self,physOptions):


        cons_sc = {"EFTH0M" : 0.1, "EFTH0PH" : 0.1, "EFTH0L1" : -0.0001}

        cons = { "H0M" : .255052, "H0PH" : .165684, "H0L1" : 1.2100, "H0LZg" : 0.7613, "GGHH0M" : .10062,  
                 "EFTH0M" : .255052, "EFTH0PH" : .039446, "EFTH0L1" : .4363 }

        for po in physOptions:
         if "ScanCouplings" in po :
          self.ScanCouplings = True
          print "EFT Coupling interpretation"

        for po in physOptions:
         if "H0" in po :
          if "GGH" in po : self.AC = po[3:]
          else : self.AC = po
          if self.ScanCouplings is True : self.g = cons_sc[po]
          else : self.g = cons[po]

        print self.AC," with g =", self.g

    def doParametersOfInterest(self):
        """Create POI and other parameters, and define the POI set."""

        if self.ScanCouplings is True :

         self.modelBuilder.doVar('expr::cosW("0.87681811112",)')
         self.modelBuilder.doVar('expr::sinW("0.48082221247",)')
         self.modelBuilder.doVar('expr::mZ("91.2",)')
         self.modelBuilder.doVar('expr::Lambda1("100.0",)')
         self.modelBuilder.doVar('expr::e2("0.0917",)')
         self.modelBuilder.doVar('expr::gs2("1.533",)')

         self.modelBuilder.doVar('C1[0,-1,1]') # SM cZ = 0 
         self.modelBuilder.doVar("C2[0,-2,2]") # cZZ, cZZt, cZB

         self.modelBuilder.doVar('expr::a1("2*(@0+1)",C1)') # SM a1 = 2 for EFT/Width Eqns 
         self.modelBuilder.doVar('expr::C1_M("@0+1",C1)') # SM a1 = 1 for Mela

         if self.AC == "EFTH0M" :

          self.modelBuilder.doVar('expr::a2("0",)')
          self.modelBuilder.doVar('expr::a3("-1*@0*(@1/(2*pow(@2,2)*pow(@3,2)))",C2,e2,sinW,cosW)')
          self.modelBuilder.doVar('expr::C2_M("-1*@0*(@1/(2*pow(@2,2)*pow(@3,2)))",C2,e2,sinW,cosW)')
          self.modelBuilder.doVar('expr::k1("0",)')

         if self.AC == "EFTH0PH" :

          self.modelBuilder.doVar('expr::a2("-1*@0*(@1/(2*pow(@2,2)*pow(@3,2)))",C2,e2,sinW,cosW)')
          self.modelBuilder.doVar('expr::C2_M("-1*@0*(@1/(2*pow(@2,2)*pow(@3,2)))",C2,e2,sinW,cosW)')
          self.modelBuilder.doVar('expr::a3("0",)')
          self.modelBuilder.doVar('expr::k1("0",)')

         elif self.AC == "EFTH0L1" :

          self.modelBuilder.doVar('expr::a2("0",)')
          self.modelBuilder.doVar('expr::a3("0",)')
          self.modelBuilder.doVar('expr::k1("@0*(@1*pow(@2,2)/(pow(@3,2)*pow(@4,2)))",C2,e2,Lambda1,sinW,mZ)')
          self.modelBuilder.doVar('expr::C2_M("@0*(@1*pow(@2,2)/(pow(@3,2)*pow(@4,2)))",C2,e2,Lambda1,sinW,mZ)')  

         self.modelBuilder.doVar("expr::g(\""+str(self.g)+"\",)")
         poi='C1,C2'

         # EFT relationships for WW and ZZ couplings (Expressed in amplitude couplings)

         self.modelBuilder.doVar('expr::gha2("1.0",)')
         self.modelBuilder.doVar('expr::gha4("0.0",)')
         self.modelBuilder.doVar('expr::kappa("@0", gha2)')
         self.modelBuilder.doVar('expr::kappa_tilde("0.6482*@0", gha4)') 

         self.modelBuilder.doVar('expr::a1_WW("@0",a1)')
         self.modelBuilder.doVar('expr::a2_WW("@0*@0*@1",cosW,a2)')
         self.modelBuilder.doVar('expr::a3_WW("@0*@0*@1",cosW,a3)')
         self.modelBuilder.doVar('expr::k1_WW("(@2 / (@0*@0 - @1*@1) - 2*@1*@1*@3*@4*@4 /(@5*@5*(@0*@0 - @1*@1)))",cosW,sinW,k1,a2,Lambda1,mZ)')
         self.modelBuilder.doVar('expr::k2_k1("2*@0*@1*@2/(@0*@0 - @1*@1)",cosW,sinW,k1)')
         self.modelBuilder.doVar('expr::k2_a2("-2*@0*@1*@3*@4*@4/((@2*@2)*(@0*@0 - @1*@1))",cosW,sinW,mZ,a2,Lambda1)')
         self.modelBuilder.doVar('expr::k2("@0 + @1",k2_k1,k2_a2)')

         # Now use WW and ZZ couplings to determine gamma_H 

         zz_expr      = '"4*(@0*@0/4. + 0.1695*@3*@3 + 0.09076*@1*@1 + 0.03809*@2*@2 + 0.8095*@0*@3/2. + 0.5046*@0*@1/2. + 0.2092*@1*@3 + 0.1023*@4*@4 + 0.1901*@0*@4/2. + 0.07429*@3*@4 + 0.04710*@1*@4) ",a1,a2,a3,k1,k2'
         ww_expr      = '"4*(@0*@0/4. + 0.1320*@3*@3 + 0.1944*@1*@1 + 0.08075*@2*@2 + 0.7204*@0*@3/2. + 0.7437*@0*@1/2. + 0.2774*@3*@1) ",a1_WW,a2_WW,a3_WW,k1_WW'
         zgamma_expr  = '"4*(1.118600*@0*@0/4. +0.0035*@1*@1 -  0.125010*@0*@1/2. + 0.000003*@1*@1 - 0.00018*@1*@1 + 0.003100*@0*@1/2. +0.00126*@2*@2 + 0.000005*@2*@2 -0.00047*@2*@2)",a1_WW,kappa,kappa_tilde'
         gg_expr      = '"(1.1068*@0*@0 + 0.0082*@0*@0 - 0.1150*@0*@0 + 2.5717*@1*@1 + 0.0091*@1*@1 - 0.1982*@1*@1)",kappa,kappa_tilde'
         bb_expr      = '"(@0*@0 + @1*@1)",kappa,kappa_tilde'
         cc_expr      = '"(@0*@0 + @1*@1)",kappa,kappa_tilde'
         tautau_expr  = '"(@0*@0 + @1*@1)",kappa,kappa_tilde'
         mumu_expr    = '"(@0*@0 + @1*@1)",kappa,kappa_tilde'
         gmgm_expr    = '"4*(1.6054*@0*@0/4. + 0.07312*@1*@1 - 0.6854*@0*@1/2. + 0.00002*@1*@1 - 0.0018*@1*@1 + 0.0085*@0*@1/2. + 0.1699*@2*@2 + 0.00002*@2*@2 - 0.0031*@2*@2)",a1_WW,kappa,kappa_tilde'
        
         self.modelBuilder.doVar('expr::R_WW('+str(ww_expr)+')')
         self.modelBuilder.doVar('expr::R_ZZ('+str(zz_expr)+')')
         self.modelBuilder.doVar('expr::R_Zgamma('+str(zgamma_expr)+')')
         self.modelBuilder.doVar('expr::R_gg('+str(gg_expr)+')')
         self.modelBuilder.doVar('expr::R_bb('+str(bb_expr)+')')
         self.modelBuilder.doVar('expr::R_cc('+str(cc_expr)+')')
         self.modelBuilder.doVar('expr::R_tautau('+str(tautau_expr)+')')
         self.modelBuilder.doVar('expr::R_mumu('+str(mumu_expr)+')')
         self.modelBuilder.doVar('expr:R_gammagamma('+str(gmgm_expr)+')')

         self.modelBuilder.doVar('expr::gammaH("(0.5824*@0 + 0.2137*@1 + 0.08187*@2 + 0.06272*@3 + 0.02891*@4 + 0.02619*@5 + 0.002270*@6 +  0.001533*@7 + 0.0002176*@8 )/0.9998",R_bb,R_WW,R_gg,R_tautau,R_cc,R_ZZ,R_gammagamma,R_Zgamma,R_mumu)')                                                   

         self.modelBuilder.factory_( "expr::scale_Ewk_T1(\"pow(@0,4)/@2\", C1_M, C2_M, gammaH)")
         self.modelBuilder.factory_( "expr::scale_Ewk_T2(\"((pow(@0,3)*@1)/@2)*@3\", C1_M, C2_M, gammaH, g)")
         self.modelBuilder.factory_( "expr::scale_Ewk_T2_Neg(\"(-1*(pow(@0,3)*@1)/@2)*@3\", C1_M, C2_M, gammaH, g)")
         self.modelBuilder.factory_( "expr::scale_Ewk_T3(\"((pow(@0,2)*pow(@1,2))/@2)*pow(@3,2)\", C1_M, C2_M, gammaH, g )")
         self.modelBuilder.factory_( "expr::scale_Ewk_T3_Neg(\"(-1*(pow(@0,2)*pow(@1,2))/@2)*pow(@3,2)\", C1_M, C2_M, gammaH, g)")
         self.modelBuilder.factory_( "expr::scale_Ewk_T4(\"((@0*pow(@1/2,3))/@2)*pow(@3,3)\", C1_M, C2_M, gammaH, g)")
         self.modelBuilder.factory_( "expr::scale_Ewk_T4_Neg(\"(-1*(@0*pow(@1,3))/@2)*pow(@3,3)\", C1_M, C2_M, gammaH, g)")
         self.modelBuilder.factory_( "expr::scale_Ewk_T5(\"(pow(@1,4)/@2)*pow(@3,4)\", C1_M, C2_M, gammaH, g)")

         self.modelBuilder.factory_( "expr::scale_ggH_T1(\"pow(@0,2)/@2\", C1_M, C2_M, gammaH)")
         self.modelBuilder.factory_( "expr::scale_ggH_T2(\"((@0*@1)/@2)*@3\", C1_M, C2_M, gammaH, g)")
         self.modelBuilder.factory_( "expr::scale_ggH_T2_Neg(\"(-1*(@0*@1)/@2)*@3\", C1_M, C2_M, gammaH, g)")
         self.modelBuilder.factory_( "expr::scale_ggH_T3(\"(pow(@1,2)/@2)*pow(@3,2)\", C1_M, C2_M, gammaH, g)")

        else :

         self.modelBuilder.doVar("muV[1.0,0.0,1000000.0]") # Should add muF for combination!!!
	 self.modelBuilder.doVar("muF[1.0,0.0,1000000.0]") 
         self.modelBuilder.doVar("Fai[0.0,-1.0,1.0]")
         self.modelBuilder.doVar("expr::g(\""+str(self.g)+"\",)")

         poi='muV,muF,Fai'
	 #poi='muV,Fai'

         self.modelBuilder.factory_( "expr::scale_Ewk_T1(\"pow(@0,2)*pow(1-abs(@1),2)\", muV, Fai)")
         self.modelBuilder.factory_( "expr::scale_Ewk_T2(\"pow(@0,2)*sign(@1)*pow(sqrt(1-abs(@1)),3)*sqrt(abs(@1))*@2\", muV, Fai, g)")
         self.modelBuilder.factory_( "expr::scale_Ewk_T2_Neg(\"pow(@0,2)*sign(@1)*pow(sqrt(1-abs(@1)),3)*sqrt(abs(@1))*@2*-1\", muV, Fai, g)")
         self.modelBuilder.factory_( "expr::scale_Ewk_T3(\"pow(@0,2)*(1-abs(@1))*abs(@1)*pow(@2,2)\", muV, Fai, g)")
         self.modelBuilder.factory_( "expr::scale_Ewk_T3_Neg(\"pow(@0,2)*(1-abs(@1))*abs(@1)*pow(@2,2)*-1\", muV, Fai, g)")
         self.modelBuilder.factory_( "expr::scale_Ewk_T4(\"pow(@0,2)*sign(@1)*sqrt(1-abs(@1))*pow(sqrt(abs(@1)),3)*pow(@2,3)\", muV, Fai, g)")
         self.modelBuilder.factory_( "expr::scale_Ewk_T4_Neg(\"pow(@0,2)*sign(@1)*sqrt(1-abs(@1))*pow(sqrt(abs(@1)),3)*pow(@2,3)*-1\", muV, Fai, g)")
         self.modelBuilder.factory_( "expr::scale_Ewk_T5(\"pow(@0,2)*pow(@1,2)*pow(@2,4)\", muV, Fai, g)")

         self.modelBuilder.factory_( "expr::scale_ggH_T1(\"@0*(1-abs(@1))\", muF, Fai)")
         self.modelBuilder.factory_( "expr::scale_ggH_T2(\"@0*sign(@1)*sqrt(1-abs(@1))*sqrt(abs(@1))*@2\", muF, Fai, g)")
         self.modelBuilder.factory_( "expr::scale_ggH_T2_Neg(\"@0*sign(@1)*sqrt(1-abs(@1))*sqrt(abs(@1))*@2*-1\", muF, Fai, g)")
         self.modelBuilder.factory_( "expr::scale_ggH_T3(\"@0*abs(@1)*pow(@2,2)\", muF, Fai, g)")
        
         #self.modelBuilder.factory_( "expr::scale_ggH_T1(\"@0*(1-abs(@1))\", muV, Fai)")
         #self.modelBuilder.factory_( "expr::scale_ggH_T2(\"@0*sign(@1)*sqrt(1-abs(@1))*sqrt(abs(@1))*@2\", muV, Fai, g)")
         #self.modelBuilder.factory_( "expr::scale_ggH_T2_Neg(\"@0*sign(@1)*sqrt(1-abs(@1))*sqrt(abs(@1))*@2*-1\", muV, Fai, g)")
         #self.modelBuilder.factory_( "expr::scale_ggH_T3(\"@0*abs(@1)*pow(@2,2)\", muV, Fai, g)")

        self.modelBuilder.doSet("POI",poi)
       
HWWCouplings = HWWCouplings()
