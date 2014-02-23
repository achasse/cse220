/*Authhors: Aaron Chasse, Jake Borg, Doug Liu
 *CSE 220 TTH 1030-1145 : Lab 2 Phase 2
 *
 *Program description: This program will be testing the function *init_lister with different valid and invalid parameters
*/

#include "common.h"

int main ()
{
    char source_name1[MAX_FILE_NAME_LENGTH] = "/User/dliu30/Downloads/Test.c";
    char source_name2[MAX_FILE_NAME_LENGTH] = "/User/dliu30/Downloads/Test";
    char date1[DATE_STRING_LENGTH] = "Tue Feb 18 20:56:59 2014";
    char date2[DATE_STRING_LENGTH] = "Feb Tue 18 20:56:59 2014";

    print_line(source_name1, source_name1, date1)//Valid as all parameters are valid.
    print_line(source_name1, source_name1, date2)//Invalid as date2 has wrong format
    print_line(source_name1, source_name2, date1)//Invalid as source_name2 is not a valid file
    print_line(source_name1, source_name2, date2)//Invalid as source_name2 and date2 is wrong
    print_line(source_name2, source_name1, date1)//Invalid as source_name2 is wrong.
    print_line(source_name2, source_name1, date2)//Invalid as source_name2 and date2 is wrong.
    print_line(source_name2, source_name2, date1)//Invalid as source_name2 is wrong.
    print_line(source_name2, source_name2, date2)//Invalid as source_name2 and date2 is wrong.
 
    return 0;
}//end main function

void print_line(char line[], char source_name_to_print[], char date_to_print[])
{
    // Initialize line_count to the max lines per page so header is printed before first line
    //of first page.
    static int line_count = MAX_LINES_PER_PAGE;

    //  Test if we need to make a new page - if the line count exceeded the maximum
    if (++line_count > MAX_LINES_PER_PAGE)
    {
        print_page_header(source_name_to_print, date_to_print);
	line_count = 0;
    }
    // Prints a substring of line[] using the max length as the size. Doesn't modify line[], no need to restore to original size
    printf("%.*s", MAX_PRINT_LINE_LENGTH, line);
}
