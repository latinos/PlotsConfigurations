import os, sys
from math import sqrt
from ROOT import TMinuit , TFile , TCanvas , TH2D, gROOT, gStyle
import ROOT
import numpy as np
from array import array as arr
from collections import OrderedDict
from  ctypes import c_double, c_int, c_float
import random, csv

gROOT.SetBatch(True)
gStyle.SetOptStat(0)
#gStyle.SetPaintTextFormat("4.2f")
gStyle.SetPalette(ROOT.kArmy)
#gStyle.SetPalette(ROOT.kAquamarine)
gStyle.SetPadRightMargin(0.2)
gStyle.SetPadBottomMargin(0.13)
gStyle.SetPadLeftMargin(0.1)

# from flipModel import model_2x2 as model
# 2x2 eta bin scheme
# parameters : 2
# eta_bin = [ 0., 1.4 , 2.5 ]
def model( i , par ):

     if   i == 0:  value = ( par[0] * (1-par[ 0]) + (1-par[ 0]) * par[ 0] ) / ( 1 - ( par[0] * (1-par[ 0]) + (1-par[ 0]) * par[ 0] ) )
     elif i == 1:  value = ( par[0] * (1-par[ 1]) + (1-par[ 0]) * par[ 1] ) / ( 1 - ( par[0] * (1-par[ 1]) + (1-par[ 0]) * par[ 1] ) )

     elif i == 2:  value = ( par[1] * (1-par[ 0]) + (1-par[ 1]) * par[ 0] ) / ( 1 - ( par[1] * (1-par[ 0]) + (1-par[ 1]) * par[ 0] ) )
     elif i == 3:  value = ( par[1] * (1-par[ 1]) + (1-par[ 1]) * par[ 1] ) / ( 1 - ( par[1] * (1-par[ 1]) + (1-par[ 1]) * par[ 1] ) )

     return value

# Meaning of parametrs:
# npar:  number of parameters
# deriv: array of derivatives df/dp_i (x), optional
# f:     value of function to be minimised (typically chi2 or negLogL)
# par:   the array of parameters
# iflag: internal flag: 1 at first call, 3 at the last, 4 during minimisation

# The function to minimize is a Chi2
def fcn( npar , deriv , f , par , iflag):

    chisq=0.0
    for i in range(0, nBins):
        delta = ( model( i, par ) - val[i] ) / err[i]
        chisq += delta*delta

    f[0] = chisq
    #f.value = chisq
    pass

def fit( p , perr ):

     global val, err, nBins
     val = p
     err = perr
     nBins=len(val)

     # Fit parameters: two per pT bin --> [cf(barrel), cf(endcap)]
     name = ['q0', 'q1']

     npar=len(name)
     # the initial values
     vstart = arr( 'd' , npar*[0.1] )
     # the initial step size
     step = arr( 'd' , npar*[0.000001] )

     # Set up MINUIT
     gMinuit = TMinuit(npar)         # initialize TMinuit with maximum of npar parameters
     gMinuit.SetFCN(fcn)             # set function to minimize
     arglist = arr('d', npar*[0.01]) # set error definition
     ierflg = c_int(0)

     arglist[0] = 1. # 1 sigma is Delta chi2 = 1
     gMinuit.mnexcm("SET ERR", arglist, 1, ierflg)

     # Set starting values and step size for parameters
     # Define the parameters for the fit
     for i in range(0,npar): 
          gMinuit.mnparm(i, name[i], vstart[i], step[i], 0, 0, ierflg)

     # now ready for minimization step
     arglist [0] = 500 # Number of calls for FCN before giving up
     arglist [1] = 1.  # Tolerance
     gMinuit.mnexcm("MIGRAD" , arglist , 2 , ierflg) # execute the minimisation

     # Check TMinuit status
     amin , edm , errdef = c_double(0.) , c_double(0.) , c_double(0.)
     # amin , edm , errdef = 0.,0.,0.
     nvpar , nparx , icstat = c_int(0) , c_int(0) , c_int(0)
     gMinuit.mnstat (amin , edm , errdef , nvpar , nparx , icstat )
     # gMinuit.mnprin(3,amin) # print-out by Minuit

     # meaning of parameters:
     #   amin:   value of fcn distance at minimum (=chi^2)
     #   edm:    estimated distance to minimum
     #   errdef: delta_fcn used to define 1 sigam errors
     #   nvpar:  total number of parameters
     #   icstat: status of error matrix:
     #           3 = accurate
     #           2 = forced pos. def
     #           1 = approximative
     #           0 = not calculated
     #

     # Get results from MINUIT
     finalPar = []
     finalParErr = []
     p, pe = c_double(0.) , c_double(0.)
     for i in range(0,npar):
          # Get parameters and errors
          gMinuit.GetParameter(i, p, pe)
          finalPar.append(float(p.value))
          finalParErr.append(float(pe.value))

     # Get covariance matrix
     buf = arr('d' , npar*npar*[0.])

     # Get error matrix
     gMinuit.mnemat( buf , npar )
     emat = np.array( buf ).reshape( npar , npar )

     # --> provide formatted output of results
     print( "\n" )
     print( "*==* MINUIT fit completed:" )
     print('fcn@minimum = %.3g'%( amin.value ) , " error code =" , ierflg.value , " status =" , icstat.value , " (if its 3, mean accurate)" )
     print( " Results: \t value error corr. mat." )
     for i in range(0,npar):
          print('%s: \t%10.3e +/- %.1e'%( name[i] , finalPar[i] , finalParErr[i] ) )
          for j in range (0,i): 
               print('%+.3g'%( emat[i][j]/np.sqrt(emat[i][i])/np.sqrt(emat[j][j]) ) )
          print("\n")

     return [ [i,j]  for i,j in zip(finalPar , finalParErr) ]


def flatten2D(h2d):
    bins=[]; errs=[]
    for i in range( 1 , h2d.GetNbinsX() + 1 ):
        for j in range( 1 , h2d.GetNbinsY() + 1 ):
            bins.append( h2d.GetBinContent(i,j) )
            errs.append( h2d.GetBinError(i,j) )
    return [ bins , errs ]

def outFormat( ifile_ , eta_bin_ , ptbin , pt_bin_ , fitted_prob_ , out_ , useCsv=True ):

    print("In outFormat: ")
    print("pt_bin_: {}".format(pt_bin_))
    print("ptbin:   {}".format(ptbin))
    print("pt_bin_: {}".format(pt_bin_))
    print("ifile_ : {}".format(ifile_))

    pt_lo = 20.
    pt_hi = 200.
    if pt_bin_ == 'low_pt':
         pt_lo = 0.
         pt_hi = 20.

    # outfile = open('test_one/chargeFlip_{}_SF.csv'.format(ifile_), "w")
    outfile = open('test_one/chargeFlip_{}_SF.csv'.format(pt_bin_), "w")
    if not useCsv:
         outfile = open("test_one/chargeFlip_{}_SF.txt".format(pt_bin_), "w")

    row_list=[]

    for i, ieta in enumerate(eta_bin_):
        row=""
        if i==(len(eta_bin_)-1): continue
        row =  '{:.1f} , {:.1f} , '.format( ieta , eta_bin_[i+1] )
        row += '{:.1f} , {:.1f} , {:.3e} , {:.3e} , {:.3e} , {:.3e} , {:.3e} , {:.3e}'\
                .format( pt_lo , pt_hi , fitted_prob_['DATA'][i][0] , fitted_prob_['DATA'][i][1] , fitted_prob_['MC'][i][0] , fitted_prob_['MC'][i][1] , out_[i][0] , out_[i][1] )
        row_list.append( row if not useCsv else [row] )
    #print row_list
    #sys.exit()
    # preprocess
    fout=[]
    for i, line in enumerate(row_list):
        header = ['etaDown','etaUp','ptDown','ptUp','DATA','DATAerr','MC','MCerr','SF','SFerr' ]
        if i==0: fout.append( ' , '.join(header) if not useCsv else header )
        fout.append( line if not useCsv else line[0].replace(' ','').split(',') )

    with outfile as out_handler:
        if not useCsv:
            print("Writing to txt format")
            for listitem in fout:
                out_handler.write( '%s\n' %listitem )
        else:
            print("Wiriting to CSV format")
            writer = csv.writer( out_handler )
            writer.writerows( fout )
    pass

def mk2Dfromcsv( ifile_ , pt_bin_ , eta_bin ):

    print("In mk2Dfromcsv:")
    print("ifile_  = {}".format(ifile_))
    print("pt_bin_ = {}".format(pt_bin_))
    print("eta_bin = {}".format(eta_bin))

    ptlist=[0.,20.,200.]
    # pt_lo = 20.
    # pt_hi = 200.
    # if pt_bin_ == 'low_pt':
    #      pt_lo = 0.
    #      pt_hi = 20.
    # ptlist.append(pt_lo);
    # ptlist.append(pt_hi);

    ptlist =  sorted(list(dict.fromkeys(ptlist)))

    # initialize csv
    dcsv = OrderedDict()
    c = 0
    # for i, ikey in enumerate(pt_bin_.keys()):
    for ibin in pt_bin_:
        # with open("test_one/chargeFlip_{}_SF.csv".format(ifile_), 'r') as f:
        with open("test_one/chargeFlip_{}_SF.csv".format(ibin), 'r') as f:
            for x, line in enumerate(csv.DictReader(f)):
                print(line) 
                dcsv[c] = line
                c += 1

    # initialize mischarge probability h2d
    sf_hist= OrderedDict()
    for ihist in [ 'data' , 'data_sys' , 'mc' , 'mc_sys' , 'sf' , 'sf_sys' ]:
        sf_hist[ihist] = TH2D( ihist , 'charge flipping rate %s ; eta bin ; pt bin' %ihist , len(eta_bin)-1 , arr( 'f' , eta_bin ) , len(ptlist)-1 , arr( 'f' , ptlist ) )

    h_dummy = sf_hist['data']
    for ibinX in range(1,h_dummy.GetNbinsX()+1):
        eta = h_dummy.GetXaxis().GetBinCenter(ibinX)
        for ibinY in range(1,h_dummy.GetNbinsY()+1):
            pt =  h_dummy.GetYaxis().GetBinCenter(ibinY)

            # looking for correct eta , pt bin
            for num , ibn in dcsv.items():
                if eta >= float(ibn['etaDown']) and eta < float(ibn['etaUp']) and pt >= float(ibn['ptDown']) and pt < float(ibn['ptUp']):

                    data_flip = float(ibn['DATA']) ; data_flip_sys = float(ibn['DATAerr'])
                    mc_flip   = float(ibn['MC']) ; mc_flip_sys = float(ibn['MCerr'])
                    sf_flip   = float(ibn['SF']) ; sf_flip_sys = float(ibn['SFerr'])

                    sf_hist['data'].SetBinContent( ibinX , ibinY , data_flip )
                    sf_hist['data_sys'].SetBinContent( ibinX , ibinY , data_flip_sys )
                    sf_hist['mc'].SetBinContent( ibinX , ibinY , mc_flip )
                    sf_hist['mc_sys'].SetBinContent( ibinX , ibinY , mc_flip_sys )
                    sf_hist['sf'].SetBinContent( ibinX , ibinY , sf_flip )
                    sf_hist['sf_sys'].SetBinContent( ibinX , ibinY , sf_flip_sys )

                    #break;
    # save it
    # with open("test_one/chargeFlip_{}_{}_SF.csv".format(ifile_ , ibin), 'r') as f:
    # h_fileout = TFile.Open("test_one/chargeFlip_{}_SF.root".format(ifile_), "RECREATE")
    h_fileout = TFile.Open("test_one/chargeFlip_SF.root", "RECREATE")
    map(lambda x: sf_hist[x].Write() , sf_hist)
    h_fileout.Close()
    pass

    # verify.
    #for ihistkey in sf_hist:
    #    c = TCanvas() ; c.cd()
    #    sf_hist[ihistkey].Draw("ColzText")
    #    c.Print('%s/h_flipping_%s_2D.png' %( output_ , ihistkey ) )
    #return sf_hist

def mkSf(ifile_ , ptbin , ptbin_ , etabin_ , year, outcsv_=True ):
     fitted_prob = OrderedDict()
     h4val       = OrderedDict()
     out         = OrderedDict()
     h_ratio     = {}
     
     year   = "2018"
     # h_data = TFile.Open("test_one/Step3_Chflipfit/{}_mll/ratio_DATASUB_{}_mll.root".format(ptbin_,ptbin_), "READ")
     h_data = TFile.Open("test_one/Step3_Chflipfit/{}_mll/ratio_DATA_{}_mll.root".format(ptbin_,ptbin_), "READ")
     h_mc   = TFile.Open("test_one/Step3_Chflipfit/{}_mll/ratio_DY_{}_mll.root".format(ptbin_,ptbin_),      "READ")

     print("In mkSf:")
     print("year   = {}".format(year))
     print("ptbin  = {}".format(ptbin))
     print("ptbin_ = {}".format(ptbin_))

     # Fit
     fitted_prob[year] = {}
     h4val[year] = {}
     for ids in ['DATA', 'MC']:
          print(ids)
          # h4val[year][ids] = flatten2D(h_data.Get('h2_DATASUB') if ids=='DATA' else h_mc.Get('h2_DY') )
          h4val[year][ids] = flatten2D(h_data.Get('h2_DATA') if ids=='DATA' else h_mc.Get('h2_DY') )
          fitted_prob[year][ids] = fit( arr('f' , h4val[year][ids][0]), arr('f' , h4val[year][ids][1]) )
     out[year] = map( lambda x , y : [ x[0]/y[0] , sqrt( (x[1]*x[1])/(x[0]*x[0]) + (y[1]*y[1])/(y[0]*y[0]) ) ], fitted_prob[year]['DATA'] , fitted_prob[year]['MC'] )

     # Save sf on csv
     outFormat(ifile_, etabin_, ptbin, ptbin_, fitted_prob[year], out[year], outcsv_)
     #mk2Dfromcsv( ifile , ptbin_ )

     return [ fitted_prob , h4val , out ]

def mk2DHisto( bins_in , name , eta_bin , bins_error_in=None , ztitle="charge flip probability" ):

    eta_bin_array = arr('f', eta_bin )

    h_ratio_create=TH2D( name , '%s ; lepton 1 Eta ; lepton 2 Eta' %name , len(eta_bin)-1 , eta_bin_array , len(eta_bin)-1 , eta_bin_array )
    counter=0
    for i in range(0,len(eta_bin)-1):
        for j in range(0,len(eta_bin)-1):
            h_ratio_create.SetBinContent( i+1 , j+1 , bins_in[counter])
            if bins_error_in is not None: h_ratio_create.SetBinError( i+1 , j+1 , bins_error_in[counter])
            counter+=1
    h_ratio_create.GetZaxis().SetTitle(ztitle)
    h_ratio_create.SetMarkerSize(1.5)
    return h_ratio_create

def mkValidation( ifile_ , flipPro , h_val , ptbin_ , etabins_ ):
     # flipPro : dict[year][ids][ [val,err] , [], ...  ]
     # h_val : faltten 2D bins , ranging to 25

     print("In mkValidation:")
     print("ifile_:   {}".format(ifile_))
     print("ptbin_:   {}".format(ptbin_))
     print("etabins_: {}".format(etabins_))

     output = 'test_one/Step4_validateFlip/{}'.format(ptbin_)
     if not os.path.exists(output): os.system('mkdir -p {}'.format(output))

     c = TCanvas( 'c' , 'ratio_postfit_validation' , 1200 , 800 )
     c.Divide(2,2)
     # year=ifile_.split('_')[-1]
     year = "2018"

     for ids in ['DATA','MC']:
          dim = len(h_val[year][ids][0]) # infers dimension
          flipper = map(lambda x: x[0], flipPro[year][ids]) # extract the fitted value (mischarge probability)

          bins_postfit = map( lambda x: model(x,flipper) , list(range(0,dim)) ) # reproduce the ratio
          bins_prefit = h_val[year][ids][0]
          bins_diff = map(lambda x : (abs(bins_prefit[x] - bins_postfit[x])/bins_prefit[x])*100. , list(range(0,dim)) )
          # bins_diff = map(lambda x : (abs(bins_prefit[x] - bins_postfit[x])) , list(range(0,dim)) )

          c.cd(1) ; h_prefit  = mk2DHisto( bins_prefit ,  'h_ratio_prefit_%s'  %ids , etabins_ ) ; h_prefit.Draw("Colz TEXT45")
          c.cd(2) ; h_postfit = mk2DHisto( bins_postfit , 'h_ratio_postfit_%s' %ids , etabins_ ) ; h_postfit.Draw("Colz TEXT45")
          c.cd(3) ; h_diff    = mk2DHisto( bins_diff ,    'h_ratio_diff_%s'    %ids , etabins_ , None , 'rel. Difference in percent' ) ; h_diff.Draw("Colz TEXT45")

          c.Update()
          c.Print( "%s/val_ratio_postprefit_%s.png" %(output,ids) )
     pass

# input the five dummy parameters

def mkToy( dim , etabins_ ):
    #toy
    print("Running on Toy")
    zA = arr( 'f' , [ random.uniform(0,0.01) for i in range(dim) ] ) ; errorzA = arr( 'f' , [ 0.0025 for i in range(dim) ] )
    zB = arr( 'f' , [ random.uniform(0,0.01) for i in range(dim) ] ) ; errorzB = arr( 'f' , [ 0.0025 for i in range(dim) ] )

    c = TCanvas( 'c' , 'ratio_fit_toy' , 1200 , 800 )
    c.Divide(2,2)

    c.cd(1) ; h_A_prefit_toy = mk2DHisto( zA , 'h_ratio_prefit_toy_A' , etabins_ , errorzA , 'toy A N_{ss}/N_{os}' ) ; h_A_prefit_toy.Draw("Colz TEXTE")
    c.cd(2) ; h_B_prefit_toy = mk2DHisto( zB , 'h_ratio_prefit_toy_B' , etabins_ , errorzB , 'toy B N_{ss}/N_{os}' ) ; h_B_prefit_toy.Draw("Colz TEXTE")
    fit_A_param = map( lambda x : x[0] , fit( zA , errorzA ) ) ; fit_A_toy = map( lambda x: model(x,fit_A_param) , list(range(0,dim)) )
    fit_B_param = map( lambda x : x[0] , fit( zB , errorzB ) ) ; fit_B_toy = map( lambda x: model(x,fit_B_param) , list(range(0,dim)) )
    c.cd(3) ; h_A_postfit_toy = mk2DHisto( fit_A_toy , 'h_ratio_postfit_toy_A' , etabins_ , None , 'toy A N_{ss}/N_{os}' ) ; h_A_postfit_toy.Draw("Colz TEXTE")
    c.cd(4) ; h_B_postfit_toy = mk2DHisto( fit_B_toy , 'h_ratio_postfit_toy_B' , etabins_ , None , 'toy A N_{ss}/N_{os}' ) ; h_B_postfit_toy.Draw("Colz TEXTE")
    c.Update()
    c.Print( "toy.png" )
    pass

# def mkflipsf( info_ ):
def mkflipsf():

    # cfg      = info_[0]
    # presel   = info_[1]
    # signness = info_[2]
    ptbins   = ["high_pt", "low_pt"] # ["low_pt","high_pt"] # info_[3]
    etabins  = [0., 1.4, 2.5] # info_[4]
    variable = "mll"
    year     = "2018"
    # vars     = info_[5]

    #eta_bin_array = arr('f', etabins )

    # if not os.path.exists( 'test_one/' ):
    if not os.path.exists( 'test_one/' ):
        print("Error, path folder does not exist")
        sys.exit()

    #
    for iptbin in ptbins :
        #fit, and validate
        ifile   = "test_one/fit_summary_{}.txt".format(iptbin)
        summary = open(ifile, "w")
        fpout   = []
        #        for ifile in os.listdir('test_one/'):
        #            if 'Step' in ifile: continue
        fitted    = mkSf(ifile, ptbins, iptbin, etabins, year, True) # output sf file in csv
        mischarge = fitted[0]
        histo_val = fitted[1]
        epsilon   = fitted[2]
        
        # for year in epsilon:
        fpout.append(" ===> scale factor DATA/MC for %s" %year)
        for num, isf in enumerate(epsilon[year]):
             fpout.append('q{} data : {:.3e} +/- {:.3e} ; mc : {:.3e} +/- {:.3e} ; SF : {:.3e} +/- {:.3e} ( rel.error : {:.2f} % )'\
                          .format( num , 
                                   mischarge[year]['DATA'][num][0] , mischarge[year]['DATA'][num][1] , 
                                   mischarge[year]['MC'][num][0]   , mischarge[year]['MC'][num][1]   , 
                                   isf[0] , isf[1] , (isf[1]/isf[0])*100 ) )

        # on-the-fly validation
        mkValidation( ifile , mischarge , histo_val , iptbin , etabins )
        ## diagnostics
        with summary as out_handling:
            for listitem in fpout:
                out_handling.write( '%s\n' %listitem )
        os.system('cat test_one/fit_summary_{}.txt'.format(iptbin))

    # make histogram from CSV
    # for ifile in [ 'nanov5_2016' , 'nanov5_2017' , 'nanov5_2018' ] :
    # for ifile in ['2018'] :
    # for ifile in ['test_one/fit_summary_high_pt.txt', 'test_one/fit_summary_high_pt.txt']:
    list_file = ['test_one/fit_summary_high_pt.txt', 'test_one/fit_summary_high_pt.txt']
    mk2Dfromcsv(list_file, ptbins, etabins)
# pass

mkflipsf()
