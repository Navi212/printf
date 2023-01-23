#include "main.h"

/**
 * parser - receives main string from format and all passed arguments
 * @format: string enclosed in double quote "string passed"
 * @fun_arr: array of functions to perform operations
 * @arg_list: list of all passed arguments (variable arugments passed)
 *
 * Return: total number of characters printed
 */

int parser(const char *format, create_struct_var fun_arr[], va_list arg_list)
{
	int i, j, result, printed_chars;

	printed_chars = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; fun_arr[j].symbol != NULL; j++) /* checks row 1 of fun_arr and symbol character */
			{
				if (format[i + 1] == fun_arr[j].symbol[0]) /* checks next character after symbol */
				{
					result = fun_arr[j].fun(arg_list);
					if (result == -1)
						return (-1);

					else
						printed_chars += result;
					break;
				}
			}

			if (fun_arr[j].symbol == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_write_char(format[i]);
					_write_char(format[i + 1]);
					printed_chars += 2;
				}

				else
					return (-1);
			}
			i += 1;
		}


		else
		{
			_write_char(format[i]);
			printed_chars++;
		}
	}

	return (printed_chars);
}
