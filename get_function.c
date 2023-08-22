#include "main.h"

/**
 * get_func - check for valid specifier
 * @format: a character to check
 * Return: a pointer to the function
 */
int (*get_func(const char *format))(va_list)
{
	format_info formats[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_pct},
		{"d", print_dec},
		{"i", print_dec},
		{"b", b_handler},
		{NULL, NULL}

	};

	int j;

	for (j = 0; formats[j].speci; j++)
	{
		if (*format == *(formats[j].speci))
		{
			return (formats[j].func);
		}
	}
	return (NULL);
}
