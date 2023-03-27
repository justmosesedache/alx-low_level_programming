#include "main.h"
/**
 *_puts(char *str)- a function that prints string to stdout
 * @str: assigned value for string
 * Return: length of string
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
