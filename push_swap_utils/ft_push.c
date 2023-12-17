#include "../push_swap.h"

void  pa(t_list **stack_a, t_list **stack_b)
{
  t_list *temp;

  if (*stack_b == NULL)
    return ;
  temp = (*stack_b)->next;
  (*stack_b)->next = *stack_a;
  *stack_a = *stack_b;
  *stack_b = temp;
}

void  pb(t_list **stack_a, t_list **stack_b)
{
  t_list *temp;

  if (*stack_a == NULL)
    return ;
  temp = (*stack_a)->next;
  (*stack_a)->next = *stack_b;
  *stack_b = *stack_a;
  *stack_a = temp;
}