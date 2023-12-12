#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define FILENAME_SIZE 1024 
#define MAX_LINE 2048
int main()
{
    FILE* fh;
    char filename[FILENAME_SIZE]; 
    char buffer[MAX_LINE];
    int read_line = 0;
    printf("FILE: ");
    gets(filename);
    printf("Read Line: ");
    scanf("%d", &read_line);
    fh = fopen("file.txt", "r"); //open file in read mode
    if(fh!=NULL){
        bool keep_reading = true; 
        int current_line = 1;
        do{
            fgets(buffer, MAX_LINE, fh); //fgets takes 3 arguments: (char array that stores scanned text, max length of string that should be read, File pointer of the file that is to be read)
            if(feof(fh)){ // int feof(FILE *stream) This function returns a non-zero value when End-of-File indicator associated with the stream is set, else zero is returned.
                keep_reading = false;
                printf("File %d lines.", current_line-1);
                printf("Couldn't fine line %d.\n", read_line);
            }
            else if(current_line == read_line){
                keep_reading = false;
                printf("Line:\n%s", buffer);
            }
            current_line++;
        }while(keep_reading);
        fclose(fh);

    }
    else{
        printf("Error opeining file");
        return 1; //signal to the shell terminal that something went wrong
    }
    fclose(fh);
return 0;
}
