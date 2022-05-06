#include "main.h"
#include <stdlib.h>

/**
 * create_array - allocate space for an array
 * @size:unssigned int
 * @c:char
 * Return:char
 */
char *create_array(unsigned int size, char c)
{

unsigned int i;
char *x;

if (size == 0)
return (NULL);
x = malloc(size * sizeof(char));
if (x == NULL)
{
return (NULL);
}
trtow - splits sentence into words
* @str: the sentence string
* *
* * Return: pointer to string array
* */
char **strtow(char *str)
{
	int words = 0, in_word = 0;
	char **ret, *word_start;
	
	if (!str || !*str || !wordcount(str))
		return (NULL);
	ret = malloc(sizeof(char *) * (wordcount(str) + 1));
	while (1)
	{
		if (*str == ' ' || !*str)
		{
			if (in_word)
			{
				ret[words] = malloc(sizeof(char) * (in_word + 1));
				if (!ret[words])
				{
					return (NULL);
				}
				copychars(ret[words], word_start, str - 1);
				words++;
				in_word = 0;
			}
			if (!*str)
				break;
		}
		else
		{
			if (!in_word++)
				word_start = str;
		}
		str++;
	}
	ret[words] = 0;
	return (ret);
}
or (i = 0; i < size; i++)
{
x[i] = c;
}
return (x);
}
