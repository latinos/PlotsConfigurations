import ROOT as R 
import sys 
R.gStyle.SetPalette(R.kLightTemperature)
R.gStyle.SetOptStat(0)

iF = R.TFile.Open(sys.argv[1])
sample = sys.argv[2]
cut = sys.argv[3]
var = sys.argv[4]

hnom = iF.Get("{}/{}/histo_{}".format(cut, var, sample))

hvar1up = iF.Get("{}/{}/histo_{}_CMS_PS_FSRUp".format(cut, var, sample))
hvar1do = iF.Get("{}/{}/histo_{}_CMS_PS_FSRDown".format(cut, var, sample))
hvar2up = iF.Get("{}/{}/histo_{}_CMS_PS_ISRUp".format(cut, var, sample))
hvar2do = iF.Get("{}/{}/histo_{}_CMS_PS_ISRDown".format(cut, var, sample))
hvar3 = iF.Get("{}/{}/histo_{}_VBS_PhytiaToHerwigUp".format(cut, var, sample))
hvar4up = iF.Get("{}/{}/histo_{}_QCDscale_VBS_acceptUp".format(cut, var, sample))
hvar4do = iF.Get("{}/{}/histo_{}_QCDscale_VBS_acceptDown".format(cut, var, sample))

c = R.TCanvas()
leg = R.TLegend(0.7, 0.55, 0.9, 0.9)
hnom.Draw("hist ")
hvar1up.Draw("hist same PLC")
hvar1do.Draw("hist same PLC")
hvar2up.Draw("hist same PLC")
hvar2do.Draw("hist same PLC")
hvar3.Draw("hist same PLC")
hvar4up.Draw("hist same PLC")
hvar4do.Draw("hist same PLC")

leg.AddEntry(hnom, "nominal")
leg.AddEntry(hvar1up, "PS FSR up")
leg.AddEntry(hvar1do, "PS FSR down")
leg.AddEntry(hvar2up, "PS ISR up")
leg.AddEntry(hvar2do, "PS ISR down")
leg.AddEntry(hvar4up, "QCD scale up")
leg.AddEntry(hvar4do, "QCD scale down")
leg.AddEntry(hvar3, "PythiaToHerwig")

hnom.SetLineWidth(3)
hvar1up.SetLineWidth(2)
hvar1do.SetLineWidth(2)
hvar2up.SetLineWidth(2)
hvar2do.SetLineWidth(2)
hvar3.SetLineWidth(2)
hvar4up.SetLineWidth(2)
hvar4do.SetLineWidth(2)
leg.Draw("same")

hnom.GetYaxis().SetRangeUser(0, 80)
hnom.GetXaxis().SetRangeUser(2, 10)

c.Draw()