/*
** main.c for new_project in /home/moutou_m/rendu/new_project/src
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Sun Aug 21 19:11:12 2016 moutou_m
** Last update Mon Aug 22 22:00:16 2016 moutou_m
*/

#include <string.h>
#include <stdio.h>
#include "tool_alloc.h"
#include "vector.h"

typedef struct s_toto
{
  int	x;
  int	y;
} t_toto;

void	disp_toto(t_toto *_val, int i)
{
  t_toto val = *_val;

  printf("tab[%d]: x=%d, y=%d\n", i, val.x, val.y);
}

int main()
{
  t_vector str_vec;
  t_toto s = {0, 1};
  t_toto e = {2, 3};

  str_vec = NEW_VECTOR(t_toto);
  str_vec->PUSH_BACK(s, str_vec);
  str_vec->PUSH_BACK(e, str_vec);

  VECTOR_DISPLAY(str_vec, disp_toto);

  DELETE(str_vec);
  return (EXIT_SUCCESS);
}
