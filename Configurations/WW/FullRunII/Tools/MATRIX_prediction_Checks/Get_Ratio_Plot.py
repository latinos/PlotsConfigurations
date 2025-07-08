# -*- coding: utf-8 -*-
from __future__ import print_function
import ROOT

# ===== USER INPUTS =====
INTEGRATED_LUMINOSITY = 138  # Integrated luminosity in fb^-1
MATRIX_SCALING_FACTOR = 1.0    # Additional scaling factor for MATRIX values :Only if needed for emu,ee,mu combinations 
# =======================

# Load files
file1 = ROOT.TFile.Open("hists_MATRIX.root")
file2 = ROOT.TFile.Open("lhe_ptww_MINNLOPs_qqWW.root")
file3 = ROOT.TFile.Open("lhe_ptww_POWHEG_qqWW.root")  # You can change this to your third file

# Retrieve histograms
hist1 = file1.Get("MATRIX_NNLO_N3LL")  # Differential cross section dsigma/dptWW
hist2 = file2.Get("lhe_ptww")          # Event-based distribution
hist3 = file3.Get("lhe_ptww")          # Third histogram (you can change the histogram name)

# Print histogram info for debugging
print("Hist1 (MATRIX) bins:", hist1.GetNbinsX(), "range:", hist1.GetXaxis().GetXmin(), "-", hist1.GetXaxis().GetXmax())
print("Hist2 (MINNLOPS) bins:", hist2.GetNbinsX(), "range:", hist2.GetXaxis().GetXmin(), "-", hist2.GetXaxis().GetXmax())

# Print integral information
print("\n=== INTEGRAL INFO ===")
print("Hist1 (MATRIX) integral: {:.2f}".format(hist1.Integral()))
print("Hist2 (MINNLOPS) integral: {:.2f}".format(hist2.Integral()))
print("Hist1 mean: {:.2f}".format(hist1.GetMean()))
print("Hist2 mean: {:.2f}".format(hist2.GetMean()))

# ===== MANUALLY SET FIRST AND SECOND BIN VALUES (BEFORE REBINNING) =====
print("\n=== MANUALLY SETTING BIN VALUES (BEFORE REBINNING) ===")
print("Setting bin 1 and 2 to 11.509358")
hist1.SetBinContent(1, 11.509358)
hist1.SetBinContent(2, 11.509358)
# Keep the original errors for these bins
print("Bin 1 content set to: {:.6f}".format(hist1.GetBinContent(1)))
print("Bin 2 content set to: {:.6f}".format(hist1.GetBinContent(2)))

# Print detailed bin information for both histograms
print("\n=== HIST1 (MATRIX) BIN DETAILS - BEFORE CONVERSION ===")
print("Bin | Center | Content (dsigma/dptWW) | Error | Bin Width")
print("-" * 65)
for i in range(1, hist1.GetNbinsX() + 1):
    center = hist1.GetBinCenter(i)
    content = hist1.GetBinContent(i)
    error = hist1.GetBinError(i)
    bin_width = hist1.GetBinWidth(i)
    print("{:3d} | {:6.1f} | {:20.6f} | {:6.6f} | {:8.2f}".format(i, center, content, error, bin_width))

print("\n=== HIST2 (MINNLOPS) BIN DETAILS ===")
print("Bin | Center | Content (events) | Error")
print("-" * 45)
for i in range(1, hist2.GetNbinsX() + 1):
    center = hist2.GetBinCenter(i)
    content = hist2.GetBinContent(i)
    error = hist2.GetBinError(i)
    print("{:3d} | {:6.1f} | {:14.2f} | {:6.2f}".format(i, center, content, error))

# ===== REBIN HIST1 TO MATCH HIST2 BINNING =====
print("\n=== REBINNING HIST1 TO MATCH HIST2 BINNING ===")
print("Original hist1 bins: {}, hist2 bins: {}".format(hist1.GetNbinsX(), hist2.GetNbinsX()))

# Get hist2 binning information
hist2_xmin = hist2.GetXaxis().GetXmin()
hist2_xmax = hist2.GetXaxis().GetXmax()
hist2_nbins = hist2.GetNbinsX()

# Create a new histogram with hist2's binning
hist1_rebinned = ROOT.TH1F("hist1_rebinned", "Rebinned MATRIX", hist2_nbins, hist2_xmin, hist2_xmax)

# Fill the rebinned histogram by combining pairs of bins
for i in range(1, hist2_nbins + 1):
    # Calculate which bins from hist1 correspond to this bin in hist2
    # Since hist1 has twice as many bins, we need to combine 2 bins from hist1
    hist1_bin1 = 2*i - 1
    hist1_bin2 = 2*i
    
    # Get content and error from both hist1 bins
    content1 = hist1.GetBinContent(hist1_bin1)
    content2 = hist1.GetBinContent(hist1_bin2)
    error1 = hist1.GetBinError(hist1_bin1)
    error2 = hist1.GetBinError(hist1_bin2)
    
    # Check if contents are the same
    if abs(content1 - content2) > 1e-10:  # Using small tolerance for floating point comparison
        print("ERROR: Content mismatch in rebinning!")
        print("Bin {}: content1 = {:.6f}, content2 = {:.6f}".format(i, content1, content2))
        print("Difference: {:.6e}".format(abs(content1 - content2)))
        print("Stopping execution.")
        exit(1)
    
    # Check if errors are the same
    if abs(error1 - error2) > 1e-10:  # Using small tolerance for floating point comparison
        print("ERROR: Error mismatch in rebinning!")
        print("Bin {}: error1 = {:.6f}, error2 = {:.6f}".format(i, error1, error2))
        print("Difference: {:.6e}".format(abs(error1 - error2)))
        print("Stopping execution.")
        exit(1)
    
    # If we get here, contents and errors are the same, so just copy the value
    hist1_rebinned.SetBinContent(i, content1)  # or content2, they're the same
    hist1_rebinned.SetBinError(i, error1)      # or error2, they're the same

# Replace hist1 with rebinned version
hist1 = hist1_rebinned
print("Rebinned hist1 to {} bins to match hist2".format(hist1.GetNbinsX()))

# Print rebinned histogram details
print("\n=== REBINNED HIST1 (MATRIX) BIN DETAILS ===")
print("Bin | Center | Content (dsigma/dptWW) | Error | Bin Width")
print("-" * 65)
for i in range(1, hist1.GetNbinsX() + 1):
    center = hist1.GetBinCenter(i)
    content = hist1.GetBinContent(i)
    error = hist1.GetBinError(i)
    bin_width = hist1.GetBinWidth(i)
    print("{:3d} | {:6.1f} | {:20.6f} | {:6.6f} | {:8.2f}".format(i, center, content, error, bin_width))

# ===== CONVERT DIFFERENTIAL CROSS SECTION TO EVENT-BASED DISTRIBUTION =====
print("\n=== CONVERTING DIFFERENTIAL CROSS SECTION TO EVENT-BASED DISTRIBUTION ===")
print("Integrated luminosity: {:.1f} fb^-1".format(INTEGRATED_LUMINOSITY))

# Clone hist1 for conversion
hist1_converted = hist1.Clone("hist1_converted")

# Convert dsigma/dptWW to event-based distribution
# Formula: Events = (dsigma/dptWW) * bin_width * integrated_luminosity
for i in range(1, hist1_converted.GetNbinsX() + 1):
    # Get bin width
    bin_width = hist1_converted.GetBinWidth(i)
    if i == 1:
        print(f"Bin {i} width: {bin_width}")
    
    # Get current content (differential cross section)
    current_content = hist1_converted.GetBinContent(i)
    current_error = hist1_converted.GetBinError(i)
    
    # Convert to event-based distribution
    converted_content = current_content * bin_width * INTEGRATED_LUMINOSITY
    converted_error = current_error * bin_width * INTEGRATED_LUMINOSITY
    
    # Set the converted values
    hist1_converted.SetBinContent(i, converted_content)
    hist1_converted.SetBinError(i, converted_error)

# Apply additional scaling factor to MATRIX values
print("\n=== APPLYING ADDITIONAL SCALING FACTOR ===")
print("MATRIX scaling factor: {:.1f}".format(MATRIX_SCALING_FACTOR))
hist1_converted.Scale(MATRIX_SCALING_FACTOR)

print("Conversion completed!")
print("Original MATRIX integral: {:.2f} fb".format(hist1.Integral()))
print("Converted MATRIX integral: {:.2f} events".format(hist1_converted.Integral()))
print("MINNLOPS integral: {:.2f} events".format(hist2.Integral()))
print("POWHEG integral: {:.2f} events".format(hist3.Integral()))

# Print detailed bin information after conversion
print("\n=== HIST1 (MATRIX) BIN DETAILS - AFTER CONVERSION ===")
print("Bin | Center | Content (events) | Error | Conversion Factor (BinWidth x IntLumi)")
print("-" * 80)
for i in range(1, hist1_converted.GetNbinsX() + 1):
    center = hist1_converted.GetBinCenter(i)
    content = hist1_converted.GetBinContent(i)
    error = hist1_converted.GetBinError(i)
    bin_width = hist1_converted.GetBinWidth(i)
    conversion_factor = bin_width * INTEGRATED_LUMINOSITY
    print("{:3d} | {:6.1f} | {:14.2f} | {:6.2f} | {:10.2f} ({} x {})".format(i, center, content, error, conversion_factor, bin_width, INTEGRATED_LUMINOSITY))

# Print detailed comparison
print("\n=== CONVERTED HISTOGRAM COMPARISON ===")
print("Bin | Center | MATRIX(events) | MINNLOPS(events) | POWHEG(events) | Ratio(M/M)")
print("-" * 85)
for i in range(1, min(hist1_converted.GetNbinsX(), hist2.GetNbinsX(), hist3.GetNbinsX()) + 1):
    center = hist1_converted.GetBinCenter(i)
    matrix_val = hist1_converted.GetBinContent(i)
    minnlops_val = hist2.GetBinContent(i)
    powheg_val = hist3.GetBinContent(i)
    ratio_val = matrix_val / minnlops_val if minnlops_val != 0 else float('inf')
    print("{:3d} | {:6.1f} | {:12.2f} | {:13.2f} | {:12.2f} | {:5.2f}".format(
        i, center, matrix_val, minnlops_val, powheg_val, ratio_val))

# ===== CREATE RATIO HISTOGRAM =====
ratio = hist1_converted.Clone("ratio")
ratio.Divide(hist2)

# ===== SET UP PLOTTING =====
# Set styles
hist1_converted.SetLineColor(ROOT.kBlue)
hist1_converted.SetLineWidth(2)
hist1_converted.SetTitle("")
hist1_converted.GetYaxis().SetTitle("Events / bin")
hist1_converted.GetYaxis().SetTitleSize(0.05)
hist1_converted.GetYaxis().SetTitleOffset(1.2)

hist2.SetLineColor(ROOT.kRed)
hist2.SetLineWidth(2)
hist2.SetTitle("")

hist3.SetLineColor(ROOT.kGreen)
hist3.SetLineWidth(2)
hist3.SetTitle("")

ratio.SetLineColor(ROOT.kBlack)
ratio.SetLineWidth(2)
ratio.SetTitle("")
ratio.GetYaxis().SetTitle("MATRIX / MINNLOPS")
ratio.GetYaxis().SetTitleSize(0.05)
ratio.GetYaxis().SetTitleOffset(1.2)
ratio.GetXaxis().SetTitle("p_{T}^{WW} [GeV]")
ratio.GetXaxis().SetTitleSize(0.05)
ratio.GetXaxis().SetTitleOffset(1.0)

# ===== CREATE CANVAS AND PADS =====
canvas = ROOT.TCanvas("canvas", "MATRIX vs MINNLOPS Comparison", 800, 800)
pad1 = ROOT.TPad("pad1", "Top pad", 0, 0.3, 1, 1.0)
pad1.SetBottomMargin(0.02)
pad1.Draw()
pad1.cd()

# Draw histograms in top pad
hist1_converted.SetStats(0)
hist2.SetStats(0)
hist3.SetStats(0)
hist1_converted.Draw("HIST")
hist2.Draw("HIST SAME")
hist3.Draw("HIST SAME")

# Create legend
legend = ROOT.TLegend(0.65, 0.75, 0.85, 0.88)
legend.AddEntry(hist1_converted, "MATRIX NNLO+N3LL qqWW", "l")
legend.AddEntry(hist2, "MINNLOPs qqWW", "l")
legend.AddEntry(hist3, "POWHEG qqWW", "l")  # You can change this label
legend.Draw()

# Go to bottom pad for ratio
canvas.cd()
pad2 = ROOT.TPad("pad2", "Bottom pad", 0, 0.05, 1, 0.3)
pad2.SetTopMargin(0.02)
pad2.SetBottomMargin(0.3)
pad2.Draw()
pad2.cd()

# Draw ratio
ratio.Draw("HIST")

# Add a line at ratio = 1 for reference
line_ratio = ROOT.TLine(ratio.GetXaxis().GetXmin(), 1, ratio.GetXaxis().GetXmax(), 1)
line_ratio.SetLineColor(ROOT.kGray)
line_ratio.SetLineStyle(2)
line_ratio.Draw()

# Save the canvas
canvas.SaveAs("matrix_vs_minnlops_comparison.png")

# Close files to prevent memory issues
file1.Close()
file2.Close()
file3.Close()

print("\n=== PLOT SAVED ===")
print("Comparison plot saved as matrix_vs_minnlops_comparison.png")
print("Top: Event-based distributions (MATRIX vs MINNLOPS)")
print("Bottom: Ratio (MATRIX / MINNLOPS)")
print("\nKey conversion: dsigma/dptWW → Events = (dsigma/dptWW) × bin_width × L_int (138fb-1)")
print("Where L_int = {:.1f} fb^-1".format(INTEGRATED_LUMINOSITY))
