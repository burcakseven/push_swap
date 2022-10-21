#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;

	if (ac > 1)
	{
		check_input(++av);
		create_stack(av, get_total_size(av), &a, &b);
		sort(&a, &b);
		free(a.stack);
	}
	return (0);
}
