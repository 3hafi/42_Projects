#include "push_swap.h"

void radix_sort(t_stack **a, t_stack **b)
{
    int size = get_stack_size(*a);
    int max_bits = 0;

    // 1. Assign indices to nodes (0 for smallest value, N-1 for largest).
    // 2. Find max_bits: how many bits are needed to represent (size - 1)?
    // 3. External loop: for (int i = 0; i < max_bits; i++)
    // 4. Internal loop: for (int j = 0; j < size; j++)
    //    a. If ((current_node->index >> i) & 1) == 1:
    //       ra(a); // Keep in stack A
    //    b. Else:
    //       pb(a, b); // Move to stack B
    // 5. After internal loop, push everything from B back to A (pa).
}