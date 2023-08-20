#ifndef MAIN_H
#define MAIN_H

#include <starg.h>
#include <unistd.h>
#include <stdef.h>

#define BUFR_SIZE 1024

int _printf(const char *format, ...);
int handler_specifier(const char *format, va_list total_args, char *bufr, int *index);
void buffr(const char *buffer, int size);
#endif
