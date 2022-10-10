#include "push_swap.h"

void	ft_error(void)
{
	ft_printf("ERROR\n");
	exit(1);
}

int	is_sorted(t_data *a)
{
	int	i;

	i = 0;
	reload_data_size(a);
	while (i < a->size - 1)
	{
		if (a->array[i] < a->array[i +1])
			i++;
		else
			return (0);
	}
	ft_printf("Array is sorted.");
	exit(1);
}

int	word_count(char const *s, char c)
{
	int	r;

	r = 0;
	while (*s != '\0')
	{
		if (*s != c && (s[1] == '\0' || s[1] == c))
			r++;
		s++;
	}
	return (r);
}