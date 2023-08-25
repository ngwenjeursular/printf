#include "main.h"

/**
 * itoa - convert an integer to a string representation in the specified base
 * @num: The integer to be converted.
 * @base: The base to which the integer should be converted(e.g .., decimal or
 * hexadecimal).
 *
 * Return: A pointer to a string representing the connverted integer.
 */
char *itoa(long int num, int base)
{
	static char *array = "0123456789abcdef";
	static char buffer[50];
	char sign = 0;
	char *ptr;
	unsigned long n = num;

	if (num < 0)
	{
		n = -num;
		sign = '-';
	}
	ptr = &buffer[49];
	*ptr = '\0';

	do      {
		*--ptr = array[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--ptr = sign;
	return (ptr);
}
