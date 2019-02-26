#include "list.h"

void	swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *head;
	t_list *current;

	head = lst;
	while (head)
	{
		current = head->next;
		while (current)
		{
			if ((*cmp)(head->data, current->data) == 0)
				swap(&head->data, &current->data);
			current = current->next;
		}
		head = head->next;
	}
	return (lst);
}
