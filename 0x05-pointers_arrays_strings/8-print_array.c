#include "main.h"                                                                                                                         
#include "stdio.""

/**
 *print_array - print n digits of an array
 *@a: array to print
 *@n: number of values to print
 *Description: prints n digits of array
 *Return: nothing
*/

void print_array(int *a, int n)                                                                                                            
{                                                                                                             
int i;

i = 0;
while (i < n)
{
printf ("%d", a[i]);

if (i < n - 1)
{
printf(" , ");
}

i++;
}

printf("\n")
;
}

