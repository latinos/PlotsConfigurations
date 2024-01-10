import sys

if __name__ == '__main__':

  inFilePath = sys.argv[1]

  lines = []

  with open(inFilePath, "r") as inFile:

    for l in inFile.readlines(): lines.append(l)

  for i,line in enumerate(lines):

    if len(line.split()) < 3: continue

    ### Signal template locatin 
    if 'process' in line.split()[0] and '_T' in line.split()[1]: # Assume 1st is always a signal?
      Templates = []
      TemplateID = []
      for sample in range(1,len(line.split()[1:])+1):
       if '_T' in line.split()[sample]:
        Templates.append(line.split()[sample])
        TemplateID.append(sample)
      TemplatesDict  = dict(zip(TemplateID,Templates))
      TemplatesDict2 = dict(zip(Templates,TemplateID))
      print(Templates)
      print(TemplateID)

    # Norm uncertainty with up/down entry (Taken directly from MC templates so can fluctuate)
    if 'lnN' in line.split()[1] and '/' in line : 
      print("Norm : ", line.split()[0])

      vbfe = line.split()[TemplatesDict2["VBF_T1"]+1]
  #    whe = line.split()[TemplatesDict2["WH_T1"]+1]
  #    zhe = line.split()[TemplatesDict2["ZH_T1"]+1]
      gghe = line.split()[TemplatesDict2["ggHjj_T1"]+1]
      print("VBF", vbfe)
   #   print("ZH",  zhe)
   #   print("WH",  whe)
      print("ggH", gghe)
      
      values = line.split()[2:]
       
      for j,value in enumerate(values):
        if TemplatesDict.get(j+1) is not None: # Signal template
         
         if   'VBF_T' in TemplatesDict.get(j+1): values[j] = vbfe
    #     elif 'WH_T'  in TemplatesDict.get(j+1): values[j] = whe
    #     elif 'ZH_T'  in TemplatesDict.get(j+1): values[j] = zhe
         elif 'ggHjj_T' in TemplatesDict.get(j+1): values[j] = gghe

        if values[j] == '-': continue
        up, down = values[j].split("/")
        if (float(up) > 1.1 or float(down) < 0.9): values[j] = "1.1000/0.9000"
        if (float(up) < 0.9 or float(down) > 1.1): values[j] = "0.9000/1.1000"

        new_line = "     ".join(line.split()[:2] + values)
        lines[i] = new_line

      lines[i] = new_line+"\n"

    # Shape Sys
  #  if 'shape' in line.split()[1] :  
  #    print("Shape : ", line.split()[0])
  #    values = line.split()[2:]
  #     
  #    for j,value in enumerate(values):
  #      if TemplatesDict.get(j+1) is not None: # Signal template
  #      
  #       if '_T' in TemplatesDict.get(j+1): # turning off signal shape sys
  #        if values[j] == '1.000': values[j] = ' - '
  #
  #    new_line = "     ".join(line.split()[:2] + values)
  #    lines[i] = new_line+"\n"

  with open(f"{inFilePath.replace('.txt','')}_fpruned.txt", "w") as outFile:

    for line in lines:
      outFile.write(line)
