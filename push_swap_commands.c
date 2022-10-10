#include "push_swap.h"

void	swap(t_data *node, int flag) //Best_way_to_push
{
	int	tmp;
	int index;

	reload_data_size(node);
	index = node->size -1;
	if (node->size >= 2)
	{
		tmp = node->array[index-1];
		node->array[index-1] = node->array[index];
		node->array[index] = tmp;
	}
	if (flag != 0)
		ft_printf("s%c", node->type);
}

void	ss(t_data *a, t_data *b)
{
	swap(a, 0);
	swap(b, 0);
	ft_printf("ss\n");
}

void	push(t_data *a, t_data *b)
{
	int index;

	reload_data_size(a);
	reload_data_size(b);
	index = b->size-1;
	b->array[b->size] = a->array[a->size-1] ;
	b->size++;

	a->array[a->size] = '\0';
	a->size--;
	ft_printf("p%c\n", b->type);
}
