#include <stdio.h>
#include <string.h>

void parse_name_file(char filename[]) {
    FILE *name_file;
    char name[80], date[25], time[6];
    
    name_file = fopen(filename, "r");
    
    fscanf(name_file, " %79[0-9A-Za-z- ]", name);
    fscanf(name_file, " %4[0-9A-Za-z ]", date);
    fscanf(name_file, " %5[0-9A-Za-z:]", time);
    
    fclose(name_file);
}
