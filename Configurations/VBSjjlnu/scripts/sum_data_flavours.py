from __future__ import print_function
import ROOT as R 
import argparse

parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", help="Input file", type=str)
parser.add_argument("-y","--year", help="Year", type=str)
parser.add_argument("-e","--exclude-vars", help="Exclude vars", type=str, nargs="+")
parser.add_argument("-ec","--exclude-cuts", help="Exclude cuts", type=str, nargs="+")
parser.add_argument("-n","--no-nuisances", help="Exclude nuisances", action="store_true")
args = parser.parse_args()

import ROOT as R 
R.gROOT.SetBatch(True)
R.TH1.SetDefaultSumw2()


iF = R.TFile.Open(args.input, "UPDATE")

for cut in iF.GetListOfKeys():
    if args.exclude_cuts and cut.GetName() in args.exclude_cuts: continue
    for var in iF.Get(cut.GetName()).GetListOfKeys():
        if args.exclude_vars and  var.GetName() in args.exclude_vars: continue
        print (cut.GetName(), var.GetName())
        
        data_ele = iF.Get("{}/{}/histo_DATA_ele".format(cut.GetName(), var.GetName()))
        data_mu = iF.Get("{}/{}/histo_DATA_mu".format(cut.GetName(), var.GetName()))
        fake_ele = iF.Get("{}/{}/histo_Fake_ele".format(cut.GetName(), var.GetName()))
        fake_mu = iF.Get("{}/{}/histo_Fake_mu".format(cut.GetName(), var.GetName()))

        try:
            data_tot = data_ele.Clone("histo_DATA")
            data_tot.Add(data_mu)
            fake_tot = fake_ele.Clone("histo_Fake")
            fake_tot.Add(fake_mu)

            histo_nuis = [ ]
            if "ele" in cut.GetName(): lep_fl = "ele"
            if "mu" in cut.GetName(): lep_fl = "mu"
            if not args.no_nuisances:
                for nuis in ["CMS_fake_{}_{}".format(lep_fl,args.year),"CMS_fake_{}_stat_{}".format(lep_fl, args.year)]:
                    for u in ["Up", "Down"]:
                        fake_ele_s = iF.Get("{}/{}/histo_Fake_ele_{}{}".format(cut.GetName(), var.GetName(), nuis, u))
                        fake_mu_s = iF.Get("{}/{}/histo_Fake_mu_{}{}".format(cut.GetName(), var.GetName(), nuis, u))
                        fake_ntot = fake_ele_s.Clone("histo_Fake_{}{}".format(nuis, u))
                        fake_ntot.Add(fake_mu_s)
                        histo_nuis.append(fake_ntot)

            iF.cd("{}/{}/".format(cut.GetName(), var.GetName()))
            data_tot.Write()
            fake_tot.Write()
            for hn in histo_nuis: hn.Write()
        except:
            print("Skipping ", cut.GetName(), var.GetName() )


    print ("------------------------------")


iF.Close()