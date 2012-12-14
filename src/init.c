#include <stdio.h>
#include "fileio.h"

void init() {
    /* Define variables used for storage of the 
       filenames */
    char name_filename[50], nodes_filename[50], 
            tracks_filename[50], courses_filename[50],
            entrants_filename[50];
    
    /* Output the welcome/explanation text */
    printf("Welcome to Monitor v0.0\n");
    printf("We need you to enter some filenames below"
            ".\n");
    printf("If you do not specify a fully qualified "
            "filename\n");
    printf("(ie. Fully qualified = It starts with a / "
            "symbol)\n");
    printf("just enter the filename and the program "
            "will assume\n");
    printf("the file is in the dat folder of the "
            "project directory.\n");
    
    /* Read in all of the filenames */
    printf("\nThe name file: ");
    scanf(" %s", name_filename);
    
    printf("\nThe nodes file: ");
    scanf(" %s", nodes_filename);
    
    printf("\nThe tracks file: ");
    scanf(" %s", tracks_filename);
    
    printf("\nThe courses file: ");
    scanf(" %s", courses_filename);
    
    printf("\nThe entrants file: ");
    scanf(" %s", entrants_filename);
    
    /* Call the fileio functions to parse the 
       individual files */
    parse_name_file(name_filename);
    parse_nodes_file(nodes_filename);
    parse_tracks_file(tracks_filename);
    parse_courses_file(courses_filename);
    parse_entrants_file(entrants_filename);
}