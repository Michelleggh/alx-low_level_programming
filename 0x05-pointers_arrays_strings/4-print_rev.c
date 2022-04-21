#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: A pointer to an int that will be changed
 *
 * Return: void which means our answer is correct
 */

void print_rev(char *s)
{
	int i, j, len;

	i = 0
	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar (s[i]);
	}
	_putchar ('\n');
}
