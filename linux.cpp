{
"cmd" : ["g++ -std=c++14 $file_name -o $file_base_name && timeout 4s ./$file_base_name<input.in>output.in"], 
"selector" : "source.c",
"shell": true,
"working_dir" : "$file_path"
}