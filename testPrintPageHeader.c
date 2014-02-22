#include "common.h"

/*
 * Authors:
 * Aaron Chasse - achasse
 * Doug Liu - dougdliu
 * Jake Borg - ebmixed
 *
 * CSE 220 TTH 1030-1145 : Lab 2 Phase 2
 * Instructor: Bryce Holton 
 *
 * Program description: This program will test the function print_line with different valid and invalid parameters
 *
 */

int main (int argc, const char *argv[])
{
    FILE *source_file;
    char source_name[MAX_FILE_NAME_LENGTH];
    char date[DATE_STRING_LENGTH];
    char loop_check = TRUE;

    //copy name of file from input argument into source_name    
    strcpy(source_name, argv[1]);

    print_page_header(source_name, date);//Tests the parameter source_name, date
    print_page_header(source_name, dat);//Tests the parameter source_name, dat
    print_page_header(source_nam, date);//Tests the parameter source_nam, date
    print_page_header(source_nam, dat);//Tests the parameter source_nam, dat
    
    return 0;

}

// For when the line count reaches the max. Puts the source, date and page number in a header
static void print_page_header(char source_name[], char date[])
{
	static int page_number = 0;
	printf("Page %3d %*s\t %s\t \n", page_number, MAX_PRINT_LINE_LENGTH/3, source_name, date);
	page_number++;
}
