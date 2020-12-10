import re 
import  os
import sys
import json
from pprint import pprint

pat = r'.*.out-\s*(?P<par>.*)\s+:\s+(?P<fit>[\+\-]\d+.\d+)\s+(?P<negpull>[\+\-]\d+.\d+)/(?P<pospull>[\+\-]\d+.\d+)\s+(?P<negimp>[\+\-]\d+.\d+)/(?P<postimp>[\+\-]\d+.\d+)$'

lines = open(sys.argv[1]).readlines()

results = {} 

for l in lines:
    m =re.match(pat, l)
    if m:
        results[m.group(1)] =  ( float(m.group(2)), (float(m.group(3)), float(m.group(4))),
                                                    (float(m.group(5)), float(m.group(6))  ))


output =  {
    "POIs": [
        {
        "name": "r", 
        "fit": [
            'Nan', 
            1.0, 
            'Nan'
        ]
        }
    ], 
    "params": [
    #     {
    #     "name": "CMS_Wjets_HT_res_1_norm_ele_res_2018", 
    #     "fit": [
    #         0.7756677269935608, 
    #         1.0, 
    #         1.2011827230453491
    #     ], 
    #     "r": [
    #         0.863328754901886, 
    #         0.9999999403953552, 
    #         1.1402461528778076
    #     ], 
    #     "groups": [], 
    #     "type": "Unconstrained", 
    #     "impact_r": 0.1402462124824524, 
    #     "prefit": [
    #         1.0, 
    #         1.0, 
    #         1.0
    #     ]
    #     }, 
    ]
}

for r,v in results.items():
    print r, v
    ntype = "Gaussian"
    if "norm" in r: ntype= "Unconstrained"
    obj =  {
            "name": r,
            "fit": [ v[0] +  v[1][0], v[0], v[0] + v[1][1]],
            "r": [ 1+ v[2][0],  1, 1+ v[2][1] ],
            "groups": [], 
            "type": ntype, 
            "prefit": [ -1,0,+1],
            "impact_r": abs(v[2][1])
        }
    pprint(obj)
    output['params'].append(
       obj
    )


json.dump( output, open(sys.argv[2],"w"), indent=4)