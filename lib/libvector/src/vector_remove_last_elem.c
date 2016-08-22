/*
** vector_remove_last_elem.c for lib in /home/moutou_m/rendu/lib/lib/libvector/src
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Mon May 23 12:45:36 2016 moutou_m
** Last update Mon Aug 22 19:11:11 2016 moutou_m
*/

#include "vector.h"

void		vector_remove_last_elem(t_vector vector)
{
  if (vector != NULL && vector->_tab_size > 0)
    vector_remove_elem_at(vector->_tab_size - 1, vector);
}
