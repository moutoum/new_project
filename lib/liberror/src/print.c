/*
** print.c for new_project in /home/moutou_m/rendu/new_project/lib/liberror/src
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Sat Oct 08 16:56:14 2016 moutou_m
** Last update Sat Oct 08 20:57:00 2016 moutou_m
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "errors.h"

void error_print(const errortype_t type,
		 const char *msg,
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
  dprintf(g_fd, "%s", padding);
  dprintf(g_fd, "<%s fn=\'%s\' line=\'%d\'>", g_error_tab[type].error_name,
	  fn, line);
  dprintf(g_fd, "%s", msg);
  dprintf(g_fd, "</%s>\n", g_error_tab[type].error_name);
}

void error_assert(const char *msg,
		  const char *fn,
		  const unsigned int line,
		  const int state)
{
  if (!state)
    {
      error_print(LASSERT, msg, fn, line);
      __assert(msg, fn, line);
    }
}
