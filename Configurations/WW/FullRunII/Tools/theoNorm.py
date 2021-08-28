from ROOT import TFile, TH1
import collections
import json

TH1.AddDirectory(0)

doTable = False

differential = "njets"
subsamples = ["_fid_NJ_0","_fid_NJ_1","_fid_NJ_2","_fid_NJ_GE3"]

nuis_by_year = {
    "2016" : ["QCDscale_WW","pdf_WW_2016"],
    "2017" : ["QCDscale_WW"]+["pdf_WW_%d_2017"%i for i in range(1,33)],
    "2018" : ["QCDscale_WW"]+["pdf_WW_%d_2018"%i for i in range(1,33)],
}

nfdict = collections.OrderedDict()

for year in ["2016","2017","2018"]:

    nfdict[year] = {}

    var = 'nCleanGenJet' if year == '2018' else 'events'

    f0 = TFile("../Full%s_v7/%s/TheoUnc/rootFile/plots_WW%s_v7_%s_TheoUnc.root"%(year,differential,year,differential[:4]))

    # Normalize WW theoretical variations
    for nuisance in nuis_by_year[year]:
        if 'pdf' in nuisance:
            if '2016' in nuisance:
                nuisname = "CMS_hww_"+nuisance
            else:
                nuisname = "CMS_hww_pdf_WW_eigen%s"%(nuisance.split("_")[2])
        else:
            nuisname = nuisance
        nfdict[year][nuisname] = {}

        for subsample in subsamples:
            h_nom  = f0.Get("presel/%s/histo_WW%s"%(var,subsample))
            h_up   = f0.Get("presel/%s/histo_WW%s_%sUp"%(var,subsample,nuisance))
            h_down = f0.Get("presel/%s/histo_WW%s_%sDown"%(var,subsample,nuisance))
            norm_up   = h_nom.Integral()/h_up.Integral()
            norm_down = h_nom.Integral()/h_down.Integral()
            nfdict[year][nuisname]["WW"+subsample] = [norm_up,norm_down]

    # PS_ISR / PS_FSR

    if year == '2018':
        samples = collections.OrderedDict()
        handle = open('Full%s_v7/%s/TheoUnc/samples.py'%(year,differential),'r')
        exec(handle)
        handle.close()

        allsamples = [sample for sample in samples.keys()]
        allsamples.remove('WW')
        allsamples.remove('ggWW')
        allsamples = allsamples + ['WW'+subsample for subsample in subsamples]
        allsamples = allsamples + ['ggWW'+subsample for subsample in subsamples]

        for ips, ps in enumerate(['ISR','FSR']):
            nfdict[year]["PS_"+ps] = {}
            weight = {}
            for ijet in xrange(0,4):
                weight[ijet] = {}

            for sample in allsamples:
                h_nom = f0.Get("presel/%s/histo_%s"%(var,sample))

                if h_nom.Integral() <= 0:
                    continue

                # Calculate PS weights
                h_up   = f0.Get("presel/%s/histo_%s_PS_%sUp"%(var,sample,ps))
                h_down = f0.Get("presel/%s/histo_%s_PS_%sDown"%(var,sample,ps))
                if sample in [base+subsample for base in ['WW','ggWW'] for subsample in subsamples]:
                    norm_up   = h_nom.Integral()/h_up.Integral()
                    norm_down = h_nom.Integral()/h_down.Integral()
                    nfdict[year]["PS_"+ps][sample] = [norm_up,norm_down]
                else:
                    for ijet in xrange(0,4):
                        weight[ijet][sample] = [h_up.GetBinContent(ijet+1)/h_nom.GetBinContent(ijet+1),         h_down.GetBinContent(ijet+1)/h_nom.GetBinContent(ijet+1)]

            print("PS_"+ps)
            for sample in weight[0].keys():
                if doTable:
                    print("%s %f %f %f %f %f %f %f %f"%(sample,weight[0][sample][0],weight[1][sample][0],weight[2][sample][0],weight[3][sample][0],weight[0][sample][1],weight[1][sample][1],weight[2][sample][1],weight[3][sample][1]))
                else:
                    print("'%s' : ['%f*(nCleanGenJet==0) + %f*(nCleanGenJet==1) + %f*(nCleanGenJet==2) + %f*(nCleanGenJet>=3)', '%f*(nCleanGenJet==0) + %f*(nCleanGenJet==1) + %f*(nCleanGenJet==2) + %f*(nCleanGenJet>=3)'],"%(sample,weight[0][sample][0],weight[1][sample][0],weight[2][sample][0],weight[3][sample][0],weight[0][sample][1],weight[1][sample][1],weight[2][sample][1],weight[3][sample][1]))

with open("WWnorm.json","w") as outfile:
    json.dump(nfdict, outfile, indent=4)
