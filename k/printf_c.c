#include "main.h"


/**
 * printf_char - prints a char
 * @val: rguments.
 * Return: 1.
 */
int printf_char(va_list list)
{
        char str;

        str = va_arg(val, int);
        _putchar(str);
        return (1);
}
