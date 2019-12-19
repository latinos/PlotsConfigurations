'''
efficiencies from datacards

Use `python efficiencies_from_datacards.py -h` to have more informations about the parameters and how to call this script.
Use 

```
$ python
>>> import efficiencies_from_datacards
>>> help(efficiencies_from_datacards)
```

This script is not part yet of the Latino infrastructure.
It may be part of it one day, but this is not that day yet.

This script computes cut efficiencies starting from datacards.
In order to use this script, you must have a `datacards` directory
created with `mkDatacards.py` from latino framework.

The output of the `mkDatacards.py` program is a directory called
`datacards` which contains:
* a directory for each cut defined in `cuts.py` in your PlotConfiguration subdirectory
* inside each cut directory, there is a directory for every variable defined in `variables.py` in your PlotConfiguration subdirectory.
  Since we aim here at computing cut efficiencies, we consider here only a single variable that contains the number of events
  that pass a specific cut. We suggest calling this variable `events`, but if you change its name, you can configure it.
* for each cut, for each variable, (inside the `cut_name/variable_name`) there is a a file `datacard.txt`, which contain the rate of the
  value in each sample.
  Since we care about efficiencies here, the rate of the variable `events` is the number of events that passed the cut.

In order to compute the efficiencies, for each sample, we compare the number of 
events that passed a cut with the number of total events in that sample.
Since as a reference here we use the total numbre of events, we need to have a dummy cut defined as '1' in `cuts.py`. 
We suggest calling it `no_cut`, but if you change its name you can configure it.

The results are reported as fraction from 0 to 1. 
12% efficiency is reported as 0.12 in the final table.

'''


import sys  
# import utils
import os
import argparse
from pprint import pprint
import pandas as pd  

def parse_datacard(directory, cut, events_datacard_filename):
    '''parse the rates from datacard file'''
    filepath = directory + cut + events_datacard_filename
    cut_description = {'cut': cut}
    with open(filepath) as f:
        lines = f.readlines()
        keywords = ['process', 'rate']
        for line in lines:
            for key in keywords:
                if key in line:
                    rate_line = line.split()
                    rate_line.remove(key)
                    if not key in cut_description:
                        cut_description[key] = rate_line
    return cut_description

def efficiency(directory, refcut_map, debug=False):
    directory += './datacards/'
    events_datacard_filename = '/events/datacard.txt' # hardcoded cut name

    cuts = {}
    for cut in refcut_map.keys():
        cuts[cut] = parse_datacard(directory, cut, events_datacard_filename)
    refcuts = {}
    for refcut in refcut_map.values():
        refcuts[refcut] = parse_datacard(directory, refcut, events_datacard_filename)

    for cut in cuts:
        cuts[cut]['refcut'] = refcut_map[cut]
        cuts[cut]['eff'] = []
        cuts[cut]['refrate'] = []
        for index, rate in enumerate(cuts[cut]['rate']):
            refrate = float(refcuts[cuts[cut]['refcut']]['rate'][index])
            cuts[cut]['refrate'].append(refrate)
            cuts[cut]['eff'].append(float(rate) / refrate)
    if debug:
        pprint(cuts)

    # fill table
    columns = ['cut', 'refcut', 'relative_eff']
    df = pd.DataFrame(columns=columns)
    process = 'VBS'
    i = 0
    for index in cuts:
        row = [index] + [cuts[index]['refcut']] + cuts[index]['eff']
        df.loc[i] = row
        i += 1
    # df_t = df.T 
    # print a nicer table
    df['sort_number'] = df['cut'].str.extract('(\d+)', expand=False).astype(int)
    df['sort_string'] = df.apply(lambda row: ''.join([i for i in row['cut'] if not i.isdigit()]) , axis=1)
    df = df.sort_values(by=['sort_string', 'sort_number'])
    df = df.drop('sort_number', axis=1)
    df = df.drop('sort_string', axis=1)
    print df.round(2)


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description='Compute efficiencies', conflict_handler='resolve')
    parser.add_argument('data_path', type=str, help='All the files in this directory will be analyzed')
    parser.add_argument('--events_var_name', type=str, default='events', help='specify the name of the `events` variable')
    parser.add_argument('--debug', type=bool, default=False, help='Print the whole datastructure, not only the table')
    args = parser.parse_args()

    refcut_map = {
        "ele_jetpt40" : "lowen_ele_incl",
        "ele_jetpt50" : "lowen_ele_incl",
        "ele_jetpt60" : "lowen_ele_incl",
        "ele_jetpt80" : "lowen_ele_incl",
        "ele_jetpt100": "lowen_ele_incl",
        "mu_jetpt40"  : "lowen_mu_incl",
        "mu_jetpt50"  : "lowen_mu_incl",
        "mu_jetpt60"  : "lowen_mu_incl",
        "mu_jetpt80"  : "lowen_mu_incl",
        "mu_jetpt100" : "lowen_mu_incl",
    }

    efficiency(args.data_path, refcut_map, args.debug)
