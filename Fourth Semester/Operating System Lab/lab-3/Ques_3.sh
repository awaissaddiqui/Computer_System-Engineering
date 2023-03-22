# Write a shell script that takes a command line argument and reports whether it is a directory,
# or a file or a link.

if [ -d "$1" ]; then
	  echo "$1 is a directory"
	  elif [ -f "$1" ]; then
     		echo "$1 is a  file"
    	  elif [ -L "$1" ]; then
     		echo "$1 is a  link"
    	else
	       echo "Enter a valid file name or path name"
      		echo "$1 does not exist"
fi


