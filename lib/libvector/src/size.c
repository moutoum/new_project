/*
** vector_get_length.c for libvector in /home/moutou_m/rendu/lib/lib/libvector/src
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Sun Aug 21 10:52:43 2016 moutou_m
** Last update Sat Oct 08 21:00:04 2016 moutou_m
*/

#include <stdlib.h>
#include <assert.h>
#include "vector.h"

size_t	vector_size(t_vector vector)
{
  FNSTART();
  FNASSERT(vector != NULL);
  FNQUIT();
  return (vector->tab_size);
}
