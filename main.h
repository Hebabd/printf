#ifndef MAIN
#define MAIN

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

int print_numbers(unsigned int num);
int count_numbers(unsigned int num);
int print_digit(va_list list);
int (*get_function(const char *specifier))(va_list);


#endif /* MAIN */
