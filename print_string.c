#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_string - prints a string.
 * @list: The given arguments.
 *
 * Return: Number of characters printed.
 */

int print_string(va_list list)
{
	char *str;
	int i;

	str = va_arg(list, char *);
	if (str == NULL)
	{
		str = "(NULL)";
	}

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
