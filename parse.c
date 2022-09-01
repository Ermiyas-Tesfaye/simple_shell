#include "main.h"
/**
 * parse - parsing a string text to array of strings
 * @text: a single line string
 * Return: array of strings (tokens)
 */
char **parse(char *line)
{
	int tokens_buf = 100, i = 0;
	char *token, **tokens;

	tokens = malloc(tokens_buf * sizeof(char *));
	if (tokens == NULL)
	{
		perror("Tokens error\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(line, " \n\t");
	while (token)
	{
		tokens[i++] = token;
		if (i >= tokens_buf)
		{
			tokens_buf *= 2;
			tokens = realloc(tokens, tokens_buf * sizeof(char *));
			if (tokens == NULL)
			{
				perror("Realloc failure\n");
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, " \n\t");
	}
	tokens[i] = NULL;
	return tokens;
}
