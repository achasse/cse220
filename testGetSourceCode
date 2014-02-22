/*Authhors: Aaron Chasse, Jake Borg, Doug Liu
 *CSE 220 TTH 1030-1145 : Lab 2 Phase 2
 *
 *Program description: This program will be testing the function *get_source_line with different valid and invalid parameters
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
    
    //while eof has not been reached contine to loop
		loop_check = get_source_line(source_file, source_name, date);
		loop_check = get_source_line(source_file, source_name, dat);
		loop_check = get_source_line(source_file, source_nam, date);
		loop_check = get_source_line(source_file, source_nam, dat);
		loop_check = get_source_line(source_fil, source_name, date);
		loop_check = get_source_line(source_fil, source_name, dat);
		loop_check = get_source_line(source_fil, source_nam, date);
		loop_check = get_source_line(source_fil, source_nam, dat);
		
		return 0;
}//end main function

BOOLEAN get_source_line(FILE *src_file, char src_name[], char todays_date[])
{
    char print_buffer[MAX_SOURCE_LINE_LENGTH + 9];
    char source_buffer[MAX_SOURCE_LINE_LENGTH];
    static int line_count = 0;		//initialize static variable to keep track of line number, set to 0 for inception


    //check to see if there is another line to read
    if (fgets(source_buffer, MAX_SOURCE_LINE_LENGTH, src_file ) != NULL)
    {
		sprintf(print_buffer, "%4d: \t\t %s", line_count, source_buffer );	//sends line_count and source_buffer to print_buffer
			
		print_line(print_buffer, src_name, todays_date);//call print_line method and pass in print_buffer, src_name, and the date
		line_count++;	//increment line_count for next function call
	//return TRUE
        return (TRUE);
    }//end if statement
    else
    {
	//if no more lines in file, return false
        return (FALSE);
    }//end else statement

}//end method get_source)line
