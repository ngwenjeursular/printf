#include "main.h"

/**
 *_printf - prints to output according to format
 *@format: character string
 *
 *Return: number of characters printed(excluding '\0')
 */

int _printf(const char *format, ...)
{
	int i = 0, j = 0;
	int (*func)(va_list);
	va_list args;

	va_start(args, format);
	if (format == NULL || !format[i + 1])
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1])
			{
				if (format[i + 1] == '%')
				{
					/* print  a literal '%' */
					j += print1char('%');
					i++;
				} else
				{
					func = get_func(format + i + 1);
					if (func)
					{
						j += func(args);
						i++;
					} else
					{
						/*print the unsupported specifier as is*/
						j += print1char(format[i]);
					}
				}
			}
		} else
		{
			j += print1char(format[i]);
		} i++;
	}
	va_end(args);
	return (j);
}
