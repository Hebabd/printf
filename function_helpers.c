#include "main.h"
/**
 * print_numbers - prints an integer.
 * @num: The number to be printed.
 *
 * Return: Int.
 */

int print_numbers(unsigned int num)
{
	int value;
	unsigned int tmp = num;

	if ((tmp / 10) > 0)
		print_numbers(tmp / 10);
	value = _putchar('0' + num % 10);

	return (value);
}

/**
* count_numbers - number count.
* @num: the given number.
*
* Return: Int.
*/

int count_numbers(unsigned int num)
{
	int count = 0;

	while (num > 0)
	{
		count++;
		num /= 10;
	}

	return (count);
}

/**
* count_binary - count how many digits.
* @num: the number.
*
* Return: Int.
*/

int count_binary(unsigned int num)
{
	int count = 0;

	while (num > 0)
	{
		count++;
		num /= 2;
	}

	return (count);
}
