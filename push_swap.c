/*
** push_swap.c for  in /home/thomas/Documents/epitech/CPE_2015_Pushswap
** 
** Made by Thomas Henon
** Login   <thomas.henon@epitech.eu>
** 
** Started on  Tue Nov 17 13:20:35 2015 Thomas Henon
** Last update Sun Nov 22 11:22:11 2015 Thomas Henon
*/

#include <stdlib.h>
#include "my.h"
#include "push_swap.h"

void	swap_first_elems(t_numbers *l)
{
  int	tmp;

  tmp = l->next->num;
  l->next->num = l->num;
  l->num = tmp;
}

void		put_first_from_first(t_numbers **l1, t_numbers **l2)
{
   int		num;
   t_numbers	*tmp;

   tmp = *l1;
   num = (*l1)->num;
   *l1 = (*l1)->next;
   prepend_t_numbers(l2, num);
   free(tmp);
}

void		rotate_start(t_numbers **l)
{
  int		num;
  t_numbers	*tmp;

  tmp = *l;
  num = (*l)->num;
  *l = (*l)->next;
  append_t_numbers(l, num);
  free(tmp);
}

void		rotate_end(t_numbers **l)
{
  t_numbers	*tmp;
  int		num;
  t_numbers	*prev;

  tmp = *l;
  while (tmp->next != 0)
    {
      prev = tmp;
      tmp = tmp->next;
    }
  prev->next = 0;
  prepend_t_numbers(l, tmp->num);
  free(tmp);
}
