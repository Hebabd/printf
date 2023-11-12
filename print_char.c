#include "main.h"

/**
 * print_char - prints a character.
 * @list: The given arguments.
 *
 * Return: Int.
 */

int print_char(va_list list)
{
	int i = 0, value;
	char c = va_arg(list, int);

	value = _putchar(c);

	if (value == -1)
		return (-1);

	i++;

	return (i);
}
