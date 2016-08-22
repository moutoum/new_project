/*
** tool_alloc.h for Alloc in /home/moutou_m/rendu/Alloc/lib/libtoolalloc/include
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Mon Aug 08 21:30:15 2016 moutou_m
** Last update Sat Aug 20 12:15:03 2016 moutou_m
*/

#ifndef TOOL_ALLOC_H_
# define TOOL_ALLOC_H_

# include <stdlib.h>

# define _(value) tool_bridge(value)
void	*tool_bridge(void *ptr);

void	*tool_malloc(size_t size);
void	tool_free(void *ptr);

#endif
