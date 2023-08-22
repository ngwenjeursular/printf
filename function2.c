#include "main.h"
/**
 * print_int - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_int(va_list args)
{
	int k = va_arg(args, int);
	int num, last = k % 10, digit, exp = 1;
	int  i = 1;

	k = k / 10;
	num = k;

	if (last < 0)
	{
		print1char('-');
		num = -num;
		k = -k;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = k;
		while (exp > 0)
		{
			digit = num / exp;
			print1char(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	print1char(last + '0');

	return (i);
}

/**
 * print_dec - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */

int print_dec(va_list args)
{
	int k = va_arg(args, int);
	int num, last = k % 10, digit;
	int  d = 1;
	int exp = 1;

	k = k / 10;
	num = k;

	if (last < 0)
	{
		print1char('-');
		num = -num;
		k = -k;
		last = -last;
		d++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = k;
		while (exp > 0)
		{
			digit = num / exp;
			print1char(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			d++;
		}
	}
	print1char(last + '0');

	return (d);
}

/**
 * int2binary - helper func to convert int to binary
 * @num: number to be converted
 * Return: number in binary
 */
int int2binary(unsigned int num)
{
	if (num == 0)
	{
		print1char('0');
		return (1);
	}
	else if (num == 1)
	{
		print1char('1');
		return (1);
	}
	else
	{
		int digits_ptd = int2binary(num / 2);

		print1char('0' + (num % 2));
		return (digits_ptd + 1);
	}
}
