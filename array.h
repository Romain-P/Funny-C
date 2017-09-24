/*
** array.h for array in C:\Users\romain\Desktop\fun C
**
** Made by Romain
** Login   <romain@epitech.eu>
**
** Started on  Sun Sep 24 13:42:37 2017 Romain
** Last update Sun Sep 24 13:51:45 2017 Romain
*/

#ifndef ARRAY_H_
# define ARRAY_H_

# include <stdbool.h>
# include <stddef.h>

typedef struct array_s	*array_t;
typedef void		*any_t;

struct			array_s
{
  any_t		*values;
  size_t	length;
  void		(*free)(any_t elem);
  void		(*add)(array_t self, any_t elem);
  void		(*remove)(array_t self, any_t elem, bool free);
  any_t		(*remove_index)(array_t self, size_t index, bool free);
  array_t	(*map)(array_t self, any_t (*mapper)(any_t elem));
  array_t	(*filter)(array_t self, bool (*filter)(any_t elem));
  any_t		(*find)(array_t self, size_t index);
};

/*
** Create a new dynamic array, that is more like a tupple.
** Works with dynamic data only (or pointers of stacked but careful),
** primitive types can't be added
** or at least, without cheating :).
**
** @param data	create this array based on another.
		pass NULL if there is no based values.
** @param free	specify a function to apply on each elem
		when free is needed.
		pass NULL to apply a simple free on each elem.
** @return	a new dynamic array
*/
array_t		array_new(any_t *data, void (*free)(any_t elem));

/*
** Destroy a given array. It frees the data and each
** elem with the free function passed to `array_new`
**
** @param array	the array to destroy
** @param free	true to free each element
*/
void		array_destroy(array_t array, bool free);

#endif /* !ARRAY_H_ */
