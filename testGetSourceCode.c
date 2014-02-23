/*Authhors: Aaron Chasse, Jake Borg, Doug Liu
 *CSE 220 TTH 1030-1145 : Lab 2 Phase 2
 *
 *Program description: This program will be testing the function *get_source_line with different valid and invalid parameters
*/

#include "common.h"

int main (int argc, const char *argv[])
{
    FILE *source_file1;
    source_file1 = fopen("Test.c", "r");
    FILE *source_file2;
    source_file2 = fopen("Image.jpeg, "r");
    char source_name1[MAX_FILE_NAME_LENGTH] = "Test.c";
    char source_name2[MAX_FILE_NAME_LENGTH] = "Imagefile"
    char date1[DATE_STRING_LENGTH] = "Feb Tue 18 20:56:59 2014";
    char date2[DATE_STRING_LENGTH] = "Tue Feb 18 20:56:59 2014";
    char loop_check1 = TRUE;
    char loop_check2 = TRUE;
    char loop_check3 = TRUE;
    char loop_check4 = TRUE;
    char loop_check5 = TRUE;
    char loop_check6 = TRUE;
    char loop_check7 = TRUE;
    char loop_check8 = TRUE;
    

    //copy name of file from input argument into source_name    
    strcpy(source_name, argv[1]);
    
		loop_check1 = get_source_line(source_file1, source_name1, date1); //Valid as all parameters are valid
		loop_check2 = get_source_line(source_file1, source_name1, date2); //Invalid as date2 is in the wrong format
		loop_check3 = get_source_line(source_file1, source_name2, date1); //Invalid as source_name2 is wrong
		loop_check4 = get_source_line(source_file1, source_name2, date2); //Invalid as source_name2 and date2 is wrong
		loop_check5 = get_source_line(source_file2, source_name1, date1); //Invalid as source_file2 is the wrong type
		loop_check6 = get_source_line(source_file2, source_name2, date1); //Invalid as source file2 and source_name 2 is wrong
		loop_check7 = get_source_line(source_file2, source_name2, date1); //source_file2 and source_name2 are invalid
		loop_check8 = get_source_line(source_file2, source_name2, date2); //All parameters are invalid
		
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
