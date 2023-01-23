#include "main.h"

/**
 * _write_char - writes characters to standard output stream
 * @c: character to write
 *
 * Return: 0 on success
 * -1 on error
 *  errno otherwise
 */

int _write_char(char c)
{
	return (write(1, &c, 1));
}
