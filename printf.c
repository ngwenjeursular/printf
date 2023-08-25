#include "main.h"

/**
 *_printf - prints to output according to format
 *@format: character string
 *
 *Return: number of characters printed(excluding '\0')
 */

int _printf(const char *format, ...)
{
	int i = 0, printed_chars = 0;
	int (*func)(va_list);
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++; /* move past the '%' */

			/* Handle conversion specifiers */
			func  = get_func(format + i);

			if (func != NULL)
			{
				printed_chars += func(args);
			}
			else
			{
				/* Handle unsupported specifier*/
				print1char('%');
				print1char(format[i]);
				printed_chars += 2;
			}
		}
		else
		{
			print1char(format[i]);
			printed_chars++;
		}
	}
	va_end(args);

	return (printed_chars);
}
