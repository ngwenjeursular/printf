#include "main.h"

/**
* print_octal - print an unsigned integer as an octal
* @list: The va_list containing the arguments.
*
* Return: The size of characters printed.
*/
int print_octal(va_list list)
{
	char *p_buff;
	int size;

	/*Get the unsigned integer from the va_list and convert to octal*/
	p_buff = itoa(va_arg(list, unsigned int), 8);

	/*print the converted string and get the size*/
	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
