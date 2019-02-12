import os, sys, optparse, ROOT

#Code to compute the systematics of the fakes, to include it in the Analysis Note
class bcolors:
    HEADER = '\033[95m'
    OKBLUE = '\033[94m'
    OKGREEN = '\033[92m'
    WARNING = '\033[93m'
    FAIL = '\033[91m'
    ENDC = '\033[0m'
    BOLD = '\033[1m'
    UNDERLINE = '\033[4m'

def calculate():

    parser = optparse.OptionParser(usage='usage: %prog [opts] FilenameWithSamples', version='%prog 1.0')
    parser.add_option('-d', '--directory', action='store', type=str, dest='directory', default='rootFile', help='Base name of the directory where the rootfiles are stored')
    parser.add_option('-f', '--file', action='store', type=str, dest='file', default='plots_SS.root', help='Name of the rootfile obtained after the hadd')
    (opts, args) = parser.parse_args()

    #Define the lists that will be used
    systematics = ["Nominal", "EleUp", "EleDown", "MuUp", "MuDown", "EleStatUp", "EleStatDown", "MuStatUp", "MuStatDown"]
    channels = ["WW_0j_em", "WW_1j_em"] #The names have to match the cuts applied

    #Read the options given
    baseDirectory = opts.directory
    haddName = opts.file

    print bcolors.HEADER
    print '#######################################################################'
    print '                              Yields table                             '
    print '#######################################################################' + bcolors.ENDC

    print('\n\n')
    print('\hline')
    output = ''
    for channel in channels:
        output += '{:12s} &     {:9s}'.format(' ', channel)

    print output
    print('\hline')

    for systematic in systematics:
        rootfileName = baseDirectory+systematic+"/"+haddName
        rootfile = open(rootfileName, "read")
        if not rootfile:
            print "The "+systematic+" directory has not been found"
            return

        output = ''
        output += '{:12s}'.format(systematic)

        f = ROOT.TFile.Open(rootfileName, 'read')

        for channel in channels:
            hist = f.Get(channel+'/events/histo_Fake')
            value = hist.Integral(-1, -1)
            error = hist.GetBinError(1)
            output += ' & {:12.2f} {:4s} {:6.2f}'.format(value, '$\\pm$', error)

        print output

    print('\hline')
    print('\n\n')
    
    print bcolors.HEADER
    print '#######################################################################'
    print '                         Systematics table                             '
    print '#######################################################################' + bcolors.ENDC

    print('\n\n')
    print('\hline')
 
    output = '{:22s}'.format(' ')
    for channel in channels:
        output += ' &    {:11s}'.format(channel)

    print output
    print('\hline')
    output = ''

    if "EleUp" in systematics and "EleDown" in systematics and "Nominal" in systematics: #Print the ele jet ET line
        output = '{:22s}'.format('Electron jet $E_T$')
        for channel in channels:
            nominalFile = ROOT.TFile.Open(baseDirectory+"Nominal/"+haddName, 'read')
            eleUpFile = ROOT.TFile.Open(baseDirectory+"EleUp/"+haddName, 'read')
            eleDownFile = ROOT.TFile.Open(baseDirectory+"EleDown/"+haddName, 'read')
            
            nominalHist = nominalFile.Get(channel+'/events/histo_Fake')
            eleUpHist = eleUpFile.Get(channel+'/events/histo_Fake')
            eleDownHist = eleDownFile.Get(channel+'/events/histo_Fake')
            
            nominalValue = nominalHist.Integral(-1, -1)
            eleUpValue = eleUpHist.Integral(-1, -1)
            eleDownValue = eleDownHist.Integral(-1, -1)
                            
            value = 100*abs(eleUpValue-eleDownValue)/(2.*nominalValue)
            valueUp = abs(100-(100*abs(eleUpValue)/(nominalValue)))
            valueDown = abs(100-(100*abs(eleDownValue)/(nominalValue)))
            output += ' &  -{:4.2f}%/{:4.2f}% '.format(valueDown, valueUp)
        print output
    else:
        print "The electron jet et systematic has not been calculated"

    if "MuUp" in systematics and "MuDown" in systematics and "Nominal" in systematics:
        output = '{:22s}'.format('Muon jet $E_T$')
        for channel in channels:
            nominalFile = ROOT.TFile.Open(baseDirectory+"Nominal/"+haddName, 'read')
            muUpFile = ROOT.TFile.Open(baseDirectory+"MuUp/"+haddName, 'read')
            muDownFile = ROOT.TFile.Open(baseDirectory+"MuDown/"+haddName, 'read')
            
            nominalHist = nominalFile.Get(channel+'/events/histo_Fake')
            muUpHist = muUpFile.Get(channel+'/events/histo_Fake')
            muDownHist = muDownFile.Get(channel+'/events/histo_Fake')
            
            nominalValue = nominalHist.Integral(-1, -1)
            muUpValue = muUpHist.Integral(-1, -1)
            muDownValue = muDownHist.Integral(-1, -1)
                            
            value = 100*abs(muUpValue-muDownValue)/(2.*nominalValue)
            valueUp = abs(100-(100*abs(muUpValue)/(nominalValue)))
            valueDown = abs(100-(100*abs(muDownValue)/(nominalValue)))
            output += ' &  -{:4.2f}%/{:4.2f}% '.format(valueDown, valueUp)
        print output
    else:
        print "The muon jet et systematic has not been calculated"

    if "EleStatUp" in systematics and "EleStatDown" in systematics and "Nominal" in systematics:
        output = '{:22s}'.format('Electron statistical')
        for channel in channels:
            nominalFile = ROOT.TFile.Open(baseDirectory+"Nominal/"+haddName, 'read')
            eleStatUpFile = ROOT.TFile.Open(baseDirectory+"EleStatUp/"+haddName, 'read')
            eleStatDownFile = ROOT.TFile.Open(baseDirectory+"EleStatDown/"+haddName, 'read')
            
            nominalHist = nominalFile.Get(channel+'/events/histo_Fake')
            eleStatUpHist = eleStatUpFile.Get(channel+'/events/histo_Fake')
            eleStatDownHist = eleStatDownFile.Get(channel+'/events/histo_Fake')
            
            nominalValue = nominalHist.Integral(-1, -1)
            eleStatUpValue = eleStatUpHist.Integral(-1, -1)
            eleStatDownValue = eleStatDownHist.Integral(-1, -1)
                            
            value = 100*abs(eleStatUpValue-eleStatDownValue)/(2.*nominalValue)
            valueUp = abs(100-(100*abs(eleStatUpValue)/(nominalValue)))
            valueDown = abs(100-(100*abs(eleStatDownValue)/(nominalValue)))
            output += ' &  -{:4.2f}%/{:4.2f}% '.format(valueDown, valueUp)
        print output
    else:
        print "The electron statistical error has not been calculated"

    if "MuStatUp" in systematics and "MuStatDown" in systematics and "Nominal" in systematics:
        output = '{:22s}'.format('Muon jet $E_T$')
        for channel in channels:
            nominalFile = ROOT.TFile.Open(baseDirectory+"Nominal/"+haddName, 'read')
            muStatUpFile = ROOT.TFile.Open(baseDirectory+"MuStatUp/"+haddName, 'read')
            muStatDownFile = ROOT.TFile.Open(baseDirectory+"MuStatDown/"+haddName, 'read')
            
            nominalHist = nominalFile.Get(channel+'/events/histo_Fake')
            muStatUpHist = muStatUpFile.Get(channel+'/events/histo_Fake')
            muStatDownHist = muStatDownFile.Get(channel+'/events/histo_Fake')
            
            nominalValue = nominalHist.Integral(-1, -1)
            muStatUpValue = muStatUpHist.Integral(-1, -1)
            muStatDownValue = muStatDownHist.Integral(-1, -1)
                            
            value = 100*abs(muStatUpValue-muStatDownValue)/(2.*nominalValue)
            valueUp = abs(100-(100*abs(muStatUpValue)/(nominalValue)))
            valueDown = abs(100-(100*abs(muStatDownValue)/(nominalValue)))
            output += ' &  -{:4.2f}%/{:4.2f}% '.format(valueDown, valueUp)
        print output
    else:
        print "The muon statistical error has not been calculated"

    print('\hline')
    print('\n\n')

if __name__ == "__main__":
    calculate()
