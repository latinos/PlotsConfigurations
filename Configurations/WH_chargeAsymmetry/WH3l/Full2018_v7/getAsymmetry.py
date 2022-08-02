import math

input_file = "Combination/FitResults.txt"

def error_propagation(xs_plus, unc_xs_plus_up, unc_xs_plus_down, xs_minus, unc_xs_minus_up, unc_xs_minus_down):
    """Given cross sections and uncertainties, calculates Asymmetry and its uncertainty"""

    A = (xs_plus - xs_minus) / (xs_plus + xs_minus)

    unc_plus_term_up   = (2*xs_minus / ((xs_plus + xs_minus)*(xs_plus + xs_minus))) * unc_xs_plus_up
    unc_plus_term_down = (2*xs_minus / ((xs_plus + xs_minus)*(xs_plus + xs_minus))) * unc_xs_plus_down

    unc_minus_term_up   = (-2*xs_plus / ((xs_plus + xs_minus)*(xs_plus + xs_minus))) * unc_xs_minus_up
    unc_minus_term_down = (-2*xs_plus / ((xs_plus + xs_minus)*(xs_plus + xs_minus))) * unc_xs_minus_down

    A_unc_up   = math.sqrt(unc_plus_term_up**2 + unc_minus_term_up**2)
    A_unc_down = math.sqrt(unc_plus_term_down**2 + unc_minus_term_down**2)

    return A, A_unc_up, A_unc_down


with open(input_file) as f:
    lines = f.readlines()
    
# XS values
sigma_plus  = 0.8380 # pb
sigma_minus = 0.5313 # pb

# XS uncertainty values
unc_plus_up    = 0
unc_plus_down  = 0
unc_minus_up   = 0
unc_minus_down = 0

line_plus  = ""
line_minus = ""

for l in lines:
    if "r_WH" in l and "Parameter" not in l:
        if "r_WH_plus" in l:
            line_plus = l
        if "r_WH_minus" in l:
            line_minus = l

print(line_plus)
print(line_minus)

word = line_plus.split()
unc_plus_down = float(word[3].split("/")[0]) * sigma_plus
print("Unc plus down: {}".format(unc_plus_down))
word = line_plus.split()
unc_plus_up = float(word[3].split("/")[1]) * sigma_plus
print("Unc plus up: {}".format(unc_plus_up))

word = line_minus.split()
unc_minus_down = float(word[3].split("/")[0]) * sigma_minus
print("Unc minus down: {}".format(unc_minus_down))
word = line_minus.split()
unc_minus_up = float(word[3].split("/")[1]) * sigma_minus
print("Unc minus up: {}".format(unc_minus_up))

asymm, unc_asymm_up, unc_asymm_down = error_propagation(sigma_plus, unc_plus_up, unc_plus_down, sigma_minus, unc_minus_up, unc_minus_down)

print("Asymmetry = {} +{} -{}".format(asymm, unc_asymm_up, unc_asymm_down))
