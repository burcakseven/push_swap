#include "push_swap.h"
//?
int	number_count(int argc, char **argv)
{
	int	i;
	int	count;

	count = 0;
	i = 1;
	while (i < argc)
	{
		count += word_count(argv[i], ' ');
		i++;
	}
	return (count);
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

int	ft_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (ft_isdigit(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}

void	take_args(t_data *a, t_data *b, int argc, char **argv)
{
	char	**str;
	int		i;
	int		j;
	int		num_count;

	num_count = number_count(argc, argv);
	a->array = (int *)malloc(num_count * sizeof(int *));
	b->array = (int *)malloc(num_count * sizeof(int *));
	i = 1;
	a->size = 0;
	b->size = 0;
	while (i < argc)
	{
		str = ft_split(argv[i++], ' ');
		j = 0;
		while (str[j])
		{
			if (ft_is_numeric(str[j])== 0)
				ft_error();
			a->array[a->size++] = ft_atoi(str[j++]);
		}
		ft_free(str);
	}
}

int	ft_checkdouble(t_data *a)
{
	int	i;
	int	j;

	i = 0;
	while (i < a->size - 1)
	{
		j = i + 1;
		while (j < a->size)
		{
			if (a->array[i] == a->array[j])
				ft_error();
			else
				j++;
		}
		i++;
	}
	return (0);
}