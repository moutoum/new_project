/*
** error_tab.c for new_project in /home/moutou_m/rendu/new_project/lib/liberror/src
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Sat Oct 08 15:26:37 2016 moutou_m
** Last update Sat Oct 08 21:29:04 2016 moutou_m
*/

#include "errors.h"

const error_t g_error_tab[] = {
    {
      .type = LWARNING,
      .error_name = "Warning"
    },
    {
      .type = LFATAL,
      .error_name = "Fatal"
    },
    {
      .type = LNOERR,
      .error_name = "NoError"
    },
    {
      .type = LDEBUG,
      .error_name = "Debug"
    },
    {
      .type = LINFO,
      .error_name = "Info"
    },
    {
      .type = LASSERT,
      .error_name = "Assert"
    }
};
