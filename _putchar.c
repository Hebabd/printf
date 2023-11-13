#include "main.h"

/**
 * _putchar - Prints the given character.
 * @c: The given character.
 *
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{
	static char buffer[1024];
	static int i;

	if (i >= 1024 || c == -1)
	{
		write(1, &buffer, i);
		i = 0;
	}

	if (c != -1)
	{
		buffer[i] = c;
		i++;
	}

	return (1);
}

/**
 * _puts - prints a string.
 * @str: The given string.
 *
 * Return: Int.
 */

int _puts(char *str)
{
	rgister int count;

	for (count = 0; str[count] != '/0'; count++)
		_putchar(str[count]);

	return (count);
}
