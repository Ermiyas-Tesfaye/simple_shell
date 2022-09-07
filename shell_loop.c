#include "main.h"
/**
 * shell_loop - is the instance of 4 process prompt, read, parse, and execute
 */
void shell_loop(void)
{
	char *text;
	char **av;
	int status = 1;

	while (status)
	{
		_putchar('$');
		_putchar(' ');
		text = read_line();
		av = parse(text);
		status = shell_execute(av);
		free(text);
		free(av);
	}
}
