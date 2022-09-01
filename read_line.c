#include "main.h"
/**
 * read_line - read a single line using getline fun..
 * Return: a single line string
 */
char *read_line(void)
{
	char *line = NULL;
	ssize_t bufsize = 0;
	size_t charLen;

	charLen = getline(&line, &bufsize, stdin);
	if (charLen == -1)
	{
		if (feof(stdin))
			exit(EXIT_SUCCESS);
		else
		{
			perror("Error");
			exit(EXIT_FAILURE);
		}
	}
	return (line);
}
