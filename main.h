#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * struct func_type - struct for specifier and associated function.
 * @speci: pointer to the specifier string.
 * @func: pointer to the function associated with the specifier.
 *
 * Description: struct that stores pointers to functions for handling
 * handling different format specifiers.
 */
typedef struct func_type
{
	const char *speci;
	int (*func)(va_list);
} format_info;



int _printf(const char *format, ...);
int (*get_func(const char *format))(va_list);
int print_str(va_list args);
int print_char(va_list args);
int print_pct(va_list args);
int print_dec(va_list args);
int print1char(char);

#endif
