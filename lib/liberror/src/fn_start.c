/*
** fn_start.c for new_project in /home/moutou_m/rendu/new_project/lib/liberror/src
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Sat Oct 08 17:03:40 2016 moutou_m
** Last update Sat Oct 08 17:10:46 2016 moutou_m
*/

#include <stdio.h>
#include <string.h>
#include "errors.h"

void error_fn_start(const char *file,
		    const char *fn,
		    const unsigned int line)
{
  unsigned int i;
  char	padding[1024];

  i = 0;
  memset(padding, 0, 1024);
  while (i <= g_cursor)
    {
      strcat(padding, "\t");
      i++;
    }
  dprintf(g_fd, "%s<%s file=\'%s\' line=\'%d\'>\n", padding, fn, file, line);
  g_cursor++;
}
