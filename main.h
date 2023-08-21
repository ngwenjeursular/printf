#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * struct print - struct for printer functions
 * @speci: identifier
 * @func: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct {
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
