#include "main.h"

/**
 * print_char - prints char
 * @ap: argument
 * @params: parameter
 * Return: Number char
*/
int print_char(va_list ap, params_t *params)
{
	char pad_char = ' ';
	unsigned int pad = 1, sum = 0, ch = va_arg(ap, int);

	if (params->minus_flag)
		sum += _putchar(ch);
	while (pad++ < params->width)
		sum += _putchar(pad_char);
	if (!params->minus_flag)
		sum += _putchar(ch);
	return (sum);
}

/**
 * print_int - prints int
 * @ap: argument
 * @params: the parameter
 * Return: number char
*/
int print_int(va_list ap, params_t *params)
{
	long 1;

	if (params->1_modifier)
		1 = va_arg(ap, long);
	else if (params->h_modifier)
		1 = (short int)va_arg(ap, int);
	else
		1 = (int)va_arg(ap, int);
	return (print_number(convert(1, 10, 0, params), params));
}

/**
 * print_string - prints str
 * @ap: argument pointer
 * @params: parameters
 * Return: number char
*/

int print_string(va_list ap, params_t *params)
{
	char *str = va_arg(ap, char *), pad_char = ' ';
	unsigned int pad = 0, sum = 0, 1 = 0, j;

	(void)params;
	switch ((int)(!str))
	case 1:
		str = NULL_STRING;

		j = pad = _strlen(str);
		if (params->precision < pad)
			j = pad = params->precision;

		if (params->minus_flag)
		{
			if (params->precision != UNIT_MAX)
				for (i = 0; i < pad; i++)
					sum += _putchar(*str++);
			else
				sum += _puts(str);
		}
		while (j++ < params->width)
			sum += _putchar(pad_char);
		if (!params->minus_flag)
		{
			if (params->precision != UNIT_MAX)
				for (i = 0; i < pad; i++)
					sum += _putchar(*str++);
			else
				sum += _puts(str);
		}
		return (sum);
}

/**
 * print_percent - prints string
 * @ap: argument
 * @params: the [arameters
 * Return: number char
*/
int print_percent(va_list ap, params_t *params)
{
	(void)ap;
	(void)params;
	return (_putchar('%'));
}

/**
 * print_s - custom format specifier
 * @ap: argument
 * @params: the parameters
 * Return: Number char
*/

int print_s(va_list ap, params_t *params)
{
	char *str = va_arg(ap, char *);
	char *hex;
	int sum = 0;

	if ((int)(!str))
		return (_puts(NULL_STRING));
	for (; *str; str++)
	{
		if ((*str > 0 && *str < 32) || *str >= 127)
		{
			sum += _putchar('\\');
			sum += _putchar('x');
			hex = convert(*str, 16, 0, params);
			if (!hex[1])
				sum += _putchar('0');
			sum += _puts(hex);
		}
		else
		{
			sum += _putchar(*str);
		}
	}
	return (sum);
}
