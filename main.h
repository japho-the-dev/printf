#ifndef PRINTF_H
#define PRINTF_H
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int print_int(int value);
int _putchar(char c);
int _printf(const char *format, ...);
int print_str(char *str);

#endif
