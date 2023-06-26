#include <stdio.h>
#include <"main.h">

/**
 * _printf - custom of the normal printf function
 * @format: output to be printed
 *
 * Return: total number of characters in an output
 */
int _printf(char *format, ...)
{
	int p = 0;
	int total_count = 0;
	va_list t_args;

	va_start(t_args, format);
	if (format == NULL)
	{
		return (-1);
	}

	while (format[p])
	{
		if (format[p] != '%')
			total_count += _putchar(format[p]);
		else
		{
			p++;
			if (!format[p])
				return (-1);
			total_count += _format_handler(t_args, format[p]);
		}
		p++;
	}
	va_end(t_args);

	return (total_count);
}
/**
 *_format_handler - Determines what is accepted by _printf function
 *
 * @t_args: List of arguments supplied
 * @current_spec: whatever is to be printed
 *
 * Return: the total size or length of the arguments handled
 */

int _format_handler (va_list t_args, char current_spec)
{
	int total_count = 0;

	if (current_spec == 'c')
	{
		total_count += _putchar(va_arg(t_args, int));
	}
	else if (spec == 's')
	{
		total_count += _putchar(va_arg(t_args, char *));
	}
	else if (current_spec == 'd' || current_spec == 'i')
	{
		total_count += print_int(va_arg(t_args, int));
	}
	else if (current_spec == '%')
	{
		total_count += _putchar('%');
	}
	else
	{
		total_count += _putchar('%');
		total_count += _putchar(current_spec);
	}
	return (total_count);
}

