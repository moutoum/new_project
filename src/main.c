/*
** main.c for new_project in /home/moutou_m/rendu/new_project/src
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Sun Aug 21 19:11:12 2016 moutou_m
** Last update Fri Oct 07 01:09:58 2016 moutou_m
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "tool_alloc.h"
#include "vector.h"

typedef struct s_toto
{
  int id;
  struct
  {
    int x;
    int y;
  } value;
} t_toto;

void	disp_toto(t_toto *_val, int i)
{
  t_toto val = *_val;

  printf("tab[%d]: id = %d, x=%d, y=%d\n", i, val.id, val.value.x, val.value.y);
}

int   toto_cmp(const void *_a, const void *_b)
{
  t_toto  a = *(const t_toto *)_a;
  t_toto  b = *(const t_toto *)_b;

  if (a.id < b.id)
    return (-1);
  else if (a.id > b.id)
    return (1);
  return (0);
}

int main()
{
  t_vector str_vec = NEW_VECTOR(t_toto);
  t_toto value;

  for (int i = 0; i < 100; i++)
    {
      value.id = rand() % 100;
      value.value.x = rand() % 1000;
      value.value.y = rand() % 1000;
      vector_push_back(&value, str_vec);
    }
  vector_qsort(str_vec, toto_cmp);
  vector_display(str_vec, disp_toto);

  vector_delete(&str_vec);
  return (EXIT_SUCCESS);
}
