#include "push_swap.h"

int untill_three_sort(t_data *a)
{
    int i;
    i = 7;
    while (i--){
    if(is_sorted(a))
        return(1);
    if (a->array[a->size-2]>a->array[a->size-1])
        swap(a,1);
    if(is_sorted(a))
        return(1);
    rev_rotate(a,1);
    }
    return (0);
}

int rev_untill_three_sort(t_data *b)
{
    int i;
    i = 7;
    while (i--){
    if(is_rev_sorted_for_b(b))
        return(1);
    if (b->array[b->size-2]<b->array[b->size-1])
        rotate(b,1);
    // printf(" durum %i \n",is_rev_sorted_for_b(b));
    // printf(" durum %i %i %i \n",b->array[0],b->array[1],b->array[2]);
    if(is_rev_sorted_for_b(b))
        return(1);
    swap(b,1);
    }
    return (0);
}

void compare_and_push(t_data *a, t_data *b)
{
    int temp;
    if (a->array[0]>b->array[0])
    {
        while (b->size){
        push(b,a);
        printf("array a: %i %i %i %i %i %i \n",a->array[0],a->array[1],a->array[2],a->array[3],a->array[4],a->array[5]);
}    }
    else
    {
        push(b,a);
        temp = a->size-1;
        while (a->array[a->size-1]<b->array[b->size-1]){
            printf("array a: %i %i %i %i %i %i \n",a->array[0],a->array[1],a->array[2],a->array[3],a->array[4],a->array[5]);
            push(b,a);
            }
    }
    // while (b->size)
    // {
        // while (a->array[a->size-1]<b->array[b->size-1]&& \
        // b->size!=0)
        // {
        //     push(b,a);
        //     printf("array b: %i %i %i %i %i %i \n",b->array[0],b->array[1],b->array[2],b->array[3],b->array[4],b->array[5]);
        // }
        // printf("%i",b->size);
        // printf("array a: %i %i %i %i %i %i \n",a->array[0],a->array[1],a->array[2],a->array[3],a->array[4],a->array[5]);
        // rev_rotate(a,0);
    // }
    
}
void fix_a_sort(t_data *a)
{
    int index_of_max;
    int temp_step;
    
    index_of_max = find_max(a);
    printf("%i",find_max(a));
    if (rotate_time(index_of_max,a)> rev_rotate_time(index_of_max))
    {
        temp_step = rev_rotate_time(index_of_max);
        while (temp_step--)
            rev_rotate(a,0);
    }
    else
        temp_step = rotate_time(index_of_max,a);
         while (temp_step--)
            rotate(a,0);
        
}

void sort_until_six(t_data *a, t_data *b)
{
    if (a->size == 3)
    {
        if(untill_three_sort(a))
            exit(1);
    }
    else
    {
        while (a->size > 3)
        {
            push(a,b);
            printf("%i merhaba\n",a->size);
        }
        untill_three_sort(a);
        rev_untill_three_sort(b);
         printf("-------------array a: %i %i %i %i %i %i \n",a->array[0],a->array[1],a->array[2],a->array[3],a->array[4],a->array[5]);
         printf("array b: %i %i %i %i %i %i \n",b->array[0],b->array[1],b->array[2],b->array[3],b->array[4],b->array[5]);
        while (b->size)
        {
        best_way_to_push(b,a);

        }
        
        // fix_a_sort(a);
         printf("array a: %i %i %i %i %i %i \n",a->array[0],a->array[1],a->array[2],a->array[3],a->array[4],a->array[5]);


    }
}