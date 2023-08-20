#include "main.h"

/**
 * _printf - this is a custom printf function
 * @format: number of arguments in the function
 * Return: number of characters printed (excluding the '\0'
 */

int _printf(const char *format, ...)
{
	const char *ptr = format;
	unsigned int total_chars = 0;

	va_list total_args;

	va_start(total_args, format);

	if (format == NULL)
		return (-1);
	for (; *ptr != '\0'; ptr++)
	{
		if (*ptr == '%')
		{
			handler_specifier(ptr, total_args, bufr, &bufr_index);
			ptr++;
		}
		else
		{
			bufr[bufr_index] = *ptr;
			bufr_index++;
		}
		if (bufr_index == BUFR_SIZE)
		{
			buffr(bufr, bufr_index);
			bufr_index = 0;
		}
	}
	va_end(total_args);
	if (bufr_index > 0)
		buffr(bufr, bufr_index);

	return (bufr_index);
}
