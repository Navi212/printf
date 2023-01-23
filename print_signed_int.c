#include "main.h"

/**
 * print_num - prints a number passed to this function
 * @list: list of arguments passed
 *
 * Return: number of arguments passed to the list
 */

int print_num(va_list list)
{
	int n, div, len;
	unsigned int num;

	n = va_arg(list, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _write_char('-');
		num = n * -1;
	}

	else
		num = n;
	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _write_char('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
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

	num_len = print_num(num_list);
	return (num_len);
}
