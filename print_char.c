#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - prints a character.
 * @list: The given arguments.
 *
 * Return: 1.
 */

int print_char(va_list list)
{
	unsigned char my_char;


	my_char  = va_arg(list, int);
	_putchar(my_char);
	return (1);
}
/**
 * print_porcentage  - %
 *
 * Return: 1.
 */
int print_porcentage(void)
{
	_putchar('%');
	return (1);
}
