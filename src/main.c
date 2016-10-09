/*
** main.c for new_project in /home/moutou_m/rendu/new_project/src
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Sun Aug 21 19:11:12 2016 moutou_m
** Last update Sun Oct 09 15:44:31 2016 moutou_m
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "tool_alloc.h"
#include "errors.h"
#include "vector.h"

int int_cmp(const void *_a, const void *_b)
{
  int a = *(const int *)_a;
  int b = *(const int *)_b;

  return ((a > b) - (a < b));
}

void int_disp(const void *_a, unsigned int i)
{
  int a = *(const int *)_a;

  printf("tab[%d] = %d\n", i, a);
}

int main()
{

  t_vector vector;
  int	a;

  FNSTART();
  vector = NEW_VECTOR(int);
  for (int i = 0; i < 10; i++)
    {
      a = rand() % 150;
      vector_push_back(&a, vector);
    }
  vector_qsort(vector, int_cmp);
  vector_display(vector, int_disp);
  vector_delete(&vector);
  FNQUIT();
  return (EXIT_SUCCESS);
}
