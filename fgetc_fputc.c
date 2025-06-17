// file is a collection of data stored in a secondary memory and given a name.
// file are of may types mainly we use two types of file in c programming.
// text file and binary file.
// File handling in c 
// All the operation done in file are called file handeling operation.
// Proccess involved in File handling:
// file opening. 
// we use fopen() function to open the file.
// syntax of fopen
// fopen("file_name.extension","opening_mod");
// It uses two arguments they are:
// file_name = Name of the file in which operation is performed.
// opening_mod = For which operation file opening.
// Example of opening mod
// r = red only.
// w = write only.
// rb = read only binary
// wb = write only binary.
// a = append only.
// r+ = read and write but not create new file if file does not exists.
// w+ = read and wirte also create new file if it does not exists.
// a+ = read and appead also create new file if it does not exists.
// rb+ = read and write binary file but not create new file if file does not exists.
// wb+ = read and wirte binary file also create new file if it does not exists.
// ab+ = read and appead binary file also create new file if it does not exists.

// the fopen() function returns the file pointer.


// function to write and read in file

#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    // Writing to the file
    fp = fopen("example.txt", "w"); 
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fputc('A', fp);
    fputc('B', fp);
    fputc('C', fp);
    fclose(fp);

    fp = fopen("example.txt", "r"); 
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) { 
        printf("%c ", ch);
    }
    fclose(fp);

    return 0;
}