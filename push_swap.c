#include "push_swap.h"
int main(int argc, char **av)
{
    t_data *a;
    t_data *b;

    take_args(a,b,argc,av);
    ft_checkdouble(a);
    best_way_to_push(a,b);
    
}