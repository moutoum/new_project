/*
** main.c for new_project in /home/moutou_m/rendu/new_project/src
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Sun Aug 21 19:11:12 2016 moutou_m
** Last update Mon Aug 22 20:34:40 2016 moutou_m
*/

#include <string.h>
#include <stdio.h>
#include "tool_alloc.h"
#include "vector.h"

void	free_str(char *str)
{
  if (str != NULL)
    free(str);
}

void	disp_str(char **_str)
{
  char	*str;

  str = *_str;
  printf("%s\n", str);
}

void	disp_int(int *_val, int i)
{
  int	val = *_val;

  printf("%d = %d\n", i, val);
}

int main()
{
  t_vector str_vec;
  int	i = 55;

  str_vec = NEW_VECTOR(int);
  str_vec->PUSH_BACK(i, str_vec);
  i = 78;
  str_vec->PUSH_BACK(i, str_vec);

  VECTOR_DISPLAY(str_vec, disp_int);

  DELETE(str_vec);
  return (EXIT_SUCCESS);
}
