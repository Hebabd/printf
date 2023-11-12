#ifndef _MAIN_
#define _MAIN_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct type - Struct type.
 *
 * @specifier: The specifier.
 * @f: The function associated.
 */

typedef struct format
{
	char *specifier;
	int (*f)(va_list); 
} match;

int _putchar(char c);
int printf_char(va_list list);
int _strlen(charstr);
int _strlenc(const char str);
int print_37(void);
int printf_string(va_list list);
int print_numbers(unsigned int num);
int count_numbers(unsigned int num);
int print_digit(va_list list);
int (*get_function(const char *specifier))(va_list);


#endif /* _MAIN_ */
