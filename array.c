/*
** array.c for array in C:\Users\romain\Desktop\fun C
**
** Made by Romain
** Login   <romain@epitech.eu>
**
** Started on  Sun Sep 24 13:42:53 2017 Romain
** Last update Sun Sep 24 13:42:54 2017 Romain
*/


#include <stdbool.h>
#include <stdlib.h>
#include "array.h"

static size_t	length(any_t *values);
static void	add(array_t self, any_t elem);
static void	remove(array_t self, any_t elem, bool free);
static any_t	remove_index(array_t self, size_t index, bool free);
static array_t	map(array_t self, any_t (*mapper)(any_t elem));
static array_t	filter(array_t self, bool (*filter)(any_t elem));
static any_t	find(array_t self, size_t index);

array_t		array_new(any_t *values, void (*free)(any_t elem))
{
  array_t	array;

  array = malloc(sizeof((*array)));
  array->free = free;
  array->remove = &remove;
  array->remove_index = &remove_index;
  array->map = &map;
  array->filter = &filter;
  array->find = &find;
  array->values = values;
  array->length = values ? length(values) : 0;
  return (array);
}

static size_t	length(any_t *values)
{
  size_t	count = 0;

  while (values && values[count] && ++count);
  return (count);
}

static void	add(array_t self, any_t elem)
{

}

static void	remove(array_t self, any_t elem, bool free)
{

}

static any_t	remove_index(array_t self, size_t index, bool free)
{
  return (NULL);
}

static array_t	map(array_t self, any_t (*map)(any_t elem))
{
  return (self);
}

static array_t	filter(array_t self, bool (*filter)(any_t elem))
{
  return (self);
}

static any_t	find(array_t self, size_t index)
{

}
