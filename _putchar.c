#include "main.h"
/**
 * _putchar - a fun.. puts a character in stdout
 * @c: character to put
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
