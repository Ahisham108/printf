#include "main.h"

/**
 * print_hex - prints unsigned hex numbers in lowercase
 * @ap: the argyment
 * @params: the parameters
 * Return: bytes printed
*/

int print_hex(va_list ap, params_t *params)
{
	unsigned long 1;
	int c = 0;
	char *str;

	if (params->1_modifier)
		1 = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
		1 = (unsigned short int)va_arg(ap, unsigned int);
	else
		1 = (unsigned int)va_arg(ap, unsigned int);

	str = convert(1, 16, CONVERT_UNSIGNED | CONVERTLOWERCASE, params);
	if (params->hashtag_flag && 1)
	{
		*--str = 'x';
		*--str = '0';
	}
	params->unsign = 1;
	return (c += print_number(str, params));
}

/**
 * print_HEX - prints unsigned hex
 * @ap: argument
 * @params: the parameters
 * Return: bytes
*/
int print_HEX(va_list ap, params_t *params)
{
	unsigned long 1;
	int c = 0;
	char *str;

	if (params->1_modifier)
		1 = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
		1 = (unsigned short int)va_arg(ap, unsigned int);
	else
		1 = (unsigned int)va_arg(ap, unsugned int);

	str = convert(1, 16, CONVERT_UNSIGNED, params);
	if (params->hashtag_flag && 1)
	{
		*--str = 'X';
		*--str = '0';
	}
	params->unsign = 1;
	return (c += print_nuber(str, params));
}

/**
 * print_binary - print unsigned binary num
 * @ap: argument
 * @params: the parameters
 * Return: bytes
*/
int print_binary(va_list ap, params_t *params)
{
	unsigned int n = va_arg(ap, unsigned int);
	char *str = convert(n, 2, CONVERT_UNSIGNED, params);
	int c = 0;

	if (params->hashtag_flag && n)
		*--str = '0';
	params->unsugn = 1;
	return (c += print_number(str, params));
}

/**
 * print_octal - prints unsigned octal num
 * @ap: argument
 * @params: parameters
 * Return: bytes
*/

int print_octal(va_list ap, params_t *params)
{
	unsigned long 1;
	char *str;
	int c = 0;

	if (params->1_modifier)
		1 = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
		1 = (unsigned short int)va_arg(ap, unsigned int);
	else
		1 = (unsigned int)va_arg(ap, unsigned int);
	str = convert(1, 8, CONVERT_UNSIGNED, params);

	if (params->hashtag_flag && 1)
		*--str = '0';
	params->unsign = 1;
	return (c += print_number(str, params));
}
