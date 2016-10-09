/*
** vector_delete.c for libvector in /home/moutou_m/rendu/lib/lib/libvector/src
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Mon May 09 16:03:18 2016 moutou_m
** Last update Sat Oct 08 21:11:51 2016 moutou_m
*/

#include <stdlib.h>
#include <assert.h>
#include "errors.h"
#include "vector.h"

void
vector_delete(t_vector	*vector)
{
  FNSTART();
  FNASSERT(vector != NULL);
  FNASSERT(*vector != NULL);
  if ((*vector)->data != NULL)
    free((*vector)->data);
  free(*vector);
  *vector = NULL;
  FNQUIT();
}

void
vector_delete_elems(t_vector *vector,
		    void (*free_elem)())
{
  t_vector	tmp;
  void		**tab;
  size_t	i;

  i = 0;
  FNASSERT(vector != NULL);
  FNASSERT(*vector != NULL);
  tmp = *vector;
  tab = tmp->data;
  if (tmp->elem_size == 8)
    {
      while (i < tmp->tab_size)
	{
	  free_elem(tab[i]);
	  i++;
	}
    }
  vector_delete(vector);
}
