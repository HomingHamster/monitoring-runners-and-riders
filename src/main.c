#include <stdio.h>

//include the initialisation functions
#include "init.h"
//      initialisation functions are to read in the
//      relevant files and information.

//include the menu function
#include "menu.h"
//      the menu will be a function to present a user
//      interface to the user and will be in an
//      infinate loop until exit.

//include the file operations
#include "fileio.h"
//      will handle reading in and interpreting the
//      files.

int main (void) {
    //initialise the program
    init();
    
    /*
    //present the menu
    while (1) {
        menu();
    }*/
    
    return 0;
}
