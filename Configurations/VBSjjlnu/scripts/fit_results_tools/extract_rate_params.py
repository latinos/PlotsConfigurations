import re 
import sys 

regex = r"(?P<scale>[+-]\d\.\d*)\s[+]\/-\s(?P<incert>\d\.\d*)"


lines = open(sys.argv[1]).readlines()

results = []

for l in lines:
    if "CMS" not in l: continue
    
    name = l.split(" ")[0]
    match =  re.search(regex, l)

    if match:
        results.append((name, match.group("scale"), match.group("incert")))

with open("rate_params.txt", "w") as of:
    for r in results:
        of.write("{};{};{}\n".format(*r))