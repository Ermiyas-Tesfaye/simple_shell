#include "main.h"
/**
 * non_builtin - a fun.. that execute non_builin functions
 * @av: argument vector
 * Return: 1 on success
 */
int non_builtin(char **av)
{
	pid_t pid, wpid;
	char path[100] = "/bin/";
	int status;

	strcat(path, av[0]);
	pid = fork();
	if (pid == 0)
	{
		if (**av == '/')
		{
			if (execve(av[0], av, NULL) == -1)
			{
			//	perror("Error on child\n");
				perror("./hsh");
				exit(EXIT_FAILURE);
			}
		}
		if (execve(path, av, NULL) == -1)
		{
		//	perror("Error on child\n");
			perror("./hsh");
			exit(EXIT_FAILURE);
		}
	}
	else if (pid == -1)
		perror("Forking error\n");
	else
	{
		do {
			wpid = waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return (1);
}
