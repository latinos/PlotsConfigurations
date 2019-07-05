# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

#Renormalization and factorization scale weights
for ipdf in range(0,9):
  variables['mll_scaleweight' + str(ipdf)]  = {   'name': 'mll*LHEScaleWeight[' + str(ipdf) +'] / LHEScaleWeight[0]',
                                             'range' : (50,0,400),
                                           'xaxis' : 'mll with weight ' + str(ipdf),
                                           'fold'  : 3
                                           }

  variables['mth_scaleweight' + str(ipdf)]  = {   'name': 'mth*LHEScaleWeight[' + str(ipdf) +'] / LHEScaleWeight[0]',
                                             'range' : (50,0,400),
                                           'xaxis' : 'mth with weight ' + str(ipdf),
                                           'fold'  : 3
                                           }
#PDF weights
for ipdf in range(0,103): 
  variables['mll_pdfweight' + str(ipdf)]  = {   'name': 'mll*LHEPdfWeight[' + str(ipdf) +'] / LHEPdfWeight[0]',    
                                             'range' : (50,0,400),  
                                           'xaxis' : 'mll with weight ' + str(ipdf),
                                           'fold'  : 3                        
                                           }
    
  variables['mth_pdfweight' + str(ipdf)]  = {   'name': 'mth*LHEPdfWeight[' + str(ipdf) +'] / LHEPdfWeight[0]',    
                                             'range' : (50,0,400),  
                                           'xaxis' : 'mth with weight ' + str(ipdf),
                                           'fold'  : 3                        
                                           }
#PDF weights : mll in bins of mth     
for ipdf in range(0,103): 
  for b in range(50,200,50):
    variables['mll_pdfweight' + str(ipdf)+'_bin'+str(b)]  = {   'name': '(mll*LHEPdfWeight[' + str(ipdf) +'] / LHEPdfWeight[0])*(mth>'+str(b)+')*(mth<('+str(b)+'+50))',    
                                           'range' : (50,0,400),  
                                           'xaxis' : 'mll with weight ' + str(ipdf) +'bin of mth'+str(b),
                                           'fold'  : 3                        
                                           }
   
