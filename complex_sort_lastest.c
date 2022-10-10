#include "push_swap.h"
//--complex_sort
int find_max(t_data *b)
{
    int index;
    int max;
    int index_of_max;

    max = -2147483648;
    index = 0;
    reload_data_size(b);
    while (index < b->size)
    {
       if (max < b->array[index])
       {
        max = b->array[index];
        index_of_max = index;
       }
       index++;
    }
    return index_of_max;
}

int fix_b_stack(t_data *b)
{
    int temp_step;

    if (rotate_time(find_max(b),b)<rev_rotate_time(find_max(b)))
    {
        temp_step = rotate_time(find_max(b),b);
        while (temp_step--)
            rotate(b);
    }
    else
        temp_step = rev_rotate_time(find_max(b));
        while (temp_step--)
            rev_rotate(b);
}

void push_back_to_a(t_data *a, t_data *b)
{
    if (a->size == 0)
    {
        while (b->size++)
        {
            push(b,0);
            a->size++;
        }
    }
}