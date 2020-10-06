""" -> DO THE STAT TEST AND PLOT THE HISTOGRAMS <-

>> Command: 
   python doBinning.py --Variable mth --TestCutName SR_Incl --SignalSamples DH_mhs_160_mx_100_mZp_500 --BackgroundSamples WW,top,DY,ggWW,Vg,VVV,VZ,VgS_H,VgS_L,WWewk,Higgs --nbins 500 --inputFile rootFile_binning/plots_darkHiggs2018_v7.root
   python doBinning.py --Variable mtw2 --TestCutName SR_Incl --SignalSamples DH_mhs_160_mx_100_mZp_500 --BackgroundSamples WW,top,DY,ggWW,Vg,VVV,VZ,VgS_H,VgS_L,WWewk,Higgs --nbins 500 --inputFile rootFile_binning/plots_darkHiggs2018_v7.root
"""
import ROOT
import argparse

#################################################################################
#################################################################################
#################################################################################

if __name__ == '__main__':

    ########## main code here

    parser = argparse.ArgumentParser(description = "Receive the parameters")
    parser.add_argument('--inputFile', action = 'store', type = str, dest = 'inputFile', default = '/afs/cern.ch/work/f/fernanpe/framework_final/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoH/Full2016_v6/rootFile/plots_ggH2016_v6.root', help = 'Input ROOT file')
    parser.add_argument('--TestCutName', action = 'store', type = str, dest = 'TestCutName', default = 'TestEvents', help = 'Test CutName from cuts.py')
    parser.add_argument('--Variable', action = 'store', type = str, dest = 'Variable', default = 'DNN_score', help = 'Variable name from variables.py')
    parser.add_argument('--BackgroundSamples', action = 'store', type = str, dest = 'BackgroundSamples', default= 'WW', help = 'List of bkg MC samples')
    parser.add_argument('--SignalSamples', action = 'store', type = str, dest = 'SignalSamples', default= 'WW', help = 'List of signal MC samples')
    parser.add_argument('--nbins', action = 'store', type = int, dest = 'nbins', default= 250, help = 'number of bins')
    args = parser.parse_args()


    file_input = ROOT.TFile(args.inputFile)

    signals = [str(item) for item in args.SignalSamples.split(',')]
    backgrounds = [str(item) for item in args.BackgroundSamples.split(',')]

    if "mth" in args.Variable:
        xlow = 50
    elif "mtw2" in args.Variable:
        xlow = 0

    if "mth" in args.Variable:
        xhigh = 500
    elif "mtw2" in args.Variable:
        xhigh = 400

    hsig = ROOT.TH1D("hsig","hsig" ,args.nbins,xlow,xhigh)
    hbkg = ROOT.TH1D("hbkg","hbkg" ,args.nbins,xlow,xhigh)
    htop = file_input.Get(args.TestCutName + "/" + args.Variable + "/histo_top")
    hWW = file_input.Get(args.TestCutName + "/" + args.Variable + "/histo_WW")
    hDY = file_input.Get(args.TestCutName + "/" + args.Variable + "/histo_DY")

    for bkg in backgrounds:
        hbkg.Add(file_input.Get(args.TestCutName + "/" + args.Variable + "/histo_" + bkg), 1)

    for sig in signals:
        hsig.Add(file_input.Get(args.TestCutName + "/" + args.Variable + "/histo_" + sig), 1)

        
    for b in range(args.nbins,0,-1):
        #if ((not htop.Integral(b,args.nbins) > 0) or (not hWW.Integral(b,args.nbins) > 0) or (not hDY.Integral(b,args.nbins) > 0)):
        if ((not htop.Integral(b,args.nbins) > 0) or (not hWW.Integral(b,args.nbins) > 0)):
            continue
        elif hbkg.Integral(b,args.nbins) < 10.:
            continue
        else:
            print("Last Bin: (" + str(hbkg.GetBinCenter(b)) + "," + str(xhigh) + ")")
            print("Total Signal events: " + str(hsig.Integral(b,args.nbins)))
            print("Total background events: " + str(hbkg.Integral(b,args.nbins)))
            print("Total Top events: " + str(htop.Integral(b,args.nbins)))
            print("Total WW events: " + str(hWW.Integral(b,args.nbins)))
            print("Total DY events: " + str(hDY.Integral(b,args.nbins)))
            print("S/B: " + str(hsig.Integral(b,args.nbins) / hbkg.Integral(b,args.nbins)))
            print("S/sqrt(S+B): " + str(hsig.Integral(b,args.nbins) / ROOT.TMath.Sqrt(hbkg.Integral(b,args.nbins) + hsig.Integral(b,args.nbins))))
            
            break

    file_input.Close()

 
