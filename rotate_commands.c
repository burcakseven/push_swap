#include "push_swap.h"
//✔️✔️
void	rotate(t_data *node, int flag) //✔️✔️
{
	int	tmp;
	int	i;

	reload_data_size(node);
	i = node->size - 1;
	tmp = node->array[node->size - 1];
	while (i > 1)
	{
		node->array[i] = node->array[i - 1];
		i--;
	}
	node->array[0] = tmp;
	if (flag != 0)
		ft_printf("rr%c\n", node->type);
}

void	rr(t_data *a, t_data *b)//✔️✔️
{
	rotate(a, 0);
	rotate(b, 0);
	ft_printf("rr\n");
}

void	rev_rotate(t_data *node, int flag)//✔️✔️
{
	int	tmp;
	int	i;

	i = 0;
	tmp = node->array[0];
	reload_data_size(node);
	while (i < node->size - 1)
	{
		node->array[i] = node->array[i + 1];
		i++;
	}
	node->array[node->size - 1] = tmp;
	if (flag != 0)
		ft_printf("r%c\n", node->type);
}

void	rrr(t_data *a, t_data *b)//✔️✔️
{
	rev_rotate(a, 0);
	rev_rotate(b, 0);
	ft_printf("rrr\n");
}
