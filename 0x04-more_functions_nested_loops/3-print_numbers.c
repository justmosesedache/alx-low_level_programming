#include "main.h"
/**
 * print_numbers(void)- a function that prints the numbers, from 0 to 9,
 * Return: 0
 *
*/

void print_numbers(void)
{
	char i;
	for (i = 0; i <= 9; i++)
	{
		_putchar("%d", i);
	}
	_putchar('\n')
	return (0);
}
