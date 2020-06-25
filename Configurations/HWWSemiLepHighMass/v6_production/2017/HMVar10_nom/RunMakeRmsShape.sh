StartTime=$(date +%s)

python MakeRmsShape.py -c configuration_Boosted.py -f hadd.root -n PDF4LHC15_nnlo_30_pdfas
python MakeRmsShape.py -c configuration_Boosted.py -f hadd.root -n NNPDF31_nnlo_hessian_pdfas

python MakeRmsShape.py -c configuration_Resolved.py -f hadd.root -n PDF4LHC15_nnlo_30_pdfas
python MakeRmsShape.py -c configuration_Resolved.py -f hadd.root -n NNPDF31_nnlo_hessian_pdfas
EndTime=$(date +%s)
echo $EndTime
echo "runtime : $(($EndTime - $StartTime)) sec"
