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
 * Program description: Interfaces between having information in the lister and printing it to the console.
 * Formats the strings, tracks line and page counts, and calls printf()
 *
 */

static void print_page_header(char source_name[], char date[]);

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

// For when the line count reaches the max. Puts the source, date and page number in a header
static void print_page_header(char source_name[], char date[])
{
	static int page_number = 0;
	printf("Page %3d %*s\t %s\t \n", page_number, MAX_PRINT_LINE_LENGTH/3, source_name, date);
	page_number++;
}
