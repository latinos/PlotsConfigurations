#!/bin/python

import sys,copy
from collections import OrderedDict
import math

tablesToMerge = sys.argv[1:]

print "Meging tables ", tablesToMerge

#samples = []
values = []

tables = OrderedDict() 

for index,table in enumerate(tablesToMerge):
  file = open(table,"r")
  l=0
  samples = []
  tables[table] = OrderedDict()
  for line in file:
    if not "&" in line: continue
    l=l+1
    samples.append(line.split("&")[0])
    tables[table][line.split("&")[0]]=line.split("&")[1].replace('\n','').replace('\\','').replace('pm','\\pm')

processes=[]
for t in tables:
  processes.extend(list(tables[t]))
#  processes.extend(list(OrderedDict.fromkeys(tables[t])))

processes=list(OrderedDict.fromkeys(processes))
processes.remove("Sample   ")

# make one table with tables in parallel
for i,p in enumerate(processes):
  text=p
  for t in tablesToMerge:
    if p not in tables[t]:
      text+="     &      - "
    else:
      text+="     &     "+tables[t][p]
  print text+"\\\\"
print "\n\n\n"

# sum the event contents of each process and make one global table
text=""
for i,p in enumerate(processes):
  text+=p
  val=0
  err=0
  for t in tablesToMerge:
    if p not in tables[t]:
      #text+="   & - \\\\ \n"
      continue
    if "Total Bkg" in p or "Total Sig" in p:
      val+=float( tables[t][p].split("$\\pm$")[0])
      err+=float( tables[t][p].split("$\\pm$")[1].split("(")[1].replace(")",""))**2
    else:
      val+=float( tables[t][p].split("$\\pm$")[0])
  if err==0:
    text+="   &  "+str(val)+" \n"
  else:
    text+="   &  $"+str(val)+" \\pm $"+str(math.sqrt(err))+" \n"
print text
