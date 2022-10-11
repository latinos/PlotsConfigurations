import os

for root, dirnames, filenames in os.walk('.',followlinks=True):
    if "datacard.txt" in filenames:
        filepath = os.path.join(root,"datacard.txt")
        newlines = []
        with open(filepath) as f:
            for line in f.readlines():
                if "0.0000/1.0000" in line:
                    print("Replacing 0.0000/1.0000 for %s in %s"%(line.split()[0],filepath))
                    newline = line.replace("0.0000/1.0000","-            ")
                    newlines.append(newline)
                elif "1.0000/0.0000" in line:
                    print("Replacing 1.0000/0.0000 for %s in %s"%(line.split()[0],filepath))
                    newline = line.replace("1.0000/0.0000","-            ")
                    newlines.append(newline)
                else:
                    newlines.append(line)
        with open(filepath,'w') as f:
            for line in newlines:
                f.write(line)
