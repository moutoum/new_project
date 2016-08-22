/*
** vector_get_length.c for libvector in /home/moutou_m/rendu/lib/lib/libvector/src
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Sun Aug 21 10:52:43 2016 moutou_m
** Last update Mon Aug 22 19:10:58 2016 moutou_m
*/

#include <stdlib.h>
#include "vector.h"

size_t	vector_get_length(t_vector vector)
{
  if (vector != NULL)
    return (vector->_tab_size);
  return (-1);
}
