#include "main.h"
/**
 * shell_execute - execute commands using a child process
 * @av: arguments given to the function
 * Return: status to continue looping
 */
int shell_execute(char **av)
{
	int (*builtin_fun[]) (char **str) = {&_cd, &sh_exit};
	int i;
	char *builtin_str[] = {"cd", "exit"};

	if (av[0] == NULL)
		return (1);
	for (i = 0; i < builtins(); i++)
	{
		if (strcmp(av[0], builtin_str[i]) == 0)
			return ((*builtin_fun[i])(av));
	}
	return (non_builtin(av));
}
