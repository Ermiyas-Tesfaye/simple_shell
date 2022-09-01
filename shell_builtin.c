#include "main.h"
/**
 * builtins - count number of of built-in functions
 * Return: number of builtins
 */
int builtins(void) {
	char *builtin_str[] = {"cd", "exit"};
	
	return (sizeof(builtin_str) / sizeof(char *));
}
/**
 * _cd - change directory
 * @av: argument vector
 * Return: 1
 */
int _cd(char **av)
{
	if (av[1] == NULL)
		fprintf(stderr, "Argument is expected after \"cd\"\n");
	else
	{
		if (chdir(av[1]) != 0)
			perror("unable to change directory\n");
	}
	return (1);
}

/**
 * _exit - exit the process
 * @av: argument vector
 * Return: always 0
 */
int sh_exit(char **av)
{
	return (0);
}
