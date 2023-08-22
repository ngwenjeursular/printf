#include "main.h"

/**
* print_unt - prints an unsigned integer
* @args: input string
*
* Return: number of chars printed
*/
int print_unt(va_list args)
{
	unsigned int int_take, int_tmp, i, div;
	int count = 0;

	int_take = va_arg(args, unsigned int);
	int_tmp = int_take;
	div = 1;

	while (int_tmp > 9)
	{
		div *= 10;
		int_tmp /= 10;
	}
	for (i = 0; div > 0; div /= 10, i++)
	{
		print1char((int_take / div) % 10 + '0');
		count++;
	}
	return (count);
}
