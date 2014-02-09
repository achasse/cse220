#include "common.h"
//This is the main function

/*
 * QUESIONS
 * 
 * Truncate + restore in print function
 * init_lister arguments?
 * 
 */

int main (int argc, const char *argv[])
{
    FILE *source_file;
    char source_name[MAX_FILE_NAME_LENGTH];
    char date[DATE_STRING_LENGTH];
    bool loop_check = TRUE;

    source_file = init_lister(argv, source_name, date); //call init_lister to get readable file stream

    while(loop_check)
    {
		loop_check = get_source_line(source_file, source_name, date);
    }
   /* Missing Code Here */
    return 0;
}
FILE *init_lister(const char *name, char source_file_name[], char date[])
{
    time_t timer;
    FILE *file;

    source_file_name = name; //assign name of file to variable source_file_name
    file = fopen(source_file_name, "r"); // Initialize file using fopen(source_file_name, "r");
    //format timer into readable date
    /* Missing Code Here */
    return file; //return readable file stream
}
BOOLEAN get_source_line(FILE *src_file, char src_name[], char todays_date[])
{
    char print_buffer[MAX_SOURCE_LINE_LENGTH + 9];
    char source_buffer[MAX_SOURCE_LINE_LENGTH];
    static int line_number = 0;											//initialize static variable to keep track of line number, set to 0 for inception



    if (fgets(source_buffer, MAX_SOURCE_LINE_LENGTH, src_file ) != NULL) //This is missing a condition
    {
		sprintf(print_buffer, line_number + " " + source_buffer, ... );	//sends line_number and source_buffer to print_buffer
		print_line(print_buffer, src_name, todays_date);				////call print_line method and pass in print_buffer, src_name, and the date
		line_number++;													//increment line_number for next function call
		/*  Missing Code Here */
        return (TRUE);
    }
    else
    {
	//if no more lines in file, return false
        return (FALSE);
    }
}

