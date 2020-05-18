from List_MX import *
from List_MX_VBF import *


List_MX_common=list(set(List_MX).intersection(List_MX_VBF))


ListPlotTemplate=['plot_MassTemplate_SR.py']



#List_MX=[200,210,250,300,350,400,500,550,600,650,700,750,800,900,1500,2000,2500,3000,4000,5000]
#List_MX=[200,210,250,300,350,400,500,550,600,650,700,750,800,900,1500,2000,2500,3000,4000,5000]
dic_scale={
200:30,
210:30,
230:30,
250:30,
300:30,
350:50,
400:50,
500:50,
550:50,
600:50,
650:100,
700:100,
750:100,
800:100,
900:100,
1000:100,
1500:500,
2000:500,
2500:1000,
3000:1000,
4000:10000,
5000:10000,
}

for PlotTemplate in ListPlotTemplate:
    for MX in List_MX_common:

        print MX
        ##PlotTemplate
        f_plot_template=open(PlotTemplate,'r')
        f_plot=open(PlotTemplate.replace('MassTemplate','M'+str(MX)),'w')
        
        plot_lines=f_plot_template.readlines()
        for line in plot_lines:
            if '__THIS_MASS__' in line:
                line=line.replace('__THIS_MASS__',str(MX))
            if '__THIS_SCALE__' in line:
                line=line.replace('__THIS_SCALE__',str(dic_scale[MX]))
            f_plot.write(line)
                    
        f_plot_template.close()
        f_plot.close()



    

