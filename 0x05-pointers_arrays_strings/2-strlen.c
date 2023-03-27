#include "main.h"
/**
 * _strlen - a function that returns length of a string
 * @s: char to check length of string
 * Description: this will return the length of a string
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
