#include <unistd.h>

#define BUFR_SIZE 1024

/**
 * print1char - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print1char(char c)
{
	return (write(1, &c, 1));
}

/**
* write_buff - function that writes into a buffer
*
* Return: no return
*/
void write_buff(void)
{
	static char bufr[BUFR_SIZE];
	static int bufr_index;

	if (bufr_index >= BUFR_SIZE)
	{
		write(STDOUT_FILENO, bufr, bufr_index);
		bufr_index = 0;
	}
}
