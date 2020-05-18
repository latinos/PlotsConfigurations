from List_MX import *
from List_MX_VBF import *
List_MX_common=list(set(List_MX).intersection(List_MX_VBF))

#List_MX=[200,210,230,250,300,350,400,500,550,600,650,700,750,800,900,1500,2000,2500,3000,4000,5000]
if __name__ == '__main__':
    #print('( '+" ".join(str(MX) for MX in List_MX)+' )')
    print " ".join(str(MX) for MX in List_MX_common)
