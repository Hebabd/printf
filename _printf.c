#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: The given string.
 *
 * Return: Int.
 */

int _printf(const char *format, ...)
{
	va_list list;
	int count = 0;
	int (*func)(va_list) = NULL;

	va_start(list, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1) != '%')
		{
			format++;
			func = get_function(format);

			if (*format == '\0')
				return (-1);
			else if (func == NULL)
			{
				_putchar(*(format - 1));
				_putchar(*format);
				count += 2;
			}
			else
				count += func(list);
		}
		else if (*format == '%' && *(format + 1) == '%')
		{
			format++;
			_putchar('%');
			count++;
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(list);
	return (count);
}
