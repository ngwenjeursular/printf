#include "main.h"

/**
 * print_dec - prints decimal
 * @args: the argument decimal
 * Return: counter
 */
int print_dec(va_list args)
{
	int value = va_arg(args, int);
	int count = 0, i;

	if (value < 0)
	{
		print1char('-');
		value = -value;
		count++;
	}
	char buffer[20];
	int index = 0;

	do
	{
		buffer[index++] = '0' + (value % 10);
		value /= 10;
		count++;
	}
	while (value >0);

	for (i = index -1; i >= 0; i--)
	{
		print1char(buffe[i]);
	}

	return (count);
}
