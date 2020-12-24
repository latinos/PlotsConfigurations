import ROOT as R 
import argparse 

parser = argparse.ArgumentParser()
parser.add_argument("-i","--inputfile", type=str,required=True)
parser.add_argument("-c","--cuts",help="Cut", type=str, nargs="+", required=True)
parser.add_argument("-s","--samples",help="Samples", type=str, nargs="+",required=True)
parser.add_argument("-v","--variables",help="Variables", type=str, nargs="+",required=True)
parser.add_argument("-o","--output",help="Outputdir",type=str)
args = parser.parse_args()


iF = R.TFile.Open(args.inputfile)
cache = []

R.gStyle.SetOptStat(0)

for cut in args.cuts:
    for var in args.variables: 
        for sample in args.samples:
            c = R.TCanvas("_".join([cut,var,sample])," ".join([cut,var,sample]))
            leg = R.TLegend(0.2, 0.2, 0.4, 0.5)
            hnom = iF.Get(cut + '/' + var + '/histo_'+sample)
            leg.AddEntry(hnom, "Nominal")
            hmax = hnom.GetMaximum()
            hmin = hnom.GetMinimum()
            # hsvar = [ ]
            # for i in range(6):
            #     h = iF.Get(cut + '/' + var + '/histo_'+sample+ '_QCDscale_'+'Wjets_HT'+ "_envV"+str(i)+'Var')
            #     hsvar.append(h)
            #     if h.GetMaximum() > hmax: hmax = h.GetMaximum()
            #     if h.GetMinimum() < hmin: hmin = h.GetMinimum()
            #     leg.AddEntry(h, "QCD scale {}".format(i))

            henvUp =  iF.Get(cut + '/' + var + '/histo_'+sample+ '_QCDscale_'+ sample + "_envUp")
            henvDown =  iF.Get(cut + '/' + var + '/histo_'+sample+ '_QCDscale_'+ sample + "_envDown")
            henvUp.SetLineColor(R.kBlue)
            henvDown.SetLineColor(R.kCyan)
            henvUp.SetLineWidth(2)
            henvDown.SetLineWidth(2)
            if henvDown.GetMaximum() > hmax: hmax = henvDown.GetMaximum()
            if henvUp.GetMinimum() < hmin:   hmin = henvUp.GetMinimum()

            hUp =  iF.Get(cut + '/' + var + '/histo_'+sample+ '_QCDscale_'+ sample + "Up")
            hDown =  iF.Get(cut + '/' + var + '/histo_'+sample+ '_QCDscale_'+ sample + "Down")
            hUp.SetLineColor(R.kGreen)
            hDown.SetLineColor(R.kOrange)
            hUp.SetLineWidth(2)
            hDown.SetLineWidth(2)
            if hDown.GetMaximum() > hmax: hmax = hDown.GetMaximum()
            if hUp.GetMinimum() < hmin:   hmin = hUp.GetMinimum()
            
            hnom.GetYaxis().SetRangeUser(0.8*hmin,1.2*hmax)
            hnom.SetTitle(" ".join([cut,var,sample])+";"+var)
            hnom.Draw("hist")
            hnom.SetLineWidth(2)
            hnom.SetLineColor(R.kRed)


            henvUp.Draw("hist Same")
            henvDown.Draw("hist same")
            leg.AddEntry(henvUp, "Up")
            leg.AddEntry(henvDown, "Down")
            
            hUp.Draw("hist Same")
            hDown.Draw("hist same")
            leg.AddEntry(hUp, "env Up")
            leg.AddEntry(hDown, "env Down")

            leg.Draw("same")
            #c.SetLogy()
            c.Draw()
            cache.append([c,hnom,henvUp, henvDown, hUp, hDown, leg])