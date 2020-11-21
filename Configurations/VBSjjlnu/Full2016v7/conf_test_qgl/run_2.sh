#!/bin/sh


BASEDIR=`pwd`/Remorphing_v2

# No correction
../../scripts/QGL_morphing/rdf_analyzer_morph_ptorder.o ../rootFile_test_qgl_2016/plots_test_qgl_2016.root res_wjetcr \
        $BASEDIR/output_histos_wjetcr_iter0.root  \
        0 A A A A A  A A A A 


../../scripts/QGL_morphing/rdf_analyzer_morph_ptorder.o ../rootFile_test_qgl_2016/plots_test_qgl_2016.root res_topcr  \
        $BASEDIR/output_histos_topcr_iter0.root \
        0 A A A A A A A A A 

mkdir $BASEDIR/output_wjets_iter0
mkdir $BASEDIR/output_top_iter0

python ../../scripts/QGL_morphing/extract_morphing.py --input $BASEDIR/output_histos_wjetcr_iter0.root \
                 --outputdir $BASEDIR/output_wjets_iter0 --outputfile morphing_gluon_iter0.root --jet-type gluon

python ../../scripts/QGL_morphing/extract_morphing.py --input $BASEDIR/output_histos_topcr_iter0.root \
                 --outputdir $BASEDIR/output_top_iter0 --outputfile morphing_quark_iter0.root --jet-type quark


cd $BASEDIR
hadd morphing_functions_iter0.root output_top_iter0/morphing_quark_iter0.root output_wjets_iter0/morphing_gluon_iter0.root

cd ..

first iteration
../../scripts/QGL_morphing/rdf_analyzer_morph_ptorder.o ../rootFile_test_qgl_2016/plots_test_qgl_2016.root res_wjetcr \
        $BASEDIR/output_histos_wjetcr_iter1.root  \
        11000011 $BASEDIR/morphing_functions_iter0.root \
        j3_loweta_pt0_gluon j3_loweta_pt1_gluon A A \
        A A  j1_higheta_pt0_quark j0_higheta_pt1_quark


../../scripts/QGL_morphing/rdf_analyzer_morph_ptorder.o ../rootFile_test_qgl_2016/plots_test_qgl_2016.root res_topcr  \
        $BASEDIR/output_histos_topcr_iter1.root \
        11000011 $BASEDIR/morphing_functions_iter0.root \
        j3_loweta_pt0_gluon j3_loweta_pt1_gluon A A \
        A A  j1_higheta_pt0_quark j0_higheta_pt1_quark 


mkdir $BASEDIR/output_wjets_iter1
mkdir $BASEDIR/output_top_iter1

python ../../scripts/QGL_morphing/extract_morphing.py --input $BASEDIR/output_histos_wjetcr_iter1.root \
                 --outputdir $BASEDIR/output_wjets_iter1 --outputfile morphing_gluon_iter1.root --jet-type gluon

python ../../scripts/QGL_morphing/extract_morphing.py --input $BASEDIR/output_histos_topcr_iter1.root \
                 --outputdir $BASEDIR/output_top_iter1 --outputfile morphing_quark_iter1.root --jet-type quark


cd $BASEDIR
hadd -f morphing_functions_iter1_tmp.root output_top_iter1/morphing_quark_iter1.root output_wjets_iter1/morphing_gluon_iter1.root
python ../../../scripts/QGL_morphing/prepare_morphing_functions_file.py \
                --inputs morphing_functions_iter0.root morphing_functions_iter1_tmp.root \
                --outputfile morphing_functions_iter1.root \
                --func1 j3_loweta_pt0_gluon  j3_loweta_pt1_gluon   j1_higheta_pt0_quark j0_higheta_pt1_quark \
                --func2 j1_higheta_pt0_gluon j1_higheta_pt1_gluon  j1_loweta_pt0_quark j1_loweta_pt1_quark  
cd ..

#second iteration
../../scripts/QGL_morphing/rdf_analyzer_morph_ptorder.o ../rootFile_test_qgl_2016/plots_test_qgl_2016.root res_wjetcr \
        $BASEDIR/output_histos_wjetcr_iter2.root  \
        11111111 $BASEDIR/morphing_functions_iter1.root \
        j3_loweta_pt0_gluon j3_loweta_pt1_gluon j1_higheta_pt0_gluon j1_higheta_pt1_gluon \
        j1_loweta_pt0_quark j1_loweta_pt1_quark j1_higheta_pt0_quark j0_higheta_pt1_quark   


../../scripts/QGL_morphing/rdf_analyzer_morph_ptorder.o ../rootFile_test_qgl_2016/plots_test_qgl_2016.root res_topcr  \
        $BASEDIR/output_histos_topcr_iter2.root \
        11111111 $BASEDIR/morphing_functions_iter1.root \
        j3_loweta_pt0_gluon j3_loweta_pt1_gluon j1_higheta_pt0_gluon j1_higheta_pt1_gluon \
        j1_loweta_pt0_quark j1_loweta_pt1_quark j1_higheta_pt0_quark j0_higheta_pt1_quark   



mkdir $BASEDIR/output_wjets_iter2
mkdir $BASEDIR/output_top_iter2

python ../../scripts/QGL_morphing/extract_morphing.py --input $BASEDIR/output_histos_wjetcr_iter2.root \
                 --outputdir $BASEDIR/output_wjets_iter2 --outputfile morphing_gluon_iter2.root --jet-type gluon

python ../../scripts/QGL_morphing/extract_morphing.py --input $BASEDIR/output_histos_topcr_iter2.root \
                 --outputdir $BASEDIR/output_top_iter2 --outputfile morphing_quark_iter2.root --jet-type quark

