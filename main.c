/*
** main.c for  in /home/thomas/Documents/epitech/CPE_2015_Pushswap
** 
** Made by Thomas Henon
** Login   <thomas.henon@epitech.eu>
** 
** Started on  Mon Nov 16 15:33:54 2015 Thomas Henon
** Last update Sun Nov 22 22:02:40 2015 Thomas Henon
*/

#include <stdlib.h>
#include "my.h"
#include "push_swap.h"

char	is_tried(t_numbers *l)
{
  if (l == 0)
    return (0);
  while (l->next != 0)
    {
      if (l->next && l->next->num < l->num)
	return (0);
      l = l->next;
    }
  return (1);
}

char		push_swap(t_numbers *l_a, char verbose)
{
  t_numbers	*l_b;
  int		nbr_elems;

  nbr_elems = nbr_elems_t_numbers(l_a);
  l_b = 0;
  while (l_a != 0)
    {
      smallest_first(&l_a, &nbr_elems);
      put_first_from_first(&l_a, &l_b);
      my_putstr("pb ");
      nbr_elems--;
    }
  while (l_b != 0)
    {
      put_first_from_first(&l_b, &l_a);
      my_putstr("pa");
      if (l_b != 0)
	my_putchar(' ');
    }
}

int		main(int argc, char **argv)
{
  t_numbers	*l_a;
  int		i;
  char		verbose;

  l_a = 0;
  if (argc == 1)
    {
      my_putstr("Usage: ./push_swap [numbers]\n");
      return (1);
    }
  i = 1;
  while (i < argc)
    {
      if (!my_strcmp(argv[i], "-v"))
	verbose = 1;
      else
	append_t_numbers(&l_a, my_getnbr(argv[i]));
      i++;
    }
  if (!is_tried(l_a))
    push_swap(l_a, verbose);
  my_putchar('\n');
 return (0);
}
