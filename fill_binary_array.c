#include "main.h"
/**
 * fill_binary_array - prints decimal in binary
 * @binary: pointer to binary
 * @int_take: input number
 * @isneg: if input number is negative
 * @limit: size of the binary
 * Return: number of chars printed.
 */
char *fill_binary_array(char *binary, long int int_take, int isneg, int limit)
{
	int i;

	for (i = 0; i < limit; i++)
		binary[i] = '0';
	binary[limit] = '\0';
	for (i = limit - 1; int_take > 1; i--)
	{
		if (int_take == 2)
			binary[i] = '0';
		else
			binary[i] = (int_take % 2) + '0';
		int_take /= 2;
	}
	if (int_take != 0)
		binary[i] = '1';
	if (isneg)
	{
		for (i = 0; binary[i]; i++)
			if (binary[i] == '0')
				binary[i] = '1';
			else
				binary[i] = '0';
	}
	return (binary);
}
