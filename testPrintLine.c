/*Authhors: Aaron Chasse, Jake Borg, Doug Liu
 *CSE 220 TTH 1030-1145 : Lab 2 Phase 2
 *
 *Program description: This program will be testing the function *init_lister with different valid and invalid parameters
*/

#include "common.h"

int main (int argc, const char *argv[])
{
    FILE *source_file;
    char source_name[MAX_FILE_NAME_LENGTH];
    char date[DATE_STRING_LENGTH];
    char loop_check = TRUE;

    //copy name of file from input argument into source_name    
    strcpy(source_name, argv[1]);
    //FILE source_file pointer will point to return from init_lister: a readable file
    print_line(source_name, source_name, date)//Tests the parameter source_name, source_name, date
    print_line(source_name, source_name, dat)//Tests the parameter source_name, source_name, dat
    print_line(source_name, source_nam, date)//Tests the parameter source_name, source_nam, date
    print_line(source_name, source_nam, dat)//Tests the parameter source_name, source_nam, dat
    print_line(source_nam, source_name, date)//Tests the parameter source_nam, source_name, date
    print_line(source_nam, source_name, dat)//Tests the parameter source_nam, source_name, dat
    print_line(source_nam, source_nam, date)//Tests the parameter source_nam, source_nam, date
    print_line(source_nam, source_nam, dat)//Tests the parameter source_nam, source_nam, dat
 
    return 0;
}//end main function
