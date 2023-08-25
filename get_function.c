#include "main.h"

/**
 * get_func - check for valid specifier
 * @specifier: a character to check
 * Return: a pointer to the function
 */
int (*get_func(char specifier))(va_list)
{
	format_info formats[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_pct},
		{'d', print_dec},
		{'i', print_dec},
		{'b', b_handler},
		{'p', p_handler},

	};

	size_t  i;

	for (i = 0; i < sizeof(formats) / sizeof(formats[0]); i++)
	{
		if (formats[i].speci == specifier)
		{
			return (formats[i].func);
		}
	}
	return (NULL);
}
