#ifndef MAIN_H
#define MAIN_H
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int _putchar(char c);
int _cd(char **av);
int sh_exit(char **av);
int builtins(void);
int non_builtin(char **av);
int shell_execute(char **av);
char **parse(char *line);
char *read_line(void);
void shell_loop(void);
#endif
