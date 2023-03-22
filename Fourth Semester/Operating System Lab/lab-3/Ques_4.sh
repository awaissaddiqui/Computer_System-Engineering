# Task 4
Directory="$1"
if [ ! -d "$Directory" ]; then
		  echo "Error: $Directory is not a directory."
		  	    exit 1
fi

num_subdirs=$(find "$Directory" -mindepth 1 -maxdepth 1 -type d | wc -l)

echo "Number of subdirectories in $Directory is $num_subdirs subdir..."

