#ifndef PRINTF_H
#define PRINTF_H
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int print_str(char *str);
int _putchar(char c);
int _printf(const char *format, ...);
int print_int(int value);
int _format_handler (va_list t_args, char current_spec);
int print_binary(va_list t_args);
#endif
