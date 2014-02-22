/*Authhors: Aaron Chasse, Jake Borg, Doug Liu
 *CSE 220 TTH 1030-1145 : Lab 2 Phase 2
 *
 *Program description: This program will be testing the function *init_lister with different valid and invalid parameters
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
    source_file1 = init_lister(source_name, source_name, date);//Tests the parameter dat
    source_file2 = init_lister(source_name, source_name, dat);//Tests the parameter dat
    source_file3 = init_lister(source_name, source_nam, date);//Tests the parameter dat
    source_file4 = init_lister(source_name, source_nam, dat);//Tests the parameter dat
    source_file5 = init_lister(source_nam, source_name, date);//Tests the parameter dat
    source_file6 = init_lister(source_nam, source_name, dat);//Tests the parameter dat
    source_file7 = init_lister(source_nam, source_nam, date);//Tests the parameter dat
    source_file8 = init_lister(source_nam, source_nam, dat);//Tests the parameter dat
    
 
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
