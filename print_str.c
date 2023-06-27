#include "main.h"

/**
 * print_str - directs the string to the stdout
 * @str: string printed
 *
 * Return: no of characters the string has.
 */
int print_str(char *str)
{
	int p = 0;

	if (str == NULL)
	{
		p = print_str("(null)");
	}
	else
	{
		while (str[p] != '\0')
		{
			_putchar(str[p]);
			p++;
		}
	}
	return (p);
}
