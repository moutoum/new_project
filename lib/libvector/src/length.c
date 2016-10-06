/*
** vector_get_length.c for libvector in /home/moutou_m/rendu/lib/lib/libvector/src
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Sun Aug 21 10:52:43 2016 moutou_m
** Last update Fri Oct 07 00:58:39 2016 moutou_m
*/

#include <stdlib.h>
#include <assert.h>
#include "vector.h"

size_t	vector_get_length(t_vector vector)
{
  assert(vector != NULL);
  return (vector->tab_size);
}
