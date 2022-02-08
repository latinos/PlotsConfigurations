


mhs = ["160","180","200","250","300","350","400"]
mx = ["100","150","200","300"]
mZp = ["200","300","400","500","600","700","800","900","1000","1100","1200","1300","1400","1500","1600","1700","1800","1900","2000","2100","2200","2300","2400","2500"]

for hs in mhs:
    for chi in mx:
        for Zp in mZp:
            f = open("interpolationWeight.C", "r")
            copy = open("interpolationWeight_mhs_" + hs + "_mx_" + chi + "_mZp_" + Zp + ".C", "w")
            for line in f.readlines():
                if 'interpolationWeight' in line:
                    copy.write(line.replace('interpolationWeight', 'interpolationWeight_mhs_' + hs + '_mx_' + chi + '_mZp_' + Zp))
                elif 'mhs_200_mx_150_mZp_2200' in line:
                    copy.write(line.replace('mhs_200_mx_150_mZp_2200', 'mhs_' + hs + '_mx_' + chi + '_mZp_' + Zp))
                else:
                    copy.write(line)

            copy.close()
