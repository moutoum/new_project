/*
** new_vector.c for libvector in /home/moutou_m/rendu/lib/lib/libvector/src
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Mon May 09 14:54:24 2016 moutou_m
** Last update Fri Oct 07 01:07:34 2016 moutou_m
*/

#include <stdlib.h>
#include <assert.h>
#include "vector.h"

t_vector	new_vector(size_t	size)
{
  t_vector	vector;

  vector = malloc(sizeof(*vector));
  assert(vector != NULL);
  vector->elem_size = size;
  vector->tab_size = 0;
  vector->data = NULL;
  return (vector);
}
