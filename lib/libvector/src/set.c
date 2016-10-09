/*
** set.c for new_project in /home/moutou_m/rendu/new_project/lib/libvector/src
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Tue Oct 04 18:25:11 2016 moutou_m
** Last update Sat Oct 08 20:59:50 2016 moutou_m
*/

#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include "vector.h"

int	vector_set(void *data, const size_t index, t_vector vector)
{
  void	*dest;

  FNSTART();
  FNASSERT(vector != NULL);
  FNASSERT(index < vector->tab_size);
  FNASSERT(data != NULL);
  dest = vector->data + (index * vector->elem_size);
  memcpy(dest, data, vector->elem_size);
  FNQUIT();
  return (0);
}
