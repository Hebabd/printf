#include "main.h"

/**
 * _putchar - Prints the given character.
 * @c: The given character.
 *
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
