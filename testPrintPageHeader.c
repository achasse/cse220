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

int main ()
{
    char source_name1[MAX_FILE_NAME_LENGTH] = "/User/dliu30/Downloads/Test.c";
    char date1[DATE_STRING_LENGTH] = "Tue Feb 18 20:56:59 2014";
    char source_name2[MAX_FILE_NAME_LENGTH] = "/User/dliu30/Downloads/Testc";
    char date2[DATE_STRING_LENGTH] = "Feb Tue 18 20:56:59 2014";

    //copy name of file from input argument into source_name    
    strcpy(source_name, argv[1]);

    print_page_header(source_name1, date1);//Valid input because both parameters are correct
    print_page_header(source_name1, date2);//Invalid parameter because date is in the wrong format
    print_page_header(source_name2, date1);//Invalid parameter in source_name because source_name2 isn't a correct source name file. 
    print_page_header(source_name2, date2);//Both are invalid parameters source_name2 and date is wrong.
    
    return 0;

}

// For when the line count reaches the max. Puts the source, date and page number in a header
static void print_page_header(char source_name[], char date[])
{
	static int page_number = 0;
	printf("Page %3d %*s\t %s\t \n", page_number, MAX_PRINT_LINE_LENGTH/3, source_name, date);
	page_number++;
}
