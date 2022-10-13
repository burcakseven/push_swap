#include "push_swap.h"
void select_the_source_and_sort(t_data *a, t_data *b)
{
    is_sorted(a);
    if (a->size <= 6)
    {
        sort_until_six(a,b);
    }
    else
        complex_sort(a,b);
}

int main(int argc, char **av)
{
    t_data a;
    t_data b;

    a.type = 'a';
    b.type = 'b';

    take_args(&a,&b,argc,av);
    ft_checkdouble(&a);
    select_the_source_and_sort(&a,&b);


}