/*
** vector_remove_elem_at.c for lib in /home/moutou_m/rendu/lib/lib/libvector/src
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Mon May 23 11:58:28 2016 moutou_m
** Last update Fri Oct 07 01:07:19 2016 moutou_m
*/

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "vector.h"

void
vector_remove_elem_at(const unsigned int at,
		      t_vector vector)
{
  void		*tmp;
  unsigned int	i;
  unsigned int	j;
  unsigned int	k;

  i = -1;
  k = 0;
  assert(vector != NULL);
  assert(at < vector->tab_size);
  assert(vector->tab_size > 0);
  if (vector->tab_size > 1)
    {
      tmp = malloc((vector->tab_size - 1) * vector->elem_size * sizeof(char));
      if (tmp != NULL)
	{
	  while (++i < vector->tab_size)
	    {
	      if (i != at)
		{
		  j = -1;
		  while (++j < vector->elem_size)
		    ((char *)tmp)[(k * vector->elem_size) + j] = ((char *)vector->data)[(i * vector->elem_size) + j];
		  k++;
		}
	    }
	  if (vector->data != NULL)
	    free(vector->data);
	  vector->data = tmp;
	}
      vector->tab_size--;
    }
  else if (at == 0 && vector->tab_size == 1 && vector->data != NULL)
    {
      free(vector->data);
      vector->data = NULL;
    }
}
