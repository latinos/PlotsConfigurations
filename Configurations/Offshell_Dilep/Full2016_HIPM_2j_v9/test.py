def fixBug_shape_syst(syst, factor):
    # applies only for WW and top PDF uncrty 
    # if syst is shape or lnN it reduces variation by multiplicative factor
    for _syst in ["CMS_hww_pdf_WW","CMS_hww_pdf_top"]:
        if _syst in syst.name():
            if syst.type() in "shape":
                print("Bugfix of "+syst.name()+" in region " + syst.bin() +": "+syst.type()+" "+str(syst.scale())+"-->"+str(syst.scale()/factor))
                syst.set_scale(syst.scale()/factor)
            elif syst.type() in "lnN":
                new_u = 1.+(syst.value_u()-1.)*factor
                new_d = 1.+(syst.value_d()-1.)*factor
                # new_d = 1./(1.+abs(syst.value_d()-1.)*factor)
                print("Bugfix of "+syst.name()+" in region " + syst.bin() +": "+syst.type()+" "+str(syst.value_u())+"/"+str(syst.value_d())+"-->"+str(new_u)+"/"+str(new_d))
                syst.set_value_u(new_u)
                syst.set_value_d(new_d)

parser = argparse.ArgumentParser()
parser.add_argument('--inputFile', '-i', default='datacard.txt',
                    help='Specifies the name of the datacards to sanitize')
args = parser.parse_args()


ROOT.gSystem.Load('libHiggsAnalysisCombinedLimit')
cb = ch.CombineHarvester()
cb.SetFlag('workspaces-use-clone', True)
cb.SetFlag('filters-use-regex', True)
cb.SetFlag("check-negative-bins-on-import",1)
cb.SetFlag("zero-negative-bins-on-import", 1)
cb.SetVerbosity(0)
cb.ParseDatacard(args.inputFile, analysis='benedetta')

#Here bugfix
cb.cp().ForEachSyst(lambda x: fixBug_shape_syst(x,10))

if not os.path.exists('shapes'):
    os.makedirs('shapes')
output_file = f'shapes/{args.inputFile}'.replace('.txt', '_sanitized.root')
outf = ROOT.TFile(output_file, 'recreate')
cb.WriteDatacard(f'{args.inputFile}'.replace('.txt', '_sanitized.txt'), outf)
outf.Close()
