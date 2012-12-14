#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct event {
    char name[80];
    char date[26];
    char time[5];
} Event;

typedef struct node {
    int ref;
    char type[2];
} Node;

typedef struct competitor {
    int id;
    char name[50];
    char course;
} Competitor;

void parse_name_file(char filename[]) {
    FILE *name_file;
    
    char datafile[100] = "dat/";
    Event event;
    
            
    if (filename[0] != '/'){
        strcat(datafile, filename);
    }
    
    name_file = fopen(datafile, "r");
    
    fscanf(name_file, " %100[-0-9A-Za-z ]", 
            event.name);
    fscanf(name_file, " %25[0-9A-Za-z ]", 
            event.date);
    fscanf(name_file, " %5[0-9A-Za-z:]", 
            event.time);
    
    fclose(name_file);
}

void parse_nodes_file(char filename[]) {
    FILE *nodes_file;
    
    char datafile[100] = "dat/";
            
    if (filename[0] != '/'){
        strcat(datafile, filename);
    }
    
    nodes_file = fopen(datafile, "r");
    
    int lines=0;
    char ch;
    while((ch=fgetc(nodes_file))!=EOF) {
        if (ch=='\n') { lines++; }
    }
    
    Node nodes[lines];
    
    for (int i = 0; i < lines; i++) {
        fscanf(nodes_file, " %d %2c",
                &nodes[i].ref,
                nodes[i].type);
    }
    
    fclose(nodes_file);
    
    printf("%s", nodes[3].type);
}

void parse_tracks_file(char filename[]) {
    
}

void parse_courses_file(char filename[]) {
    
}

void parse_entrants_file(char filename[]) {
    
}