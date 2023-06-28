#include <stdarg.h>
#include "main.h"
/**
 *print_binary - prints binary argument
 *@args: argument to print
 *Return: numbers of character printed
 */
int print_binary(va_list t_args)
{
	unsigned int num = va_arg(t_args, unsigned int);
	int count = 0;
	int binary_digits[32];
	int i = 0;
	int j = 0;

	if (num == 0)
	{
		count += _putchar('0');
	}
	else
	{
		while (num > 0)
		{
			binary_digits[i] = num % 2;
			num /= 2;
			i++;
		}
		for (j >= 0; j--)
		{
			count += _putchar(binary_digits[j] + '0');
		}
	}
	return (count);
}
