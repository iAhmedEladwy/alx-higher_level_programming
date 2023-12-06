#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
*check_cycle - checks if a linked list contains a cycle
*@list: linked list
*Return: 1 if the list has a cycle, 0 if it doesn't
*/
int check_cycle(listint_t *list)
{
listint_t *slow = list, *fast = list;
while (fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
return (1);
}
return (0);
}
