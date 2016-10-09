/*
** finish.c for new_project in /home/moutou_m/rendu/new_project/lib/liberror/src
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Sat Oct 08 11:38:12 2016 moutou_m
** Last update Sat Oct 08 16:55:56 2016 moutou_m
*/

#include <unistd.h>
#include "errors.h"

void error_quit()
{
  close(g_fd);
}
