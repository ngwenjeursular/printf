#include "main.h"

/**
 * cmp_func2 - Entry point
 * @a: character.
 *
 * Return: 0 success
 */
int (*cmp_func2(const char a))(va_list)
{
	print_f printf[] = {
		{'c', printc},
		{'s', print_string},
		{'d', print_n},
		{'i', print_n},
		{'\0', NULL}
	};

	int j;

	for (j = 0; printf[j].p != '\0'; j++)
	{
		if (printf[j].p == a)
		{
			return (printf[j].func);
		}
	}

	return (0);
}
