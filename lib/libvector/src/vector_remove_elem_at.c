/*
** vector_remove_elem_at.c for lib in /home/moutou_m/rendu/lib/lib/libvector/src
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Mon May 23 11:58:28 2016 moutou_m
** Last update Mon Aug 22 19:11:06 2016 moutou_m
*/

#include <stdlib.h>
#include <stdio.h>
#include "vector.h"

void		vector_remove_elem_at(const unsigned int at, t_vector vector)
{
  void		*tmp;
  unsigned int	i;
  unsigned int	j;
  unsigned int	k;

  i = -1;
  k = 0;
  if (vector != NULL && at < vector->_tab_size && vector->_tab_size > 1)
    {
      tmp = malloc((vector->_tab_size - 1) * vector->_elem_size * sizeof(char));
      if (tmp != NULL)
	{
	  while (++i < vector->_tab_size)
	    {
	      if (i != at)
		{
		  j = -1;
		  while (++j < vector->_elem_size)
		    ((char *)tmp)[(k * vector->_elem_size) + j] = ((char *)vector->_tab)[(i * vector->_elem_size) + j];
		  k++;
		}
	    }
	  if (vector->_tab != NULL)
	    free(vector->_tab);
	  vector->_tab = tmp;
	}
      vector->_tab_size--;
    }
  else if (at == 0 && vector->_tab_size == 1 && vector->_tab != NULL)
    {
      free(vector->_tab);
      vector->_tab = NULL;
    }
}
