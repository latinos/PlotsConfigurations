

import subprocess
import optparse
import os
import sys

if __name__ == '__main__':
    sys.path.append(os.getcwd())
    usage = 'usage: %prog [options]'
    parser = optparse.OptionParser(usage)
    parser.add_option('--pycfg', dest='pycfg', help='configuration file (def=%default)', default='configuration.py')

    (opt, args) = parser.parse_args()

    options = dict()
    with open(opt.pycfg,'r') as handle:
        vars = {}
        exec(handle,vars)

    for opt_name, opt_value in vars.iteritems():
        if opt_name[0] in ['-', '_']: continue
        options[opt_name] = opt_value

        print ' - new default value:',opt_name,'=',opt_value


    with open(options['cutsFile']) as handle:
        vars = {}
        exec(handle, vars)

    cuts = vars['cuts']


    if not os.path.isfile("rootFile/plots_"+options['tag']+".root"):
        command = "mkShapesMulti.py --pycfg={0} --batchSplit=Files,Samples --doHadd=True --doNotCleanup --nThreads=16".format(opt.pycfg)
        print(command)
        print(subprocess.call(command+" > mkShapesMulti_Output", shell=True))


    for cut in cuts:
        print(cut)
        if 'SR' in cut:
            command = '''sed -i -e "s/'isBlind'  : 0/'isBlind'  : 1/g" plot.py'''
        else:
            command = '''sed -i -e "s/'isBlind'  : 1/'isBlind'  : 0/g" plot.py'''
        print(command)
        print(subprocess.call(command, shell=True))

        #if 'Resolved' in cut:
            #command = '''sed -i -e "s/reweightedWjets = False/reweightedWjets = True/g" plot.py'''
            #command = '''sed -i -e "s/reweightedWjets = True/reweightedWjets = False/g" plot.py'''
        #else: pass
        #print(command)    #print(subprocess.call(command, shell=True))

        command = 'mkPlot.py --pycfg={cfg} --inputFile=rootFile/plots_{tag}.root --showIntegralLegend=1 --onlyPlot cratio --fileFormats png --onlyCut={cut} | tee mkPlot_Output'.format(cfg=opt.pycfg, tag=options['tag'], cut=cut)
        print(command)
        returnCode = subprocess.call(command, shell=True)
        print(returnCode)
        if returnCode != 0: break
