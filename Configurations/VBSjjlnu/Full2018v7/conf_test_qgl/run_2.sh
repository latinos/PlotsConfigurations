#!/bin/sh


BASEDIR='/eos/user/d/dvalsecc/rdfexp/Remorphing_v2/'

# No correction
# ./rdf_analyzer_morph_ptorder.o ../rootFile_test_qgl_tree/plots_test_qgl_tree.root res_wjetcr \
#         $BASEDIR/output_histos_wjetr_raw.root  \
#         0 A A A A A  A A A A 


# ./rdf_analyzer_morph_ptorder.o ../rootFile_test_qgl_tree/plots_test_qgl_tree.root res_topcr  \
#         $BASEDIR/output_histos_topcr_raw.root \
#         0 A A A A A A A A A 


# first iteration
# ./rdf_analyzer_morph_ptorder.o ../rootFile_test_qgl_tree/plots_test_qgl_tree.root res_wjetcr \
#         $BASEDIR/output_histos_wjetr_iter1.root  \
#         11000011 Remorphing/morphing_functions_iter0.root \
#         j3_loweta_pt0_gluon j3_loweta_pt1_gluon A A \
#         A A  j0_higheta_pt0_quark j0_higheta_pt1_quark


# ./rdf_analyzer_morph_ptorder.o ../rootFile_test_qgl_tree/plots_test_qgl_tree.root res_topcr  \
#         $BASEDIR/output_histos_topcr_iter1.root \
#         11000011 Remorphing/morphing_functions_iter0.root \
#         j3_loweta_pt0_gluon j3_loweta_pt1_gluon A A \
#         A A  j0_higheta_pt0_quark j0_higheta_pt1_quark 



# second iteration
./rdf_analyzer_morph_ptorder.o ../rootFile_test_qgl_tree/plots_test_qgl_tree.root res_wjetcr \
        $BASEDIR/output_histos_wjetr_iter2.root  \
        11111111 Remorphing/morphing_functions_iter1.root \
        j3_loweta_pt0_gluon j3_loweta_pt1_gluon j2_higheta_pt0_gluon j2_higheta_pt1_gluon \
        j0_loweta_pt0_quark j0_loweta_pt1_quark  j0_higheta_pt0_quark j0_higheta_pt1_quark   


./rdf_analyzer_morph_ptorder.o ../rootFile_test_qgl_tree/plots_test_qgl_tree.root res_topcr  \
        $BASEDIR/output_histos_topcr_iter2.root \
        11111111 Remorphing/morphing_functions_iter1.root \
        j3_loweta_pt0_gluon j3_loweta_pt1_gluon j2_higheta_pt0_gluon j2_higheta_pt1_gluon \
        j0_loweta_pt0_quark j0_loweta_pt1_quark  j0_higheta_pt0_quark j0_higheta_pt1_quark   

