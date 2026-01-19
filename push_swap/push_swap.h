#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h> // for malloc, free, exit
# include <unistd.h> // for write
# include <limits.h> // for INT_MAX, INT_MIN

typedef struct s_stack
{
    int             value;
    int             index;
    struct s_stack  *next;
} t_stack;

// Parser & Validation
t_stack *parse_input(int argc, char **argv);
int     is_valid_number(char *str);
int     has_duplicates(t_stack *a);

// Operations (The Moves)
void    sa(t_stack **a); // Swap top 2 of stack A
void    pa(t_stack **a, t_stack **b); // Push top of B to A
void    pb(t_stack **a, t_stack **b); // Push top of A to B
void    ra(t_stack **a); // Rotate A (top to bottom)
void    rra(t_stack **a); // Reverse rotate A (bottom to top)

// Algorithms
void    sort_three(t_stack **a);
void    radix_sort(t_stack **a, t_stack **b);

// Utils
void    free_stack(t_stack **stack);
void    error_exit(void);
int     get_stack_size(t_stack *stack);

#endif