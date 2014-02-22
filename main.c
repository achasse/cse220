

/*Authhors: Aaron Chasse, Jake Borg, Doug Liu
 *CSE 220 TTH 1030-1145 : Lab 2 Phase 2
 *
 *Program description: This program will take in the name of a file containing text 
 *as a command line argument and print each line to stdio. If a line is longer than
 *80 characters the line will be truncated. A page header will be printed at the top
 *of each page with the page number, document name, and current time and date. Line
 *numbers will be printed next to each line sent to stdio.
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
    source_file = init_lister(source_name, source_name, date);
    
    //while eof has not been reached contine to loop
    while(loop_check)
    {
		loop_check = get_source_line(source_file, source_name, date);
    }
 
    return 0;
}//end main function

/*
*init_lister takes in the name of the source file: *name points to this name
*            also takes in source_name as a char array source_file_name
*            takes in the date char and modifies it
*Return: Returns the FILE file pointing to the opened readable file
*/
FILE *init_lister(const char *name, char source_file_name[], char date[])
{
    time_t timer;
    FILE *file;
	
	//format date and time and copy into variable date
	time(&timer);
	strcpy(date, ctime(&timer));	

	
     //open the file to read from and make FILE pointer file point to it
    file = fopen(source_file_name, "r");

    return file; //return readable file stream
}

/*
*get_source_line takes in as 1st parameter a file pointer and points to this with src_file
* Takes in parameter for src_name as a char array
* Takes in todays_date as a char array
*
*Returns a boolean TRUE or FALSE depending on whether a line was read successfully
*/
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
