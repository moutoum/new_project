/*
** init.c for new_project in /home/moutou_m/rendu/new_project/lib/liberror/src
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Sat Oct 08 11:33:23 2016 moutou_m
** Last update Sat Oct 08 17:03:46 2016 moutou_m
*/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include "errors.h"

static struct tm *get_date(void)
{
  time_t t;
  t = time(NULL);
  return (localtime(&t));
}

void error_init()
{
  char	file_name[1024];
  struct tm *t;

  t = get_date();
  memset(file_name, 0, 1024);
  sprintf(file_name, "debug/debug_%d-%d-%d-%d-%d-%d.xml", t->tm_mday,
	  t->tm_mon + 1, t->tm_year + 1900, t->tm_hour, t->tm_min, t->tm_sec);
  g_fd = open(file_name,
	      O_CREAT | O_WRONLY | O_TRUNC,
	      S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
  if (g_fd == -1)
    {
      fprintf(stderr, "Can't create %s\n", file_name);
    }
}

void error_fn_end(const char *fn)
{
  unsigned int i;

  i = 0;
  g_cursor--;
  while (i <= g_cursor)
    {
      dprintf(g_fd, "\t");
      i++;
    }
  dprintf(g_fd, "</%s>\n", fn);
}
