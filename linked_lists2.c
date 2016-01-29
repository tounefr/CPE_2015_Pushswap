/*
** linked_lists2.c for  in /tmp/CPE_2015_Pushswap
** 
** Made by Thomas Henon
** Login   <thomas.henon@epitech.eu>
** 
** Started on  Sat Nov 21 19:46:54 2015 Thomas Henon
** Last update Thu Nov 26 15:17:06 2015 Thomas Henon
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"
#include "push_swap.h"

char		delete_t_numbers(t_numbers **list, unsigned int index)
{
  t_numbers	*tmp;
  t_numbers	*prev;
  t_numbers	*cur;
  int		i;

  if (*list == 0)
    return (0);
  if (index == 0)
    {
      tmp = (*list)->next;
      *list = tmp;
      return (1);
    }
  if (!(prev = get_t_numbers(*list, index-1)))
    return (0);
  if (!(cur = get_t_numbers(*list, index)))
    return (0);
  prev->next = cur->next;
  return (1);
}

int	nbr_elems_t_numbers(t_numbers *l)
{
  int	i;

  i = 0;
  while (l != 0)
    {
      i++;
      l = l->next;
    }
  return (i);
}
