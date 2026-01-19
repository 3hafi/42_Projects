#include "push_swap.h"

void ra(t_stack **a)
{
    if (!*a || !(*a)->next)
        return;
    // 1. Set 'first' to *a.
    // 2. Set 'last' to the very last node in the list.
    // 3. Update *a to be the second node (first->next).
    // 4. Set first->next to NULL (it's the new last node).
    // 5. Set last->next to 'first'.
    write(1, "ra\n", 3); // Must print the move [cite: 250]
}

void pb(t_stack **a, t_stack **b)
{
    if (!*a)
        return;
    // 1. Set 'tmp' to *a.
    // 2. Update *a to be (*a)->next.
    // 3. Set tmp->next to *b (put it on top of stack B).
    // 4. Update *b to be 'tmp'.
    write(1, "pb\n", 3);
}