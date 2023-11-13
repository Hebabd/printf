#include "main.h"

/**
 * print_pointer - convert and print.
 * @list: The given arguments.
 *
 * Return: Int.
 */

int print_pointer(va_list list)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int i, b;

	p = va_arg(list, void *);

	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		return (i); 
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = print_hex_ext(a);

	return (b + 2);
}
