#include<sys/types.h>
#include<sys/mman.h>
#ifndef SORTER_H
#define SORTER_H
/*
 * sorts the file with name "infile"
 * by the fields listed in "fieldlist"
 * and outputs the result in the directory "dirname"
 * out_path is the path to which the sorted csv should be put
 */
void sort_csv(char *infile, char fieldlist[32][128], char *dirname, char *out_path);
/*
 * navigation function serves as the function to recursively traverse the directroies, 
 * first argument name is the start directory from which we begin to search. The function
 * first traverse the content in the current directory, if not a directory, check the 
 * validity of the csv file format and the number of field name inside of the file, otherwise
 * go to the next directory and do the same procedure again.
 * if no sub directory in the current directory, stop fork after sorting the csv file.
 */
int sort_num;
char sort_list[32][128];
int navigation(char *input_path, char* output_path);
int process_num;
pid_t ini_pid;
#endif
