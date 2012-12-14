#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void parse_name_file(char filename[]) {
    FILE *name_file;
    
    char datafile[100] = "dat/";
    char name[80], date[25], time[6];
    
            
    if (filename[0] == '/'){
        strcat(datafile, filename);
    }
    
    name_file = fopen(datafile, "r");
    
    fscanf(name_file, " %79[0-9A-Za-z- ]", name);
    fscanf(name_file, " %4[0-9A-Za-z ]", date);
    fscanf(name_file, " %5[0-9A-Za-z:]", time);
    
    fclose(name_file);
}

void parse_nodes_file(char filename[]) {
    
}

void parse_tracks_file(char filename[]) {
    
}

void parse_courses_file(char filename[]) {
    
}

void parse_entrants_file(char filename[]) {
    
}