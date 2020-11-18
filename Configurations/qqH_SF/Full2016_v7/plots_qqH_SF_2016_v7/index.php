<html>
<head>
<?php 
$array = explode("/", getcwd());
unset($array[0]); unset($array[1]); unset($array[2]); unset($array[3]); unset($array[4]);
$title = implode("/", $array);
?>
<title><?php echo $title; ?></title>
<style type='text/css'>
body {
    font-family: "Corbel", sans-serif;
    font-size: 9pt;
    line-height: 10.5pt;
}
h2 {
  font-size: 1.5em;
}
ul.subdirs {
    padding-left: 0px;
    padding-top: 15px;
    padding-bottom: 15px;
}
li.subdirs {
    display: inline;
    list-style-type: none;
    padding-right: 30px;
    line-height: 22px;
}

div.pic h3 { 
    font-size: 11pt;
    margin: 0.5em 1em 0.2em 1em;
}
div.pic p {
    font-size: 11pt;
    margin: 0.2em 1em 0.1em 1em;
}
div.pic {
    display: block;
    float: left;
    background-color: white;
    border: 1px solid #ccc;
    padding: 2px;
    text-align: center;
    margin: 2px 10px 10px 2px;
//     -moz-box-shadow: 7px 5px 5px rgb(80,80,80);    /* Firefox 3.5 */
//     -webkit-box-shadow: 7px 5px 5px rgb(80,80,80); /* Chrome, Safari */
//     box-shadow: 7px 5px 5px rgb(80,80,80);         /* New browsers */  
}
a { text-decoration: none; color: #1a0dab; }
a:visited { color: #609; }
a:hover { text-decoration: underline; color: rgb(255,80,80); }
</style>
</head>
<body style="padding: 20px">
    <h1 style='word-break: break-all; line-height: 25px;'><?php echo $title; ?></h1>
<h2>
<?php
print "<ul class='subdirs'>";
print "<li class='subdirs'>Subdirs</li>";
if (file_exists("../index.php")) {
    print "<li class='subdirs'><a href=\"../\">[..]</a></li>";
}
$subdirs = glob('*', GLOB_ONLYDIR);
if(count($subdirs) == 0) {
  $currentdir = basename(getcwd());
  $prevdirs = glob('../*', GLOB_ONLYDIR);
  $currentdirindex = array_search("../".$currentdir, $prevdirs);
  $prevdir = $prevdirs[$currentdirindex-1];
  if($prevdir != null && $prevdir != "") {
    print "<li class='subdirs'><a href=".$prevdir.">Previous</a></li>";
  }
  $nextdir = $prevdirs[$currentdirindex+1];
  if($nextdir != null && $nextdir != "") {
    print "<li class='subdirs'><a href=".$nextdir.">Next</a></li>";
  }
}
if (count($subdirs) != 0 ) { 
    foreach($subdirs as $dir) {
        print "<li class='subdirs'><a href=".$dir.">[".$dir."]</a></li>";
    }
}
print "<li class='subdirs'>Comment(s): </li>";
print "<span style='font-weight: normal'>".file_get_contents( "comment.txt" )."</span>"; 
print "</ul>";
?>
</h2>
<h2><span name="plots">Plots</span></h2>
<p><form><input type="text" name="match" size="30" value="<?php if (isset($_GET['match'])) print htmlspecialchars($_GET['match']);  ?>" style="border-radius: 2px; padding: 4px" placeholder="Filter the plots"/><input type="Submit" value="Go" style="margin-left: 10px; padding: 4px; border-radius: 2px;"/></form></p>

<div>

<?php
$plotwidth = '400px';
$displayed = array();
array_push($displayed,basename($_SERVER['PHP_SELF']));
if ($_GET['noplots']) {
    print "Plots will not be displayed.\n";
} else {
    $other_exts = array('.pdf', '.cxx', '.eps', '.root', '.txt', '.C');
    $filenames = glob("*.png"); sort($filenames);
    foreach ($filenames as $filename) {
        if (isset($_GET['match']) && !fnmatch('*'.$_GET['match'].'*', $filename)) continue;
        array_push($displayed, $filename);
        print "<div class='pic'>\n";
        print "<h3 style='margin-top: 20px; margin-bottom: 20px;'><a href=\"$filename\">$filename</a></h3>";
        print "<a href=\"$filename\"><img src=\"$filename\" style=\"border: none; width: $plotwidth; \"></a>";
        $others = array();
        foreach ($other_exts as $ex) {
            $other_filename = str_replace('.png', $ex, $filename);
            if (file_exists($other_filename)) {
                array_push($others, "<a class=\"file\" href=\"$other_filename\">[" . $ex . "]</a>");
                if ($ex != '.txt') array_push($displayed, $other_filename);
            }
        }
        if ($others) print "<p>Also available as ".implode(', ',$others)."</p>";
	if (!$others) print "<p>No other format available";
	print "<a download=\"$filename\" href=\"$filename\">
            <p style='margin-bottom: 20px;'>Direct download</p>
        </a>";
        print "</div>";
    }
}
?>
</div>
<div style="display: block; clear:both; padding-top: 10px;">
<h2><span name="files">Other files</span></h2>
<ul>
<?
foreach (glob("*") as $filename) {
    if ($_GET['noplots'] || !in_array($filename, $displayed)) {
        if (isset($_GET['match']) && !fnmatch('*'.$_GET['match'].'*', $filename)) continue;
        if (is_dir($filename)) {
	  print "<li style='line-height: 16px;'>[DIR] <a href=\"$filename\">$filename</a></li>";
        } else {
            print "<li style='line-height: 16px;'><a href=\"$filename\">$filename</a></li>";
        }
    }
}
?>
</ul>
<h2>
<?php
$subdirs = glob('*', GLOB_ONLYDIR);
if(count($subdirs) == 0) {
print "<ul class='subdirs'>";
print "<li class='subdirs'>Subdirs</li>";
if (file_exists("../index.php")) {
    print "<li class='subdirs'><a href=\"../\">[..]</a></li>";
}
  $currentdir = basename(getcwd());
  $prevdirs = glob('../*', GLOB_ONLYDIR);
  $currentdirindex = array_search("../".$currentdir, $prevdirs);
  $prevdir = $prevdirs[$currentdirindex-1];
  if($prevdir != null && $prevdir != "") {
    print "<li class='subdirs'><a href=".$prevdir.">Previous</a></li>";
  }
  $nextdir = $prevdirs[$currentdirindex+1];
  if($nextdir != null && $nextdir != "") {
    print "<li class='subdirs'><a href=".$nextdir.">Next</a></li>";
  }
if (count($subdirs) != 0 ) { 
    foreach($subdirs as $dir) {
        print "<li class='subdirs'><a href=".$dir.">[".$dir."]</a></li>";
    }
}
print "</ul>";
  }
?>
</h2>
</div>
</body>
</html>
