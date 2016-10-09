/*
** vector.h for libvector in /home/moutou_m/rendu/lib/lib/libvector/include
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Mon May 09 14:56:00 2016 moutou_m
** Last update Sat Oct 08 20:47:46 2016 moutou_m
*/

#ifndef VECTOR_H_
# define VECTOR_H_

# include <stdio.h>
# include "errors.h"

# define VCAST(TYPE) *(TYPE *)

typedef struct s_vector* t_vector;

struct	s_vector
{
  size_t	tab_size;
  size_t	elem_size;
  void		*data;
};


/*
** [new_vector description]
** @method new_vector
** @param  size       [description]
** @return            [description]
*/

# define NEW_VECTOR(TYPE) new_vector(sizeof(TYPE))
t_vector
new_vector(size_t size);

/*
** [vector_push_back push a new element at the end of the vector]
** @param _elem  [pointer to datas]
** @param vector [vector]
*/
void
vector_push_back(const void *_elem,
		 t_vector vector);

/*
** [vector_remove_elem_at remove element at index in the vector]
** @param at     [index]
** @param vector [vector]
*/
void
vector_remove_elem_at(const unsigned int at,
		      t_vector vector);

/*
** [remove last elem in the vector]
** @method vector_pop_back
** @param  vector
*/

void
vector_pop_back(t_vector vector);

/*
** [free the vector and put NULL at the pointer]
** @method vector_delete
** @param  vector
*/

void
vector_delete(t_vector	*vector);

/*
** [free the tab of pointer with the function pointer, and free the vector]
** @method vector_delete_elems
** @param  vector
** @param  free_elem
*/
void
vector_delete_elems(t_vector *vector,
		    void (*free_elem)());

/*
** [display each elements from the vector with you function]
** @method vector_display
** @param  vector         [description]
** @param  display        void (*fn)(const void *data, const size_t index);
*/
void
vector_display(t_vector vector,
	       void (*display)());

/*
** [get the count of elements in the vector]
** @method vector_get_length
** @param  vector
** @return                   [size of the vector]
*/
size_t vector_size(t_vector vector);

/*
** [vector_set description]
** @method vector_set
** @param  data       [description]
** @param  index      [description]
** @param  vector     [description]
** @return            [description]
*/
int vector_set(void *data,
	       const size_t index,
	       t_vector vector);

/*
** [vector_qsort description]
** @method vector_qsort
** @param  vector       [description]
** @param  cmp          [description]
** @return              [description]
*/
void vector_qsort(t_vector vector,
		  int (*cmp)(const void *, const void *));

/**
 * [get description]
 * @method get
 * @param  index  [description]
 * @param  vector [description]
 * @return        [description]
*/

void *vector_get(const size_t index, const t_vector vector);

#endif
