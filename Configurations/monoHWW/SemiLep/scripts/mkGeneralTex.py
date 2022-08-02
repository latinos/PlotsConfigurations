import os
import argparse


parser = argparse.ArgumentParser(description = "Receive the parameters")
parser.add_argument('--figure-dir', action = 'store', type = str, default='.'  , help = 'Directory where the plots are')
parser.add_argument('--extension' , action = 'store', type = str, default='png', help = 'Plot type (png, pdf, ...)')
args = parser.parse_args()

def write_figure_frame(name, title_name, path, o_file):
        
    #width = '6cm'
    width = '8cm'
         
    o_file.write('%--'+name+'\n')
    o_file.write('\\begin{frame}{ '+title_name+'}\n')
    o_file.write('   \\begin{center}\n')
    o_file.write('   \\includegraphics[width='+width+']{'+path+'}\n')
    o_file.write('   \\end{center}\n')
    o_file.write('\\end{frame}\n')
    o_file.write('\n')

def init_file(o_file):
    o_file.write('\\documentclass{beamer}\n')
    o_file.write('\n')
    o_file.write('\\mode<presentation> {\n')
    o_file.write('\n')
    o_file.write('\\usetheme{Madrid}\n')
    o_file.write('}\n')
    o_file.write('\n')
    o_file.write('\\usepackage{graphicx} % Allows including images\n')
    o_file.write('\\usepackage{booktabs} % Allows the use of \\toprule, \\midrule and \\bottomrule in tables\n')
    o_file.write('\\usepackage{tikz}\n')
    o_file.write('\n')
    o_file.write('%----------------------------------------------------------------------------------------\n')
    o_file.write('%       Section config\n')
    o_file.write('%----------------------------------------------------------------------------------------\n')
    o_file.write('\n')
    o_file.write('\\AtBeginSection[]{\n')
    o_file.write('  \\begin{frame}\n')
    o_file.write('  \\vfill\n')
    o_file.write('  \\centering\n')
    o_file.write('  \\begin{beamercolorbox}[sep=8pt,center,shadow=true,rounded=true]{title}\n')
    o_file.write('    \\usebeamerfont{title}\\insertsectionhead\\par%\n')
    o_file.write('  \\end{beamercolorbox}\n')
    o_file.write('  \\vfill\n')
    o_file.write('  \\end{frame}\n')
    o_file.write('}\n')
    o_file.write('\n')
    o_file.write('%----------------------------------------------------------------------------------------\n')
    o_file.write('%       TITLE PAGE\n')
    o_file.write('%----------------------------------------------------------------------------------------\n')
    o_file.write('\n')
    o_file.write('\\title{ Plot Slides}\n')
    o_file.write('\\author{ Senne Van Putte }\n')
    o_file.write('\\institute[UAntwerpen] % Your institution as it will appear on the bottom of every slide, may be shorthand to save space\n')
    o_file.write('{\n')
    o_file.write('University of Antwerp \\\\ % Your institution for the title page\n')
    o_file.write('\\medskip\n')
    o_file.write('}\n')
    o_file.write('\\date{\\today} % Date, can be changed to a custom date\n')
    o_file.write('\n')
    o_file.write('\\begin{document}\n')
    o_file.write('\n')
    o_file.write('\\begin{frame}\n')
    o_file.write('\\titlepage % Print the title page as the first slide\n')
    o_file.write('\\end{frame}\n')
    o_file.write('\n')
    o_file.write('%----------------------------------------------------------------------------------------\n')
    o_file.write('%       FIGURE SECTION\n')
    o_file.write('%----------------------------------------------------------------------------------------\n')
    o_file.write('\n')

def end_file(o_file):
    o_file.write('\end{document}\n')

file_name = 'Plots.tex'
o_file = open(file_name, 'w')

init_file(o_file)


# Find and loop figures
fil_list = os.listdir(args.figure_dir)
fil_list.sort()
for fil in fil_list:
    if not fil.endswith('.'+args.extension ): continue
    image_path  = args.figure_dir + '/' + fil
    image_name  = fil.replace('.'+args.extension, '')
    image_title = '\\texttt{'+image_name.replace('_','\\symbol{95}')+'}'
    write_figure_frame(image_name, image_title, image_path, o_file)

end_file(o_file)

o_file.close()

