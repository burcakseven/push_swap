#include "push_swap.h"

void reload_data_size(t_data *stack)
{
    int i;
    i = 0;

    while (stack->array[i])
        stack->size = ++i;
}

int rotate_time(int index) //✔️✔️
{
    int rotate_time;
    rotate_time = index +1;
    return rotate_time;
}

int rev_rotate_time(int index, t_data *stack) //✔️✔️
{
    reload_data_size(stack);
    int rev_rotate_time;
    rev_rotate_time = stack->size - (index+1);
    return rev_rotate_time;
}

int calculate_double_total(int step1, int step2) //✔️✔️
{
    if (step1 > step2)
        return step1;
    return step2;
}
int calculate_same_step(int step1, int step2)//✔️✔️
{
    if (step1 > step2)
         return step2;
     return step1;
 }