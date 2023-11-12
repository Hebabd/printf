#include "main.h"

/**
 * print_char - prints a character.
 * @list: The given arguments.
 *
 * Return: Int.
 */

int print_char(va_list list)
{
	char str;

	str  = va_arg(list, int);
	_putchar(str);
	return (1);
}
