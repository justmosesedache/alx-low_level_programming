#include "main.h"
/**
 * void _puts_recursion(char *s)- function that prints a string follo
wed by a new line
 *@s: string
 * Return 0
*/
void _puts_recursion(char *s)
{
	if(*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}      
