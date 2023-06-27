#include "main.h"

/**
 * print_int - Prints an integer to standard output
 * @value: The number to be printed
 *
 * Return: Length of string printed - 1
 */

int print_int(int value)
{
	int digit, length = 0;

	if (value == 0)
	{
		length += _putchar('0');
		return (length);
	}
	if (value == -2147483648)
	{
		length += print_str("-2147483648");
		return (length);
	}
	if (value < 0)
	{
		length += _putchar('-');
		value = -value;
	}
	digit = value % 10;
	value = value / 10;

	if (value)
		length += print_int(value);
	length += _putchar(digit + '0');
	return (length);
}
