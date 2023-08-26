#ifndef _MAIN_
#define _MAIN_

#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

#define BUFR_SIZE 1024

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
	char speci;
	int (*func)(va_list);
} format_info;

/*printf.c*/
int _printf(const char *format, ...);
int (*get_func(char specifier))(va_list);

/*printers*/
int print_str(va_list args);
int print_char(va_list args);
int print_pct(va_list args);
int print_dec(va_list args);
int print_int(va_list args);
int b_handler(va_list args);
int p_handler(va_list args);
int print_binary(unsigned int num);
void print_addr(void *ptr);

/* print1char.c */
int print1char(char);
void write_buff(void);
#endif /*MAIN_H*/
