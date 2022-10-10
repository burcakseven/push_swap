/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 03:15:57 by tyildiri          #+#    #+#             */
/*   Updated: 2022/09/08 03:16:01 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include "Libft/libft.h"

typedef struct s_data
{
	int		*array;
	int		size;
	char	type;
}	t_data;

void data_sort(t_data *a, t_data *b);

//to_the_top
int rotate_time(int index);
int rev_rotate_time(int index, t_data *stack);
int calculate_same(int step1, int step2);
#endif
