#include "main.h"
/**
 * fill_oct_array - writes the character c to stdout
 * @bnr: array where is stored the binary.
 * @oct: array where is stored the octal.
 *
 * Return: binary array.
 */
char *fill_oct_array(char *bnr, char *oct)
{
	int op, i, j, oct1, limit;

	oct[11] = '\0';
	for (i = 31, oct1 = 10; i >= 0; i--, oct1--)
	{
		if (i > 1)
		{
			limit = 4;
		}
		else
		{
			limit = 2;
		}

		for (op = 0, j = 1; j <= limit; j *= 2, i--)
		{
			op = ((bnr[i] - '0') * j) + op;
		}
		i++;
		oct[oct1] = op + '0';
	}
	return (oct);
}
