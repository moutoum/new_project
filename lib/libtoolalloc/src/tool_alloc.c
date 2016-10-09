/*
** tool_alloc.c for Alloc in /home/moutou_m/rendu/Alloc/lib/libtoolalloc/src
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Mon Aug 08 21:41:55 2016 moutou_m
** Last update Sat Oct 08 21:04:38 2016 moutou_m
*/

#include <string.h>
#include <stdio.h>
#include "._tool_alloc.h"

t_alloc	g_tool_alloc;

void	tool_alloc_init()
{
  size_t	alloc_init;

  FNSTART();
  alloc_init = NB_ADRESS_INIT * sizeof(void *);
  g_tool_alloc.params[PARAM_TAB_SIZE] = NB_ADRESS_INIT;
  g_tool_alloc.params[PARAM_NB_ADRESS] = 0;
  if ((g_tool_alloc.adress_tab = calloc(alloc_init, 1)) == NULL)
    {
      exit (EXIT_FAILURE);
    }
  FNQUIT();
}

void	*tool_malloc(size_t size)
{
  void	*ptr;
  int	i;

  FNSTART();
  if ((ptr = malloc(size)) == NULL)
    exit (EXIT_FAILURE);
  if (g_tool_alloc.params[PARAM_NB_ADRESS] == g_tool_alloc.params[PARAM_TAB_SIZE])
    {
      if ((g_tool_alloc.adress_tab = realloc(g_tool_alloc.adress_tab, (g_tool_alloc.params[PARAM_TAB_SIZE] * 2) * sizeof(void *))) == NULL)
	exit (EXIT_FAILURE);
      i = g_tool_alloc.params[PARAM_TAB_SIZE];
      memset(&g_tool_alloc.adress_tab[i], '\0', g_tool_alloc.params[PARAM_TAB_SIZE] * sizeof(void *));
      g_tool_alloc.params[PARAM_TAB_SIZE] *= 2;
    }
  i = g_tool_alloc.params[PARAM_NB_ADRESS];
  g_tool_alloc.adress_tab[i] = ptr;
  g_tool_alloc.params[PARAM_NB_ADRESS] += 1;
  FNQUIT();
  return (ptr);
}

void	*tool_bridge(void *ptr)
{
  int	i;

  FNSTART();
  if (g_tool_alloc.params[PARAM_NB_ADRESS] == g_tool_alloc.params[PARAM_TAB_SIZE])
    {
      if ((g_tool_alloc.adress_tab = realloc(g_tool_alloc.adress_tab, (g_tool_alloc.params[PARAM_TAB_SIZE] * 2) * sizeof(void *))) == NULL)
	exit (EXIT_FAILURE);
      i = g_tool_alloc.params[PARAM_TAB_SIZE];
      memset(&g_tool_alloc.adress_tab[i], '\0', g_tool_alloc.params[PARAM_TAB_SIZE] * sizeof(void *));
      g_tool_alloc.params[PARAM_TAB_SIZE] *= 2;
    }
  i = g_tool_alloc.params[PARAM_NB_ADRESS];
  g_tool_alloc.adress_tab[i] = ptr;
  g_tool_alloc.params[PARAM_NB_ADRESS] += 1;
  FNQUIT();
  return (ptr);
}

void	tool_free(void *ptr)
{
  size_t	i;

  i = 0;
  if (ptr != NULL)
    {
      while (i < g_tool_alloc.params[PARAM_NB_ADRESS])
	{
	  if (g_tool_alloc.adress_tab[i] == ptr)
	    {
	      free(ptr);
	      g_tool_alloc.adress_tab[i] = NULL;
	      return;
	    }
	  i += 1;
	}
    }
}

void	tool_end()
{
  size_t	i;

  i = 0;
  FNSTART();
  while (i < g_tool_alloc.params[PARAM_NB_ADRESS])
    {
      if (g_tool_alloc.adress_tab[i] != NULL)
	free(g_tool_alloc.adress_tab[i]);
      i += 1;
    }
  free(g_tool_alloc.adress_tab);
  FNQUIT();
}
