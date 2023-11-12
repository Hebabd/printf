#include "main.h"

/**
 * print_string - prints a string.
 * @list: The given arguments.
 *
 * Return: Int.
 */

int print_string(va_list list)
{
	int i = 0, value;
	char *str = va_arg(list, char *);

	if (!str)
		str = NULL;

	while (str[i])
	{
		value = _putchar(str[i]);

		if (value == -1)
			return (-1);

		i++;
	}

	return (i);
}
