#include "push_swap.h"

int together_untill_three_sort(t_data *a,t_data *b)
{
    int i;
    i = 7;
    while (i--){
    if(is_sorted(a)){
        return(10);}
    if (is_rev_sorted_for_b(b)){
        return(20);}
    if (a->array[a->size-2]>a->array[a->size-1]&&\
     b->array[b->size-2]<b->array[b->size-1])
        ss(a,b);
    else if (a->array[a->size-2]>a->array[a->size-1])
        swap(a,1);
    else if (b->array[b->size-2]<b->array[b->size-1])
        swap(b,1);
    if(is_sorted(a)){
        return(11);}
    if (is_rev_sorted_for_b(b)){
        return(21);}
    rrr(a,b);
    }
    return (0);
}

int untill_three_sort(t_data *a)
{
    int i;
    i = 7;
    while (i--){
    if(is_sorted(a)){
        return(1);}
    if (a->array[a->size-2]>a->array[a->size-1])
    {
        swap(a,1);
        if(is_sorted(a)){
            return(1);}
    }
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
        swap(b,1);
    if(is_rev_sorted_for_b(b))
        return(1);
    rev_rotate(b,1);
    }
    return (0);
}
// int min_way_to_push(t_data *a, t_data *b)
// {

// }

void compare_and_push_part_1(t_data *a, t_data *b)
{
    int control1 = 0;
    int control2 = 0;
    while (b->size)
    {
        printf("control %i\n", control1);
        printf("ilk a %i %i %i %i %i %i \n",a->array[0],a->array[1],a->array[2],a->array[3],a->array[4],a->array[5]);
        while (a->array[0]>b->array[b->size-1]&& \
        b->size!=0) //1-1;
        {
            printf("1-1 %i-- \n",control1);
            push(b,a);
            control1++;
            control2++;
            }
        control1 = compare_and_push_part_2(a,b,control1,control2);
        
    }
    // if (find_max(a)< a->size/2 )
    //     while(find_max(a) != a->size-1){
    //         rev_rotate(a,1);}
    // else if(find_max(a)> a->size/2)
    //     while(find_max(a) != a->size-1) 
    //         rotate(a,1);
}

int compare_and_push_part_2(t_data *a, t_data *b, int control1, int control2)
{

    while (control1 && b->size != 0){ //2;
            printf("2 %i-- \n",control1);
            rotate(a,1);
            printf("a %i %i %i %i %i %i \n",a->array[0],a->array[1],a->array[2],a->array[3],a->array[4],a->array[5]);
            control1--;
        }
    while ( a->array[a->size-1]<b->array[b->size-1]&& \
        b->size!=0){//2-2;
        if (a->array[0]>b->array[b->size-1])
        {
            control1++;
        }
        printf("2-2 %i-- \n",control1);
        push(b,a);
        printf(" a %i %i %i %i %i %i \n",a->array[0],a->array[1],a->array[2],a->array[3],a->array[4],a->array[5]);
        }
    if (control2 == 0 && b->size != 0) //2-3
           { printf("2-3 %i-- \n",control1);
            rev_rotate(a,1);
            control1++;
}
    while (a->array[a->size-1]> b->array[b->size-1] && b->size!= 0) //3
        {
            printf("3 %i-- \n",control1);
            rotate(a,1);
            printf("a %i %i %i %i %i %i \n",a->array[0],a->array[1],a->array[2],a->array[3],a->array[4],a->array[5]);
            control1--;
        }
    if (a->array[a->size-1]< b->array[b->size-1])
    {
        push(b,a);
        if (find_max(a) == a->size-1)
        {
            control1--;
        }
        else{
            control++;
        }
        
        
    }
    int try = -(control1+a->size);
    while (control1 < 0)
    {
        if (try >= control1)
        {
            printf("control %i \n \
            try %i -- \n",control1,try);
            rotate(a,1);
            printf("a-- %i %i %i %i %i %i \n",a->array[0],a->array[1],a->array[2],a->array[3],a->array[4],a->array[5]);
            control1 = ++try;
        }
        else
       { 
        rev_rotate(a,1);
        control1++;
        printf("3-1 %i-- \n",control1);
        printf("a %i %i %i %i %i %i",a->array[0],a->array[1],a->array[2],a->array[3],a->array[4],a->array[5]);
      }  
      }
      return control1;
     printf("control %i, try %i",control1,try);
}

void fix_a_sort(t_data *a)
{
    int index_of_max;
    int temp_step;
    
    index_of_max = find_max(a);
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
        }
        int together_until = together_untill_three_sort(a,b);
        if(together_until/10 == 2 && !is_sorted(a)){
            if (together_until%10 ==1)
                rev_rotate(a,1);
        untill_three_sort(a);
        }
        else if (together_until/10 == 1 && !is_rev_sorted_for_b(b))
        {
            if (together_until%10 ==1)
                rev_rotate(b,1);
        rev_untill_three_sort(b);
        }
        
        while (b->size )
        {
        compare_and_push_part_1(a, b);
        }
        printf("%i %i %i %i %i %i",a->array[0],a->array[1],a->array[2],a->array[3],a->array[4],a->array[5]);
        //fix_a_sort(a);


    }
}