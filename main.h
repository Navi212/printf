#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>


/**
 * struct convert - declares a structure for symbols
 * and array of functions
 * @symbol: The operator
 * @fun: Function pointer to the right function
 */
struct convert
{
	char *symbol;
	int (*fun)(va_list);
};
typedef struct convert create_struct_var;


/* Main functions */
int parser(const char *format, create_struct_var fun_arr[], va_list arg_list);
int _printf(const char *format, ...);
int _write_char(char);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(__attribute__((unused))va_list list);


#endif /* MAIN_H */
