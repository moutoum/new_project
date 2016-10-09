/*
** get.c for new_project in /home/moutou_m/rendu/new_project/lib/libvector/src
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Fri Oct 07 19:23:30 2016 moutou_m
** Last update Sat Oct 08 20:48:24 2016 moutou_m
*/

#include <assert.h>
#include "vector.h"

void *vector_get(const size_t index, const t_vector vector)
{
  void	*dest;

  FNSTART();
  FNASSERT(vector != NULL);
  FNASSERT(index < vector->tab_size);
  dest = vector->data + (index * vector->elem_size);
  return (dest);
  FNQUIT();
}
