#include "main.h"
/**
 *_print_rev_recursion(char *s)- function that prints string in reverse
 * @s: string
 * Result 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		print_rev(s + 1);
		_putchar(*s);
	}
}
