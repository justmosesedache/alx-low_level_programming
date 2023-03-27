#include "main.h"
/**
 * print_rev - prints string in rev
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int a, i;

	while (s[a] != '\0')
		a++;
	for (i = a - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
