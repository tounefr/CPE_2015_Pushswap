/*
** lists.c for  in /home/thomas/Documents/epitech/CPE_2015_Pushswap
** 
** Made by Thomas Henon
** Login   <thomas.henon@epitech.eu>
** 
** Started on  Mon Nov 16 20:11:45 2015 Thomas Henon
** Last update Sun Nov 22 11:31:07 2015 Thomas Henon
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"
#include "push_swap.h"

char	init_t_numbers(t_numbers **list, int num)
{
  if (!(*list = malloc(sizeof(t_numbers))))
    return (0);
  (*list)->num = num;
  (*list)->next = 0;
  return (1);
}

char		prepend_t_numbers(t_numbers **list, int num)
{
  t_numbers	*elem;

  if (*list == 0)
    {
      if (!init_t_numbers(list, num))
	return (0);
      return (1);
    }
  if (!init_t_numbers(&elem, num))
    return (0);
  elem->next = *list;
  *list = elem;
  return (1);
}

char		append_t_numbers(t_numbers **list, int num)
{
  t_numbers	*elem;
  t_numbers	*tmp;

  if (*list == 0)
    {
      if (!init_t_numbers(list, num))
	return (0);
      return (1);
    }
  if (!init_t_numbers(&elem, num))
    return (0);
  tmp = *list;
  while (tmp->next != 0)
    tmp = tmp->next;
  tmp->next = elem;
  return (1);
}

int		index_min_t_numbers(t_numbers *l)
{
  int		index_min;
  int		i;
  int		min;

  min = l->num;
  i = 0;
  while (l != 0)
    {
      if (l->num < min)
	{
	  index_min = i;
	  min = l->num;
	}
      i++;
      l = l->next;
    }
  return (index_min);
}

t_numbers	*get_t_numbers(t_numbers *list, unsigned int index)
{
  int		i;

  if (list == 0)
    return (0);
  i = 0;
  while (i < index)
    {
      if (list == 0)
	return (0);
      list = list->next;
      i++;
    }
  return (list);
}
