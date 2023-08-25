#include "main.h"

/**
 * get_func - check for valid specifier
 * @specifier: a character to check
 * Return: a pointer to the function
 */
int (*get_func(const char *specifier))(va_list)
{
	format_info formats[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_pct},
		{"d", print_dec},
		{"i", print_dec},
		{"b", b_handler},
		{"p", p_handler},
		{NULL,NULL},
		

	};

	int i;

	for (i = 0; formats[i].speci != NULL; i++)
	{
		if (strcmp(formats[i].speci, specifier) == 0)
		{
			return (formats[i].func);
		}
	}
	/*Return a default functionm or handler error*/
	return (NULL);
}
