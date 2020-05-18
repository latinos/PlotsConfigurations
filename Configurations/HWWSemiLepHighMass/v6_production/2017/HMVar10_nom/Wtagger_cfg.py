###configuration###
##https://twiki.cern.ch/twiki/bin/view/CMS/JetWtagging
##W taggers
###Some categories are already corrected on JMS/JMR  @ nanoTool
###[2018]->tau21 HP45
###[2017]->tau21 HP45
###[2016]-> all id has the same JMS/JMR
##DDT ##https://arxiv.org/pdf/1603.00027.pdf
##Also evaluated JMS&JMR SD corr in tau21DDT region: https://twiki.cern.ch/twiki/bin/viewauth/CMS/JetWtagging#tau21DDT_0_43
###dictionary structure WJID[year][name] = {isDDT,tau21min:,tau21max:,}              

WJID={
    '2018':{
        'HP35':{
            'C_DDT':0.,
            'tau21min':-1.,
            'tau21max':0.35,
            'JMS':{'nom':0.999, 'up':1.001,'down':0.997},
            'JMR':{'nom':1.108, 'up':1.1142,'down':1.074},
            'effSF':{'nom':0.964, 'up':0.994, 'down':0.932},
            },
        'HP45':{
            'C_DDT':0.,
            'tau21min':-1,
            'tau21max':0.45,
            'JMS':{'nom':0.997,'up':1.001,'down':0.993},
            'JMR':{'nom':1.243,'up':1.284,'down':1.202},
            'effSF':{'nom':0.980, 'up':1.007, 'down':0.953},
        },
        'HP43DDT':{
            'C_DDT':0.082,
            'tau21min':-1.,
            'tau21max':0.43,
            'JMS':{'nom':1.,'up':1.010,'down':0.990},
            'JMR':{'nom':1.124,'up':1.208,'down':1.04},
            'effSF':{'nom':0.823,'up':1.033,'down':0.613},
        },
        'HP50DDT':{
            'C_DDT':0.082,
            'tau21min':-1,
            'tau21max':0.50,
            'JMS':{'nom':1.001,'up':1.003,'down':0.900},
            'JMR':{'nom':1.146,'up':1.185,'down':1.107},
            'effSF':{'nom':0.899,'up':1.077,'down':721},
        },
    },

    '2017':{
        'HP45':{
            'C_DDT':0,
            'tau21min':-1,
            'tau21max':0.45,
            'JMS':{'nom':0.982,'up':0.984,'down':0.980},
            'JMR':{'nom':1.092,'up':1.131,'down':1.053},
            'effSF':{'nom':0.97,'up':1.03,'down':0.91},
        },
        'HP43DDT':{
            'C_DDT':0.080,
            'tau21min':-1,
            'tau21max':0.43,
            'JMS':{'nom':0.983,'up':0.990,'down':0.976},
            'JMR':{'nom':1.080,'up':1.161,'down':0.999},
            'effSF':{'nom':0.955,'up':1.076,'down':0.834},
        },
    },
    '2016':{
        'HP35':{
            'C_DDT':0.,
            'tau21min':-1.,
            'tau21max':0.35,
            'JMS':{'nom':1.,'up':1.0094,'down':0.9906},
            'JMR':{'nom':1.,'up':1.2,'down':0.8},
            'effSF':{'nom':0.99,'up':1.1,'down':0.88},
        },
        'HP40':{
            'C_DDT':0.,
            'tau21min':-1.,
            'tau21max':0.40,
            'JMS':{'nom':1.,'up':1.0094,'down':0.9906},
            'JMR':{'nom':1.,'up':1.2,'down':0.8},
            'effSF':{'nom':1.,'up':1.06,'down':0.94},
        },

        'HP55':{
            'C_DDT':0.,
            'tau21min':-1.,
            'tau21max':0.55,
            'JMS':{'nom':1.,'up':1.0094,'down':0.9906},
            'JMR':{'nom':1.,'up':1.2,'down':0.8},
            'effSF':{'nom':1.03,'up':1.17,'down':0.89},
        },
        'HP43DDT':{
            'C_DDT':0.08,
            'tau21min':-1.,
            'tau21max':0.43,
            'JMS':{'nom':1.014,'up':1.021, 'down':1.007},
            'JMR':{'nom':1.086,'up':1.176,'down':0.996},
            'effSF':{'nom':0.937,'up':1.04,'down':0.834},
        }
        
    }
}
    


FATJETCUTS={
    '2018':{
        'ptmin':200.,
        'etamax':2.5,
        'msdmin':40.,
        'msdmax':250.,
    },
    '2017':{
        'ptmin':200.,
        'etamax':2.5,
        'msdmin':40.,
        'msdmax':250.,
    },

    '2016':{
        'ptmin':200.,
        'etamax':2.4,
        'msdmin':40.,
        'msdmax':250.,
    },


}
