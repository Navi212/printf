#include "main.h"

/**
 * print_char - prints characters from the variable
 * list of arguments
 * @list: variable list of arguments
 *
 * Return: returns the number of characters printed
 */
int print_char(va_list list)
{
	_write_char(va_arg(list, int));
	return (1);
}


/**
 * print_string - prints a string from the variable
 * list of arguments
 * @list: variable list of arguments
 *
 * Return: returns the number of characters printed
 */
int print_string(va_list list)
{
	int i;
	char *str;

	i = 0;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		_write_char(str[i]);
		i++;
	}

	return (i);
}


/**
 * print_percent - prints percent character when encounted
 * in the variable list
 * @list: variable list of arguments
 *
 * Return: returns the number of printed characters
 */
int print_percent(__attribute__((unused))va_list list)
{
	_write_char('%');
	return (1);
}
