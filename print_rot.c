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
	char *enc = NULL;

	enc = malloc((_strlen(s) + 1) * sizeof(char));

	if (!s || !enc)
		return (-1);

	while (s[i] != '\0')
	{
		while (x[j] != '\0')
		{
			if (s[i] == x[j])
			{
				enc[i] = y[j];
				break;
			}

			j++;
		}

		if (s[i] != x[j])
			enc[i] = s[i];

		i++;
	}

	for (i = 0; enc[i]; i++)
		_putchar(enc[i]);

	free(enc);
	return (i);
}
