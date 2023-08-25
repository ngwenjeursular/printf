# include "main.h"

/**
* handler - Format and handle the input string with variable arguments
* @str: The format string
* @list: The va_list containing the arguments.
*
* Return: The size of characters printed
*/
int handler(const char *str, va_list list)
{
	int size = 0, i, ux;

	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == '%')
		{
			ux = percent_handler(str, list, &i);
			if (ux == -1)
			{
				return (-1); /*Error occured*/
			}
			size += ux;
		}
		else
		{
			print1char(str[i]);
			size++;
		}
	}

	return (size);
}

/**
* percent_handler - Handle the formatting of a single '%' charactetr in the
* the format string.
* format string.
* @str: The format string.
* @list: The va_list containing the arguments.
* @p: A pointer to the current position in the format string
*
* Return: The size of characters printed.
*/
int percent_handler(const char *str, va_list list, int *p)
{
	int size, j, number_formats;

	format_info formats[] = {
		{'s', print_str}, {'c', print_char},
		{'d', print_dec}, {'i', print_int},
		/*{'b', print_binary},*/ {'u', print_unsigned},
		{'o', print_octal}, {'x', print_hexadecimal_lower},
		{'X', print_hexadecimal_upper},/* {'p', print_pointer},*/
		/*{'r', print_rev_string}, {'R', print_rot}*/
	};

	*p = *p + 1;

	if (str[*p] == '\0')
		return (-1);

	if (str[*p] == '%')
	{
		print1char('%');
		return (1);
	}

	number_formats = sizeof(formats) / sizeof(formats[0]);
	for (size = j = 0; j < number_formats; j++)
	{
		if (str[*p] == formats[j].speci)
		{
			size = formats[j].func(list);
			return (size);
		}
	}

	print1char('%'), print1char(str[*p]);

	return (2);
}
