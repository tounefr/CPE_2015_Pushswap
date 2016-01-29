/*
** push_swap.h for  in /home/thomas/Documents/epitech/CPE_2015_Pushswap
** 
** Made by Thomas Henon
** Login   <thomas.henon@epitech.eu>
** 
** Started on  Mon Nov 16 17:00:05 2015 Thomas Henon
** Last update Sun Nov 22 11:18:38 2015 Thomas Henon
*/

#ifndef __PUSH_SWAP_H__
# define __PUSH_SWAP_H__

typedef struct		s_numbers
{
  int			num;
  struct s_numbers	*next;
}			t_numbers;

/*
** algo_smallest_first.c
*/
int		index_smallest(t_numbers *);
char		smallest_first(t_numbers **, int *);

/*
** linked_lists.c
*/
char		init_t_numbers(t_numbers **, int);
char		prepend_t_numbers(t_numbers **, int);
char		append_t_numbers(t_numbers **, int);
int		index_min_t_numbers(t_numbers *);
t_numbers	*get_t_numbers(t_numbers *, unsigned int);

/*
** linked_lists2.c
*/
char		delete_t_numbers(t_numbers **, unsigned int);
int		nbr_elems_t_numbers(t_numbers *);

/*
** main.c
*/
char		is_tried(t_numbers *);
char		push_swap(t_numbers *, char);
int		main(int, char **);

/*
** push_swap.c
*/
void		swap_first_elems(t_numbers *);
void		put_first_from_first(t_numbers **, t_numbers **);
void		rotate_start(t_numbers **);
void		rotate_end(t_numbers **);

#endif
