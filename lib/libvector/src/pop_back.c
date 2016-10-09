/*
** vector_remove_last_elem.c for lib in /home/moutou_m/rendu/lib/lib/libvector/src
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Mon May 23 12:45:36 2016 moutou_m
** Last update Sat Oct 08 20:59:15 2016 moutou_m
*/

#include "vector.h"

void
vector_pop_back(t_vector vector)
{
  FNSTART();
  if (vector != NULL && vector->tab_size > 0)
    vector_remove_elem_at(vector->tab_size - 1, vector);
  FNQUIT();
}
