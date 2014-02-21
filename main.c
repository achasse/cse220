#include "common.h"
//This is the main function


/*
 *
 *
 * 
 *
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
    source_file = init_lister(source_name, source_name, date);

    //while eof has not been reached contine to loop
    while(loop_check)
    {
		loop_check = get_source_line(source_file, source_name, date);
    }
 
    return 0;
}
FILE *init_lister(const char *name, char source_file_name[], char date[])
{
    time_t timer;
    FILE *file;
	
	//format date and time and copy into variable date
	time(&timer);
	strcpy(date, ctime(&timer));	

	
     //open the file to read from and assign it to variable file to return
    file = fopen(source_file_name, "r");

    return file; //return readable file stream
}
BOOLEAN get_source_line(FILE *src_file, char src_name[], char todays_date[])
{
    char print_buffer[MAX_SOURCE_LINE_LENGTH + 9];
    char source_buffer[MAX_SOURCE_LINE_LENGTH];
    static int line_count = 0;		//initialize static variable to keep track of line number, set to 0 for inception



    if (fgets(source_buffer, MAX_SOURCE_LINE_LENGTH, src_file ) != NULL)
    {
		sprintf(print_buffer, "%4d: \t\t %s", line_count, source_buffer );	//sends line_count and source_buffer to print_buffer
			
		print_line(print_buffer, src_name, todays_date);//call print_line method and pass in print_buffer, src_name, and the date
		line_count++;	//increment line_count for next function call
		
        return (TRUE);
    }
    else
    {
	//if no more lines in file, return false
        return (FALSE);
    }
}
