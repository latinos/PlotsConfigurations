#
#       Fast plots macro for AC analysis
#

import ROOT
import math
from ROOT import TFile, TTree
ROOT.objs = []

Hin = dict()
Hin_up = dict()
Hin_down = dict()

directory = 'rootfileJJH/'

file = 'rootFilesubjets_New4/plots_subjets_New4.root' 

#samples = ['top', 'WH_H0PM', 'WH_H0M', 'WH_H0PH']
samples =['WH_H0M']
colors = ['kBlue+1', 'kGreen+1', 'kRed+1']

variations = ['Up', 'Down']

CleanFatJet_uncertainties = ['CMS_scale_cleanfatJER_2016', 'CMS_scale_cleanfatJES_2016']

subjets_uncertainties = ['CMS_scale_subjetjer_2016','CMS_scale_subjetjes_2016']

mV_uncertainties = ['CMS_scale_mVjmr_2016', 'CMS_scale_mVjms_2016', 'CMS_scale_mVjesTotal_2016', 'CMS_scale_mVjer_2016']

#variables = ['FatJet_msoftdrop_nom', 'FatJet_pt_nom', 'mV', 'InvMSubjets']
variables = ['hm', 'SubJet_pt_1', 'SubJet_pt_0', 'kd_Vh_hm', 'InvMSubjets', 'J1pt', 'J2pt']
###
def Getting_histograms(sample, cut, variable):
        """Routine to get the histogram to plot from the .root files"""
	
#        for sample in samples:
        try:
		Fin = ROOT.TFile.Open(file)
        except:
                print('Could not open file')
                raise
        try:
                print('Taking histogram from sample ',sample)
			
		print('sample', sample)
		print(cut+'/'+variable+'/histo_'+sample)
                Hin[sample] = Fin.Get(cut+'/'+variable+'/histo_'+sample).Clone()
		print('PRUEBA 1', Hin[sample])

        except:
                print('Could not get the histogram '+sample)
                raise

	#for uncertainty in mV_uncertainties+subjets_uncertainties+CleanFatJet_uncertainties:
	for uncertainty in subjets_uncertainties:
		if Fin.Get(cut+'/'+variable+'/histo_'+sample+'_'+ uncertainty + 'Up'):
			Hin_up[sample] = Fin.Get(cut+'/'+variable+'/histo_'+sample+'_'+ uncertainty + 'Up').Clone()
		if Fin.Get(cut+'/'+variable+'/histo_'+sample+'_'+ uncertainty + 'Down'):
			Hin_down[sample] = Fin.Get(cut+'/'+variable+'/histo_'+sample+'_'+ uncertainty + 'Down').Clone()

        	#Fin.Close()

		print('PRUEBA 2', Hin[sample])
		print('PRUEBA 3', Hin_up[sample])
		print('PRUEBA 4', Hin_down[sample])

		canvas = ROOT.TCanvas("plot_"+sample+"_"+variable, "Plot_"+sample+"_"+variable, 500, 500)
	        canvas.Draw()
		canvas.cd()
       		print('plotting ', sample)
                Hin[sample].SetLineColor(ROOT.kBlue+1)
		Hin_up[sample].SetLineColor(ROOT.kGreen+1)
		Hin_down[sample].SetLineColor(ROOT.kRed+1)
		Hin[sample].SetLineWidth(2)
		Hin_up[sample].SetLineWidth(2)
		Hin_down[sample].SetLineWidth(2)
		Hin[sample].Draw("hist")
		Hin_up[sample].Draw("hist sames")
		Hin_down[sample].Draw("hist sames")
     		canvas.Update()
		ROOT.objs.append([canvas,Hin_up[sample],Hin[sample], Hin_down[sample]])
		canvas.SaveAs(uncertainty+'_'+sample+'_'+variable+'.png')

###
if __name__ == '__main__':

        import sys

	cut = 'hww2l2v_13TeV_of2j_Vh'
	
	for sample in samples:
		for variable in variables:
			Getting_histograms(sample, cut, variable)
	
	#raw_input("Press ENTER... ")
	raw_input("prompt_ ")
