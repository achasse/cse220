#include "common.h"

static void print_page_header(char source_name[], char date[]);

void print_line(char line[], char source_name_to_print[], char date_to_print[])
{
    char save_ch;
    char *save_chp = NULL;
    static int line_count = MAX_LINES_PER_PAGE;

    if (++line_count > MAX_LINES_PER_PAGE)
    {
        print_page_header(source_name_to_print, date_to_print);
    }
    if (strlen(line) > MAX_PRINT_LINE_LENGTH)
    {
		save_chp = TRUE;
        // truncate line
    }
    if (save_chp)
    {
		save_ch = line;
        /* Missing Code Here */
    }
    /* Missing Code Here */
    if (save_chp)
    {
        /* Missing Code Here */
    }
}
static void print_page_header(char source_name[], char date[])
{
    static int page_number = 0;
	puts(source_name + " " + date + " " + page_number); // printf("%s %s %d\n", source_name, date, page_number);
	page_number++;
    /* Missing Code Here */
}