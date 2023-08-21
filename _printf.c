#include <stdarg.h>
#include "main.h"

/**
* _printf - produces output according to a format.
* @format: character string
* Return: the number of characters printed(excluding '\0')
*/
int _printf(const char *format, ...)
{
	int count = 0;

	va_list args;
	int (*func)(va_list) = NULL;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) != '%')
		{
			format++;
			func = get_func(format);
			if (*format == '\0')
			{
				va_end(args);
				return (-1);
			}
			else if (func == NULL)
			{
				print1char(*(format - 1));
				print1char(*format);
				count += 2;
			}
			else
			{
				count += func(args);
			}
			else if (*format == '%' && *(format + 1) == '%')
			{
				format++;
				print1char('%');
				count++;
			}
			else
			{
				print1char(*format);
				count++;
			}

			format++;
		}
		va_end(args);
		return (count);
	}
}
