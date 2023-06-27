#include <stdio.h>
/**
 * print_int - print integers
 *@n : input integer
 * Return: count of the integers counted
 */
int print_int(int n)
{
	int count;

	count = 0;
	if (n < 0)
	{
		count  += putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		count += print_int(n / 10);
	}
	count += putchar(n % 10 + '0');
	return (count);
}
