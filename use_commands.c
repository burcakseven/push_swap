#include "push_swap.h"
//✔️✔️?
void r_to_r(t_data *a, t_data *b, int indexa, int indexb)//✔️✔️ Best_way_to_push
{
    int repeat;
    int total_step;

    repeat = calculate_double_total(rotate_time(indexa,a),rotate_time(indexb,b));
    total_step = calculate_double_total(rotate_time(indexa,a),rotate_time(indexb,b));
    while (total_step--)
    {
        if (repeat--)
        {
             rr(a,b);
        }
        else if(indexa > indexb)
        {
            rotate(a,0);
        }
        else
            rotate(b,0);   
    }
        push(a,b);
}
void r_to_rr(t_data *a, t_data *b,int indexa, int indexb)//✔️✔️Best_way_to_push
{
    while (indexb != b->size-1)
    {
        rev_rotate(b,0);
        indexb++;
    }
    while (indexa != -1)
    {
        rotate(a,0);
        indexa--;
    }
    push(a,b);
}
void rr_to_r(t_data *a, t_data *b,int indexa, int indexb)//✔️✔️Best_way_to_push
{
    while (indexa != a->size-1)
    {
        rev_rotate(a,0);
        indexa++;
    }
    while (indexb != -1)
    {
        rotate(b,0);
        indexb--;
    }
    push(a,b);
}

void rr_to_rr(t_data *a, t_data *b,int indexa, int indexb)//rev-rot ✔️✔️Best_way_to_push
{
    int repeat;
    int total_step;

    repeat = calculate_same_step(rev_rotate_time(indexa),rev_rotate_time(indexb));
    total_step = calculate_double_total(rev_rotate_time(indexa),rev_rotate_time(indexb));
    while (total_step--)
    {
        if (repeat--)
        {
             rrr(a,b);
        }
        else if(indexa > indexb)
        {
            rev_rotate(b,0);
        }
        else
            rev_rotate(a,0);   
    }
    push(a,b);
}
void send_to_b(t_data *a, t_data *b, int apply,int *index)//✔️✔️Best_way_to_push
{ 
    if(apply == 1)
        r_to_r(a,b,index[0],index[1]);
    if(apply == 2)
        rr_to_r(a,b,index[0],index[1]);
    if(apply == 3)
        r_to_rr(a,b,index[0],index[1]);
    if(apply == 4)
        rr_to_rr(a,b,index[0],index[1]);
}