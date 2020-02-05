import os
import pandas as pd

data = []
categories = os.listdir('./datacards')
samples_all = []

write_csv = True

for cat in categories:
  
  datacard_path = f'./datacards/{cat}/events/datacard.txt'

  with open(datacard_path) as infile:
    
    lines = infile.readlines()
    samples = lines[10].split()[1:]
    yields = lines[12].split()[1:]

    for i in range(len(samples)):
      
      if samples[i] not in samples_all: samples_all.append(samples[i])

      data.append( {'category' : cat, 'sample' : samples[i], 'yield' : yields[i]} )

df = pd.DataFrame(data)

if not write_csv:

  with open('table.txt','w') as outfile:

    outfile.write('\t\t\t\t')
    for sample in samples_all:
      outfile.write(f'\t\t\t\t{sample}')

    outfile.write('\n')
  
    for cat in categories:
      outfile.write(f'{cat}\t\t\t')
      for sample in samples_all:
        try:
          yiel = df[(df['category'] == cat) & (df['sample'] == sample)]['yield'].item()
        except:
          yiel = 0
    
        outfile.write(f'\t\t\t\t{yiel}')

      outfile.write('\n')

if write_csv:

  with open('table.csv','w') as outfile:
    
    outfile.write('Categories')
    for sample in samples_all:
      outfile.write(f',{sample}')

    outfile.write('\n')

    for cat in categories:
      outfile.write(f'{cat}')
      for sample in samples_all:
        try:
          yiel = df[(df['category'] == cat) & (df['sample'] == sample)]['yield'].item()
        except:
          yiel = 0

        outfile.write(f',{yiel}')

      outfile.write('\n')
