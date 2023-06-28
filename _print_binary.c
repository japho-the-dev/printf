#include <stdarg.h>
#include "main.h"

/**
 * print_binary - prints an unsigned integer in binary
 * @args: the argument to print
 *
 * Return: the number of characters printed
 */
int print_binary(va_list args)
{
        unsigned int num = va_arg(args, unsigned int);
        int count = 0;

        if (num == 0)
        {
                count += _putchar('0');
        }
        else
        {
                int binary_digits[32];
                int i = 0;

                while (num > 0)
                {
                        binary_digits[i] = num % 2;
                        num /= 2;
                        i++;
                }

                for (int j = i - 1; j >= 0; j--)
                {
                        count += _putchar(binary_digits[j] + '0');
                }
        }

        return (count);
}