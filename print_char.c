#include "main.h"

/**
 * print_char - prints a character.
 * @list: The given arguments.
 *
 * Return: Int.
 */

int print_char(va_list list)
{

	char c = va_arg(list, int);
	int value = _putchar(c);



	if (value == -1)
		return (-1);


	return (1);
}
