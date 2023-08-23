#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
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


/*utility*/
int _strlen(const char *);
int print(char *);
char *itoa(long int, int);

/*printf.c*/
int _printf(const char *format, ...);
int (*get_func(const char *format))(va_list);

/*printers*/
int print_str(va_list args);
int print_char(va_list args);
int print_pct(va_list args);
int print_dec(va_list args);
int print_int(va_list args);
int print_hexadecimal_upper(va_list list);
int print_octal(va_list list);
int print_hexadecimal_lower(va_list list);
int print_unsigned(va_list list);
int print_binary(unsigned int num);

/*handler.c */
int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);
int print1char(char);
int b_handler(va_list args);
int p_handler(va_list args);
void print_addr(void *ptr);

/* print1char.c */
int print1char(char);
void write_buff(void);
#endif /*MAIN_H*/
