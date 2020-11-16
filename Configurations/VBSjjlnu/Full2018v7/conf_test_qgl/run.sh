#!/bin/sh


BASEDIR='/eos/user/d/dvalsecc/rdfexp/Remorphing/'

# No correction
# ./rdf_analyzer_morph.o ../rootFile_test_qgl_tree/plots_test_qgl_tree.root res_wjetcr \
#         $BASEDIR/output_histos_wjetr_raw.root  \
#         0 A A A A A 


# ./rdf_analyzer_morph.o ../rootFile_test_qgl_tree/plots_test_qgl_tree.root res_topcr  \
#         $BASEDIR/output_histos_topcr_raw.root \
#         0 A A A A A

# # First of all morph only gluons
# ./rdf_analyzer_morph.o ../rootFile_test_qgl_tree/plots_test_qgl_tree.root res_wjetcr \
#         $BASEDIR/output_histos_wjetr_gluonmorphed.root  \
#         1 $BASEDIR/morphing_qgl_gluon_noquark.root \
#         gluon_morphing_vjet1_higheta gluon_morphing_vjet1_loweta  A A 


# ./rdf_analyzer_morph.o ../rootFile_test_qgl_tree/plots_test_qgl_tree.root res_topcr  \
#         $BASEDIR/output_histos_topcr_gluonmorphed.root \
#         1 $BASEDIR/morphing_qgl_gluon_noquark.root \
#          gluon_morphing_vjet1_higheta gluon_morphing_vjet1_loweta A A 


# Now apply both


./rdf_analyzer_morph.o ../rootFile_test_qgl_tree/plots_test_qgl_tree.root res_wjetcr \
        $BASEDIR/output_histos_wjetr_gluonmorphed_quarkmorphed.root  \
        3  \
        $BASEDIR/morphing_qgl_gluon_noquark.root  gluon_morphing_vjet1_higheta gluon_morphing_vjet1_loweta  \
        $BASEDIR/morphing_qgl_quark_aftergluonmorph.root  quark_morphing_vbs0_higheta quark_morphing_vbs0_loweta  \
       
./rdf_analyzer_morph.o ../rootFile_test_qgl_tree/plots_test_qgl_tree.root res_topcr  \
        $BASEDIR/output_histos_topcr_gluonmorphed_quarkmorphed.root \
        3  \
        $BASEDIR/morphing_qgl_gluon_noquark.root  gluon_morphing_vjet1_higheta gluon_morphing_vjet1_loweta  \
        $BASEDIR/morphing_qgl_quark_aftergluonmorph.root  quark_morphing_vbs0_higheta quark_morphing_vbs0_loweta  \