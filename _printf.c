#include "main.h"

/**
 * _printf - receives main string and all passed arguments
 * to print a formatted string
 * @format: contains main string enclosed in double quote
 *
 * Return: total number of printed characters
 */

int _printf(const char *format, ...)
{
	int printed_chars;

	create_struct_var fun_arr[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent}
	};

	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);

	printed_chars = parser(format, fun_arr, arg_list);
	va_end(arg_list);

	return (printed_chars);
}
