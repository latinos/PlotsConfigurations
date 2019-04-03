# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

variables['mll']  = {   'name': 'mll',            #   variable name
                       'range' : (15, 0. ,600),    #15   variable range
                       'xaxis' : 'mll [GeV]',  #   x axis name
                       'fold' : 3
                       }

#variables['djv_ptl1']  = {   'name': '(std_vector_jet_pt[2]>20)*(std_vector_jet_pt[2]/std_vector_lepton_pt[0])+(!(std_vector_jet_pt[2]>20))*(0/std_vector_lepton_pt[0])',
 #                      'range' : (80, 0 ,2), #(12, -0.41 ,2) (10, -1 ,2)  
  #                     'xaxis' : 'djv(p_{t}^{lep1})',  
   #                    'fold' : 3
    #                   } #usually jet_pt > 20 (if not verified, use 0 instead of jet_pt)

#variables['djv_ptll']  = {   'name': '(std_vector_jet_pt[2]>20)*(std_vector_jet_pt[2]/ptll)+(!(std_vector_jet_pt[2]>20))*(0/ptll)',
                       #'range' : (80, 0 ,2), #(10, -1 ,2)  
                       #'xaxis' : 'djv(p_{t}^{lep1})',  
                       #'fold' : 3
                       #} #usually jet_pt > 20 (if not verified, use 0 instead of jet_pt)

#variables['djv_mll']  = {   'name': '(std_vector_jet_pt[2]>20)*(std_vector_jet_pt[2]/mll)+(!(std_vector_jet_pt[2]>20))*(0/mll)',
                       #'range' : (80, 0 ,2),    
                       #'xaxis' : 'djv(m_{ll})',
                       #'fold' : 3
                       #} #usually jet_pt > 20 (if not verified, use 0 instead of jet_pt)
                       
variables['djv_mjj']  = {   'name': '(std_vector_jet_pt[2]>20)*(std_vector_jet_pt[2]/mjj)+(!(std_vector_jet_pt[2]>20))*(0/mjj)',
                       'range' : (20, 0. ,0.18),    
                       'xaxis' : 'djv(m_{jj})',
                       'fold' : 3
                       } #usually jet_pt > 20 (if not verified, use 0 instead of jet_pt)

#variables['djv_ptl2']  = {   'name': '(std_vector_jet_pt[2]>20)*(std_vector_jet_pt[2]/std_vector_lepton_pt[1])+(!(std_vector_jet_pt[2]>20))*(0/std_vector_lepton_pt[1])',
 #                      'range' : (80, 0 ,2), #(10, -1 ,2) (22, -0.21 ,2) 
  #                     'xaxis' : 'djv(p_{t}^{lep1})',  
   #                    'fold' : 3
    #                   } #usually jet_pt > 20 (if not verified, use 0 instead of jet_pt)

variables['mjj']  = {  'name': 'mjj',
                      'range': (18,500,2000), #(18,500,2000)(40,0,2000)
                      'xaxis': 'm_{jj} [GeV]',
                      'fold': 3
                      }

variables['detajj']  = { 'name': 'detajj',
                         'range': (18,2,9),#(18,2,9)(30,0,9)
			 'xaxis': '#Delta#eta_{jj}',
                         'fold': 3
                       }

#variables['ptj3'] = { 'name': 'std_vector_jet_pt[2]',
		      #'range': (10, 0., 100.),
		      #'xaxis': 'p_{t}^{jet 3} [GeV]',
		      #'fold': 3
		      #}

#variables['jv'] = { 'name': '(std_vector_jet_pt[2]<30)',
		      #'range': (4, -1.5, 2.5),
		      #'xaxis': 'jv',
		      #'fold': 3
		      #}

#variables['cjv'] = { 'name': '(std_vector_jet_pt[2]<=30 || (std_vector_jet_pt[2]>30 && std_vector_jet_eta[2] < ((std_vector_jet_eta[0]<std_vector_jet_eta[1])*std_vector_jet_eta[0]+(std_vector_jet_eta[0]>=std_vector_jet_eta[1])*std_vector_jet_eta[1]) && std_vector_jet_eta[2] > ((std_vector_jet_eta[0]<std_vector_jet_eta[1])*std_vector_jet_eta[1]+(std_vector_jet_eta[0]>=std_vector_jet_eta[1])*std_vector_jet_eta[0])))',
		      #'range': (4, -1.5, 2.5),
		      #'xaxis': 'cjv',
		      #'fold': 3
		      #}

#variables['etacond']  = {  'name': 'std_vector_jet_eta[2] < ((std_vector_jet_eta[0]<std_vector_jet_eta[1])*std_vector_jet_eta[0]+(std_vector_jet_eta[0]>=std_vector_jet_eta[1])*std_vector_jet_eta[1]) && std_vector_jet_eta[2] > ((std_vector_jet_eta[0]<std_vector_jet_eta[1])*std_vector_jet_eta[1]+(std_vector_jet_eta[0]>=std_vector_jet_eta[1])*std_vector_jet_eta[0]) ',
                      #'range': (4,-1.5,2.5), 
                      #'xaxis': '#eta condition',
                      #'fold': 3
                      #}





