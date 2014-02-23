/*Authhors: Aaron Chasse, Jake Borg, Doug Liu
 *CSE 220 TTH 1030-1145 : Lab 2 Phase 2
 *
 *Program description: This program will be testing the function *init_lister with different valid and invalid parameters
*/

#include "common.h"

int main ()
{
    FILE *source_file;
    char source_name1[MAX_FILE_NAME_LENGTH] = "Test.c";
    char source_name2[MAX_FILE_NAME_LENGTH] = "Test.ER#";
    char date1[DATE_STRING_LENGTH] = "Tue Feb 18 12:57:34 2014";
    char date2[DATE_STRING_LENGTH] = "Feb Tue 18 12:57:34 2014";
    
    source_file1 = init_lister(source_name1, source_name1, date1); //Valid because all parameter is valid
    source_file2 = init_lister(source_name1, source_name1, date2); //Invalid date format
    source_file3 = init_lister(source_name1, source_name2, date1); //Invalid source name
    source_file4 = init_lister(source_name1, source_name2, date2); //Invalid date format and source_name
    source_file5 = init_lister(source_name2, source_name1, date1); //Invalid date format and source_name 
    source_file6 = init_lister(source_name2, source_name1, date2); //Invalid date format and source_name
    source_file7 = init_lister(source_name2, source_name2, date1); //Invalid date format and source_name
    source_file8 = init_lister(source_name2, source_name2, date2); //Invalid date format and source_name
    
    
 
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
