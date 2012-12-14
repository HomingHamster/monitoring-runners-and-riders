#include <stdio.h>
#include "init.h"

int menu() {
    char *choice = NULL;
    printf("\n\nMain Menu - Select an option from the"
            " following:\n");
    printf("A - Re-initialise Program\n");
    printf("B - Query user location\n");
    printf("C - Print number of competitors NOT "
            "started\n");
    printf("D - Print number of competitors on the "
            "course\n");
    printf("E - Supply time competitor reached a "
            "checkpoint\n");
    printf("F - Read in a checkpoint times file\n");
    printf("G - Produce a results list\n");
    printf("H - Quit the program and discard "
            "everything\n");
    
    printf("\nPlease enter your choice: ");
    scanf(" %c", choice);
    
    if (*choice == 'a' || *choice == 'A'){
        init();
    } else if (*choice == 'b' || *choice =='B') {
        
    } else if (*choice == 'c' || *choice =='C') {
        
    } else if (*choice == 'd' || *choice =='D') {
        
    } else if (*choice == 'e' || *choice =='E') {
        
    } else if (*choice == 'f' || *choice =='F') {
        
    } else if (*choice == 'g' || *choice =='G') {
        
    } else if (*choice == 'h' || *choice =='H') {
        return 1;        
    } else {
        printf("input not recgonised\n");
    }
    return 0;
}