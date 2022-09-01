#include "main.h"
/**
 * _putchar - a fun.. that put a character
 * @c: char to print
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
