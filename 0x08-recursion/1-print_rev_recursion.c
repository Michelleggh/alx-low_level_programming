#include "main.h"

/**
 * _print_rev_recursion.c - prints a string in reverse
 * @s: string to print
 * Description: print string using recursion
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}

