#include "main.h"
/**
 *_printf - custom of the normal printf function
 *@format: what to be printed
 *Return: count of output
 */
int _printf (const char *format, ...)
{
	int i;
	int count;
	char *str;

	va_list(pargs);

	i = 0;
	count = 0;
	va_start(pargs, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
				if (format[i] == 'c')
				{
					count += _putchar(va_arg(pargs, int));
				}
					else if (format[i] == 's')
					{
						str = va_arg(pargs, char *);
						if (str == NULL)
						{
							return (-1);
						}
						while (*str != '\0')
						{
							count += _putchar(*str++);
						}
					}
				else if (format[i] == '%')
				{
					count += _putchar('%');
				}
				else if ((format[i] == 'd') || (format[i] == 'i'))
				{
					count += print_int(va_arg(pargs, int));
				}
		}
				else
				{
					count += _putchar(format[i]);
				}
					i++;
		}
			va_end(pargs);
			return (count);
}
