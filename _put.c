#include "main.h"

/**
 * _puts - print a string with a newline.
 * @str: string to print
 * Return: void
*/
int _puts(char *str)
{
	char *a = str;

	while (*str)
		_putchar(*str++);
	return (str - a);
}

/**
 * _putchar - write charactar c to stdout
 * @c: character to print
 * Return: always one on sucsess and error if not
*/
int _putchar(int c)
{
	static int i;
	static char buf[OUTPUT_BUF_SIZE];

	if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		BUF[i++] = c;
	return (1);
}
