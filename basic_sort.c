#include "push_swap.h"

void untill_three_sort(t_data *a)
{
    reload_data_size(a);
    is_sorted(a);
    if (a->array[a->size-1]>a->array[a->size-2])
    {
        swap(a,1);
        is_sorted(a);
    }
    rotate(a);
    is_sorted(a);
    two_three_sort(a);
}

void rev_untill_three_sort(t_data *b)
{
    reload_data_size(b);
    is_rev_sorted_for_b(b);
    if (b->array[b->size-1]<b->array[b->size-2])
    {
        swap(b,1);
        is_rev_sorted_for_b(b);
    }
    rotate(b);
    is_rev_sorted_for_b(b);
    two_three_sort(b);
}

void compare_and_push(t_data *a, t_data *b)
{
    int i;

    i = 1;
    while (b->size)
    {
        while (a->array[a->size-i]>b->array[b->size-1])
        {
            push(b,1);
            b->size--;
        }
        rotate(a);
    }
    
}

void sort_until_six(t_data *a, t_data *b)
{
    if (a->size <= 3)
    {
        two_three_sort(a);
    }
    else
    {
        while (a->size > 3)
        {
            push(a,1);
            a->size--;
            b->size++;
        }
        untill_three_sort(a);
        rev_untill_three_sort(b);
        compare_and_push(a,b);
    }
    
    
}