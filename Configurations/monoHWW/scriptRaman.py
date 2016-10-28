import string
import os
import sys

Channels = {"em","ll"}

allSamples = range(1,35)

for isMonoH in allSamples :
    for channel in Channels :
        with open("datacards/monoH_Alberto_" + channel + "/events/datacard.txt.pruned.txt") as f:                                                                                                                                                           content = f.readlines()    
        with open("dump.txt","w") as dump:
            cont = range(0,10)
            for i in cont :
                dump.write(content[i])

            righe = range(10,len(content))
            stringa = string.split(content[11])
            colonne = range(0,len(stringa))

            for i in righe :
                print 'ciclo for'
                sys.stdout.write(str(i) + ": ")
                for j in range(0,len(string.split(content[i]))) :
                    if i <  14 and j > 0 and j < len(string.split(content[i])) - 15 and j != isMonoH : continue
                    if i >= 14 and j > 1 and j < len(string.split(content[i])) - 15 and j != isMonoH : continue
                    linea = string.split(content[i])
                    sys.stdout.write(str(j) + ": " + linea[j] + " ")           
                    dump.write(linea[j] + " ")
                sys.stdout.write('\n')
                dump.write('\n')

            dump.close()

            print(stringa[isMonoH])

            os.system('cp dump.txt datacards/monoH_Alberto_' + channel + '/events/Raman_' + str(stringa[isMonoH]) + '.txt')

