/*
** vector_push_back.c for libvector in /home/moutou_m/rendu/lib/lib/libvector/src
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Mon May 09 16:01:45 2016 moutou_m
** Last update Mon Aug 22 19:11:02 2016 moutou_m
*/

#include <stdlib.h>
#include "vector.h"

void		vector_push_back(void	*_elem, t_vector vector)
{
  unsigned int	i;
  void		*_tmp;

  i = 0;
  if (vector != NULL && _elem != NULL)
    {
      if (vector->_tab == NULL)
	vector->_tab = malloc(vector->_elem_size);
      else
	vector->_tab = realloc(vector->_tab, (1 + vector->_tab_size) * vector->_elem_size);
      while (i < vector->_tab_size)
	i++;
      _tmp = vector->_tab + (i * vector->_elem_size);
      i = -1;
      while (++i < vector->_elem_size)
	((char *)_tmp)[i] = ((char *)_elem)[i];
      vector->_tab_size += 1;
    }
}
