#include "main.h"

/**
 * print_oct- prints a decimal in hexadecimal
 * @args: input string
 *
 * Return: number of chars printed
 */
int print_oct(va_list args)
{
	int int_input, i, isnegative, count, first_digit;
	char *octal, *binary;

	int_input = va_arg(args, int);
	isnegative = 0;

	if (int_input == 0)
	{
		print1char('0');
		return (1);
	}
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}
	binary = malloc(sizeof(char) * (32 + 1));
	binary = fill_binary_array(binary, int_input, isnegative, 32);

	octal = malloc(sizeof(char) * (11 + 1));
	octal = fill_oct_array(binary, octal);

	for (first_digit = i = count = 0; octal[i]; i++)
	{
		if (octal[i] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			print1char(octal[i]);
			count++;
		}
	}
	free(binary);
	free(octal);
	return (count);
}
