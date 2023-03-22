clear
echo What is the Capital of Pakistan \?
read answer
while test $answer != Islamabad
do 
	echo No, Wrong please try again.
	read answer
done
