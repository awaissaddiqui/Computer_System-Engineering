echo What kind of tree bears acorns\ ?
read responce
case $responce in
	[Oo][Aa][Kk]) echo $responce is correct ;;
	*) echo Sorry, responce  is wrong
esac
