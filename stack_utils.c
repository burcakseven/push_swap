#include "push_swap.h"

void	check_input(char **str)
{
	char	*ptr;
	short	allspace;

	ptr = *str;
	while (ptr)
	{
		scan_chars(ptr);
		ptr = *(++str);
	}
}

int	get_total_size(char **str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i += wordnum(*str);
		++str;
	}
	return (i);
}

void	set_object(t_stack *obj, int size, t_stack *b)
{
	obj->stack = malloc(sizeof(int) * size);
	if (!(obj->stack))
		terminate();
	obj->size = size;
	obj->name = 'a';
	b->size = 0;
	b->name = 'b';
}

void	create_stack(char **av, int size, t_stack *obj, t_stack *b)
{
	char	*ptr;
	int		i;

	set_object(obj, size, b);
	i = 0;
	ptr = *av;
	while (ptr)
	{
		while (*ptr)
		{
			while (*ptr && ft_isspace(*ptr))
				++ptr;
			if (!ft_isspace(*ptr))
			{
				obj->stack[i] = ft_atoi(ptr, obj->stack);
				check_double(obj->stack, obj->stack[i], i);
				i++;
			}
			while (*ptr && !ft_isspace(*ptr))
				++ptr;
		}
		ptr = *(++av);
	}
}
