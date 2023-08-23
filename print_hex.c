#include "main.h"

/**
* print_hexadecimal_lower - print the unsigned integer as a lowercase hexadecimal.
* @list: the va_list containing the arguments.
*
* Return: The size of characters printed.
*/
int print_hexadecimal_lower(va_list list)
{
	char *p_buff;
	int size;

	/*Get the unsigned integer from the va_valist and convert to hex*/
	p_buff = itoa(va_arg(list, unsigned int), 16);

	/*print the converted string and get the size*/
	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
