#include "main.h"

int is_lowercase(char);
char *string_to_upper(char *);

/**
* print_hex_upper - print an unsigned integer as an uppercase hexadecimal
* @list: The va_list containing the arguments.
*
* Return: The size characters printed.
*/
int print_hex_upper(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned int), 16);

	/*Convert the string to uppercase*/
	p_buff = string_to_upper(p_buff);

	/*print the converted string and get the size*/
	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
/**
* is_lowercase - checks if the character are in the lowercase
* @c: character
*
* Return: 1 or 0
*/
int is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
* string_to_upper - change string to uppercase
* @s: string
*
* Return: string uppercase
*/
char *string_to_upper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_lowercase(s[i]))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
