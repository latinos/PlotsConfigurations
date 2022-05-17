#!/usr/bin/env python
import argparse
import os
import json
from collections import defaultdict

PLOT_ELE="""
  <div class="plot-element{tags}">
      <p class="file-title" style="font-size: {fontsize}%;">{file}</p>
      <a href="{file}" class="fancybox" data-fancybox-group="gallery" title="{file}" id="{file}">
      <img src="{file}" alt="image">
      </a>{extra}
  </div>\n"""

OTHER_FORMATS="""
	<p>Other formats: {text}</p>"""

SINGLE_FORMAT="""
	<a href="{file}">[{ext}]</a>"""

SEARCH_BOX="""<p><input type="text" class="quicksearch" placeholder="Regex Search" /></p><p><input type="text" class="documentUrl" value="" /><input type="button" class="urlcopybtn" value="copy URL to clipboard" onclick="CopyUrl()"/></p>"""

BUTTON="""<button class="button" data-filter=".{FILTER}">{NAME}</button>"""

BUTTON_GROUP="""\n
<div class="button-group js-radio-button-group" data-filter-group="{GROUP}">
  <button class="button is-checked" data-filter="">All {TITLE}</button>
  {BUTTONS}
</div>"""

OTHER_LIST="""\n
<p id="otherfiles">Other files:</p>
<ul>
  {LISTITEMS}
</ul>
<p><a href="#top">Back to top</a></p>"""

def CleanStr(arg):
	return '-'.join(arg.split())

parser = argparse.ArgumentParser()
parser.add_argument('input', help='input directory')
parser.add_argument('--verbose', '-v', action='store_true', help='print some info to the screen')
parser.add_argument('--metadata', '-m', default='.json', help='extension for metadata informations (note the preceeding dot)')
parser.add_argument('--title-size', default='100', help='scale the text size of the plot titles, expressed as a percentage [0-100]')
# parser.add_argument('output', help='output directory')
args = parser.parse_args()

def DoMarkdown(file):
	script_dir = os.path.dirname(os.path.realpath(__file__))
	with open(script_dir+'/resources/markdown.html') as index_file:
	    index = index_file.read()
	with open(file+'.md') as md_file:
	    md = md_file.read()
	index = index.replace('{TITLE}', os.path.basename(file))
	index = index.replace('{CONTENT}', md)
	print('>> Saving markdown file as '+file+'.html')
	with open(file+'.html', "w") as outfile:
	    outfile.write(index)

def ProcessDir(indir, is_parent=True, subdirs=[]):
	if not os.path.isdir(indir):
		raise RuntimeError('Input argument %s is not a directory' % indir)
	print('>> Processing directory %s' % indir)
	
	files = [f for f in os.listdir(indir) if os.path.isfile(os.path.join(indir,f))]
	# print files
	
	all_base_files = defaultdict(set)
	for f in files:
		name,ext = os.path.splitext(f)
		all_base_files[name].add(ext)
	
	# only keep the entries that have a png
	base_files = dict((k, v) for k, v in all_base_files.items() if '.png' in v)
	other_files = dict((k, v) for k, v in all_base_files.items() if '.png' not in v and k.startswith('.') is False)
	
	elements = ''
	search_box = ''
	
	groups = defaultdict(set)
	
	for f, all_exts in sorted(base_files.iteritems()):
		exts = [e for e in all_exts if e not in ['.png', args.metadata]]
		tags=''

		# For now only getting metadata from json is supported
		if args.metadata in all_exts and args.metadata==".json":
			json_data = {}
			with open(os.path.join(indir,f+'.json')) as jsonfile:
				json_data = json.load(jsonfile)
			for key, val in json_data.iteritems():
				groups[key].add(val)
			if len(json_data) > 0:
				tags = ' ' + ' '.join([CleanStr(x) for x in json_data.values()])
		do_exts = [SINGLE_FORMAT.format(file=f+e,ext=e) for e in exts]
		extra = ''
		info = '>> Adding %s.png to gallery' % f
		if len(do_exts) > 0:
			extra = OTHER_FORMATS.format(text=' '.join(do_exts))
			info += ' with extra extensions %s' % ','.join(exts)
		if args.verbose:
			print(info)
		elements += PLOT_ELE.format(file='%s.png'%f, tags=tags, extra=extra, fontsize=args.title_size)

	if elements != '':
		search_box = SEARCH_BOX
	
	page_title = os.path.basename(os.path.normpath(indir))
	button_groups=''
	# The user has added some properties so we need to make buttons
	if len(groups) > 0:
		for key, val in groups.iteritems():
			buttons='\n'.join([BUTTON.format(NAME=v, FILTER=CleanStr(v)) for v in sorted(val)])
			button_groups += BUTTON_GROUP.format(GROUP=CleanStr(key), TITLE=key, BUTTONS=buttons)
	
	# Get the template file
	script_dir = os.path.dirname(os.path.realpath(__file__))
	with open(script_dir+'/resources/index.html') as index_file:
	    index = index_file.read()
	
	index = index.replace('{TITLE}', page_title)
	index = index.replace('{ELEMENTS}', elements)
	index = index.replace('{BUTTONS}', button_groups)
	index = index.replace('{SEARCH}', search_box)
	
	all_other = ''
	other_jump = ''
	other_html = []
	if len(other_files) > 0:
		added = 0
		for f, all_exts in sorted(other_files.iteritems()):
			for ext in all_exts:
				if ext in ['.html', '.htm', '.php'] and not "mlfit" in f: continue
				added += 1
				if ext == '.md':
					DoMarkdown(os.path.join(indir, f))
					other_html.append('  <li><a href="{FILEHTML}">{FILE}</a> <a href="{FILE}">[raw]</a></li>'.format(FILEHTML=f+'.html',FILE=f+ext))
				else:
					other_html.append('  <li><a href="{FILE}">{FILE}</a></li>'.format(FILE=f+ext))
		if added > 0:
			all_other = OTHER_LIST.format(LISTITEMS='\n'.join(other_html))
			if elements != '': all_other = '<hr>\n' + all_other
			other_jump = ' | <a href="#otherfiles">Jump to other files</a>'
	index = index.replace('{OTHERFILESJUMP}', other_jump)
	index = index.replace('{OTHERFILES}', all_other)

	# Do links to other pages
	links=''
	if not is_parent or len(subdirs) > 0:
		links += '<p><strong>Current directory:</strong> %s | <strong>Navigation:</strong> ' % indir
		if not is_parent:
			links += ' <a href="../index.html">[Up]</a>'
		for i, subdir in enumerate(subdirs):
			if i != 0: links += ' | '
			links += ' <a href="{SUBDIR}/index.html">{SUBDIR}</a>'.format(SUBDIR=subdir)
		links += '</p>'
	index = index.replace('{LINKS}', links)

	
	# Write the html to the output folder
	with open(os.path.join(indir,'index.html'), "w") as outfile:
	    outfile.write(index)
	
	with open(script_dir+'/resources/download_all.php') as php_file:
	    php_downloader = php_file.read()
	with open(os.path.join(indir,'download_all.php'), "w") as outfile:
	    outfile.write(php_downloader)

dirs = [(x[0], x[1]) for x in os.walk(args.input)]
for i, indir in enumerate(dirs):
	ProcessDir(indir[0], is_parent=(i==0), subdirs=indir[1])
