# Make combined datacards
combineCards.py SR1j=datacards_ZH3lSR_fit/zh3l_dphi_cut_1j/events/datacard.txt  > Zh3l_1j_noCR.txt
combineCards.py SR2j=datacards_ZH3lSR_fit/zh3l_dphi_cut/events/datacard.txt     > Zh3l_2j_noCR.txt
combineCards.py SR1j=datacards_ZH3lSR_fit/zh3l_dphi_cut_1j/events/datacard.txt  \
                SR2j=datacards_ZH3lSR_fit/zh3l_dphi_cut/events/datacard.txt     > Zh3l_1+2j_noCR.txt
combineCards.py SR1j=datacards_ZH3lSR_fit/zh3l_dphi_cut_1j/mtw_fit/datacard.txt > Zh3l_1j_MT_noCR.txt
combineCards.py SR2j=datacards_ZH3lSR_fit/zh3l_dphi_cut/mtw_fit/datacard.txt    > Zh3l_2j_MT_noCR.txt
combineCards.py SR1j=datacards_ZH3lSR_fit/zh3l_dphi_cut_1j/mtw_fit/datacard.txt \
                SR2j=datacards_ZH3lSR_fit/zh3l_dphi_cut/mtw_fit/datacard.txt    > Zh3l_1+2j_MT_noCR.txt

combineCards.py SR1j=datacards_ZH3lSR_fit/zh3l_dphi_cut_1j/events/datacard.txt                   \
                CR1j=../ControlRegion/datacards_ZH3lCR_fit/zh3l_WZ_CR_cut_1j/events/datacard.txt > Zh3l_1j_CR.txt
combineCards.py SR2j=datacards_ZH3lSR_fit/zh3l_dphi_cut/events/datacard.txt                      \
                CR2j=../ControlRegion/datacards_ZH3lCR_fit/zh3l_WZ_CR_cut/events/datacard.txt    > Zh3l_2j_CR.txt
combineCards.py SR1j=datacards_ZH3lSR_fit/zh3l_dphi_cut_1j/events/datacard.txt                   \
                CR1j=../ControlRegion/datacards_ZH3lCR_fit/zh3l_WZ_CR_cut_1j/events/datacard.txt \
                SR2j=datacards_ZH3lSR_fit/zh3l_dphi_cut/events/datacard.txt                      \
                CR2j=../ControlRegion/datacards_ZH3lCR_fit/zh3l_WZ_CR_cut/events/datacard.txt    > Zh3l_1+2j_CR.txt
combineCards.py SR1j=datacards_ZH3lSR_fit/zh3l_dphi_cut_1j/mtw_fit/datacard.txt                  \
                CR1j=../ControlRegion/datacards_ZH3lCR_fit/zh3l_WZ_CR_cut_1j/events/datacard.txt > Zh3l_1j_MT_CR.txt
combineCards.py SR2j=datacards_ZH3lSR_fit/zh3l_dphi_cut/mtw_fit/datacard.txt                     \
                CR2j=../ControlRegion/datacards_ZH3lCR_fit/zh3l_WZ_CR_cut/events/datacard.txt    > Zh3l_2j_MT_CR.txt
combineCards.py SR1j=datacards_ZH3lSR_fit/zh3l_dphi_cut_1j/mtw_fit/datacard.txt                  \
                CR1j=../ControlRegion/datacards_ZH3lCR_fit/zh3l_WZ_CR_cut_1j/events/datacard.txt \
                SR2j=datacards_ZH3lSR_fit/zh3l_dphi_cut/mtw_fit/datacard.txt                     \
                CR2j=../ControlRegion/datacards_ZH3lCR_fit/zh3l_WZ_CR_cut/events/datacard.txt    > Zh3l_1+2j_MT_CR.txt

# Remove rateParam from signal-only datacards
sed -i '/rateParam/d' Zh3l_*_noCR.txt

# Convert datacards to workspaces
text2workspace.py Zh3l_1j_noCR.txt      -o Zh3l_1j_noCR.root
text2workspace.py Zh3l_1j_CR.txt        -o Zh3l_1j_CR.root
text2workspace.py Zh3l_1j_MT_noCR.txt   -o Zh3l_1j_MT_noCR.root
text2workspace.py Zh3l_1j_MT_CR.txt     -o Zh3l_1j_MT_CR.root
text2workspace.py Zh3l_2j_noCR.txt      -o Zh3l_2j_noCR.root
text2workspace.py Zh3l_2j_CR.txt        -o Zh3l_2j_CR.root
text2workspace.py Zh3l_2j_MT_noCR.txt   -o Zh3l_2j_MT_noCR.root
text2workspace.py Zh3l_2j_MT_CR.txt     -o Zh3l_2j_MT_CR.root
text2workspace.py Zh3l_1+2j_noCR.txt    -o Zh3l_1+2j_noCR.root
text2workspace.py Zh3l_1+2j_CR.txt      -o Zh3l_1+2j_CR.root
text2workspace.py Zh3l_1+2j_MT_noCR.txt -o Zh3l_1+2j_MT_noCR.root
text2workspace.py Zh3l_1+2j_MT_CR.txt   -o Zh3l_1+2j_MT_CR.root
