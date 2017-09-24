/*
** main.c for main C in C:\Users\romain\Desktop\fun C
**
** Made by Romain
** Login   <romain@epitech.eu>
**
** Started on  Sun Sep 24 13:49:17 2017 Romain
** Last update Sun Sep 24 14:02:26 2017 Romain
*/

#include <stdlib.h>
#include "array.h"

static any_t	mapper(any_t elem)
{
  return ("replaced");
}

static bool	filter(any_t elem)
{
  char		*casted = (char *) elem;

  return (strcmp(casted, "replaced"));
}

int		main()
{
  array_t	array;

  array = array_new(NULL, NULL);
  array->add(array, "hello");
  array->add(array, "this is");
  array->add(array, "an array");
  array->map(array, &mapper)->filter(array, &filter);
  assert(array->length == 0);
}
