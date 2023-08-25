#include "main.h"

/**
* print_unsigned - print an unsigned integer.
* @list: The va_list containing the arguments.
*
* Return: The size of characters printed.
*/
int print_unsigned(va_list list)
{
	char *p_buff;
	int size;

	/*Get the unsugned integer from the va_list and  convert to decimal*/
	p_buff = itoa(va_arg(list, unsigned int), 10);

	/*print the converted string and get the size*/
	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
