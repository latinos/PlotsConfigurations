##############################################
# now variables to plot
# Include also variables to be plotted


variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }


#Fit variables

variables['n_gen_jets'] ={  'name' : 'n_gen_jets',
                            'range' : (8,2,10),
                            'xaxis' : 'Gen CleanJet Pt>30', 
                            'fold' : 0,
}  

variables['gen_vbspttot'] ={  'name' : 'gen_vbspttot',
                            'range' : (50,60,600),
                            'xaxis' : 'Gen VBS 1 pt', 
                            'fold' : 0,
}   


variables['gen_detajj'] ={  'name' : 'gen_detajj',
                            'range' : ([0,0.5,1.,1.5,2.,2.5,3.,3.5,4.,4.5,5.,5.5,6.,7.,10],),
                            'xaxis' : 'deltaeta JJ', 
                            'fold' : 0,
}   

variables['gen_mjj'] ={  'name' : 'gen_mjj',
                            'range' : (50, 100, 3000),
                            'xaxis' : 'deltaeta JJ', 
                            'fold' : 0,
}   


