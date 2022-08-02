#Change the variables and the plots.py based on the selected jet

allsamples = ["DY", "top",  "Wjets_HT", "VV", "VVV", "VBF-V", "Vg", "VgS", "VBS"]

def customize(samples,cuts,variables,nuisances,plot,groupPlot, key=None):
    if key=="vjet0":
        for sample in allsamples:
            if sample not in ["DATA", "Fake"]:
                # add plot
                plot[sample+"_vjet0_gluon"] = {
                   'color': 1,    
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                }
                plot[sample+"_vjet0_quark"] = {
                   'color': 1,    
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                }
                # add to groupplot
                groupPlot['quark']['samples'].append(sample+"_vjet0_quark")
                groupPlot['gluon']['samples'].append(sample+"_vjet0_gluon")
                # remove unwanted variables
        new_variables ={}
        new_variables['vjet_0_qgl_res'] = variables['vjet_0_qgl_res']
        new_variables['vjet_0_qgl_res_morebins'] = variables['vjet_0_qgl_res_morebins']
        new_variables['vjet_0_qglmorphed_res'] = variables['vjet_0_qglmorphed_res']
        new_variables['vjet_0_qglmorphed_res_morebins'] = variables['vjet_0_qglmorphed_res_morebins']
        return samples, cuts, new_variables, nuisances, plot, groupPlot

    if key=="vbs0":
        for sample in allsamples:
            if sample not in ["DATA", "Fake"]:
                # add plot
                plot[sample+"_vbs0_gluon"] = {
                'color': 1,    
                'isSignal' : 0,
                'isData'   : 0,
                'scale'    : 1.0
                }
                plot[sample+"_vbs0_quark"] = {
                'color': 1,    
                'isSignal' : 0,
                'isData'   : 0,
                'scale'    : 1.0
                }
                # add to groupplot
                groupPlot['quark']['samples'].append(sample+"_vbs0_quark")
                groupPlot['gluon']['samples'].append(sample+"_vbs0_gluon")
                # remove unwanted variables
        new_variables ={}
        new_variables['vbs_0_qgl_res'] = variables['vbs_0_qgl_res']
        new_variables['vbs_0_qgl_res_morebins'] = variables['vbs_0_qgl_res_morebins']
        new_variables['vbs_0_qglmorphed_res'] = variables['vbs_0_qglmorphed_res']
        new_variables['vbs_0_qglmorphed_res_morebins'] = variables['vbs_0_qglmorphed_res_morebins']
        return samples, cuts, new_variables, nuisances, plot, groupPlot
    else:
        return samples, cuts, variables, nuisances, plot, groupPlot