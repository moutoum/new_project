/*
** new_vector.c for libvector in /home/moutou_m/rendu/lib/lib/libvector/src
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Mon May 09 14:54:24 2016 moutou_m
** Last update Mon Aug 22 19:23:07 2016 moutou_m
*/

#include <stdlib.h>
#include <assert.h>
#include "vector.h"

t_vector	new_vector(size_t	size)
{
  t_vector	vector;

  vector = malloc(sizeof(*vector));
  assert(vector != NULL);
  vector->_elem_size = size;
  vector->_tab_size = 0;
  vector->_tab = NULL;
  vector->vector_push_back = vector_push_back;
  vector->vector_remove_at = vector_remove_elem_at;
  vector->vector_pop_back = vector_remove_last_elem;
  vector->vector_get_length = vector_get_length;
  vector->vector_delete = vector_delete;
  return (vector);
}
