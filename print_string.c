#include "main.h"

/**
 * print_string - prints a string.
 * @list: The given arguments.
 *
 * Return: Int.
 */

int print_string(va_list list)
{
	char *str;
	int i;
	int length;

	str = va_arg(list, char *);
	if (str == NULL)
	{
		str = "(NULL)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
}
