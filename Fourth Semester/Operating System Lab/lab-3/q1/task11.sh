clear
echo "Please Enter the user login name: \c"
read login_name
until who | grep $login_name
do
	   sleep 30
   done 

