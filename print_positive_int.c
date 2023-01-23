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
