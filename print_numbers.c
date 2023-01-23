#include "main.h"

/**
 * print_positive_nums - prints only positive base 10
 * numbers
 * @n: unsigned numbers to be printed
 *
 * Return: number of numbers to be printed
 */
int print_positive_nums(unsigned int n)
{
	int div, len;
	unsigned int num;

	div = 1;
	len = 0;
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
 * print_signed_num - prints a number passed to this function
 * @list: list of arguments passed
 *
 * Return: number of arguments passed to the list
 */

int print_signed_num(va_list list)
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
