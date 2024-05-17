# To be run from PlotsConfigurations/Configurations/WW/FullRunII as
# python Tools/makeCombinedPlots.py

import os

if not os.path.exists('plots_combined'):
    os.mkdir('plots_combined')

for diffvar in ['inclusive', 'inclusive_SF', 'leadinglepPT', 'subleadinglepPT', 'ptll', 'mll', 'ptWW', 'njets', 'jetpt0', 'jetpt1', 'dphijj', 'mjj']:
    # Load example cuts.py to get list of cuts -- assumed same in all years
    cuts = {}
    handle = open('Full2018_v9/{}/cuts.py'.format(diffvar))
    exec(handle)
    handle.close()
    allcuts = [cut+'_'+cat for cut in cuts for cat in cuts[cut]['categories']]
    
    if not os.path.exists('plots_combined/'+diffvar) :
        os.mkdir('plots_combined/'+diffvar)

    # Make combined-year common configuration file
    with open('plots_combined/{}/configuration.py'.format(diffvar),'w') as cfgfile:
        cfgfile.write("tag            = '{}'\n".format(diffvar))
        cfgfile.write("variablesFile  = 'Full2018_v9/{}/variables.py'\n".format(diffvar))
        cfgfile.write("cutsFile       = 'Full2018_v9/{}/cuts.py'\n".format(diffvar))
        cfgfile.write("samplesFile    = 'Full2018_v9/{}/samples.py'\n".format(diffvar))
        cfgfile.write("lumi           = 138\n")

    for cut in allcuts:
        outpath = 'plots_combined/{}/{}'.format(diffvar,cut)
        if not os.path.exists(outpath) :
            os.mkdir(outpath)
        njet = cut.split('_')[3]
        if njet == '3j': njet = '2j'
        variables = ['BDTOutput_{}'.format(njet)]                  #Only plotting corresponding BDT per jet bin
        #variables = ['BDTOutput_0j','BDTOutput_1j','BDTOutput_2j'] #Or could plot all
        for variable in variables:
            # Make cuts_to_merge file for each variable -- input cratio_weight_X rootfiles to use in combination
            filename = outpath+'/cuts_to_merge_'+variable+'.py'
            with open(filename,'w') as outfile:
                for era in ['2016_HIPM','2016_noHIPM','2017','2018']:
                    outfile.write("cutsToMerge['{era}'] = {{'rootFile': 'Full{era}_v9/{diffvar}/plots/cratio_weight_X_{cut}_{variable}.root', 'cutUsed': '{cut}'}}\n".format(era=era,diffvar=diffvar,variable=variable,cut=cut))
            # Run mkCombinedPlot with specified pycfg and inputCutsList
            command = 'mkCombinedPlot.py --pycfg=plots_combined/{diffvar}/configuration.py --inputCutsList={filename} --variable={variable} --variableHR="{variable}" --getVarFromFile=1 --outputDirPlots=plots_combined/{diffvar}/{cut} --plotFile=plots_combined/plot.py'.format(filename=filename,diffvar=diffvar,variable=variable,cut=cut)
            print(command)
            os.system(command)

