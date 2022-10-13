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
# include "libft/libft.h"

typedef struct s_data
{
	int		*array;
	int		size;
	char	type;
}	t_data;

//basic_sort.c
int untill_three_sort(t_data *a);
int rev_untill_three_sort(t_data *b);
void compare_and_push(t_data *a, t_data *b);
void fix_a_sort(t_data *a);
void sort_until_six(t_data *a, t_data *b);
//complex_sort_lastest
int find_max(t_data *b);
void fix_b_stack(t_data *b);
void push_back_to_a(t_data *a, t_data *b);
//complex_sort.c
void fill_data(int tmp, int *min_step, \
int *which_to_apply, int apply_value);
int which_location_use(int a_to_push,t_data *b);
int min_way_for_one(int index,t_data *a, t_data *b,int *apply);
void best_way_to_push(t_data *a,t_data *b);
void complex_sort(t_data *a, t_data *b);
//controls_1.c
void	ft_error(void);
int	is_sorted(t_data *a);
int	is_rev_sorted_for_b(t_data *b);
int	word_count(char const *s, char c);
//controls_2.c
int	number_count(int argc, char **argv);
void	ft_free(char **str);
int	ft_is_numeric(char *str);
void	take_args(t_data *a, t_data *b, int argc, char **argv);
int	ft_checkdouble(t_data *a);
//push_swap_commands.c
void	swap(t_data *node, int flag); //Best_way_to_push
void	ss(t_data *a, t_data *b);
void	push(t_data *a, t_data *b);
//push_swap.c
void select_the_source_and_sort(t_data *a, t_data *b);
int main(int argc, char **av);
//rotate_commands.c
void	rotate(t_data *node, int flag);
void	rr(t_data *a, t_data *b);
void	rev_rotate(t_data *node, int flag);
void	rrr(t_data *a, t_data *b);
//to_the_top.c
// void reload_data_size(t_data *stack);
int rev_rotate_time(int index); //✔️✔️
int rotate_time(int index, t_data *stack); //✔️✔️
int calculate_double_total(int step1, int step2); //✔️✔️
int calculate_same_step(int step1, int step2);//✔️✔️
//use_commands.c
void r_to_r(t_data *a, t_data *b, int indexa, int indexb);//✔️✔️ Best_way_to_push
void r_to_rr(t_data *a, t_data *b,int indexa, int indexb);//✔️✔️Best_way_to_push
void rr_to_r(t_data *a, t_data *b,int indexa, int indexb);//✔️✔️Best_way_to_push
void rr_to_rr(t_data *a, t_data *b,int indexa, int indexb);//rev-rot ✔️✔️Best_way_to_push
void send_to_b(t_data *a, t_data *b, int apply,int *index);//✔️✔️Best_way_to_push
#endif
