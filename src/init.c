#include <stdio.h>

void init() {
    char name_filename[50], nodes_filename[50], tracks_filename[50],
            courses_filename[50], entrants_filename[50];
    
    printf("Welcome to Monitor v0.0\n");
    printf("We need you to enter some filenames below.\n");
    printf("If you do not specify a fully qualified filename\n");
    printf("(ie. Fully qualified = It starts with a / symbol)\n");
    printf("just enter the filename and the program will assume\n");
    printf("the file is in the dat folder of the project directory.\n");
    
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
    
}