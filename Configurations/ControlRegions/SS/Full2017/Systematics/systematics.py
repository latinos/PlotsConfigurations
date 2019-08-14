import os, sys, optparse, math, ROOT
from ROOT import TFile

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
    parser.add_option('-f', '--file', action='store', type=str, dest='file', default='rootFile/plots_SS.root', help='Name of the rootfile obtained after the hadd')
    (opts, args) = parser.parse_args()

    fname = opts.file
    if not fname:
        print ("The file "+ fname +" has not been found")
        return

    channels = []
    names = []
    systematics = []
    values = []
    errors = []

    tfile = TFile.Open(fname)
    for key in tfile.GetListOfKeys():
        h = key.ReadObj()
        channels.append(h.GetName())

    for channel in channels:

        cnames = []
        csystematics = []
        cvalues = []
        cerrors = []

        tfile = TFile.Open(fname)
        myDir = tfile.Get(channel+"/events")
        
        for key in myDir.GetListOfKeys():
            h = key.ReadObj()
            if (h.ClassName() == 'TH1D' or h.ClassName() == 'TH1F') and ('histo_Fake' in h.GetName()):
                cnames.append(h.GetName())
                csystematics.append(h.GetName().capitalize())
                cvalues.append(h.Integral(-1, -1))
                cerrors.append(h.GetBinError(1))
                
        names.append(cnames)
        #systematics.append(csystematics)
        values.append(cvalues)
        errors.append(cerrors)

    systematics = csystematics #Don't need a multidimensional array for this list

    #Start printing the output
    print(bcolors.HEADER)
    print('#######################################################################')
    print('                              Yields table                             ')
    print('#######################################################################' + bcolors.ENDC)
    
    print('\n\n')
    print('\hline')
    
    output = ''
    for channel in channels:
        output += '{:12s} &     {:9s}'.format(' ', channel)

    print output
    print('\hline')

    for sindex, systematic in enumerate(systematics):        
        output = ''
        output += '{:12s}'.format(systematic)
        
        for cindex, channel in enumerate(channels):
            output += ' & {:11.2f}  {:4s} {:6.2f}'.format(values[cindex][sindex], '$\\pm$', errors[cindex][sindex])

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

    for sindex, systematic in enumerate(systematics):        
        output = ''
        if systematic == "Eleup" or systematic == "EleUp":
            systematic = "Electron jet ET"
        elif systematic == "Muup" or systematic == "MuUp":
            systematic = "Muon jet ET"
        elif systematic == "Statup" and systematics[sindex-1] == "Eledown":
            systematic = "Electron statistical"
        elif systematic == "Statup":
            systematic = "Muon statistical"
        else:
            systematic = "None"

        output += '{:22s}'.format(systematic)        

        #if sindex % 2 != 0:
        if systematic is not "None":
            for cindex, channel in enumerate(channels):
                valueUp = abs(100-(100*abs(values[cindex][sindex]/values[cindex][0])))
                valueDown = abs(100-(100*abs(values[cindex][sindex+1]/values[cindex][0])))
                #valueUp = (values[cindex][sindex]-values[cindex][sindex])/(2.*values[cindex][0])
                output += ' &  {:4.2f}%/-{:4.2f}% '.format(valueUp, valueDown)
        
            print output

    print('\hline')
    print('\n\n')

"""    



 


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


    """
if __name__ == "__main__":
    calculate()
