/*
** ._tool_alloc.h for Alloc in /home/moutou_m/rendu/Alloc/lib/libtoolalloc/include
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Sat Aug 20 12:10:04 2016 moutou_m
** Last update Sat Oct 08 21:03:58 2016 moutou_m
*/

#ifndef _TOOL_ALLOC_H_
# define _TOOL_ALLOC_H_

# include <stdlib.h>
# include "errors.h"

# define NB_ADRESS_INIT	(64)

typedef struct s_alloc t_alloc;
struct	s_alloc
{
  size_t	params[2];
  void		**adress_tab;
}__attribute__((packed));

enum e_param
{
  PARAM_TAB_SIZE,
  PARAM_NB_ADRESS
};

void	tool_alloc_init() __attribute__((__constructor__));
void	tool_end() __attribute__((__destructor__));

#endif
