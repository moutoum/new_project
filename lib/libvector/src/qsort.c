/*
** qsort.c for new_project in /home/moutou_m/rendu/new_project/lib/libvector/src
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Thu Oct 06 23:46:49 2016 moutou_m
** Last update Fri Oct 07 00:55:14 2016 moutou_m
*/

#include <assert.h>
#include <stdlib.h>
#include "vector.h"

void  vector_qsort(t_vector vector, int (*cmp)(const void *, const void *))
{
  assert(vector != NULL);
  assert(cmp);
  qsort(vector->data, vector->tab_size, vector->elem_size, cmp);
}
