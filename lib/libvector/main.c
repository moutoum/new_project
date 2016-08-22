/*
** main.c for main in /home/moutou_m/rendu/lib/lib/libvector
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Wed May  4 16:48:39 2016 moutou_m
** Last update Sun Aug 21 11:11:30 2016 moutou_m
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vector.h"

int	main()
{
  t_vector	*int_vector;
  size_t	*tab;
  size_t	i = 0;

  int_vector = NEW_VECTOR(size_t);
  while (i <= 100000)
    {
      int_vector->PUSH_BACK(i, int_vector);
      i++;
    }
  int_vector->DELETE(int_vector);
  return (0);
}
