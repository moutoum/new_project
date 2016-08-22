/*
** vector_delete.c for libvector in /home/moutou_m/rendu/lib/lib/libvector/src
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Mon May 09 16:03:18 2016 moutou_m
** Last update Mon Aug 22 19:54:07 2016 moutou_m
*/

#include <stdlib.h>
#include "vector.h"

void		vector_delete(t_vector	*vector)
{
  if (vector != NULL)
    {
      if (*vector != NULL)
	{
	  if ((*vector)->_tab != NULL)
	    free((*vector)->_tab);
	  free(*vector);
	  *vector = NULL;
	}
    }
}

void		vector_delete_elems(t_vector *vector, void (*free_elem)())
{
  t_vector	tmp;
  void		**tab;
  size_t	i;

  i = 0;
  if (vector != NULL && *vector != NULL)
    {
      tmp = *vector;
      tab = tmp->_tab;
      if (tmp->_elem_size == 8)
	{
	  while (i < tmp->_tab_size)
	    {
	      free_elem(tab[i]);
	      i++;
	    }
	}
        vector_delete(vector);
    }
}
