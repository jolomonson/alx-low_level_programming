#include "main.h"

/**
 * print_rev - prints a  string in reverse
 *@s: string being printed in reverse
 * Return: Aways 0.
 */

void print_rev(char *s)
{
	int i, c = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		c++;
	}
	for (i = c - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
