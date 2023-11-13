#include "main.h"

/**
 * print_rot -  encodes a string using rot13.
 * @list: The given arguments.
 *
 * Return: Int.
 */

int print_rot(va_list list)
{
	int i = 0, j;
	char *s = va_arg(list, char *);
	char x[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char y[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	if (s == NULL)
		s = "(null)";

	while (s[i] != '\0')
	{
		while (x[j] != '\0')
		{
			if (s[i] == x[j])
			{
				s[i] = y[j];
				break;
			}

			j++;
		}

		i++;
	}

	return (i);
}
