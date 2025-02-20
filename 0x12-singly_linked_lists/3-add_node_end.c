#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 * Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
char *dup;
int len;
list_t *new, *last;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

dup = strdup(str);
if (str == NULL)
{
free(new);
return (NULL);
}
or (len = 0; str[len];)
len++;

new->str = dup;
new->len = len;
new->next = NULL;

if (*head == NULL)
*head = new;

else 
{
last = *head;
while (last->next != NULL)
last = last->next;
last->next = new;
}

return (*head);
}
