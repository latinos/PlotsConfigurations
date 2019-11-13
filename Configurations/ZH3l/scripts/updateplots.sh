export webdir="/eos/user/c/cmills/www/hww"

export tag=`grep "^\s*tag.*=" configuration.py | sed "s/\s*tag.*= *[\']\(\w*\)[\']/\1/g"`
echo $tag

echo "Confirm: do you want to re-hadd and make plots?"
echo "Press 'y' if so"

while : ; do
	read -n 1 k <&1
	if [[ $k = y ]] ; then
		echo "hadding samples"
		rm rootFiles_$tag/plots_${tag}.root
		mkShapesMulti.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

		echo "making plots"
		mkPlot.py --onlyPlot=cratio --showIntegralLegend=1 --inputFile=rootFiles_$tag/plots_${tag}.root

		break
	else
		printf "\nSkipping to copy step\n"
		break
	fi
done

echo "Confirm: do you want to remove directory `ls -d $webdir/plot_$tag`?"
echo "Press 'y' if so"

while : ; do
	read -n 1 k <&1
	if [[ $k = y ]] ; then
		printf "\nRemoving directory to replace\n"
		rm -rf $webdir/plot_$tag
		break
	else
		printf "\nExiting script.\n"
		exit
	fi
done

echo "moving updated directory"
mv plot_$tag $webdir

echo "doing copy"
cp ${webdir}/index.php ${webdir}/plot_${tag}

