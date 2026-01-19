#include "push_swap.h"

t_stack *parse_input(int argc, char **argv)
{
    t_stack *a = NULL;
    // 1. Loop through argv starting from index 1.
    // 2. For each string:
    //    a. Check if it's a valid number (only digits, maybe a +/-). 
    //    b. Convert string to long using a custom ft_atoi.
    //    c. Check if the long fits in an int (INT_MIN to INT_MAX). 
    //    d. Create a new node and add it to the back of list 'a'.
    // 3. After the loop, check stack 'a' for duplicate values. 
    // 4. If any check fails, call error_exit().
    return (a);
}