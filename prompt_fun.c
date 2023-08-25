#include "main.h"

/**
 * prompt - Displays Shell Prompt
 */
void prompt(void)
{
	PRINTER("$ ");
}
/**
 * print_error - display Err Based on Command and how many Time Shell Looped
 * @input:User Input
 * @counter:Simple Shell Count Loop
 * @argv:Program Name
 * Return: Void
 */
void print_error(char *input, int counter, char **argv)
{
	char *er;

	PRINTER(argv[0]);
	PRINTER(": ");
	er = _itoa(counter);
	PRINTER(er);
	free(er);
	PRINTER(": ");
	PRINTER(input);
	PRINTER(": not found\n");
}
