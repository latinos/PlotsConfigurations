from ROOT import TFile, gStyle, TCanvas, gROOT, TLegend, TPad, TH1
import collections
import os

gStyle.SetOptStat(0)
gStyle.SetOptTitle(0)
gROOT.SetBatch(True)
TH1.AddDirectory(0)

def getMergedHist(infile,cut,sample,syst):
    append = '_'+syst if syst else ''
    print cut
    #njet = cut.split('_')[3]
    samplelist =  [sample]
    samples_to_run = []
    for sample in samplelist:
            samples_to_run.append(sample)
    for i, sample in enumerate(samples_to_run):
        if i == 0:
            try:
                htmp = infile.Get("%s/ptz/histo_%s%s"%(cut,sample,append))
            except:
                htmp = infile.Get("%s/ptz/histo_%s%s"%(cut,sample,''))
        else:
            try:
                htmp.Add(infile.Get("%s/ptz/histo_%s%s"%(cut,sample,append)))
            except:
                htmp.Add(infile.Get("%s/ptz/histo_%s%s"%(cut,sample,'')))

    return htmp

rootfiles = {#'2016_HIPM'   : '2016HIPM_v9/inclusive/rootFile/plots_WW2016_HIPM_v9_incl.root', 
             #'2016_noHIPM' : '2016noHIPM_v9/inclusive/rootFile/plots_WW2016_noHIPM_v9_incl.root', 
             '2017'        : '../2017_v9/rootFiles_AZH_2017_v9_btagSFpatch/plots_AZH_2017_v9_btagSFpatch.root', 
             #'2018'        : '2018_v9/inclusive/rootFile/plots_WW2018_v9_incl.root'
}

c = TCanvas("c","c",900,700)
p1 = TPad("p1","p1",0,0.3,1,1)
p2 = TPad("p2","p2",0,0,1,0.3)
p1.Draw()
p2.Draw()

for year in rootfiles:

    if not os.path.exists('plots_v9_ptz/%s'%year):
        os.makedirs('plots_v9_ptz/%s'%year)

    samples = collections.OrderedDict()
    handle = open('../%s_v9/samples.py'%year,'r')
    exec(handle)
    handle.close()

    cuts = collections.OrderedDict()
    handle = open('../%s_v9/cuts.py'%year,'r')
    exec(handle)
    handle.close()

    nuisances = collections.OrderedDict()
    handle = open('../%s_v9/nuisances.py'%year,'r')
    exec(handle)
    handle.close()

    f0 = TFile(rootfiles[year])

    #Get shape nuisances and samples to which they apply
    nuisance_list = {}
    for nuisance in nuisances.values():
        if nuisance['type'] == 'shape':
	#if nuisance['type'] == 'shape' and nuisance['kind'] not in ['weight_envelope', 'weight_rms']:
            nuisance_list[nuisance['name']] = nuisance['samples'].keys()
	#elif nuisance['name'] in ['QCDscale_ttZ', 'QCDscale_AZH']:
	#    for i in range(6):
	#      nuisance_list[nuisance['name'+'V'+str(i)+'Var']] = nuisance['samples'].keys()
    print nuisance_list

    #nuisance_list_QCDScale = {}
    #for nuisance in nuisances.values():
      #	if nuisance['type'] == 'shape' and nuisance['kind'] not in ['weight_envelope', 'weight_rms']:
            


    for nuisance in nuisance_list:
      if nuisance not in ['QCDscale_ttZ', 'QCDscale_AZH', 'QCDscale_VV', 'QCDscale_VVV', 'CMS_AZH_pdf_2017']:
        #shapeStatus[nuisance] = {}
        for cut in ['breq_SR', 'bveto_1j_SR']:
        #for cut in ['breq_SR']:
            for sample in nuisance_list[nuisance]:
              if sample not in ['TTWJets']:
                #    continue
                hnom  = getMergedHist(f0,cut,sample,None)
                print f0
		print hnom
		hup   = getMergedHist(f0,cut,sample,nuisance+"Up")
                print nuisance
		print sample
		print hup
                hdown = getMergedHist(f0,cut,sample,nuisance+"Down")
                print hdown
                hnom.SetLineWidth(2)
                hnom.SetMaximum(hnom.GetMaximum()*1.1)
                hup.SetLineWidth(2)
                hup.SetLineColor(2)
                hdown.SetLineWidth(2)
                hdown.SetLineColor(4)
                rup = hup.Clone()
                rup.Divide(hnom)
                rup.GetYaxis().SetRangeUser(0.9,1.1)
                rup.GetYaxis().SetNdivisions(2,5,1)
                rup.GetYaxis().SetLabelSize(0.08)
                rup.GetXaxis().SetLabelSize(0.08)
                rdown = hdown.Clone()
                rdown.Divide(hnom)
                p1.cd()
                hnom.Draw("hist")
                hup.Draw("hist,same")
                hdown.Draw("hist,same")
                leg = TLegend(0.7,0.7,0.9,0.9)
                leg.AddEntry(hnom,"Nominal","l")
                leg.AddEntry(hup,nuisance+" Up","l")
                leg.AddEntry(hdown,nuisance+" Down","l")
                leg.Draw()
                p2.cd()
                rup.Draw("hist")
                rdown.Draw("hist,same")
                c.SaveAs("plots_v9_ptz/%s/%s_%s_%s.png"%(year,nuisance,sample,cut))

      #elif nuisance in ['QCDscale_ttZ', 'QCDscale_AZH', 'QCDscale_VV', 'QCDscale_VVV']:
      #  for cut in ['breq_SR', 'bveto_1j_SR']:
      #  #for cut in ['breq_SR']:
#	    for sample in nuisance_list[nuisance]:
#	        hnom_new = getMergedHist(f0,cut,sample,None)
#	        hvar_0 = getMergedHist(f0,cut,sample,nuisance+'V0Var')
#		hvar_1 = getMergedHist(f0,cut,sample,nuisance+'V1Var')
#		hvar_2 = getMergedHist(f0,cut,sample,nuisance+'V2Var')
#		hvar_3 = getMergedHist(f0,cut,sample,nuisance+'V3Var')
	#	hvar_4 = getMergedHist(f0,cut,sample,nuisance+'V4Var')
#		hvar_5 = getMergedHist(f0,cut,sample,nuisance+'V5Var')
#		hnom_new.SetLineWidth(2)
#		hnom_new.SetMaximum(hnom.GetMaximum()*1.5)
#		hvar_0.SetLineWidth(2)
#                hvar_1.SetLineWidth(2)
#                hvar_2.SetLineWidth(2)
#                hvar_3.SetLineWidth(2)
#                hvar_4.SetLineWidth(2)
#                hvar_5.SetLineWidth(2)
#		hvar_0.SetLineColor(227)
#                hvar_1.SetLineColor(208)
#                hvar_2.SetLineColor(158)
#                hvar_3.SetLineColor(138)
#                hvar_4.SetLineColor(58)
#                hvar_5.SetLineColor(223)
#                p1.cd()
#		hnom_new.Draw("hist")
#		hvar_0.Draw("hist,same")
#		hvar_1.Draw("hist,same")
#	        hvar_2.Draw("hist,same")
#		hvar_3.Draw("hist,same")
#		hvar_4.Draw("hist,same")
#		hvar_5.Draw("hist,same")
#                leg = TLegend(0.7,0.7,0.9,0.9)
#		leg.AddEntry(hnom_new,"Nominal","l")
#		leg.AddEntry(hvar_0,nuisance+'V0Var',"l")
#		leg.AddEntry(hvar_1,nuisance+'V1Var',"l")
#		leg.AddEntry(hvar_2,nuisance+'V2Var',"l")
#		leg.AddEntry(hvar_3,nuisance+'V3Var',"l")
#		leg.AddEntry(hvar_4,nuisance+'V4Var',"l")
#		leg.AddEntry(hvar_5,nuisance+'V5Var',"l")
#		leg.Draw()
#		c.SaveAs("plots_v9_ptz/%s/%s_%s_%s.png"%(year,nuisance,sample,cut))

