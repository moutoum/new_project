/*
** vector.h for libvector in /home/moutou_m/rendu/lib/lib/libvector/include
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Mon May 09 14:56:00 2016 moutou_m
** Last update Mon Aug 22 20:28:00 2016 moutou_m
*/

#ifndef VECTOR_H_
# define VECTOR_H_

# include <stdio.h>

typedef struct s_vector* t_vector;
struct	s_vector
{
  size_t	_tab_size;
  size_t	_elem_size;
  void		(*vector_push_back)(void *_elem, t_vector);
  void		(*vector_delete)(t_vector *);
  void		(*vector_remove_at)(const unsigned int at, t_vector);
  void		(*vector_pop_back)(t_vector);
  size_t	(*vector_get_length)(t_vector);
  void		*_tab;
};

# define 	NEW_VECTOR(TYPE) new_vector(sizeof(TYPE))
t_vector	new_vector(size_t	size);

# define 	PUSH_BACK(ELEM, VECTOR) vector_push_back((void *)&ELEM, VECTOR)
void		vector_push_back(void	*_elem, t_vector vector);

# define	POP_AT(AT, VECTOR) vector_remove_at(AT, VECTOR);
void		vector_remove_elem_at(const unsigned int at, t_vector vector);

# define	POP_BACK(VECTOR) vector_pop_back(VECTOR)
void		vector_remove_last_elem(t_vector vector);

# define	DELETE(VECTOR) vector_delete(&VECTOR)
void		vector_delete(t_vector	*vector);
# define	DELETE_ELEM(VECTOR, FUNC) vector_delete_elems(&VECTOR, FUNC)
void		vector_delete_elems(t_vector *vector, void (*free_elem)());

# define	VECTOR_DISPLAY(VECTOR, FUNC) vector_display(VECTOR, FUNC)
void		vector_display(t_vector vector, void (*display)());

# define	GET_LENGTH(VECTOR) vector_get_length(VECTOR)
size_t		vector_get_length(t_vector vector);

#endif
