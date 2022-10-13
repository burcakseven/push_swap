#include "push_swap.h"

void	swap(t_data *node, int flag) //Best_way_to_push
{
	int	tmp;
	int index;

	// reload_data_size(node);
	index = node->size -1;
	if (node->size >= 2)
	{
		tmp = node->array[index-1];
		node->array[index-1] = node->array[index];
		node->array[index] = tmp;
	}
	if (flag != 0)
		printf("s%c\n", node->type);
}

void	ss(t_data *a, t_data *b)
{
	swap(a, 0);
	swap(b, 0);
	printf("ss\n");
}

void	push(t_data *a, t_data *b)
{

	// reload_data_size(a);
	// reload_data_size(b);
	b->array[b->size] = a->array[a->size-1] ;
	b->size++;

	a->array[a->size-1] = '\0';
	a->size--;
	printf("array b: %i %i %i %i %i %i \n",b->array[0],b->array[1],b->array[2],b->array[3],b->array[4],b->array[5]);
	printf("p%c\n", b->type);
}
