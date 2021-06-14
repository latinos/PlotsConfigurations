import pandas as pd 
import matplotlib.pyplot as plt 
import argparse
import sys 
from collections import OrderedDict


def parse(file):
    out = OrderedDict()
    with open(file) as o:
        lines = o.readlines()[1:]
        for l in lines: 
            p = l.split(";")
            out[p[0]] = list(map(float, p[1:]))
    return out 

A = parse(sys.argv[1])
B = parse(sys.argv[2])


print("|Par | Asimov | Data |  D/A | ErrA | ErrD | ErrD/ErrA| CorrMu |")
print("|----|--------|------|------|------|------|----------|--------|")

for par in A.keys():
    Ap = A[par][0] 
    Bp =  B[par][0]
    diff = abs(Bp - Ap) 
    if "norm" in par:
        ratio = abs(Bp) / abs(Ap)
    else:
        ratio = (Bp+1 )/(Ap+1)
    variation = diff / abs(Ap)
    bad = False
    warning = False
    if  ratio > 1 and (ratio -1 )> 0.10: warning = True
    if  ratio < 1 and (1 - ratio)> 0.10: warning = True
    if  ratio > 1 and (ratio -1 )> 0.2: bad = True
    if  ratio < 1 and (1 - ratio)> 0.2: bad = True
    ratioErr = B[par][1] /  A[par][1]
    corr = A[par][2]
    print_par = par 
    if warning: print_par = "*"+par + "*"
    if bad: print_par = "**"+par+"**"
    print "| {} |{:.3f} | {:.3f} |  {:.3f} |  {:.2f} | {:2f} | {:3f}| {:.3f} | ".format( 
           print_par,  Ap, Bp, ratio, A[par][1],B[par][1], ratioErr, corr
    )