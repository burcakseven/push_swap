#include "push_swap.h"

void fill_data(int tmp, int *min_step, \
int *which_to_apply, int apply_value)//✔️✔️Best_way_to_push
{
	*which_to_apply = apply_value;
	*min_step = tmp;
}

int which_location_use(int a_to_push,t_data *b)//✔️✔️Best_way_to_push
{
    int i = 0;
    int b_index = 0;
    int temp = b->array[0];
    while (b->array[i])
    {
        if (b->array[b_index]< a_to_push && temp < b->array[b_index])
        {
            temp = b->array[b_index];
            b_index = i;
        }
        i++;
    }
    return b_index;
}

int min_way_for_one(int index,t_data *a, t_data *b,int *apply)// 2147483647 ✔️✔️Best_way_to_push
{
    int min_step;
    int b_index;
    int temp;

    min_step = 2147483647;
    b_index = which_location_use(a->array[index],b);
    temp = calculate_same_total(rotate_time(index,a),rotate_time(b_index,b));
    if (temp < min_step)//1
        fill_data(temp, &min_step, apply, 1);
    temp = rev_rotate_time(index)+rotate_time(b_index,b);
    if (temp < min_step)//2
        fill_data(temp, &min_step, apply, 2);
    temp = calculate_same_total(rev_rotate_time(index),rev_rotate_time(b_index));
    if (temp < min_step)//3
        fill_data(temp, &min_step, apply, 3);
    temp = rev_rotate_time(b_index)+rotate_time(index,a);
    if (temp < min_step)//4
        fill_data(temp, &min_step, apply, 4);
    
return min_step;
}

void best_way_to_push(t_data *a,t_data *b)
{
    int index[2];
    int min_step = 2147483647;
    int apply[2];
    int temp;
    int i;

    i = 0;
    while (a->array[i])
    {
        temp = min_way_for_one(index,a,b,&(apply[0]));
        if (temp < min_step)
            apply[1] = apply[0];
            min_step = temp;
            index[0] = i;
        i++;
    }
    index[1] = which_location_use(a->array[index[0]],b);
    send_to_b(*a, *b, index, apply[1]);
}

void complex_sort(t_data *a, t_data *b)
{
    best_way_to_push(a,b);
    fix_b_stack(b);
    push_back_to_a(a,b);
}