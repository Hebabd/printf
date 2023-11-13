#include "main.h"

/**
 * print_char - prints a character.
 * @list: The given arguments.
 *
 * Return: 1.
 */

int print_char(va_list list)
{
	int value;
	char my_char = va_arg(list, int);

	value = _putchar(my_char);

	if (!value)
		return (-1);

	return (1);
}
