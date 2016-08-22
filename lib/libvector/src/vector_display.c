/*
** vector_display.c for new_project in /home/moutou_m/rendu/new_project/lib/libvector/src
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Mon Aug 22 20:19:37 2016 moutou_m
** Last update Mon Aug 22 20:33:55 2016 moutou_m
*/

#include "vector.h"

void		vector_display(t_vector vector, void (*display)())
{
  size_t	i;
  void		*ptr;

  i = 0;
  if (vector != NULL )
    {
      while (i < vector->_tab_size)
	{
	  ptr = &(((char *)vector->_tab)[i * vector->_elem_size]);
	  display(ptr, i);
	  i++;
	}
    }
}
