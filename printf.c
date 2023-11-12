#include "main.h"


/**
 * _printf -mimics printf
 * @format: identifier look for
 * Return: integer
 */


int _printf(const char *format, ...)
{
	va_list args;
	int i, count = 0;

	va_start(args, format);

	match m[] = {
		{"%c", printf_char},
		{"%s", printf_string},
		{"%%", print_37}

	};

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (int j = 0; j < sizeof(m) / sizeof(m[0]); j++)
			{
				count += m[j].func(args);
				break;
			}
		}
	}
	else
	{
		_putchar(format[i]);
		count++;
	}
}

va_end(args);
return (count);
}
