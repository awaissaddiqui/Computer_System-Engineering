if [ -z "$1" ]; then
	  echo "Usage: $0 keyword"
	    exit 1
fi

grep -r -l "$1" .
# grep commmand is used to search files in current directory (*).
# -r option is used to search recursively in subdirectories.
# -l option is used to print only the file names.
