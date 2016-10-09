/*
** vector_push_back.c for libvector in /home/moutou_m/rendu/lib/lib/libvector/src
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Mon May 09 16:01:45 2016 moutou_m
** Last update Sat Oct 08 20:47:07 2016 moutou_m
*/

#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "errors.h"
#include "vector.h"

void
vector_push_back(const void *_elem,
		 t_vector vector)
{
  void  *ptr;

  FNSTART();
  FNASSERT(vector != NULL);
  FNASSERT(_elem != NULL);
  if (vector->data == NULL)
  {
    vector->data = malloc(vector->elem_size);
  }
  else
  {
    vector->data = realloc(vector->data, (1 + vector->tab_size) * vector->elem_size);
  }
  FNASSERT(vector->data != NULL);
  ptr = vector->data + (vector->tab_size * vector->elem_size);
  memcpy(ptr, _elem, vector->elem_size);
  vector->tab_size += 1;
  FNQUIT();
}
