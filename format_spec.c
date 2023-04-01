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


/**
 * print_signed_int - prints signed base 10 integers
 * @num_list: variable list of passed arguments
 *
 * Description: prints both negavtive and positive
 * numbers. base 10 numbers.
 * Return: number of numbers printed
 */

int print_signed_int(va_list num_list)
{
	int num_len;

	num_len = print_signed_num(num_list);
	return (num_len);
}


/**
 * positive_nums - prints only positive integers
 * @list: list of all variable arguments passed
 *
 * Return: number of numbers passed
 */
int positive_nums(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_positive_nums(num));

	if (num < 1)
		return (-1);

	return (print_positive_nums(num));
}
