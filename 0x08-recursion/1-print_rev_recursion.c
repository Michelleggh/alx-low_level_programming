#include "main.h"

/**
 * _print_rev_recursion.c - prints a string, followed by a new line
 * @s: string to print
 * Description: print string using recursion
 * Return: nothing
 */

void _print_rev_recursion.c(char *s)
{
int i;

i = 0;

if (s[i] != '\0')
{
_putchar(*s);
_print_rev_recursion(s + 1);
}
else
_putchar('\n');
}
