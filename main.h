#ifndef MAIN_H
#define MAIN_H

#include <starg.h>
#include <unistd.h>
#include <stdef.h>

/**
 * struct print - struct for printer functions
 * @p: identifier
 * @func2: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct {
    char p;
    int (*func2)(va_list);
} print_f;

#define BUFR_SIZE 1024

int _printf(const char *format, ...);
int handler_specifier(const char *format, va_list total_args, char *bufr, int *index);
void buffr(const char *buffer, int size);
int printc(va_list list);
int print_string(va_list list);
int print_n(va_list list);
int (*cmp_func2(const char a))(va_list);

#endif
