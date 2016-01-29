/*
** algo_smallest_first.c for  in /home/thomas/Documents/epitech/CPE_2015_Pushswap
** 
** Made by Thomas Henon
** Login   <thomas.henon@epitech.eu>
** 
** Started on  Thu Nov 19 11:11:49 2015 Thomas Henon
** Last update Sun Nov 22 11:30:06 2015 Thomas Henon
*/

#include "push_swap.h"

int	index_smallest(t_numbers *l)
{
  int	i;
  int	min_index;
  int	min_num;

  min_index = 0;
  min_num = l->num;
  i = 0;
  while (l != 0)
    {
      if (l->num < min_num)
	{
	  min_index = i;
	  min_num = l->num;
	}
      i++;
      l = l->next;
    }
  return (min_index);
}

char	smallest_first(t_numbers **l_a, int *nbr_elems)
{
  int	min_index;

  min_index = index_smallest(*l_a);
  if (min_index > (*nbr_elems / 2))
    {
      while (min_index < *nbr_elems)
	{
	  rotate_end(l_a);
	  my_putstr("rra ");
	  min_index++;
	}
    }
  else
    {
      while (min_index > 0)
	{
	  rotate_start(l_a);
	  my_putstr("ra ");
	  min_index--;
	}
    }
  return (1);
}
